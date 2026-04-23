#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_A3657EDC1F027955___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17D10E00)
#define CLASS_2_A3657EDC1F027955___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17D10E40)
#define CLASS_2_A3657EDC1F027955___C___TRYADDCOLORDICEMODIFIER_B__4_0_OFFSET UNITYSDK_OFFSET(0x17D10E50)

inline static constexpr unsigned int Class_2_A3657EDC1F027955___c_TypeDefinitionIndex = 34211;

class Class_2_A3657EDC1F027955___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::UInt32, ::RPG::GameCore::FixPoint>** StaticGet___9__4_0()
	{
		return (::System::Func_2<::System::UInt32, ::RPG::GameCore::FixPoint>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A3657EDC1F027955___c_TypeDefinitionIndex)->GetStaticField(0x5E2F0);
	}
	static ::Class_2_A3657EDC1F027955___c** StaticGet___9()
	{
		return (::Class_2_A3657EDC1F027955___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A3657EDC1F027955___c_TypeDefinitionIndex)->GetStaticField(0x5E2F8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_A3657EDC1F027955___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3657EDC1F027955___C__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint __TryAddColorDiceModifier_b__4_0(::System::UInt32 x)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_A3657EDC1F027955___C___TRYADDCOLORDICEMODIFIER_B__4_0_OFFSET))(this, x);
	}
};
