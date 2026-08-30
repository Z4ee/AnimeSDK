#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C5CEA8DD589BD643;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_EED86084E14016BB___C__BUILDVIEWMODEL_B__0_0_OFFSET UNITYSDK_OFFSET(0x155D4B00)
#define CLASS_1_EED86084E14016BB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x155D4AB0)
#define CLASS_1_EED86084E14016BB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x155D4AF0)
#define CLASS_1_EED86084E14016BB___C___GETPLAYERRANK_B__3_0_OFFSET UNITYSDK_OFFSET(0x155D4B70)

inline static constexpr unsigned int Class_1_EED86084E14016BB___c_TypeDefinitionIndex = 80643;

class Class_1_EED86084E14016BB___c : public ::System::Object
{
public:
	static ::Class_1_EED86084E14016BB___c** StaticGet___9()
	{
		return (::Class_1_EED86084E14016BB___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EED86084E14016BB___c_TypeDefinitionIndex)->GetStaticField(0x127C0);
	}
	static ::System::Comparison_1<::Class_1_C5CEA8DD589BD643*>** StaticGet___9__0_0()
	{
		return (::System::Comparison_1<::Class_1_C5CEA8DD589BD643*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EED86084E14016BB___c_TypeDefinitionIndex)->GetStaticField(0x127C8);
	}
	static ::System::Comparison_1<::Class_1_C5CEA8DD589BD643*>** StaticGet___9__3_0()
	{
		return (::System::Comparison_1<::Class_1_C5CEA8DD589BD643*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EED86084E14016BB___c_TypeDefinitionIndex)->GetStaticField(0x127D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EED86084E14016BB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EED86084E14016BB___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _BuildViewModel_b__0_0(::Class_1_C5CEA8DD589BD643* a1, ::Class_1_C5CEA8DD589BD643* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_C5CEA8DD589BD643*, ::Class_1_C5CEA8DD589BD643*))((::PBYTE)hIl2Cpp + CLASS_1_EED86084E14016BB___C__BUILDVIEWMODEL_B__0_0_OFFSET))(this, a1, a2);
	}

	::System::Int32 __GetPlayerRank_b__3_0(::Class_1_C5CEA8DD589BD643* a1, ::Class_1_C5CEA8DD589BD643* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_C5CEA8DD589BD643*, ::Class_1_C5CEA8DD589BD643*))((::PBYTE)hIl2Cpp + CLASS_1_EED86084E14016BB___C___GETPLAYERRANK_B__3_0_OFFSET))(this, a1, a2);
	}
};
