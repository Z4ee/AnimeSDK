#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_ED78E2C86A4B45C0;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_E7AFD72072982708___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x189A6C00)
#define CLASS_2_E7AFD72072982708___C__CTOR_OFFSET UNITYSDK_OFFSET(0x189A6C40)
#define CLASS_2_E7AFD72072982708___C___ADJUSTEXECUTEORDERBYMODIFIERPRIORITY_B__23_0_OFFSET UNITYSDK_OFFSET(0x189A6C50)
#define CLASS_2_E7AFD72072982708___C___INITCHARACTERSKILL_B__73_0_OFFSET UNITYSDK_OFFSET(0x189A6CA0)

inline static constexpr unsigned int Class_2_E7AFD72072982708___c_TypeDefinitionIndex = 34500;

class Class_2_E7AFD72072982708___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::UInt32, ::RPG::GameCore::FixPoint>** StaticGet___9__73_0()
	{
		return (::System::Func_2<::System::UInt32, ::RPG::GameCore::FixPoint>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E7AFD72072982708___c_TypeDefinitionIndex)->GetStaticField(0x50810);
	}
	static ::Class_2_E7AFD72072982708___c** StaticGet___9()
	{
		return (::Class_2_E7AFD72072982708___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E7AFD72072982708___c_TypeDefinitionIndex)->GetStaticField(0x50818);
	}
	static ::System::Func_2<::Class_1_ED78E2C86A4B45C0*, ::System::Int32>** StaticGet___9__23_0()
	{
		return (::System::Func_2<::Class_1_ED78E2C86A4B45C0*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E7AFD72072982708___c_TypeDefinitionIndex)->GetStaticField(0x50820);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_E7AFD72072982708___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E7AFD72072982708___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __AdjustExecuteOrderByModifierPriority_b__23_0(::Class_1_ED78E2C86A4B45C0* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_ED78E2C86A4B45C0*))((::PBYTE)hIl2Cpp + CLASS_2_E7AFD72072982708___C___ADJUSTEXECUTEORDERBYMODIFIERPRIORITY_B__23_0_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint __InitCharacterSkill_b__73_0(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_E7AFD72072982708___C___INITCHARACTERSKILL_B__73_0_OFFSET))(this, a1);
	}
};
