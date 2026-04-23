#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

namespace System { class String; }

#define CLASS_2_BFAD27211C574C96_VIEWPREFABPATH_OFFSET UNITYSDK_OFFSET(0x119D3B30)
#define CLASS_2_BFAD27211C574C96__CTOR_OFFSET UNITYSDK_OFFSET(0x119D3AE0)
#define CLASS_2_BFAD27211C574C96___IFIXBASEPROXY_VIEWPREFABPATH_OFFSET UNITYSDK_OFFSET(0x119D3BA0)

inline static constexpr unsigned int Class_2_BFAD27211C574C96_TypeDefinitionIndex = 66093;

class Class_2_BFAD27211C574C96 : public ::RPG::Client::UIController
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFAD27211C574C96__CTOR_OFFSET))(this);
	}

	::System::String* ViewPrefabPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFAD27211C574C96_VIEWPREFABPATH_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ViewPrefabPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BFAD27211C574C96___IFIXBASEPROXY_VIEWPREFABPATH_OFFSET))(this);
	}
};
