#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVWAITPROPSTEEREVENTV2_METHOD_3_0028D77E674941D7_OFFSET UNITYSDK_OFFSET(0x18668740)
#define RPG_GAMECORE_ADVWAITPROPSTEEREVENTV2_METHOD_3_EF081ADE2A2DE439_OFFSET UNITYSDK_OFFSET(0x186686C0)
#define RPG_GAMECORE_ADVWAITPROPSTEEREVENTV2__CTOR_OFFSET UNITYSDK_OFFSET(0x18668710)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvWaitPropSteerEventV2_TypeDefinitionIndex = 20917;

	class AdvWaitPropSteerEventV2 : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnFollowStart; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnFollowStop; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVWAITPROPSTEEREVENTV2__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EF081ADE2A2DE439(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvWaitPropSteerEventV2*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvWaitPropSteerEventV2*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVWAITPROPSTEEREVENTV2_METHOD_3_EF081ADE2A2DE439_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0028D77E674941D7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvWaitPropSteerEventV2* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvWaitPropSteerEventV2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVWAITPROPSTEEREVENTV2_METHOD_3_0028D77E674941D7_OFFSET))(a1, a2);
		}
	};
}
