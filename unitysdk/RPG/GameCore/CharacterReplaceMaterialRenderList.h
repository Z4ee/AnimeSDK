#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CharacterReplaceMaterialRender; }
namespace System { class String; }

#define RPG_GAMECORE_CHARACTERREPLACEMATERIALRENDERLIST_METHOD_2_DC44F45AD6A15BCC_OFFSET UNITYSDK_OFFSET(0x1CF9D870)
#define RPG_GAMECORE_CHARACTERREPLACEMATERIALRENDERLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF9DB90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterReplaceMaterialRenderList_TypeDefinitionIndex = 17244;

	class CharacterReplaceMaterialRenderList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::CharacterReplaceMaterialRender*>* RenderList; // 0x10
		::System::String* OriginProperty; // 0x18
		::System::Boolean NeedAdditionalDepth; // 0x20
		::System::Boolean NeedTransparentPreDapth; // 0x21
		::System::Boolean NoShadowCaster; // 0x22
		::System::Boolean HideArtModelEffects; // 0x23
		::System::Boolean HideInEditor; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERREPLACEMATERIALRENDERLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_DC44F45AD6A15BCC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterReplaceMaterialRenderList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterReplaceMaterialRenderList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERREPLACEMATERIALRENDERLIST_METHOD_2_DC44F45AD6A15BCC_OFFSET))(a1, a2);
		}
	};
}
