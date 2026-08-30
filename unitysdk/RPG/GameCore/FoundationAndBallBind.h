#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FoundationPropStateConfig; }
namespace System { class String; }

#define RPG_GAMECORE_FOUNDATIONANDBALLBIND_METHOD_2_3F367997DF80A2A1_OFFSET UNITYSDK_OFFSET(0x1D112730)
#define RPG_GAMECORE_FOUNDATIONANDBALLBIND__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1129D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FoundationAndBallBind_TypeDefinitionIndex = 17364;

	class FoundationAndBallBind : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 BallInstanceID; // 0x10
		::Il2CppArray<::RPG::GameCore::FoundationPropStateConfig*>* PropStateConfigs; // 0x18
		::System::Boolean OverrideBallOffset; // 0x20
		::RPG::MVector3 BallPositionOffset; // 0x24
		::System::Boolean OverrideFoundationAnim; // 0x30
		::System::String* FoundationBrokenAnim; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOUNDATIONANDBALLBIND__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_3F367997DF80A2A1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FoundationAndBallBind*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FoundationAndBallBind*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOUNDATIONANDBALLBIND_METHOD_2_3F367997DF80A2A1_OFFSET))(a1, a2);
		}
	};
}
