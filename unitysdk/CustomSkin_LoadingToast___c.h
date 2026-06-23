#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CUSTOMSKIN_LOADINGTOAST___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x130FBC40)
#define CUSTOMSKIN_LOADINGTOAST___C__CTOR_OFFSET UNITYSDK_OFFSET(0x130FBC80)
#define CUSTOMSKIN_LOADINGTOAST___C__ONSHOW_B__4_0_OFFSET UNITYSDK_OFFSET(0x130FBC90)

inline static constexpr unsigned int CustomSkin_LoadingToast___c_TypeDefinitionIndex = 78579;

class CustomSkin_LoadingToast___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__4_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(CustomSkin_LoadingToast___c_TypeDefinitionIndex)->GetStaticField(0x32850);
	}
	static ::CustomSkin_LoadingToast___c** StaticGet___9()
	{
		return (::CustomSkin_LoadingToast___c**)Il2CppClass::FromTypeDefinitionIndex(CustomSkin_LoadingToast___c_TypeDefinitionIndex)->GetStaticField(0x32858);
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
