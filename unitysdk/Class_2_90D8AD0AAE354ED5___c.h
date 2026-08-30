#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { template <typename T> class Predicate_1; }

#define CLASS_2_90D8AD0AAE354ED5___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x155ADD90)
#define CLASS_2_90D8AD0AAE354ED5___C__CTOR_OFFSET UNITYSDK_OFFSET(0x155ADDC0)
#define CLASS_2_90D8AD0AAE354ED5___C___SETUPMONSTERINFO_B__6_0_OFFSET UNITYSDK_OFFSET(0x155ADDD0)

inline static constexpr unsigned int Class_2_90D8AD0AAE354ED5___c_TypeDefinitionIndex = 59099;

class Class_2_90D8AD0AAE354ED5___c : public ::System::Object
{
public:
	static ::Class_2_90D8AD0AAE354ED5___c** StaticGet___9()
	{
		return (::Class_2_90D8AD0AAE354ED5___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_90D8AD0AAE354ED5___c_TypeDefinitionIndex)->GetStaticField(0x103A0);
	}
	static ::System::Predicate_1<::RPG::GameCore::GameEntity*>** StaticGet___9__6_0()
	{
		return (::System::Predicate_1<::RPG::GameCore::GameEntity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_90D8AD0AAE354ED5___c_TypeDefinitionIndex)->GetStaticField(0x103A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_90D8AD0AAE354ED5___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_90D8AD0AAE354ED5___C__CTOR_OFFSET))(this);
	}

	::System::Boolean __SetupMonsterInfo_b__6_0(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_90D8AD0AAE354ED5___C___SETUPMONSTERINFO_B__6_0_OFFSET))(this, a1);
	}
};
