#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ATTACHGLOBALSHIELD_METHOD_3_11A0124276C92D57_OFFSET UNITYSDK_OFFSET(0x1A0653E0)
#define RPG_GAMECORE_ATTACHGLOBALSHIELD_METHOD_3_739D0C3ACF4291CE_OFFSET UNITYSDK_OFFSET(0x1A065420)
#define RPG_GAMECORE_ATTACHGLOBALSHIELD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A065410)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AttachGlobalShield_TypeDefinitionIndex = 22755;

	class AttachGlobalShield : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicFloat* InitHP; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTargetShieldAdd; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTargetShieldRemove; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ATTACHGLOBALSHIELD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_11A0124276C92D57(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AttachGlobalShield*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AttachGlobalShield*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ATTACHGLOBALSHIELD_METHOD_3_11A0124276C92D57_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_739D0C3ACF4291CE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AttachGlobalShield* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AttachGlobalShield*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ATTACHGLOBALSHIELD_METHOD_3_739D0C3ACF4291CE_OFFSET))(a1, a2);
		}
	};
}
