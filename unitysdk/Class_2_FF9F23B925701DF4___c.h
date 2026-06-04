#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_FF9F23B925701DF4___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18AE76C0)
#define CLASS_2_FF9F23B925701DF4___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18AE7700)
#define CLASS_2_FF9F23B925701DF4___C___TRYADDCOLORDICEMODIFIER_B__4_0_OFFSET UNITYSDK_OFFSET(0x18AE7710)

inline static constexpr unsigned int Class_2_FF9F23B925701DF4___c_TypeDefinitionIndex = 34493;

class Class_2_FF9F23B925701DF4___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::UInt32, ::RPG::GameCore::FixPoint>** StaticGet___9__4_0()
	{
		return (::System::Func_2<::System::UInt32, ::RPG::GameCore::FixPoint>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_FF9F23B925701DF4___c_TypeDefinitionIndex)->GetStaticField(0x5AC90);
	}
	static ::Class_2_FF9F23B925701DF4___c** StaticGet___9()
	{
		return (::Class_2_FF9F23B925701DF4___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_FF9F23B925701DF4___c_TypeDefinitionIndex)->GetStaticField(0x5AC98);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_FF9F23B925701DF4___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FF9F23B925701DF4___C__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint __TryAddColorDiceModifier_b__4_0(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_FF9F23B925701DF4___C___TRYADDCOLORDICEMODIFIER_B__4_0_OFFSET))(this, a1);
	}
};
