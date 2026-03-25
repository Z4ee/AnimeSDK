#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_ACTIVITYSWORDTRAININGMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8FBF5E0)
#define RPG_CLIENT_ACTIVITYSWORDTRAININGMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8FBF620)
#define RPG_CLIENT_ACTIVITYSWORDTRAININGMODULE___C___ONSWORDTRAININGSTARTGAMESCRSP_B__3_0_OFFSET UNITYSDK_OFFSET(0x8FBF630)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivitySwordTrainingModule___c_TypeDefinitionIndex = 50264;

	class ActivitySwordTrainingModule___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__3_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(ActivitySwordTrainingModule___c_TypeDefinitionIndex)->GetStaticField(0x2FF80);
		}
		static ::RPG::Client::ActivitySwordTrainingModule___c** StaticGet___9()
		{
			return (::RPG::Client::ActivitySwordTrainingModule___c**)Il2CppClass::FromTypeDefinitionIndex(ActivitySwordTrainingModule___c_TypeDefinitionIndex)->GetStaticField(0x2FF88);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSWORDTRAININGMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSWORDTRAININGMODULE___C__CTOR_OFFSET))(this);
		}

		::System::Void __OnSwordTrainingStartGameScRsp_b__3_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSWORDTRAININGMODULE___C___ONSWORDTRAININGSTARTGAMESCRSP_B__3_0_OFFSET))(this);
		}
	};
}
