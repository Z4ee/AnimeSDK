#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore::Match3 { class BirdItemPackWeightConfig; }
namespace RPG::GameCore::Match3 { class BirdPieceTypeWeightConfig; }
namespace RPG::GameCore::Match3 { class BirdStyleWeightConfig; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_4C75491B780B94AA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13B6EE50)
#define CLASS_1_4C75491B780B94AA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13B6EE90)
#define CLASS_1_4C75491B780B94AA___C___COMPUTEITEMPACKWEIGHTS_B__49_0_OFFSET UNITYSDK_OFFSET(0x13B6EEE0)
#define CLASS_1_4C75491B780B94AA___C___COMPUTEITEMPACKWEIGHTS_B__49_1_OFFSET UNITYSDK_OFFSET(0x13B6EF00)
#define CLASS_1_4C75491B780B94AA___C___COMPUTEPIECETYPEWEIGHTS_B__50_0_OFFSET UNITYSDK_OFFSET(0x13B6EF20)
#define CLASS_1_4C75491B780B94AA___C___COMPUTESTYLEWEIGHTS_B__48_0_OFFSET UNITYSDK_OFFSET(0x13B6EEA0)
#define CLASS_1_4C75491B780B94AA___C___COMPUTESTYLEWEIGHTS_B__48_1_OFFSET UNITYSDK_OFFSET(0x13B6EEC0)

inline static constexpr unsigned int Class_1_4C75491B780B94AA___c_TypeDefinitionIndex = 71132;

class Class_1_4C75491B780B94AA___c : public ::System::Object
{
public:
	static ::System::Func_2<::RPG::GameCore::Match3::BirdStyleWeightConfig*, ::System::UInt32>** StaticGet___9__48_0()
	{
		return (::System::Func_2<::RPG::GameCore::Match3::BirdStyleWeightConfig*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4C75491B780B94AA___c_TypeDefinitionIndex)->GetStaticField(0x62040);
	}
	static ::System::Func_2<::RPG::GameCore::Match3::BirdStyleWeightConfig*, ::System::UInt32>** StaticGet___9__48_1()
	{
		return (::System::Func_2<::RPG::GameCore::Match3::BirdStyleWeightConfig*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4C75491B780B94AA___c_TypeDefinitionIndex)->GetStaticField(0x62048);
	}
	static ::Class_1_4C75491B780B94AA___c** StaticGet___9()
	{
		return (::Class_1_4C75491B780B94AA___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4C75491B780B94AA___c_TypeDefinitionIndex)->GetStaticField(0x62050);
	}
	static ::System::Func_2<::RPG::GameCore::Match3::BirdItemPackWeightConfig*, ::System::UInt32>** StaticGet___9__49_0()
	{
		return (::System::Func_2<::RPG::GameCore::Match3::BirdItemPackWeightConfig*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4C75491B780B94AA___c_TypeDefinitionIndex)->GetStaticField(0x62058);
	}
	static ::System::Comparison_1<::RPG::GameCore::Match3::BirdPieceTypeWeightConfig*>** StaticGet___9__50_0()
	{
		return (::System::Comparison_1<::RPG::GameCore::Match3::BirdPieceTypeWeightConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4C75491B780B94AA___c_TypeDefinitionIndex)->GetStaticField(0x62060);
	}
	static ::System::Func_2<::RPG::GameCore::Match3::BirdItemPackWeightConfig*, ::System::UInt32>** StaticGet___9__49_1()
	{
		return (::System::Func_2<::RPG::GameCore::Match3::BirdItemPackWeightConfig*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4C75491B780B94AA___c_TypeDefinitionIndex)->GetStaticField(0x62068);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4C75491B780B94AA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C75491B780B94AA___C__CTOR_OFFSET))(this);
	}

	::System::UInt32 __ComputeStyleWeights_b__48_0(::RPG::GameCore::Match3::BirdStyleWeightConfig* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::Match3::BirdStyleWeightConfig*))((::PBYTE)hIl2Cpp + CLASS_1_4C75491B780B94AA___C___COMPUTESTYLEWEIGHTS_B__48_0_OFFSET))(this, a1);
	}

	::System::UInt32 __ComputeStyleWeights_b__48_1(::RPG::GameCore::Match3::BirdStyleWeightConfig* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::Match3::BirdStyleWeightConfig*))((::PBYTE)hIl2Cpp + CLASS_1_4C75491B780B94AA___C___COMPUTESTYLEWEIGHTS_B__48_1_OFFSET))(this, a1);
	}

	::System::UInt32 __ComputeItemPackWeights_b__49_0(::RPG::GameCore::Match3::BirdItemPackWeightConfig* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::Match3::BirdItemPackWeightConfig*))((::PBYTE)hIl2Cpp + CLASS_1_4C75491B780B94AA___C___COMPUTEITEMPACKWEIGHTS_B__49_0_OFFSET))(this, a1);
	}

	::System::UInt32 __ComputeItemPackWeights_b__49_1(::RPG::GameCore::Match3::BirdItemPackWeightConfig* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::Match3::BirdItemPackWeightConfig*))((::PBYTE)hIl2Cpp + CLASS_1_4C75491B780B94AA___C___COMPUTEITEMPACKWEIGHTS_B__49_1_OFFSET))(this, a1);
	}

	::System::Int32 __ComputePieceTypeWeights_b__50_0(::RPG::GameCore::Match3::BirdPieceTypeWeightConfig* a1, ::RPG::GameCore::Match3::BirdPieceTypeWeightConfig* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::Match3::BirdPieceTypeWeightConfig*, ::RPG::GameCore::Match3::BirdPieceTypeWeightConfig*))((::PBYTE)hIl2Cpp + CLASS_1_4C75491B780B94AA___C___COMPUTEPIECETYPEWEIGHTS_B__50_0_OFFSET))(this, a1, a2);
	}
};
