#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_895EBA3389065493;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_3734B68ED0A46C2D___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1672A190)
#define CLASS_2_3734B68ED0A46C2D___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1672A1D0)
#define CLASS_2_3734B68ED0A46C2D___C___ADJUSTEXECUTEORDERBYMODIFIERPRIORITY_B__14_0_OFFSET UNITYSDK_OFFSET(0x1672A1E0)
#define CLASS_2_3734B68ED0A46C2D___C___INITCHARACTERSKILL_B__55_0_OFFSET UNITYSDK_OFFSET(0x1672A230)

inline static constexpr unsigned int Class_2_3734B68ED0A46C2D___c_TypeDefinitionIndex = 28533;

class Class_2_3734B68ED0A46C2D___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_1_895EBA3389065493*, ::System::Int32>** StaticGet___9__14_0()
	{
		return (::System::Func_2<::Class_1_895EBA3389065493*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_3734B68ED0A46C2D___c_TypeDefinitionIndex)->GetStaticField(0x2F920);
	}
	static ::Class_2_3734B68ED0A46C2D___c** StaticGet___9()
	{
		return (::Class_2_3734B68ED0A46C2D___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_3734B68ED0A46C2D___c_TypeDefinitionIndex)->GetStaticField(0x2F928);
	}
	static ::System::Func_2<::System::UInt32, ::RPG::GameCore::FixPoint>** StaticGet___9__55_0()
	{
		return (::System::Func_2<::System::UInt32, ::RPG::GameCore::FixPoint>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_3734B68ED0A46C2D___c_TypeDefinitionIndex)->GetStaticField(0x2F930);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_3734B68ED0A46C2D___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3734B68ED0A46C2D___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __AdjustExecuteOrderByModifierPriority_b__14_0(::Class_1_895EBA3389065493* modifier)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_895EBA3389065493*))((::PBYTE)hIl2Cpp + CLASS_2_3734B68ED0A46C2D___C___ADJUSTEXECUTEORDERBYMODIFIERPRIORITY_B__14_0_OFFSET))(this, modifier);
	}

	::RPG::GameCore::FixPoint __InitCharacterSkill_b__55_0(::System::UInt32 x)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_3734B68ED0A46C2D___C___INITCHARACTERSKILL_B__55_0_OFFSET))(this, x);
	}
};
