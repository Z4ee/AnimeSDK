#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYCHECKADVMODIFIERCALLBACKNAME_METHOD_4_52F6E839A2E07C7A_OFFSET UNITYSDK_OFFSET(0x1D48C150)
#define RPG_GAMECORE_BYCHECKADVMODIFIERCALLBACKNAME_METHOD_4_A7D8B85FA5C382F3_OFFSET UNITYSDK_OFFSET(0x1D48C190)
#define RPG_GAMECORE_BYCHECKADVMODIFIERCALLBACKNAME_METHOD_4_B5ECF67853F70766_OFFSET UNITYSDK_OFFSET(0x1D48C340)
#define RPG_GAMECORE_BYCHECKADVMODIFIERCALLBACKNAME_METHOD_4_FB28191B484B1EC9_OFFSET UNITYSDK_OFFSET(0x1D48C310)
#define RPG_GAMECORE_BYCHECKADVMODIFIERCALLBACKNAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1D48C180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckAdvModifierCallBackName_TypeDefinitionIndex = 21818;

	class ByCheckAdvModifierCallBackName : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::String* ModifierName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKADVMODIFIERCALLBACKNAME__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_52F6E839A2E07C7A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckAdvModifierCallBackName*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckAdvModifierCallBackName*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKADVMODIFIERCALLBACKNAME_METHOD_4_52F6E839A2E07C7A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A7D8B85FA5C382F3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckAdvModifierCallBackName* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckAdvModifierCallBackName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKADVMODIFIERCALLBACKNAME_METHOD_4_A7D8B85FA5C382F3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FB28191B484B1EC9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckAdvModifierCallBackName*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckAdvModifierCallBackName*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKADVMODIFIERCALLBACKNAME_METHOD_4_FB28191B484B1EC9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B5ECF67853F70766(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckAdvModifierCallBackName* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckAdvModifierCallBackName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKADVMODIFIERCALLBACKNAME_METHOD_4_B5ECF67853F70766_OFFSET))(a1, a2);
		}
	};
}
