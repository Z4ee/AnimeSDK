#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/LittleGameLevelVarBindingType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LGameEntityRef; }
namespace RPG::GameCore { class LevelEntityRef; }
namespace RPG::GameCore { class LittleGameLevelVarBindingExtraInfo; }
namespace System { class String; }

#define RPG_GAMECORE_LITTLEGAMELEVELVARBINDING_METHOD_2_2493C1A1E7D3293D_OFFSET UNITYSDK_OFFSET(0x1735E730)
#define RPG_GAMECORE_LITTLEGAMELEVELVARBINDING__CTOR_OFFSET UNITYSDK_OFFSET(0x1735E960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameLevelVarBinding_TypeDefinitionIndex = 17329;

	class LittleGameLevelVarBinding : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* LevelVarName; // 0x10
		::RPG::GameCore::LittleGameLevelVarBindingType BindingType; // 0x18
		::System::Int16 ShortValue; // 0x1C
		::RPG::GameCore::LGameEntityRef* EntityRefValue; // 0x20
		::RPG::GameCore::LevelEntityRef* LevelEntityRefValue; // 0x28
		::System::String* GroupPropertyName; // 0x30
		::RPG::GameCore::LittleGameLevelVarBindingExtraInfo* ExtraInfo; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMELEVELVARBINDING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_2493C1A1E7D3293D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameLevelVarBinding*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameLevelVarBinding*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMELEVELVARBINDING_METHOD_2_2493C1A1E7D3293D_OFFSET))(a1, a2);
		}
	};
}
