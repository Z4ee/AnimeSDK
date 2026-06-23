#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace MoleMole { class TurnBattleEntityUnit; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_2_47BB065BE5107FA1___C_METHOD_1_1A1EDCE593981CCC_1_OFFSET UNITYSDK_OFFSET(0x15CBBAB0)
#define CLASS_2_47BB065BE5107FA1___C_METHOD_1_1A1EDCE593981CCC_OFFSET UNITYSDK_OFFSET(0x15CBBAA0)
#define CLASS_2_47BB065BE5107FA1___C_METHOD_1_F46D676828CF89B6_OFFSET UNITYSDK_OFFSET(0x15CBBAC0)
#define CLASS_2_47BB065BE5107FA1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15CBBA50)
#define CLASS_2_47BB065BE5107FA1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15CBBA90)

inline static constexpr unsigned int Class_2_47BB065BE5107FA1___c_TypeDefinitionIndex = 67828;

class Class_2_47BB065BE5107FA1___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Collections::Generic::IEnumerable_1<::MoleMole::TurnBattleEntityUnit*>*, ::System::Collections::Generic::IEnumerable_1<::MoleMole::TurnBattleEntityUnit*>*>** StaticGet___9__18_2()
	{
		return (::System::Func_2<::System::Collections::Generic::IEnumerable_1<::MoleMole::TurnBattleEntityUnit*>*, ::System::Collections::Generic::IEnumerable_1<::MoleMole::TurnBattleEntityUnit*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_47BB065BE5107FA1___c_TypeDefinitionIndex)->GetStaticField(0x362E0);
	}
	static ::System::Func_2<::System::Collections::Generic::IEnumerable_1<::MoleMole::TurnBattleEntityUnit*>*, ::System::Collections::Generic::IEnumerable_1<::MoleMole::TurnBattleEntityUnit*>*>** StaticGet___9__18_0()
	{
		return (::System::Func_2<::System::Collections::Generic::IEnumerable_1<::MoleMole::TurnBattleEntityUnit*>*, ::System::Collections::Generic::IEnumerable_1<::MoleMole::TurnBattleEntityUnit*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_47BB065BE5107FA1___c_TypeDefinitionIndex)->GetStaticField(0x362E8);
	}
	static ::Class_2_47BB065BE5107FA1___c** StaticGet___9()
	{
		return (::Class_2_47BB065BE5107FA1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_47BB065BE5107FA1___c_TypeDefinitionIndex)->GetStaticField(0x362F0);
	}
	static ::System::Comparison_1<::System::ValueTuple_2<::MoleMole::TurnBattleEntityUnit*, ::System::Single>>** StaticGet___9__21_1()
	{
		return (::System::Comparison_1<::System::ValueTuple_2<::MoleMole::TurnBattleEntityUnit*, ::System::Single>>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_47BB065BE5107FA1___c_TypeDefinitionIndex)->GetStaticField(0x362F8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_47BB065BE5107FA1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47BB065BE5107FA1___C__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::MoleMole::TurnBattleEntityUnit*>* Method_1_1A1EDCE593981CCC(::System::Collections::Generic::IEnumerable_1<::MoleMole::TurnBattleEntityUnit*>* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::TurnBattleEntityUnit*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::MoleMole::TurnBattleEntityUnit*>*))((::PBYTE)hIl2Cpp + CLASS_2_47BB065BE5107FA1___C_METHOD_1_1A1EDCE593981CCC_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::MoleMole::TurnBattleEntityUnit*>* Method_1_1A1EDCE593981CCC_1(::System::Collections::Generic::IEnumerable_1<::MoleMole::TurnBattleEntityUnit*>* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::TurnBattleEntityUnit*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::MoleMole::TurnBattleEntityUnit*>*))((::PBYTE)hIl2Cpp + CLASS_2_47BB065BE5107FA1___C_METHOD_1_1A1EDCE593981CCC_1_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_F46D676828CF89B6(::System::ValueTuple_2<::MoleMole::TurnBattleEntityUnit*, ::System::Single> a1, ::System::ValueTuple_2<::MoleMole::TurnBattleEntityUnit*, ::System::Single> a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::ValueTuple_2<::MoleMole::TurnBattleEntityUnit*, ::System::Single>, ::System::ValueTuple_2<::MoleMole::TurnBattleEntityUnit*, ::System::Single>))((::PBYTE)hIl2Cpp + CLASS_2_47BB065BE5107FA1___C_METHOD_1_F46D676828CF89B6_OFFSET))(this, a1, a2);
	}
};
