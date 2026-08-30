#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVWAITPROPSTEEREVENTV2_METHOD_3_6B0D58E5A45BC1C2_OFFSET UNITYSDK_OFFSET(0x1CBA5F70)
#define RPG_GAMECORE_ADVWAITPROPSTEEREVENTV2_METHOD_3_885290E0C2802EF5_OFFSET UNITYSDK_OFFSET(0x1CBA5FB0)
#define RPG_GAMECORE_ADVWAITPROPSTEEREVENTV2__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBA5FA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvWaitPropSteerEventV2_TypeDefinitionIndex = 21805;

	class AdvWaitPropSteerEventV2 : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnFollowStart; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnFollowStop; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVWAITPROPSTEEREVENTV2__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6B0D58E5A45BC1C2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvWaitPropSteerEventV2*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvWaitPropSteerEventV2*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVWAITPROPSTEEREVENTV2_METHOD_3_6B0D58E5A45BC1C2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_885290E0C2802EF5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvWaitPropSteerEventV2* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvWaitPropSteerEventV2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVWAITPROPSTEEREVENTV2_METHOD_3_885290E0C2802EF5_OFFSET))(a1, a2);
		}
	};
}
