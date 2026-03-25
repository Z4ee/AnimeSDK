#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_49CAB3DE74280C58;
class Class_4_73A10F032383DACF;
namespace RPG::GameCore { class ChimeraDuelMasterSelectorConfig; }

#define CLASS_4_73A10F032383DACF___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x119135C0)
#define CLASS_4_73A10F032383DACF___C__DISPLAYCLASS6_0___SELECTENTITIES_B__0_OFFSET UNITYSDK_OFFSET(0x119137A0)

inline static constexpr unsigned int Class_4_73A10F032383DACF___c__DisplayClass6_0_TypeDefinitionIndex = 63179;

class Class_4_73A10F032383DACF___c__DisplayClass6_0 : public ::System::Object
{
public:
	::Class_4_73A10F032383DACF* __4__this; // 0x10
	::RPG::GameCore::ChimeraDuelMasterSelectorConfig* masterConfig; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_73A10F032383DACF___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __SelectEntities_b__0(::Class_2_49CAB3DE74280C58* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_49CAB3DE74280C58*))((::PBYTE)hIl2Cpp + CLASS_4_73A10F032383DACF___C__DISPLAYCLASS6_0___SELECTENTITIES_B__0_OFFSET))(this, x);
	}
};
