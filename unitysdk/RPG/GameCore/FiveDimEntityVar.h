#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimEntityVarType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LittleGameLevelVariable; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMENTITYVAR_METHOD_2_128774387667156B_OFFSET UNITYSDK_OFFSET(0x171F0850)
#define RPG_GAMECORE_FIVEDIMENTITYVAR_METHOD_2_35BAD89675FB426E_OFFSET UNITYSDK_OFFSET(0x171F0FE0)
#define RPG_GAMECORE_FIVEDIMENTITYVAR__CTOR_OFFSET UNITYSDK_OFFSET(0x171F12A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimEntityVar_TypeDefinitionIndex = 17102;

	class FiveDimEntityVar : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* ID; // 0x10
		::System::String* EntityVarName; // 0x18
		::RPG::GameCore::FiveDimEntityVarType EntityVarType; // 0x20
		::System::String* BindLevelVarType; // 0x28
		::System::String* BindLevelVarName; // 0x30
		::RPG::GameCore::LittleGameLevelVariable* DefaultLevelVar; // 0x38
		::System::Boolean AutoCreateAndBindLevelVar; // 0x40
		::System::Int32 Value; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENTITYVAR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_35BAD89675FB426E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimEntityVar*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimEntityVar*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENTITYVAR_METHOD_2_35BAD89675FB426E_OFFSET))(a1, a2);
		}

		::System::String* Method_2_128774387667156B()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENTITYVAR_METHOD_2_128774387667156B_OFFSET))(this);
		}
	};
}
