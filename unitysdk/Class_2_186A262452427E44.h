#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C4C2ACF3D9655BEA_3.h"
#include "unitysdk/Class_2_186A262452427E44_Struct_2_35F396C03964A94A_2.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_1_D15D301A6E254CBA;
class Class_3_493953025FA316DA;
class Class_5_A6F8D19602712D95;
class Class_5_DCFF91E03A93C03C;
namespace MoleMole::Config { class ConfigHollowChessboardLight; }
namespace Share { class CVector2; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_2_186A262452427E44_METHOD_2_1101A5E0934F304F_OFFSET UNITYSDK_OFFSET(0xFFA47F0)
#define CLASS_2_186A262452427E44_METHOD_2_196C0EEA5C647632_OFFSET UNITYSDK_OFFSET(0xFFA57F0)
#define CLASS_2_186A262452427E44_METHOD_2_1F37398226A075D3_1_OFFSET UNITYSDK_OFFSET(0xFFA6DC0)
#define CLASS_2_186A262452427E44_METHOD_2_1F37398226A075D3_OFFSET UNITYSDK_OFFSET(0xFFA6CF0)
#define CLASS_2_186A262452427E44_METHOD_2_239790677B950002_OFFSET UNITYSDK_OFFSET(0xFFA52D0)
#define CLASS_2_186A262452427E44_METHOD_2_248F2887B0C2212A_OFFSET UNITYSDK_OFFSET(0xFFA5EA0)
#define CLASS_2_186A262452427E44_METHOD_2_25E1717AC740E4D8_OFFSET UNITYSDK_OFFSET(0xFFA62B0)
#define CLASS_2_186A262452427E44_METHOD_2_2938F774A1106C02_OFFSET UNITYSDK_OFFSET(0xFFA6990)
#define CLASS_2_186A262452427E44_METHOD_2_47A268A72CFA1FAF_OFFSET UNITYSDK_OFFSET(0xFFA5DA0)
#define CLASS_2_186A262452427E44_METHOD_2_4FDB863759688979_OFFSET UNITYSDK_OFFSET(0xFFA3990)
#define CLASS_2_186A262452427E44_METHOD_2_54CBB8A724B476B0_OFFSET UNITYSDK_OFFSET(0xFFA6890)
#define CLASS_2_186A262452427E44_METHOD_2_563C84FC0D8855F3_OFFSET UNITYSDK_OFFSET(0xFFA4EE0)
#define CLASS_2_186A262452427E44_METHOD_2_64956B613ABA669A_OFFSET UNITYSDK_OFFSET(0xFFA69F0)
#define CLASS_2_186A262452427E44_METHOD_2_730309336B1F5EE7_OFFSET UNITYSDK_OFFSET(0xFFA4950)
#define CLASS_2_186A262452427E44_METHOD_2_78F284F7DAFD4F40_OFFSET UNITYSDK_OFFSET(0xFFA6A90)
#define CLASS_2_186A262452427E44_METHOD_2_7D0E6395FCC5F05C_OFFSET UNITYSDK_OFFSET(0xFFA4180)
#define CLASS_2_186A262452427E44_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xFFA5D60)
#define CLASS_2_186A262452427E44_METHOD_2_CB613A5EF970C11B_OFFSET UNITYSDK_OFFSET(0xFFA45A0)
#define CLASS_2_186A262452427E44_METHOD_2_D09831639F615812_OFFSET UNITYSDK_OFFSET(0xFFA4620)
#define CLASS_2_186A262452427E44_METHOD_2_D23EA2847EA07CF7_OFFSET UNITYSDK_OFFSET(0xFFA6BE0)
#define CLASS_2_186A262452427E44_METHOD_2_DA2132B3D655C6CE_OFFSET UNITYSDK_OFFSET(0xFFA6430)
#define CLASS_2_186A262452427E44_METHOD_2_E49438593C33DE3B_OFFSET UNITYSDK_OFFSET(0xFFA6C70)
#define CLASS_2_186A262452427E44_METHOD_2_EBFF955CE134D1E7_OFFSET UNITYSDK_OFFSET(0xFFA5BF0)
#define CLASS_2_186A262452427E44_METHOD_2_F63FE1AA9633F811_OFFSET UNITYSDK_OFFSET(0xFFA5F30)
#define CLASS_2_186A262452427E44_METHOD_2_FA58824BA12F6F62_OFFSET UNITYSDK_OFFSET(0xFFA4680)
#define CLASS_2_186A262452427E44_METHOD_2_FE31A2852C00100B_OFFSET UNITYSDK_OFFSET(0xFFA64B0)
#define CLASS_2_186A262452427E44__CCTOR_OFFSET UNITYSDK_OFFSET(0xFFA6440)
#define CLASS_2_186A262452427E44__CTOR_OFFSET UNITYSDK_OFFSET(0xFFA4220)

inline static constexpr unsigned int Class_2_186A262452427E44_TypeDefinitionIndex = 89022;

class Class_2_186A262452427E44 : public ::Class_1_C4C2ACF3D9655BEA_3
{
public:
	static ::Share::CVector2** StaticGet_Field_2_6()
	{
		return (::Share::CVector2**)Il2CppClass::FromTypeDefinitionIndex(Class_2_186A262452427E44_TypeDefinitionIndex)->GetStaticField(0x3BC20);
	}
	::System::Collections::Generic::HashSet_1<::MoleMole::HollowChessboard::HollowCell>* Field_2_9; // 0x10
	::System::Collections::Generic::IDictionary_2<::MoleMole::HollowChessboard::HollowCell, ::Class_2_186A262452427E44_Struct_2_35F396C03964A94A_2>* Field_2_11; // 0x18
	::System::Collections::Generic::HashSet_1<::MoleMole::HollowChessboard::HollowCell>* Field_2_0; // 0x20
	::UnityEngine::AnimationCurve* Field_2_4; // 0x28
	::System::Collections::Generic::HashSet_1<::MoleMole::HollowChessboard::HollowCell>* Field_2_12; // 0x30
	::Class_5_DCFF91E03A93C03C* Field_2_1; // 0x38
	::MoleMole::Config::ConfigHollowChessboardLight* Field_2_17; // 0x40
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* Field_2_5; // 0x48
	::System::Collections::Generic::HashSet_1<::MoleMole::HollowChessboard::HollowCell>* Field_2_7; // 0x50
	::Class_1_D15D301A6E254CBA* Field_2_2; // 0x58
	::Class_3_493953025FA316DA* Field_2_18; // 0x60
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* Field_2_19; // 0x68
	::System::Single Field_2_8; // 0x70
	::System::Single Field_2_14; // 0x74
	::System::Int32 Field_2_13; // 0x78
	::System::Single Field_2_15; // 0x7C
	::Class_2_186A262452427E44_Struct_2_35F396C03964A94A_2 Field_2_10; // 0x80

