#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightMonsterAffixConfig; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_489EA4FFBD214DD8___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1915A260)
#define CLASS_2_489EA4FFBD214DD8___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1915A2A0)
#define CLASS_2_489EA4FFBD214DD8___C___GETREMOVEDAFFIXNAME_B__8_0_OFFSET UNITYSDK_OFFSET(0x1915A2B0)

inline static constexpr unsigned int Class_2_489EA4FFBD214DD8___c_TypeDefinitionIndex = 47651;

class Class_2_489EA4FFBD214DD8___c : public ::System::Object
{
public:
	static ::Class_2_489EA4FFBD214DD8___c** StaticGet___9()
	{
		return (::Class_2_489EA4FFBD214DD8___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_489EA4FFBD214DD8___c_TypeDefinitionIndex)->GetStaticField(0x3D0B0);
	}
	static ::System::Func_2<::RPG::Client::GridFightMonsterAffixConfig*, ::System::Boolean>** StaticGet___9__8_0()
	{
		return (::System::Func_2<::RPG::Client::GridFightMonsterAffixConfig*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_489EA4FFBD214DD8___c_TypeDefinitionIndex)->GetStaticField(0x3D0B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_489EA4FFBD214DD8___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_489EA4FFBD214DD8___C__CTOR_OFFSET))(this);
	}

	::System::Boolean __GetRemovedAffixName_b__8_0(::RPG::Client::GridFightMonsterAffixConfig* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightMonsterAffixConfig*))((::PBYTE)hIl2Cpp + CLASS_2_489EA4FFBD214DD8___C___GETREMOVEDAFFIXNAME_B__8_0_OFFSET))(this, a1);
	}
};
