#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/TipShowObj.h"

class Class_2_208CC9941471731A_501;

#define MOLEMOLE_UIYOROZUYATIPS_GET_LOOPBROADCAST_OFFSET UNITYSDK_OFFSET(0x12CA2440)
#define MOLEMOLE_UIYOROZUYATIPS_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x12CA2540)
#define MOLEMOLE_UIYOROZUYATIPS__CTOR_OFFSET UNITYSDK_OFFSET(0x12CA24C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIYorozuyaTips_TypeDefinitionIndex = 48755;

	class UIYorozuyaTips : public ::MoleMole::TipShowObj
	{
	public:
		::Class_2_208CC9941471731A_501* template_; // 0x30
		::System::Int32 fairyID; // 0x38

		::System::Void _ctor(::System::Int32 fairyID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYATIPS__CTOR_OFFSET))(this, fairyID);
		}

		::System::Boolean get_LoopBroadCast()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYATIPS_GET_LOOPBROADCAST_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYATIPS_ONPROCESS_OFFSET))(this);
		}
	};
}
