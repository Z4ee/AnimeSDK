#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_A1A8840B8D273722_Struct_2_B4A3FFF4BA57C3E5.h"
#include "unitysdk/MoleMole/LayerMaskStatic_Enum_3_BA21CC391326FDD3.h"
#include "unitysdk/Struct_2_057163E12A7F6FF0.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_1CDA382D823F8E80;
class Class_3_A1A8840B8D273722_Class_1_0E9AE39C3B1058BF;
class Class_3_A1A8840B8D273722_Class_1_4D655BEB8BA4BFCA;
class Class_3_A1A8840B8D273722_Class_1_C4A38771062D6133;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityAttackPattern; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0060A69651D32571_METHOD_1_00DEF5A164D9A9D5_OFFSET UNITYSDK_OFFSET(0x17534460)
#define CLASS_1_0060A69651D32571_METHOD_1_18023D05A9A11BCD_OFFSET UNITYSDK_OFFSET(0x175334D0)
#define CLASS_1_0060A69651D32571_METHOD_1_4EB97C487FEAAAB3_OFFSET UNITYSDK_OFFSET(0x17533E40)
#define CLASS_1_0060A69651D32571_METHOD_1_656AD2725D6B1D62_OFFSET UNITYSDK_OFFSET(0x17534020)
#define CLASS_1_0060A69651D32571_METHOD_1_7646FFE662147970_OFFSET UNITYSDK_OFFSET(0x17533A10)
#define CLASS_1_0060A69651D32571_METHOD_1_ACA746691C08903E_OFFSET UNITYSDK_OFFSET(0x17533C30)
#define CLASS_1_0060A69651D32571__CTOR_OFFSET UNITYSDK_OFFSET(0x17533380)

inline static constexpr unsigned int Class_1_0060A69651D32571_TypeDefinitionIndex = 69643;

class Class_1_0060A69651D32571 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_3_A1A8840B8D273722_Class_1_C4A38771062D6133*>* Field_1_4; // 0x10
	::System::Collections::Generic::List_1<::Class_3_A1A8840B8D273722_Class_1_4D655BEB8BA4BFCA*>* Field_1_5; // 0x18
	::System::Collections::Generic::List_1<::Class_3_A1A8840B8D273722_Class_1_0E9AE39C3B1058BF*>* Field_1_0; // 0x20
	::System::Int32 Field_1_7; // 0x28
	::Unity::Collections::NativeArray_1<::Class_3_A1A8840B8D273722_Struct_2_B4A3FFF4BA57C3E5> Field_1_6; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0060A69651D32571__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_18023D05A9A11BCD(::System::Int32 a1, ::Class_3_A1A8840B8D273722_Struct_2_B4A3FFF4BA57C3E5& a2, ::System::Single a3, ::Class_3_A1A8840B8D273722_Class_1_0E9AE39C3B1058BF* a4, ::MoleMole::Battle::Entity* a5, ::System::Single a6, ::System::Single a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_3_A1A8840B8D273722_Struct_2_B4A3FFF4BA57C3E5&, ::System::Single, ::Class_3_A1A8840B8D273722_Class_1_0E9AE39C3B1058BF*, ::MoleMole::Battle::Entity*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0060A69651D32571_METHOD_1_18023D05A9A11BCD_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_1_7646FFE662147970()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0060A69651D32571_METHOD_1_7646FFE662147970_OFFSET))(this);
	}

	::System::Void Method_1_4EB97C487FEAAAB3(::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_3_A1A8840B8D273722_Class_1_C4A38771062D6133*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_3_A1A8840B8D273722_Class_1_C4A38771062D6133*>*))((::PBYTE)hIl2Cpp + CLASS_1_0060A69651D32571_METHOD_1_4EB97C487FEAAAB3_OFFSET))(this, a1);
	}

	::System::Void Method_1_656AD2725D6B1D62(::System::Int32 a1, ::MoleMole::Config::ConfigEntityAttackPattern* a2, ::Class_1_1CDA382D823F8E80* a3, ::MoleMole::Battle::Entity* a4, ::UnityEngine::LayerMask a5, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3 a6, ::System::Boolean a7, ::Il2CppArray<::System::String*>* a8, ::Struct_2_057163E12A7F6FF0 a9, ::System::Boolean a10, ::UnityEngine::Vector3 a11, ::UnityEngine::Quaternion a12, ::System::Boolean a13, ::System::UInt32 a14)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::Config::ConfigEntityAttackPattern*, ::Class_1_1CDA382D823F8E80*, ::MoleMole::Battle::Entity*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3, ::System::Boolean, ::Il2CppArray<::System::String*>*, ::Struct_2_057163E12A7F6FF0, ::System::Boolean, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0060A69651D32571_METHOD_1_656AD2725D6B1D62_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
	}

	::System::Void Method_1_00DEF5A164D9A9D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0060A69651D32571_METHOD_1_00DEF5A164D9A9D5_OFFSET))(this);
	}

	::System::Void Method_1_ACA746691C08903E(::System::Int32 a1, ::System::Collections::Generic::List_1<::Class_3_A1A8840B8D273722_Class_1_4D655BEB8BA4BFCA*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::Class_3_A1A8840B8D273722_Class_1_4D655BEB8BA4BFCA*>*))((::PBYTE)hIl2Cpp + CLASS_1_0060A69651D32571_METHOD_1_ACA746691C08903E_OFFSET))(this, a1, a2);
	}
};
