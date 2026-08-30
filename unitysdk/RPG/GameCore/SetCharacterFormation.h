#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterFollowOffsetMode.h"
#include "unitysdk/RPG/GameCore/CharacterFormationType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETCHARACTERFORMATION_METHOD_3_0C2FECA127A92F59_OFFSET UNITYSDK_OFFSET(0x1E812D00)
#define RPG_GAMECORE_SETCHARACTERFORMATION_METHOD_3_CABA182431796E19_OFFSET UNITYSDK_OFFSET(0x1E812BF0)
#define RPG_GAMECORE_SETCHARACTERFORMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E812C90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetCharacterFormation_TypeDefinitionIndex = 22390;

	class SetCharacterFormation : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean IsActive; // 0x20
		::System::Boolean UpdateInfo; // 0x21
		::RPG::GameCore::CharacterFormationType Type; // 0x24
		::RPG::MVector3 FixedPos; // 0x28
		::System::Single FixedYawAngle; // 0x34
		::RPG::GameCore::DynamicFloat* TeamFormationIndex; // 0x38
		::System::String* AnchorAreaPath; // 0x40
		::System::String* AnchorName; // 0x48
		::RPG::GameCore::TargetEvaluator* FollowTarget; // 0x50
		::RPG::MVector3 FollowOffset; // 0x58
		::System::Single FollowAngleOffset; // 0x64
		::RPG::GameCore::CharacterFollowOffsetMode FollowOffsetMode; // 0x68
		::System::Boolean DelyRefresh; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERFORMATION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CABA182431796E19(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetCharacterFormation*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetCharacterFormation*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERFORMATION_METHOD_3_CABA182431796E19_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0C2FECA127A92F59(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetCharacterFormation* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetCharacterFormation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERFORMATION_METHOD_3_0C2FECA127A92F59_OFFSET))(a1, a2);
		}
	};
}
