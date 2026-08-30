#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_DA5E269DBF62B292;
namespace RPG::GameCore { class FloorSavedValueOverride; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_293C2666F80F8946___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x134D73A0)
#define CLASS_1_293C2666F80F8946___C__CTOR_OFFSET UNITYSDK_OFFSET(0x134D73E0)
#define CLASS_1_293C2666F80F8946___C___GETFLOORSAVEDVALUEOVERRIDELIST_B__14_0_OFFSET UNITYSDK_OFFSET(0x134D73F0)

inline static constexpr unsigned int Class_1_293C2666F80F8946___c_TypeDefinitionIndex = 74992;

class Class_1_293C2666F80F8946___c : public ::System::Object
{
public:
	static ::Class_1_293C2666F80F8946___c** StaticGet___9()
	{
		return (::Class_1_293C2666F80F8946___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_293C2666F80F8946___c_TypeDefinitionIndex)->GetStaticField(0x191C0);
	}
	static ::System::Func_2<::Class_1_DA5E269DBF62B292*, ::RPG::GameCore::FloorSavedValueOverride*>** StaticGet___9__14_0()
	{
		return (::System::Func_2<::Class_1_DA5E269DBF62B292*, ::RPG::GameCore::FloorSavedValueOverride*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_293C2666F80F8946___c_TypeDefinitionIndex)->GetStaticField(0x191C8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_293C2666F80F8946___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_293C2666F80F8946___C__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::FloorSavedValueOverride* __GetFloorSavedValueOverrideList_b__14_0(::Class_1_DA5E269DBF62B292* a1)
	{
		return ((::RPG::GameCore::FloorSavedValueOverride*(*)(::PVOID, ::Class_1_DA5E269DBF62B292*))((::PBYTE)hIl2Cpp + CLASS_1_293C2666F80F8946___C___GETFLOORSAVEDVALUEOVERRIDELIST_B__14_0_OFFSET))(this, a1);
	}
};
