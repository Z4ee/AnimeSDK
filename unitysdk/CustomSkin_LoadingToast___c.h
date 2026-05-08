#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CUSTOMSKIN_LOADINGTOAST___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x131A26E0)
#define CUSTOMSKIN_LOADINGTOAST___C__CTOR_OFFSET UNITYSDK_OFFSET(0x131A2720)
#define CUSTOMSKIN_LOADINGTOAST___C__ONSHOW_B__4_0_OFFSET UNITYSDK_OFFSET(0x131A2730)

inline static constexpr unsigned int CustomSkin_LoadingToast___c_TypeDefinitionIndex = 49999;

class CustomSkin_LoadingToast___c : public ::System::Object
{
public:
	static ::CustomSkin_LoadingToast___c** StaticGet___9()
	{
		return (::CustomSkin_LoadingToast___c**)Il2CppClass::FromTypeDefinitionIndex(CustomSkin_LoadingToast___c_TypeDefinitionIndex)->GetStaticField(0x306B0);
	}
	static ::System::Action** StaticGet___9__4_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(CustomSkin_LoadingToast___c_TypeDefinitionIndex)->GetStaticField(0x306B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CUSTOMSKIN_LOADINGTOAST___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_LOADINGTOAST___C__CTOR_OFFSET))(this);
	}

	::System::Void _OnShow_b__4_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_LOADINGTOAST___C__ONSHOW_B__4_0_OFFSET))(this);
	}
};
