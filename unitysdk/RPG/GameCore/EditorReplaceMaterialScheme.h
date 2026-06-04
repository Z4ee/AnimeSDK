#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_EDITORREPLACEMATERIALSCHEME_METHOD_2_789D1A072D331B8C_OFFSET UNITYSDK_OFFSET(0x196D3AB0)
#define RPG_GAMECORE_EDITORREPLACEMATERIALSCHEME__CTOR_OFFSET UNITYSDK_OFFSET(0x196D3C30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EditorReplaceMaterialScheme_TypeDefinitionIndex = 16572;

	class EditorReplaceMaterialScheme : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::Il2CppArray<::System::String*>* Keys; // 0x18
		::Il2CppArray<::System::String*>* AtlasFaceSetKeys; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EDITORREPLACEMATERIALSCHEME__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_789D1A072D331B8C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EditorReplaceMaterialScheme*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EditorReplaceMaterialScheme*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EDITORREPLACEMATERIALSCHEME_METHOD_2_789D1A072D331B8C_OFFSET))(a1, a2);
		}
	};
}
