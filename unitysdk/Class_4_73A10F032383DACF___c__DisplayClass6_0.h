#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_B66C1067C0468FBB;
class Class_4_73A10F032383DACF;
namespace RPG::GameCore { class ChimeraDuelMasterSelectorConfig; }

#define CLASS_4_73A10F032383DACF___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x161F1F60)
#define CLASS_4_73A10F032383DACF___C__DISPLAYCLASS6_0___SELECTENTITIES_B__0_OFFSET UNITYSDK_OFFSET(0x161F2150)

inline static constexpr unsigned int Class_4_73A10F032383DACF___c__DisplayClass6_0_TypeDefinitionIndex = 77167;

class Class_4_73A10F032383DACF___c__DisplayClass6_0 : public ::System::Object
{
public:
	::Class_4_73A10F032383DACF* __4__this; // 0x10
	::RPG::GameCore::ChimeraDuelMasterSelectorConfig* masterConfig; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_73A10F032383DACF___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __SelectEntities_b__0(::Class_2_B66C1067C0468FBB* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_B66C1067C0468FBB*))((::PBYTE)hIl2Cpp + CLASS_4_73A10F032383DACF___C__DISPLAYCLASS6_0___SELECTENTITIES_B__0_OFFSET))(this, a1);
	}
};
