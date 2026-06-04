#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LoadingStratageType.h"
#include "unitysdk/RPG/GameCore/TransitionLoadingType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_402;

#define CLASS_1_C04B212FE2717A37_METHOD_1_A9E551D63B871584_OFFSET UNITYSDK_OFFSET(0x118FB070)
#define CLASS_1_C04B212FE2717A37__CCTOR_OFFSET UNITYSDK_OFFSET(0x118FB2A0)
#define CLASS_1_C04B212FE2717A37__CTOR_OFFSET UNITYSDK_OFFSET(0x118FB290)

inline static constexpr unsigned int Class_1_C04B212FE2717A37_TypeDefinitionIndex = 56503;

class Class_1_C04B212FE2717A37 : public ::System::Object
{
public:
	static ::Class_0_16E4307DCC419505_402** StaticGet_Field_1_0()
	{
		return (::Class_0_16E4307DCC419505_402**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C04B212FE2717A37_TypeDefinitionIndex)->GetStaticField(0x18B00);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C04B212FE2717A37__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C04B212FE2717A37__CCTOR_OFFSET))();
	}

	static ::Class_0_16E4307DCC419505_402* Method_1_A9E551D63B871584(::RPG::GameCore::LoadingStratageType a1, ::RPG::GameCore::TransitionLoadingType a2)
	{
		return ((::Class_0_16E4307DCC419505_402*(*)(::RPG::GameCore::LoadingStratageType, ::RPG::GameCore::TransitionLoadingType))((::PBYTE)hIl2Cpp + CLASS_1_C04B212FE2717A37_METHOD_1_A9E551D63B871584_OFFSET))(a1, a2);
	}
};
