#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_WAITROTATABLEREGIONCHANGE_METHOD_4_6932E791DA7837A2_OFFSET UNITYSDK_OFFSET(0x19E60190)
#define RPG_GAMECORE_WAITROTATABLEREGIONCHANGE_METHOD_4_73A7329C7CC44F19_OFFSET UNITYSDK_OFFSET(0x19E600B0)
#define RPG_GAMECORE_WAITROTATABLEREGIONCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x19E60130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitRotatableRegionChange_TypeDefinitionIndex = 20081;

	class WaitRotatableRegionChange : public ::RPG::GameCore::AdvWaitingEventBase
	{
	public:
		::System::Int32 RegionID; // 0x20
		::System::Boolean IsEnter; // 0x24
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnChange; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROTATABLEREGIONCHANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_73A7329C7CC44F19(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitRotatableRegionChange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitRotatableRegionChange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROTATABLEREGIONCHANGE_METHOD_4_73A7329C7CC44F19_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6932E791DA7837A2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitRotatableRegionChange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitRotatableRegionChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROTATABLEREGIONCHANGE_METHOD_4_6932E791DA7837A2_OFFSET))(a1, a2);
		}
	};
}
