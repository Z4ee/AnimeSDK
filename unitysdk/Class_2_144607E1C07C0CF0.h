#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B4BE03363BD6F2CF.h"
#include "unitysdk/Struct_2_F39E5CAD66728FF0.h"

class AkCallbackManager_EventCallback;
class AkExternalSourceInfo;
class Class_1_3002D7CF5FEE9D3A;
class Class_1_959A2ACE5659E842;
class Class_1_B7BCCA11D41E2CA6;
class Class_1_B9F44AB9D88F00AD;
class Class_1_C9DFE5EE7107C629_1;
class Class_1_E9B3FDEEC6142CB3;
class Class_3_01E03BF53558728A;
class Class_3_848BA58F81F05F34;
class Class_3_848BA58F81F05F34_1;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace System::Text { class StringBuilder; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_144607E1C07C0CF0_METHOD_2_09C4428BEAB114EA_OFFSET UNITYSDK_OFFSET(0x112AC3E0)
#define CLASS_2_144607E1C07C0CF0_METHOD_2_0BF778BFE71F01F3_OFFSET UNITYSDK_OFFSET(0x112AD000)
#define CLASS_2_144607E1C07C0CF0_METHOD_2_0D50C88F86EFBF3A_OFFSET UNITYSDK_OFFSET(0x112ABFD0)
#define CLASS_2_144607E1C07C0CF0_METHOD_2_0E5A0413708D21A1_OFFSET UNITYSDK_OFFSET(0x112ADCF0)
#define CLASS_2_144607E1C07C0CF0_METHOD_2_169E3B3080216099_OFFSET UNITYSDK_OFFSET(0x112A8780)
#define CLASS_2_144607E1C07C0CF0_METHOD_2_17BD30EFE8176014_OFFSET UNITYSDK_OFFSET(0x112AD580)
#define CLASS_2_144607E1C07C0CF0_METHOD_2_1EFFF793CC21EF85_OFFSET UNITYSDK_OFFSET(0x112AA8D0)
#define CLASS_2_144607E1C07C0CF0_METHOD_2_22729DDA46DDC91F_OFFSET UNITYSDK_OFFSET(0x112AADE0)
#define CLASS_2_144607E1C07C0CF0_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x112AC4F0)
#define CLASS_2_144607E1C07C0CF0_METHOD_2_27EBAAFAF5369197_OFFSET UNITYSDK_OFFSET(0x112A9C20)
#define CLASS_2_144607E1C07C0CF0_METHOD_2_283489C059C3A400_OFFSET UNITYSDK_OFFSET(0x112AC590)
#define CLASS_2_144607E1C07C0CF0_METHOD_2_367B9590522079D1_OFFSET UNITYSDK_OFFSET(0x112A90E0)
#define CLASS_2_144607E1C07C0CF0_METHOD_2_389486378BEF2498_OFFSET UNITYSDK_OFFSET(0x112AAE80)
#define CLASS_2_144607E1C07C0CF0_METHOD_2_3B04066B3C57F9FE_OFFSET UNITYSDK_OFFSET(0x112AB470)
#define CLASS_2_144607E1C07C0CF0_METHOD_2_44005F8C173D54F4_OFFSET UNITYSDK_OFFSET(0x112ABCA0)
#define CLASS_2_144607E1C07C0CF0_METHOD_2_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x112A9B40)
#define CLASS_2_144607E1C07C0CF0_METHOD_2_58DFCA695ADC1C08_OFFSET UNITYSDK_OFFSET(0x112AA5E0)
#define CLASS_2_144607E1C07C0CF0_METHOD_2_5AC9A5B4A95B1BA8_1_OFFSET UNITYSDK_OFFSET(0x112AA1D0)
#define CLASS_2_144607E1C07C0CF0_METHOD_2_5AC9A5B4A95B1BA8_OFFSET UNITYSDK_OFFSET(0x112AAC60)
#define CLASS_2_144607E1C07C0CF0_METHOD_2_5C4AD3D20087FDE7_OFFSET UNITYSDK_OFFSET(0x112ACBE0)
#define CLASS_2_144607E1C07C0CF0_METHOD_2_625B96B1E6C6C5C1_OFFSET UNITYSDK_OFFSET(0x112AAF30)
#define CLASS_2_144607E1C07C0CF0_METHOD_2_70437D85C11C5222_OFFSET UNITYSDK_OFFSET(0x112AAFA0)
#define CLASS_2_144607E1C07C0CF0_METHOD_2_722E1524F560C8AF_OFFSET UNITYSDK_OFFSET(0x112A99A0)
#define CLASS_2_144607E1C07C0CF0_METHOD_2_73212BE283E8719D_OFFSET UNITYSDK_OFFSET(0x112ACEF0)
#define CLASS_2_144607E1C07C0CF0_METHOD_2_75D1D80E6A514E21_OFFSET UNITYSDK_OFFSET(0x112ACB60)
#define CLASS_2_144607E1C07C0CF0_METHOD_2_76A43993BBD532DD_OFFSET UNITYSDK_OFFSET(0x112AB9A0)
#define CLASS_2_144607E1C07C0CF0_METHOD_2_7DF533BA32C0E415_OFFSET UNITYSDK_OFFSET(0x112AD730)
#define CLASS_2_144607E1C07C0CF0_METHOD_2_83DA8FE11BEA9751_OFFSET UNITYSDK_OFFSET(0x112A7C00)
#define CLASS_2_144607E1C07C0CF0_METHOD_2_883A4C91B048C8B2_OFFSET UNITYSDK_OFFSET(0x112AA030)
#define CLASS_2_144607E1C07C0CF0_METHOD_2_8F024D3D33B4DBC8_OFFSET UNITYSDK_OFFSET(0x112AA350)
#define CLASS_2_144607E1C07C0CF0_METHOD_2_9527BDD64D83DC1C_OFFSET UNITYSDK_OFFSET(0x112ADA20)
#define CLASS_2_144607E1C07C0CF0_METHOD_2_9A4EBED11761DB3E_OFFSET UNITYSDK_OFFSET(0x112AB700)
#define CLASS_2_144607E1C07C0CF0_METHOD_2_A4BDF2CF3F8F3D03_OFFSET UNITYSDK_OFFSET(0x112AC9F0)
#define CLASS_2_144607E1C07C0CF0_METHOD_2_B1B448B2EC103605_OFFSET UNITYSDK_OFFSET(0x112AB670)
#define CLASS_2_144607E1C07C0CF0_METHOD_2_B2AF81294D9C69C7_OFFSET UNITYSDK_OFFSET(0x112A9300)
#define CLASS_2_144607E1C07C0CF0_METHOD_2_B4DCBD12CEE63CCA_OFFSET UNITYSDK_OFFSET(0x112A9DD0)
#define CLASS_2_144607E1C07C0CF0_METHOD_2_BA4F5A3623915D8E_OFFSET UNITYSDK_OFFSET(0x112A9CC0)
#define CLASS_2_144607E1C07C0CF0_METHOD_2_BD2F8ECECEAD4800_OFFSET UNITYSDK_OFFSET(0x112A9770)
#define CLASS_2_144607E1C07C0CF0_METHOD_2_BE0579C19F0518CC_OFFSET UNITYSDK_OFFSET(0x112ABF30)
#define CLASS_2_144607E1C07C0CF0_METHOD_2_C47E222CA7CD9FF2_OFFSET UNITYSDK_OFFSET(0x112AB060)
#define CLASS_2_144607E1C07C0CF0_METHOD_2_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x112AB990)
#define CLASS_2_144607E1C07C0CF0_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x112A9AB0)
#define CLASS_2_144607E1C07C0CF0_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x112A9B50)
#define CLASS_2_144607E1C07C0CF0_METHOD_2_DAB65F30E4454DBE_OFFSET UNITYSDK_OFFSET(0x112ACE50)
#define CLASS_2_144607E1C07C0CF0_METHOD_2_E3ED34A23CEEFD04_OFFSET UNITYSDK_OFFSET(0x112AD600)
#define CLASS_2_144607E1C07C0CF0_METHOD_2_E67FA6A042436B76_OFFSET UNITYSDK_OFFSET(0x112ADBA0)
#define CLASS_2_144607E1C07C0CF0_METHOD_2_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x112AC4E0)
#define CLASS_2_144607E1C07C0CF0_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x112AE610)
#define CLASS_2_144607E1C07C0CF0_METHOD_2_ECAB7B4F243C67E7_OFFSET UNITYSDK_OFFSET(0x112ABB20)
#define CLASS_2_144607E1C07C0CF0_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x112AE6A0)
#define CLASS_2_144607E1C07C0CF0_METHOD_2_F1F0D758EDF18A6B_1_OFFSET UNITYSDK_OFFSET(0x112ACD60)
#define CLASS_2_144607E1C07C0CF0_METHOD_2_F1F0D758EDF18A6B_OFFSET UNITYSDK_OFFSET(0x112AA7E0)
#define CLASS_2_144607E1C07C0CF0_METHOD_2_F41D98A39CE73009_OFFSET UNITYSDK_OFFSET(0x112AE370)
#define CLASS_2_144607E1C07C0CF0_METHOD_2_F776A08B0BC5786F_OFFSET UNITYSDK_OFFSET(0x112AB1D0)
#define CLASS_2_144607E1C07C0CF0_METHOD_2_F8466F0378CC426C_OFFSET UNITYSDK_OFFSET(0x112AC160)
#define CLASS_2_144607E1C07C0CF0_METHOD_2_F8C24709996EA74E_OFFSET UNITYSDK_OFFSET(0x112A9E50)
#define CLASS_2_144607E1C07C0CF0__CTOR_OFFSET UNITYSDK_OFFSET(0x112A71B0)

inline static constexpr unsigned int Class_2_144607E1C07C0CF0_TypeDefinitionIndex = 75128;

class Class_2_144607E1C07C0CF0 : public ::Class_1_B4BE03363BD6F2CF
{
public:
	::System::Collections::Generic::List_1<::Class_1_959A2ACE5659E842*>* Field_2_19; // 0x18
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_4; // 0x20
	::AkExternalSourceInfo* Field_2_11; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_E9B3FDEEC6142CB3*>* Field_2_8; // 0x30
	::System::Collections::Generic::List_1<::System::String*>* Field_2_23; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_2_16; // 0x40
	::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::Class_1_959A2ACE5659E842*>* Field_2_14; // 0x48
	::System::Collections::Generic::List_1<::Class_1_B9F44AB9D88F00AD*>* Field_2_12; // 0x50
	::System::Collections::Generic::Queue_1<::System::String*>* Field_2_10; // 0x58
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_6; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* Field_2_5; // 0x68
	::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::System::Collections::Generic::Queue_1<::Class_1_B7BCCA11D41E2CA6*>*>* Field_2_13; // 0x70
	::System::Text::StringBuilder* Field_2_22; // 0x78
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_17; // 0x80
	::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::Class_1_B9F44AB9D88F00AD*>* Field_2_15; // 0x88
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_2_18; // 0x90
	::System::Single Field_2_1; // 0x98
	::System::UInt32 Field_2_9; // 0x9C
	::System::Single Field_2_7; // 0xA0
	::System::Single Field_2_0; // 0xA4
	::System::Boolean Field_2_2; // 0xA8

