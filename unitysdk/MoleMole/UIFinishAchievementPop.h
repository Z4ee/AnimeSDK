#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

class Class_1_5897CA91FEB65CA5;

#define MOLEMOLE_UIFINISHACHIEVEMENTPOP_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x170D7F10)
#define MOLEMOLE_UIFINISHACHIEVEMENTPOP_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x170D7F60)
#define MOLEMOLE_UIFINISHACHIEVEMENTPOP__CTOR_OFFSET UNITYSDK_OFFSET(0x170D7F20)

namespace MoleMole
{
	inline static constexpr unsigned int UIFinishAchievementPop_TypeDefinitionIndex = 88072;

	class UIFinishAchievementPop : public ::MoleMole::DisplayMessageBase
	{
	public:
		::Class_1_5897CA91FEB65CA5* _data; // 0x28

		::System::Void _ctor(::Class_1_5897CA91FEB65CA5* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5897CA91FEB65CA5*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFINISHACHIEVEMENTPOP__CTOR_OFFSET))(this, data);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFINISHACHIEVEMENTPOP_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFINISHACHIEVEMENTPOP_ONPROCESS_OFFSET))(this);
		}
	};
}