	::System::Void _ctor(::Class_5_DCFF91E03A93C03C* a1, ::Class_1_D15D301A6E254CBA* a2, ::Class_3_493953025FA316DA* a3, ::System::Single a4, ::System::Single a5, ::System::Int32 a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_DCFF91E03A93C03C*, ::Class_1_D15D301A6E254CBA*, ::Class_3_493953025FA316DA*, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_186A262452427E44__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_186A262452427E44__CCTOR_OFFSET))();
	}

	::System::Void Method_2_4FDB863759688979(::Il2CppArray<::UnityEngine::Color>* a1, ::MoleMole::HollowChessboard::HollowCell a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Color>*, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_2_186A262452427E44_METHOD_2_4FDB863759688979_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CB613A5EF970C11B(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_186A262452427E44_METHOD_2_CB613A5EF970C11B_OFFSET))(this, a1);
	}

	::System::Void Method_2_FA58824BA12F6F62()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_186A262452427E44_METHOD_2_FA58824BA12F6F62_OFFSET))(this);
	}

	::System::Void Method_2_1101A5E0934F304F(::MoleMole::HollowChessboard::HollowCell a1, ::System::Boolean a2, ::System::Single a3, ::System::Func_2<::System::Single, ::System::Single>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::System::Boolean, ::System::Single, ::System::Func_2<::System::Single, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_2_186A262452427E44_METHOD_2_1101A5E0934F304F_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_730309336B1F5EE7(::MoleMole::HollowChessboard::HollowCell a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_186A262452427E44_METHOD_2_730309336B1F5EE7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_239790677B950002(::System::Action_3<::Class_5_DCFF91E03A93C03C*, ::MoleMole::HollowChessboard::HollowCell, ::System::Single>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_3<::Class_5_DCFF91E03A93C03C*, ::MoleMole::HollowChessboard::HollowCell, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_2_186A262452427E44_METHOD_2_239790677B950002_OFFSET))(this, a1);
	}

	::System::Single Method_2_EBFF955CE134D1E7(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Single(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_2_186A262452427E44_METHOD_2_EBFF955CE134D1E7_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_186A262452427E44_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_47A268A72CFA1FAF(::MoleMole::HollowChessboard::HollowCell a1, ::MoleMole::HollowChessboard::HollowCell a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_2_186A262452427E44_METHOD_2_47A268A72CFA1FAF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_248F2887B0C2212A(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_2_186A262452427E44_METHOD_2_248F2887B0C2212A_OFFSET))(this, a1);
	}

	::System::Void Method_2_F63FE1AA9633F811()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_186A262452427E44_METHOD_2_F63FE1AA9633F811_OFFSET))(this);
	}

	::System::Void Method_2_25E1717AC740E4D8(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_186A262452427E44_METHOD_2_25E1717AC740E4D8_OFFSET))(this, a1);
	}

	::System::Collections::Generic::HashSet_1<::MoleMole::HollowChessboard::HollowCell>* Method_2_DA2132B3D655C6CE()
	{
		return ((::System::Collections::Generic::HashSet_1<::MoleMole::HollowChessboard::HollowCell>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_186A262452427E44_METHOD_2_DA2132B3D655C6CE_OFFSET))(this);
	}

	::System::Void Method_2_FE31A2852C00100B(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_186A262452427E44_METHOD_2_FE31A2852C00100B_OFFSET))(this, a1);
	}

	::System::Void Method_2_196C0EEA5C647632(::Class_2_186A262452427E44_Struct_2_35F396C03964A94A_2& a1, ::MoleMole::HollowChessboard::HollowCell a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_186A262452427E44_Struct_2_35F396C03964A94A_2&, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_2_186A262452427E44_METHOD_2_196C0EEA5C647632_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_2938F774A1106C02(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_186A262452427E44_METHOD_2_2938F774A1106C02_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* Method_2_563C84FC0D8855F3(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_186A262452427E44_METHOD_2_563C84FC0D8855F3_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* Method_2_64956B613ABA669A(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_186A262452427E44_METHOD_2_64956B613ABA669A_OFFSET))(this, a1);
	}

	::System::Single Method_2_54CBB8A724B476B0(::System::ValueTuple_2<::System::Int32, ::System::Int32> a1, ::Class_2_186A262452427E44_Struct_2_35F396C03964A94A_2 a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::Class_2_186A262452427E44_Struct_2_35F396C03964A94A_2))((::PBYTE)hIl2Cpp + CLASS_2_186A262452427E44_METHOD_2_54CBB8A724B476B0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_78F284F7DAFD4F40(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_2_186A262452427E44_METHOD_2_78F284F7DAFD4F40_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* Method_2_D23EA2847EA07CF7(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_186A262452427E44_METHOD_2_D23EA2847EA07CF7_OFFSET))(this, a1);
	}

	::System::Void Method_2_7D0E6395FCC5F05C(::Class_5_A6F8D19602712D95* a1, ::UnityEngine::Color& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_A6F8D19602712D95*, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + CLASS_2_186A262452427E44_METHOD_2_7D0E6395FCC5F05C_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_E49438593C33DE3B(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_186A262452427E44_METHOD_2_E49438593C33DE3B_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Int32>* Method_2_1F37398226A075D3(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_186A262452427E44_METHOD_2_1F37398226A075D3_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_D09831639F615812(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_186A262452427E44_METHOD_2_D09831639F615812_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Int32>* Method_2_1F37398226A075D3_1(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_186A262452427E44_METHOD_2_1F37398226A075D3_1_OFFSET))(this, a1, a2, a3, a4);
	}
};
