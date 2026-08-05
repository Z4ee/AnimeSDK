#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GeneralTopTipShow.h"

class Class_2_48DFB0E953D00A02;

#define MOLEMOLE_UIRABTRAINEXPGAINTOPTIP_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x1517F920)
#define MOLEMOLE_UIRABTRAINEXPGAINTOPTIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1517F900)
#define MOLEMOLE_UIRABTRAINEXPGAINTOPTIP___BASE_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x1517FD40)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABTrainExpGainTopTip_TypeDefinitionIndex = 44474;

	class UIRABTrainExpGainTopTip : public ::MoleMole::GeneralTopTipShow
	{
	public:
		::Class_2_48DFB0E953D00A02* _context; // 0x30

		::System::Void _ctor(::Class_2_48DFB0E953D00A02* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_48DFB0E953D00A02*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABTRAINEXPGAINTOPTIP__CTOR_OFFSET))(this, context);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABTRAINEXPGAINTOPTIP_ONPROCESS_OFFSET))(this);
		}

		::System::Void __base_OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABTRAINEXPGAINTOPTIP___BASE_ONPROCESS_OFFSET))(this);
		}
	};
}
