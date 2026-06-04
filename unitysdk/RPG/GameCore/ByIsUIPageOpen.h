#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYISUIPAGEOPEN_METHOD_4_0DA78A0525669028_OFFSET UNITYSDK_OFFSET(0x19574430)
#define RPG_GAMECORE_BYISUIPAGEOPEN_METHOD_4_C0EBF343E040DCD8_OFFSET UNITYSDK_OFFSET(0x19574630)
#define RPG_GAMECORE_BYISUIPAGEOPEN_METHOD_4_CBC115592AC36B35_OFFSET UNITYSDK_OFFSET(0x195745B0)
#define RPG_GAMECORE_BYISUIPAGEOPEN_METHOD_4_CE1271FCC7E96386_OFFSET UNITYSDK_OFFSET(0x19574360)
#define RPG_GAMECORE_BYISUIPAGEOPEN__CTOR_OFFSET UNITYSDK_OFFSET(0x195743E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsUIPageOpen_TypeDefinitionIndex = 21019;

	class ByIsUIPageOpen : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::String* PageName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISUIPAGEOPEN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_CE1271FCC7E96386(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsUIPageOpen*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsUIPageOpen*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISUIPAGEOPEN_METHOD_4_CE1271FCC7E96386_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0DA78A0525669028(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsUIPageOpen* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsUIPageOpen*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISUIPAGEOPEN_METHOD_4_0DA78A0525669028_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CBC115592AC36B35(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsUIPageOpen*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsUIPageOpen*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISUIPAGEOPEN_METHOD_4_CBC115592AC36B35_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C0EBF343E040DCD8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsUIPageOpen* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsUIPageOpen*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISUIPAGEOPEN_METHOD_4_C0EBF343E040DCD8_OFFSET))(a1, a2);
		}
	};
}
