#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PetMarble/Level/PetMarbleLevelModeType.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_3FB926B180D0F896___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15A6A670)
#define CLASS_1_3FB926B180D0F896___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15A6A6A0)
#define CLASS_1_3FB926B180D0F896___C___ENSUREMODETYPESCACHE_B__3_0_OFFSET UNITYSDK_OFFSET(0x15A6A6B0)

inline static constexpr unsigned int Class_1_3FB926B180D0F896___c_TypeDefinitionIndex = 74744;

class Class_1_3FB926B180D0F896___c : public ::System::Object
{
public:
	static ::Class_1_3FB926B180D0F896___c** StaticGet___9()
	{
		return (::Class_1_3FB926B180D0F896___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3FB926B180D0F896___c_TypeDefinitionIndex)->GetStaticField(0x60240);
	}
	static ::System::Func_2<::RPG::Client::PetMarble::Level::PetMarbleLevelModeType, ::System::Boolean>** StaticGet___9__3_0()
	{
		return (::System::Func_2<::RPG::Client::PetMarble::Level::PetMarbleLevelModeType, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3FB926B180D0F896___c_TypeDefinitionIndex)->GetStaticField(0x60248);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3FB926B180D0F896___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3FB926B180D0F896___C__CTOR_OFFSET))(this);
	}

	::System::Boolean __EnsureModeTypesCache_b__3_0(::RPG::Client::PetMarble::Level::PetMarbleLevelModeType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PetMarble::Level::PetMarbleLevelModeType))((::PBYTE)hIl2Cpp + CLASS_1_3FB926B180D0F896___C___ENSUREMODETYPESCACHE_B__3_0_OFFSET))(this, a1);
	}
};
