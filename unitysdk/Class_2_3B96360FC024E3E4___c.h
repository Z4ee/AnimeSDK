#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightMonsterAffixConfig; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_3B96360FC024E3E4___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9716D40)
#define CLASS_2_3B96360FC024E3E4___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9716D80)
#define CLASS_2_3B96360FC024E3E4___C___GETREMOVEDAFFIXNAME_B__8_0_OFFSET UNITYSDK_OFFSET(0x9716D90)

inline static constexpr unsigned int Class_2_3B96360FC024E3E4___c_TypeDefinitionIndex = 43983;

class Class_2_3B96360FC024E3E4___c : public ::System::Object
{
public:
	static ::Class_2_3B96360FC024E3E4___c** StaticGet___9()
	{
		return (::Class_2_3B96360FC024E3E4___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_3B96360FC024E3E4___c_TypeDefinitionIndex)->GetStaticField(0x64F0);
	}
	static ::System::Func_2<::RPG::Client::GridFightMonsterAffixConfig*, ::System::Boolean>** StaticGet___9__8_0()
	{
		return (::System::Func_2<::RPG::Client::GridFightMonsterAffixConfig*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_3B96360FC024E3E4___c_TypeDefinitionIndex)->GetStaticField(0x64F8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_3B96360FC024E3E4___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3B96360FC024E3E4___C__CTOR_OFFSET))(this);
	}

	::System::Boolean __GetRemovedAffixName_b__8_0(::RPG::Client::GridFightMonsterAffixConfig* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightMonsterAffixConfig*))((::PBYTE)hIl2Cpp + CLASS_2_3B96360FC024E3E4___C___GETREMOVEDAFFIXNAME_B__8_0_OFFSET))(this, x);
	}
};
