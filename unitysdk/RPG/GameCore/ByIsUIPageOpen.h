#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYISUIPAGEOPEN_METHOD_4_0DA78A0525669028_OFFSET UNITYSDK_OFFSET(0x1B2ACA40)
#define RPG_GAMECORE_BYISUIPAGEOPEN_METHOD_4_1051187CFA52D4DD_OFFSET UNITYSDK_OFFSET(0x1B2ACA00)
#define RPG_GAMECORE_BYISUIPAGEOPEN_METHOD_4_34A4B46B42442DFF_OFFSET UNITYSDK_OFFSET(0x1B2ACBF0)
#define RPG_GAMECORE_BYISUIPAGEOPEN_METHOD_4_ADF829B749F99AD8_OFFSET UNITYSDK_OFFSET(0x1B2ACBC0)
#define RPG_GAMECORE_BYISUIPAGEOPEN__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2ACA30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsUIPageOpen_TypeDefinitionIndex = 21434;

	class ByIsUIPageOpen : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::String* PageName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISUIPAGEOPEN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_1051187CFA52D4DD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsUIPageOpen*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsUIPageOpen*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISUIPAGEOPEN_METHOD_4_1051187CFA52D4DD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0DA78A0525669028(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsUIPageOpen* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsUIPageOpen*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISUIPAGEOPEN_METHOD_4_0DA78A0525669028_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_ADF829B749F99AD8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsUIPageOpen*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsUIPageOpen*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISUIPAGEOPEN_METHOD_4_ADF829B749F99AD8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_34A4B46B42442DFF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsUIPageOpen* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsUIPageOpen*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISUIPAGEOPEN_METHOD_4_34A4B46B42442DFF_OFFSET))(a1, a2);
		}
	};
}
