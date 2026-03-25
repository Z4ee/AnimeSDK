#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_36A4EB0E077FE274;
namespace UnityEngine { class Material; }

#define CLASS_2_36A4EB0E077FE274___C__DISPLAYCLASS68_0__ASYNCLOADMATERIAL_B__0_OFFSET UNITYSDK_OFFSET(0x106AA350)
#define CLASS_2_36A4EB0E077FE274___C__DISPLAYCLASS68_0__CTOR_OFFSET UNITYSDK_OFFSET(0x106A87C0)

inline static constexpr unsigned int Class_2_36A4EB0E077FE274___c__DisplayClass68_0_TypeDefinitionIndex = 46015;

class Class_2_36A4EB0E077FE274___c__DisplayClass68_0 : public ::System::Object
{
public:
	::Class_2_36A4EB0E077FE274* __4__this; // 0x10
	::System::Int32 index; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274___C__DISPLAYCLASS68_0__CTOR_OFFSET))(this);
	}

	::System::Void _AsyncLoadMaterial_b__0(::UnityEngine::Material* mat)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CLASS_2_36A4EB0E077FE274___C__DISPLAYCLASS68_0__ASYNCLOADMATERIAL_B__0_OFFSET))(this, mat);
	}
};
