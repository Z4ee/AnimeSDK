#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_4C1AAFE95CDED36F;
namespace UnityEngine { class Material; }

#define CLASS_2_4C1AAFE95CDED36F___C__DISPLAYCLASS72_0__ASYNCLOADMATERIAL_B__0_OFFSET UNITYSDK_OFFSET(0x18B92B00)
#define CLASS_2_4C1AAFE95CDED36F___C__DISPLAYCLASS72_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18B90510)

inline static constexpr unsigned int Class_2_4C1AAFE95CDED36F___c__DisplayClass72_0_TypeDefinitionIndex = 57313;

class Class_2_4C1AAFE95CDED36F___c__DisplayClass72_0 : public ::System::Object
{
public:
	::Class_2_4C1AAFE95CDED36F* __4__this; // 0x10
	::System::Int32 index; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F___C__DISPLAYCLASS72_0__CTOR_OFFSET))(this);
	}

	::System::Void _AsyncLoadMaterial_b__0(::UnityEngine::Material* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CLASS_2_4C1AAFE95CDED36F___C__DISPLAYCLASS72_0__ASYNCLOADMATERIAL_B__0_OFFSET))(this, a1);
	}
};
