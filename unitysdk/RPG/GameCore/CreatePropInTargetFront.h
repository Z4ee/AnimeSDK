#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CampType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_CREATEPROPINTARGETFRONT_METHOD_3_2EAE2C5859E855DA_OFFSET UNITYSDK_OFFSET(0x18844AB0)
#define RPG_GAMECORE_CREATEPROPINTARGETFRONT_METHOD_3_FBE9ECC21C1941A3_OFFSET UNITYSDK_OFFSET(0x18844BE0)
#define RPG_GAMECORE_CREATEPROPINTARGETFRONT__CTOR_OFFSET UNITYSDK_OFFSET(0x18844AF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CreatePropInTargetFront_TypeDefinitionIndex = 19095;

	class CreatePropInTargetFront : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Taskarget; // 0x18
		::System::UInt32 PropID; // 0x20
		::System::String* UniqueName; // 0x28
		::RPG::GameCore::DynamicFloat* Distance; // 0x30
		::RPG::GameCore::DynamicFloat* Duration; // 0x38
		::RPG::GameCore::DynamicFloat* NumLimitation; // 0x40
		::RPG::GameCore::DynamicFloat* Radius; // 0x48
		::RPG::GameCore::TeamType Team; // 0x50
		::RPG::GameCore::CampType CampID; // 0x54
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnCreate; // 0x58
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnDestroy; // 0x60
		::System::Boolean IsTeamUnique; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEPROPINTARGETFRONT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2EAE2C5859E855DA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CreatePropInTargetFront*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CreatePropInTargetFront*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEPROPINTARGETFRONT_METHOD_3_2EAE2C5859E855DA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FBE9ECC21C1941A3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CreatePropInTargetFront* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CreatePropInTargetFront*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEPROPINTARGETFRONT_METHOD_3_FBE9ECC21C1941A3_OFFSET))(a1, a2);
		}
	};
}
