#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseAdventureCameraLookAt.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVENTURECAMERALOOKAT_METHOD_4_07A653F13457A58E_OFFSET UNITYSDK_OFFSET(0x16F4F870)
#define RPG_GAMECORE_ADVENTURECAMERALOOKAT_METHOD_4_F654B9D118832DD9_OFFSET UNITYSDK_OFFSET(0x16F4F7D0)
#define RPG_GAMECORE_ADVENTURECAMERALOOKAT__CTOR_OFFSET UNITYSDK_OFFSET(0x16F4F830)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureCameraLookAt_TypeDefinitionIndex = 18808;

	class AdventureCameraLookAt : public ::RPG::GameCore::BaseAdventureCameraLookAt
	{
	public:
		::System::Boolean Reset; // 0x60
		::RPG::GameCore::TargetEvaluator* LookAtTarget; // 0x68
		::RPG::GameCore::DynamicString* LookAtTargetAreaName; // 0x70
		::RPG::GameCore::DynamicString* LookAtTargetAnchorName; // 0x78
		::RPG::GameCore::DynamicFloat* LookAtGroupID; // 0x80
		::RPG::GameCore::DynamicFloat* LookAtID; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECAMERALOOKAT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_F654B9D118832DD9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureCameraLookAt*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureCameraLookAt*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECAMERALOOKAT_METHOD_4_F654B9D118832DD9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_07A653F13457A58E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureCameraLookAt* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureCameraLookAt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECAMERALOOKAT_METHOD_4_07A653F13457A58E_OFFSET))(a1, a2);
		}
	};
}