	::System::Void _ctor(::Class_1_C9DFE5EE7107C629_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_1*))((::PBYTE)hIl2Cpp + CLASS_2_144607E1C07C0CF0__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_83DA8FE11BEA9751(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_144607E1C07C0CF0_METHOD_2_83DA8FE11BEA9751_OFFSET))(this, a1);
	}

	::System::Void Method_2_367B9590522079D1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_144607E1C07C0CF0_METHOD_2_367B9590522079D1_OFFSET))(this);
	}

	::System::Void Method_2_722E1524F560C8AF(::Class_1_3002D7CF5FEE9D3A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3002D7CF5FEE9D3A*))((::PBYTE)hIl2Cpp + CLASS_2_144607E1C07C0CF0_METHOD_2_722E1524F560C8AF_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_144607E1C07C0CF0_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Single Method_2_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_144607E1C07C0CF0_METHOD_2_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_2_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_144607E1C07C0CF0_METHOD_2_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Int32 Method_2_27EBAAFAF5369197(::System::String* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_144607E1C07C0CF0_METHOD_2_27EBAAFAF5369197_OFFSET))(this, a1);
	}

	static ::System::String* Method_2_B4DCBD12CEE63CCA(::Struct_2_F39E5CAD66728FF0 a1, ::UnityEngine::GameObject* a2, ::System::Boolean& a3)
	{
		return ((::System::String*(*)(::Struct_2_F39E5CAD66728FF0, ::UnityEngine::GameObject*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_2_144607E1C07C0CF0_METHOD_2_B4DCBD12CEE63CCA_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_2_883A4C91B048C8B2(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_144607E1C07C0CF0_METHOD_2_883A4C91B048C8B2_OFFSET))(this, a1);
	}

	::Class_1_B9F44AB9D88F00AD* Method_2_F1F0D758EDF18A6B(::System::String* a1, ::System::Collections::Generic::IList_1<::System::String*>* a2, ::UnityEngine::GameObject* a3, ::System::Func_1<::System::Boolean>* a4, ::System::Action* a5, ::Struct_2_F39E5CAD66728FF0 a6)
	{
		return ((::Class_1_B9F44AB9D88F00AD*(*)(::PVOID, ::System::String*, ::System::Collections::Generic::IList_1<::System::String*>*, ::UnityEngine::GameObject*, ::System::Func_1<::System::Boolean>*, ::System::Action*, ::Struct_2_F39E5CAD66728FF0))((::PBYTE)hIl2Cpp + CLASS_2_144607E1C07C0CF0_METHOD_2_F1F0D758EDF18A6B_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	static ::System::String* Method_2_F8C24709996EA74E(::System::String* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::String*(*)(::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_144607E1C07C0CF0_METHOD_2_F8C24709996EA74E_OFFSET))(a1, a2);
	}

	::UnityEngine::GameObject* Method_2_5AC9A5B4A95B1BA8(::System::String* a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_144607E1C07C0CF0_METHOD_2_5AC9A5B4A95B1BA8_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_2_5AC9A5B4A95B1BA8_1(::System::String* a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_144607E1C07C0CF0_METHOD_2_5AC9A5B4A95B1BA8_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_22729DDA46DDC91F(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_144607E1C07C0CF0_METHOD_2_22729DDA46DDC91F_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_625B96B1E6C6C5C1(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_144607E1C07C0CF0_METHOD_2_625B96B1E6C6C5C1_OFFSET))(this, a1);
	}

	::System::Void Method_2_B2AF81294D9C69C7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_144607E1C07C0CF0_METHOD_2_B2AF81294D9C69C7_OFFSET))(this);
	}

	::System::Void Method_2_8F024D3D33B4DBC8(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_144607E1C07C0CF0_METHOD_2_8F024D3D33B4DBC8_OFFSET))(this, a1);
	}

	::Class_1_B9F44AB9D88F00AD* Method_2_F776A08B0BC5786F(::Class_1_B7BCCA11D41E2CA6* a1)
	{
		return ((::Class_1_B9F44AB9D88F00AD*(*)(::PVOID, ::Class_1_B7BCCA11D41E2CA6*))((::PBYTE)hIl2Cpp + CLASS_2_144607E1C07C0CF0_METHOD_2_F776A08B0BC5786F_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1B448B2EC103605(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_144607E1C07C0CF0_METHOD_2_B1B448B2EC103605_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_9A4EBED11761DB3E(::System::Collections::Generic::List_1<::System::String*>* a1, ::UnityEngine::GameObject* a2, ::Class_3_848BA58F81F05F34* a3, ::Class_3_01E03BF53558728A* a4, ::Class_3_848BA58F81F05F34_1* a5, ::System::UInt32 a6, ::AkCallbackManager_EventCallback* a7, ::System::Int32 a8, ::Struct_2_F39E5CAD66728FF0 a9)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::UnityEngine::GameObject*, ::Class_3_848BA58F81F05F34*, ::Class_3_01E03BF53558728A*, ::Class_3_848BA58F81F05F34_1*, ::System::UInt32, ::AkCallbackManager_EventCallback*, ::System::Int32, ::Struct_2_F39E5CAD66728FF0))((::PBYTE)hIl2Cpp + CLASS_2_144607E1C07C0CF0_METHOD_2_9A4EBED11761DB3E_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::Class_1_B9F44AB9D88F00AD* Method_2_1EFFF793CC21EF85(::Class_1_B7BCCA11D41E2CA6* a1)
	{
		return ((::Class_1_B9F44AB9D88F00AD*(*)(::PVOID, ::Class_1_B7BCCA11D41E2CA6*))((::PBYTE)hIl2Cpp + CLASS_2_144607E1C07C0CF0_METHOD_2_1EFFF793CC21EF85_OFFSET))(this, a1);
	}

	::System::Void Method_2_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_144607E1C07C0CF0_METHOD_2_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_76A43993BBD532DD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_144607E1C07C0CF0_METHOD_2_76A43993BBD532DD_OFFSET))(this);
	}

	::System::String* Method_2_ECAB7B4F243C67E7(::System::String* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_144607E1C07C0CF0_METHOD_2_ECAB7B4F243C67E7_OFFSET))(this, a1);
	}

	::System::Void Method_2_70437D85C11C5222(::Class_1_B9F44AB9D88F00AD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B9F44AB9D88F00AD*))((::PBYTE)hIl2Cpp + CLASS_2_144607E1C07C0CF0_METHOD_2_70437D85C11C5222_OFFSET))(this, a1);
	}

	::System::Void Method_2_44005F8C173D54F4(::UnityEngine::GameObject* a1, ::Class_1_959A2ACE5659E842* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::Class_1_959A2ACE5659E842*))((::PBYTE)hIl2Cpp + CLASS_2_144607E1C07C0CF0_METHOD_2_44005F8C173D54F4_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_BE0579C19F0518CC(::System::UInt32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_144607E1C07C0CF0_METHOD_2_BE0579C19F0518CC_OFFSET))(this, a1);
	}

	::System::Void Method_2_C47E222CA7CD9FF2(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_144607E1C07C0CF0_METHOD_2_C47E222CA7CD9FF2_OFFSET))(this, a1);
	}

	::System::Void Method_2_BD2F8ECECEAD4800()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_144607E1C07C0CF0_METHOD_2_BD2F8ECECEAD4800_OFFSET))(this);
	}

	::System::Void Method_2_0D50C88F86EFBF3A(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_144607E1C07C0CF0_METHOD_2_0D50C88F86EFBF3A_OFFSET))(this, a1);
	}

	::System::Void Method_2_09C4428BEAB114EA(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_144607E1C07C0CF0_METHOD_2_09C4428BEAB114EA_OFFSET))(this, a1);
	}

	::System::Void Method_2_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_144607E1C07C0CF0_METHOD_2_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_144607E1C07C0CF0_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_283489C059C3A400(::UnityEngine::GameObject* a1, ::Class_1_B9F44AB9D88F00AD* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::Class_1_B9F44AB9D88F00AD*))((::PBYTE)hIl2Cpp + CLASS_2_144607E1C07C0CF0_METHOD_2_283489C059C3A400_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_A4BDF2CF3F8F3D03(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_144607E1C07C0CF0_METHOD_2_A4BDF2CF3F8F3D03_OFFSET))(this, a1);
	}

	::System::Void Method_2_75D1D80E6A514E21(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_144607E1C07C0CF0_METHOD_2_75D1D80E6A514E21_OFFSET))(this, a1);
	}

	::System::Void Method_2_F8466F0378CC426C(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_144607E1C07C0CF0_METHOD_2_F8466F0378CC426C_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_5C4AD3D20087FDE7()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_144607E1C07C0CF0_METHOD_2_5C4AD3D20087FDE7_OFFSET))(this);
	}

	::Class_1_B9F44AB9D88F00AD* Method_2_F1F0D758EDF18A6B_1(::System::String* a1, ::System::Collections::Generic::IList_1<::System::String*>* a2, ::UnityEngine::GameObject* a3, ::System::Func_1<::System::Boolean>* a4, ::System::Action* a5, ::Struct_2_F39E5CAD66728FF0 a6)
	{
		return ((::Class_1_B9F44AB9D88F00AD*(*)(::PVOID, ::System::String*, ::System::Collections::Generic::IList_1<::System::String*>*, ::UnityEngine::GameObject*, ::System::Func_1<::System::Boolean>*, ::System::Action*, ::Struct_2_F39E5CAD66728FF0))((::PBYTE)hIl2Cpp + CLASS_2_144607E1C07C0CF0_METHOD_2_F1F0D758EDF18A6B_1_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_2_DAB65F30E4454DBE(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_144607E1C07C0CF0_METHOD_2_DAB65F30E4454DBE_OFFSET))(this, a1);
	}

	::Class_1_959A2ACE5659E842* Method_2_0BF778BFE71F01F3(::System::String* a1, ::System::Collections::Generic::IList_1<::System::String*>* a2, ::UnityEngine::GameObject* a3, ::System::Single a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Func_1<::System::Boolean>* a7, ::System::Action* a8, ::Struct_2_F39E5CAD66728FF0 a9)
	{
		return ((::Class_1_959A2ACE5659E842*(*)(::PVOID, ::System::String*, ::System::Collections::Generic::IList_1<::System::String*>*, ::UnityEngine::GameObject*, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Func_1<::System::Boolean>*, ::System::Action*, ::Struct_2_F39E5CAD66728FF0))((::PBYTE)hIl2Cpp + CLASS_2_144607E1C07C0CF0_METHOD_2_0BF778BFE71F01F3_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Void Method_2_3B04066B3C57F9FE(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_144607E1C07C0CF0_METHOD_2_3B04066B3C57F9FE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_169E3B3080216099(::System::String* a1, ::UnityEngine::GameObject* a2, ::Class_3_848BA58F81F05F34* a3, ::Class_3_01E03BF53558728A* a4, ::Class_3_848BA58F81F05F34_1* a5, ::System::UInt32 a6, ::AkCallbackManager_EventCallback* a7, ::System::Int32 a8, ::Struct_2_F39E5CAD66728FF0 a9)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*, ::Class_3_848BA58F81F05F34*, ::Class_3_01E03BF53558728A*, ::Class_3_848BA58F81F05F34_1*, ::System::UInt32, ::AkCallbackManager_EventCallback*, ::System::Int32, ::Struct_2_F39E5CAD66728FF0))((::PBYTE)hIl2Cpp + CLASS_2_144607E1C07C0CF0_METHOD_2_169E3B3080216099_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Boolean Method_2_73212BE283E8719D(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_144607E1C07C0CF0_METHOD_2_73212BE283E8719D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_17BD30EFE8176014()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_144607E1C07C0CF0_METHOD_2_17BD30EFE8176014_OFFSET))(this);
	}

	::System::UInt32 Method_2_E3ED34A23CEEFD04(::System::String* a1, ::UnityEngine::GameObject* a2, ::Class_3_848BA58F81F05F34* a3, ::Class_3_01E03BF53558728A* a4, ::Class_3_848BA58F81F05F34_1* a5, ::System::UInt32 a6, ::AkCallbackManager_EventCallback* a7)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*, ::Class_3_848BA58F81F05F34*, ::Class_3_01E03BF53558728A*, ::Class_3_848BA58F81F05F34_1*, ::System::UInt32, ::AkCallbackManager_EventCallback*))((::PBYTE)hIl2Cpp + CLASS_2_144607E1C07C0CF0_METHOD_2_E3ED34A23CEEFD04_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::UInt32 Method_2_7DF533BA32C0E415(::System::String* a1, ::UnityEngine::GameObject* a2, ::Class_3_848BA58F81F05F34* a3, ::Class_3_01E03BF53558728A* a4, ::Class_3_848BA58F81F05F34_1* a5, ::System::UInt32 a6, ::AkCallbackManager_EventCallback* a7, ::System::Int32 a8, ::Struct_2_F39E5CAD66728FF0 a9)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*, ::Class_3_848BA58F81F05F34*, ::Class_3_01E03BF53558728A*, ::Class_3_848BA58F81F05F34_1*, ::System::UInt32, ::AkCallbackManager_EventCallback*, ::System::Int32, ::Struct_2_F39E5CAD66728FF0))((::PBYTE)hIl2Cpp + CLASS_2_144607E1C07C0CF0_METHOD_2_7DF533BA32C0E415_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Int32 Method_2_BA4F5A3623915D8E(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_144607E1C07C0CF0_METHOD_2_BA4F5A3623915D8E_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_2_9527BDD64D83DC1C(::System::UInt32 a1, ::System::String* a2, ::UnityEngine::GameObject* a3)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_144607E1C07C0CF0_METHOD_2_9527BDD64D83DC1C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_E67FA6A042436B76()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_144607E1C07C0CF0_METHOD_2_E67FA6A042436B76_OFFSET))(this);
	}

	::System::String* Method_2_0E5A0413708D21A1(::System::Collections::Generic::IList_1<::System::String*>* a1, ::System::String* a2)
	{
		return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_144607E1C07C0CF0_METHOD_2_0E5A0413708D21A1_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_F41D98A39CE73009(::System::String* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_144607E1C07C0CF0_METHOD_2_F41D98A39CE73009_OFFSET))(this, a1);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_3002D7CF5FEE9D3A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3002D7CF5FEE9D3A*))((::PBYTE)hIl2Cpp + CLASS_2_144607E1C07C0CF0_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_389486378BEF2498(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_144607E1C07C0CF0_METHOD_2_389486378BEF2498_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_144607E1C07C0CF0_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_2_58DFCA695ADC1C08(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_144607E1C07C0CF0_METHOD_2_58DFCA695ADC1C08_OFFSET))(this, a1);
	}
};
