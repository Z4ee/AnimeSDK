#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHARACTERSKINRESMAPITEM_METHOD_2_C690AA84E3D66B2C_OFFSET UNITYSDK_OFFSET(0x19615890)
#define RPG_GAMECORE_CHARACTERSKINRESMAPITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x196159A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterSkinResMapItem_TypeDefinitionIndex = 15717;

	class CharacterSkinResMapItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* OriginPath; // 0x10
		::System::String* MapPath; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERSKINRESMAPITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_C690AA84E3D66B2C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterSkinResMapItem*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterSkinResMapItem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERSKINRESMAPITEM_METHOD_2_C690AA84E3D66B2C_OFFSET))(a1, a2);
		}
	};
}
