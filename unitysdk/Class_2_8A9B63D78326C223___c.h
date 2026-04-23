#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_895EBA3389065493;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_8A9B63D78326C223___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17C826B0)
#define CLASS_2_8A9B63D78326C223___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17C826F0)
#define CLASS_2_8A9B63D78326C223___C___ADJUSTEXECUTEORDERBYMODIFIERPRIORITY_B__23_0_OFFSET UNITYSDK_OFFSET(0x17C82700)
#define CLASS_2_8A9B63D78326C223___C___INITCHARACTERSKILL_B__73_0_OFFSET UNITYSDK_OFFSET(0x17C82750)

inline static constexpr unsigned int Class_2_8A9B63D78326C223___c_TypeDefinitionIndex = 34218;

class Class_2_8A9B63D78326C223___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_1_895EBA3389065493*, ::System::Int32>** StaticGet___9__23_0()
	{
		return (::System::Func_2<::Class_1_895EBA3389065493*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8A9B63D78326C223___c_TypeDefinitionIndex)->GetStaticField(0x6A990);
	}
	static ::System::Func_2<::System::UInt32, ::RPG::GameCore::FixPoint>** StaticGet___9__73_0()
	{
		return (::System::Func_2<::System::UInt32, ::RPG::GameCore::FixPoint>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8A9B63D78326C223___c_TypeDefinitionIndex)->GetStaticField(0x6A998);
	}
	static ::Class_2_8A9B63D78326C223___c** StaticGet___9()
	{
		return (::Class_2_8A9B63D78326C223___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8A9B63D78326C223___c_TypeDefinitionIndex)->GetStaticField(0x6A9A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_8A9B63D78326C223___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8A9B63D78326C223___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __AdjustExecuteOrderByModifierPriority_b__23_0(::Class_1_895EBA3389065493* modifier)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_895EBA3389065493*))((::PBYTE)hIl2Cpp + CLASS_2_8A9B63D78326C223___C___ADJUSTEXECUTEORDERBYMODIFIERPRIORITY_B__23_0_OFFSET))(this, modifier);
	}

	::RPG::GameCore::FixPoint __InitCharacterSkill_b__73_0(::System::UInt32 x)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_8A9B63D78326C223___C___INITCHARACTERSKILL_B__73_0_OFFSET))(this, x);
	}
};
