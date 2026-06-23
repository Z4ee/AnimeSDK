#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B4BE03363BD6F2CF.h"
#include "unitysdk/Struct_2_F39E5CAD66728FF0.h"

class AkCallbackManager_EventCallback;
class AkExternalSourceInfo;
class Class_1_07A210D994F284D8_4;
class Class_1_3002D7CF5FEE9D3A;
class Class_1_C9DFE5EE7107C629;
class Class_1_E9B3FDEEC6142CB3;
class Class_3_01E03BF53558728A;
class Class_3_848BA58F81F05F34;
class Class_3_848BA58F81F05F34_1;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace System::Text { class StringBuilder; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_ADC92DDC0BBBEB69_METHOD_2_09C4428BEAB114EA_OFFSET UNITYSDK_OFFSET(0x1879C1F0)
#define CLASS_2_ADC92DDC0BBBEB69_METHOD_2_0E039083B523AF86_OFFSET UNITYSDK_OFFSET(0x1879A020)
#define CLASS_2_ADC92DDC0BBBEB69_METHOD_2_0E5A0413708D21A1_OFFSET UNITYSDK_OFFSET(0x1879D3B0)
#define CLASS_2_ADC92DDC0BBBEB69_METHOD_2_22729DDA46DDC91F_OFFSET UNITYSDK_OFFSET(0x1879CE00)
#define CLASS_2_ADC92DDC0BBBEB69_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x1879C8E0)
#define CLASS_2_ADC92DDC0BBBEB69_METHOD_2_27EBAAFAF5369197_OFFSET UNITYSDK_OFFSET(0x1879BA70)
#define CLASS_2_ADC92DDC0BBBEB69_METHOD_2_367B9590522079D1_OFFSET UNITYSDK_OFFSET(0x1879B000)
#define CLASS_2_ADC92DDC0BBBEB69_METHOD_2_389486378BEF2498_OFFSET UNITYSDK_OFFSET(0x1879CEA0)
#define CLASS_2_ADC92DDC0BBBEB69_METHOD_2_4AB57B08814DFCBA_OFFSET UNITYSDK_OFFSET(0x1879A710)
#define CLASS_2_ADC92DDC0BBBEB69_METHOD_2_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x1879BC20)
#define CLASS_2_ADC92DDC0BBBEB69_METHOD_2_5C4AD3D20087FDE7_OFFSET UNITYSDK_OFFSET(0x1879CC80)
#define CLASS_2_ADC92DDC0BBBEB69_METHOD_2_5F0036ED5CF109B4_OFFSET UNITYSDK_OFFSET(0x1879B3D0)
#define CLASS_2_ADC92DDC0BBBEB69_METHOD_2_625B96B1E6C6C5C1_OFFSET UNITYSDK_OFFSET(0x1879C730)
#define CLASS_2_ADC92DDC0BBBEB69_METHOD_2_6CAA7A4328C9EF2F_OFFSET UNITYSDK_OFFSET(0x1879C790)
#define CLASS_2_ADC92DDC0BBBEB69_METHOD_2_70437D85C11C5222_OFFSET UNITYSDK_OFFSET(0x1879C470)
#define CLASS_2_ADC92DDC0BBBEB69_METHOD_2_73212BE283E8719D_OFFSET UNITYSDK_OFFSET(0x1879D180)
#define CLASS_2_ADC92DDC0BBBEB69_METHOD_2_76A43993BBD532DD_OFFSET UNITYSDK_OFFSET(0x1879D010)
#define CLASS_2_ADC92DDC0BBBEB69_METHOD_2_7DF533BA32C0E415_OFFSET UNITYSDK_OFFSET(0x1879B610)
#define CLASS_2_ADC92DDC0BBBEB69_METHOD_2_8D61BE16C9463302_OFFSET UNITYSDK_OFFSET(0x1879B4E0)
#define CLASS_2_ADC92DDC0BBBEB69_METHOD_2_932B91D24BB04156_OFFSET UNITYSDK_OFFSET(0x1879CAD0)
#define CLASS_2_ADC92DDC0BBBEB69_METHOD_2_9527BDD64D83DC1C_OFFSET UNITYSDK_OFFSET(0x1879C530)
#define CLASS_2_ADC92DDC0BBBEB69_METHOD_2_9A4EBED11761DB3E_OFFSET UNITYSDK_OFFSET(0x1879BCC0)
#define CLASS_2_ADC92DDC0BBBEB69_METHOD_2_A4BDF2CF3F8F3D03_OFFSET UNITYSDK_OFFSET(0x1879B900)
#define CLASS_2_ADC92DDC0BBBEB69_METHOD_2_B1B448B2EC103605_OFFSET UNITYSDK_OFFSET(0x1879DCA0)
#define CLASS_2_ADC92DDC0BBBEB69_METHOD_2_B4DCBD12CEE63CCA_OFFSET UNITYSDK_OFFSET(0x1879D330)
#define CLASS_2_ADC92DDC0BBBEB69_METHOD_2_BA4F5A3623915D8E_OFFSET UNITYSDK_OFFSET(0x1879BB10)
#define CLASS_2_ADC92DDC0BBBEB69_METHOD_2_BE0579C19F0518CC_OFFSET UNITYSDK_OFFSET(0x1879B570)
#define CLASS_2_ADC92DDC0BBBEB69_METHOD_2_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1879B8F0)
#define CLASS_2_ADC92DDC0BBBEB69_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1879BC30)
#define CLASS_2_ADC92DDC0BBBEB69_METHOD_2_CD67A124D9B571B3_OFFSET UNITYSDK_OFFSET(0x1879DA20)
#define CLASS_2_ADC92DDC0BBBEB69_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x1879CF50)
#define CLASS_2_ADC92DDC0BBBEB69_METHOD_2_DAB65F30E4454DBE_OFFSET UNITYSDK_OFFSET(0x1879D290)
#define CLASS_2_ADC92DDC0BBBEB69_METHOD_2_E3ED34A23CEEFD04_OFFSET UNITYSDK_OFFSET(0x1879DB70)
#define CLASS_2_ADC92DDC0BBBEB69_METHOD_2_E67FA6A042436B76_OFFSET UNITYSDK_OFFSET(0x1879C980)
#define CLASS_2_ADC92DDC0BBBEB69_METHOD_2_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x1879C460)
#define CLASS_2_ADC92DDC0BBBEB69_METHOD_2_E8701D3A54784517_OFFSET UNITYSDK_OFFSET(0x1879B210)
#define CLASS_2_ADC92DDC0BBBEB69_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x1879C6A0)
#define CLASS_2_ADC92DDC0BBBEB69_METHOD_2_ECAB7B4F243C67E7_OFFSET UNITYSDK_OFFSET(0x1879C2E0)
#define CLASS_2_ADC92DDC0BBBEB69_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1879B560)
#define CLASS_2_ADC92DDC0BBBEB69_METHOD_2_F41D98A39CE73009_OFFSET UNITYSDK_OFFSET(0x1879BF50)
#define CLASS_2_ADC92DDC0BBBEB69_METHOD_2_F8C24709996EA74E_OFFSET UNITYSDK_OFFSET(0x1879DD30)
#define CLASS_2_ADC92DDC0BBBEB69__CTOR_OFFSET UNITYSDK_OFFSET(0x187996E0)

inline static constexpr unsigned int Class_2_ADC92DDC0BBBEB69_TypeDefinitionIndex = 82804;

class Class_2_ADC92DDC0BBBEB69 : public ::Class_1_B4BE03363BD6F2CF
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_2_14; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_2_12; // 0x20
	::System::Collections::Generic::List_1<::System::String*>* Field_2_15; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_E9B3FDEEC6142CB3*>* Field_2_10; // 0x30
	::AkExternalSourceInfo* Field_2_7; // 0x38
	::System::Text::StringBuilder* Field_2_16; // 0x40
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_13; // 0x48
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_4; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* Field_2_5; // 0x58
	::System::Collections::Generic::Queue_1<::System::String*>* Field_2_8; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_07A210D994F284D8_4*>* Field_2_11; // 0x68
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_6; // 0x70
	::System::Single Field_2_1; // 0x78
	::System::Single Field_2_3; // 0x7C
	::System::UInt32 Field_2_9; // 0x80
	::System::Single Field_2_2; // 0x84
	::System::Boolean Field_2_0; // 0x88

	::System::Void _ctor(::Class_1_C9DFE5EE7107C629* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629*))((::PBYTE)hIl2Cpp + CLASS_2_ADC92DDC0BBBEB69__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_0E039083B523AF86(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_ADC92DDC0BBBEB69_METHOD_2_0E039083B523AF86_OFFSET))(this, a1);
	}

	::System::Void Method_2_367B9590522079D1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ADC92DDC0BBBEB69_METHOD_2_367B9590522079D1_OFFSET))(this);
	}

	::System::Void Method_2_5F0036ED5CF109B4(::Class_1_3002D7CF5FEE9D3A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3002D7CF5FEE9D3A*))((::PBYTE)hIl2Cpp + CLASS_2_ADC92DDC0BBBEB69_METHOD_2_5F0036ED5CF109B4_OFFSET))(this, a1);
	}

	::System::Void Method_2_8D61BE16C9463302()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ADC92DDC0BBBEB69_METHOD_2_8D61BE16C9463302_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ADC92DDC0BBBEB69_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Single Method_2_BE0579C19F0518CC(::System::UInt32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_ADC92DDC0BBBEB69_METHOD_2_BE0579C19F0518CC_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_7DF533BA32C0E415(::System::String* a1, ::UnityEngine::GameObject* a2, ::Class_3_848BA58F81F05F34_1* a3, ::Class_3_01E03BF53558728A* a4, ::Class_3_848BA58F81F05F34* a5, ::System::UInt32 a6, ::AkCallbackManager_EventCallback* a7, ::System::Int32 a8, ::Struct_2_F39E5CAD66728FF0 a9)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*, ::Class_3_848BA58F81F05F34_1*, ::Class_3_01E03BF53558728A*, ::Class_3_848BA58F81F05F34*, ::System::UInt32, ::AkCallbackManager_EventCallback*, ::System::Int32, ::Struct_2_F39E5CAD66728FF0))((::PBYTE)hIl2Cpp + CLASS_2_ADC92DDC0BBBEB69_METHOD_2_7DF533BA32C0E415_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Void Method_2_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_ADC92DDC0BBBEB69_METHOD_2_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::String* Method_2_A4BDF2CF3F8F3D03(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_ADC92DDC0BBBEB69_METHOD_2_A4BDF2CF3F8F3D03_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_27EBAAFAF5369197(::System::String* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_ADC92DDC0BBBEB69_METHOD_2_27EBAAFAF5369197_OFFSET))(this, a1);
	}

	::System::Single Method_2_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ADC92DDC0BBBEB69_METHOD_2_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ADC92DDC0BBBEB69_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::UInt32 Method_2_9A4EBED11761DB3E(::System::Collections::Generic::List_1<::System::String*>* a1, ::UnityEngine::GameObject* a2, ::Class_3_848BA58F81F05F34_1* a3, ::Class_3_01E03BF53558728A* a4, ::Class_3_848BA58F81F05F34* a5, ::System::UInt32 a6, ::AkCallbackManager_EventCallback* a7, ::System::Int32 a8, ::Struct_2_F39E5CAD66728FF0 a9)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::UnityEngine::GameObject*, ::Class_3_848BA58F81F05F34_1*, ::Class_3_01E03BF53558728A*, ::Class_3_848BA58F81F05F34*, ::System::UInt32, ::AkCallbackManager_EventCallback*, ::System::Int32, ::Struct_2_F39E5CAD66728FF0))((::PBYTE)hIl2Cpp + CLASS_2_ADC92DDC0BBBEB69_METHOD_2_9A4EBED11761DB3E_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::String* Method_2_F41D98A39CE73009(::System::String* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_ADC92DDC0BBBEB69_METHOD_2_F41D98A39CE73009_OFFSET))(this, a1);
	}

	::System::Void Method_2_09C4428BEAB114EA(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_ADC92DDC0BBBEB69_METHOD_2_09C4428BEAB114EA_OFFSET))(this, a1);
	}

	::System::String* Method_2_ECAB7B4F243C67E7(::System::String* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_ADC92DDC0BBBEB69_METHOD_2_ECAB7B4F243C67E7_OFFSET))(this, a1);
	}

	::System::Void Method_2_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_ADC92DDC0BBBEB69_METHOD_2_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}

	::System::Void Method_2_70437D85C11C5222(::Class_1_07A210D994F284D8_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_07A210D994F284D8_4*))((::PBYTE)hIl2Cpp + CLASS_2_ADC92DDC0BBBEB69_METHOD_2_70437D85C11C5222_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_9527BDD64D83DC1C(::System::UInt32 a1, ::System::String* a2, ::UnityEngine::GameObject* a3)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_ADC92DDC0BBBEB69_METHOD_2_9527BDD64D83DC1C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_3002D7CF5FEE9D3A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3002D7CF5FEE9D3A*))((::PBYTE)hIl2Cpp + CLASS_2_ADC92DDC0BBBEB69_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_625B96B1E6C6C5C1(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_ADC92DDC0BBBEB69_METHOD_2_625B96B1E6C6C5C1_OFFSET))(this, a1);
	}

	::System::Void Method_2_6CAA7A4328C9EF2F(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_ADC92DDC0BBBEB69_METHOD_2_6CAA7A4328C9EF2F_OFFSET))(this, a1);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_ADC92DDC0BBBEB69_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_E67FA6A042436B76()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ADC92DDC0BBBEB69_METHOD_2_E67FA6A042436B76_OFFSET))(this);
	}

	::System::Void Method_2_932B91D24BB04156(::System::String* a1, ::Class_1_07A210D994F284D8_4* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_07A210D994F284D8_4*))((::PBYTE)hIl2Cpp + CLASS_2_ADC92DDC0BBBEB69_METHOD_2_932B91D24BB04156_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_5C4AD3D20087FDE7()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ADC92DDC0BBBEB69_METHOD_2_5C4AD3D20087FDE7_OFFSET))(this);
	}

	::System::Boolean Method_2_22729DDA46DDC91F(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_ADC92DDC0BBBEB69_METHOD_2_22729DDA46DDC91F_OFFSET))(this, a1);
	}

	::System::Void Method_2_E8701D3A54784517()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ADC92DDC0BBBEB69_METHOD_2_E8701D3A54784517_OFFSET))(this);
	}

	::System::Void Method_2_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ADC92DDC0BBBEB69_METHOD_2_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Boolean Method_2_76A43993BBD532DD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ADC92DDC0BBBEB69_METHOD_2_76A43993BBD532DD_OFFSET))(this);
	}

	::System::Boolean Method_2_73212BE283E8719D(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_ADC92DDC0BBBEB69_METHOD_2_73212BE283E8719D_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_2_4AB57B08814DFCBA(::System::String* a1, ::UnityEngine::GameObject* a2, ::Class_3_848BA58F81F05F34_1* a3, ::Class_3_01E03BF53558728A* a4, ::Class_3_848BA58F81F05F34* a5, ::System::UInt32 a6, ::AkCallbackManager_EventCallback* a7, ::System::Int32 a8, ::Struct_2_F39E5CAD66728FF0 a9)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*, ::Class_3_848BA58F81F05F34_1*, ::Class_3_01E03BF53558728A*, ::Class_3_848BA58F81F05F34*, ::System::UInt32, ::AkCallbackManager_EventCallback*, ::System::Int32, ::Struct_2_F39E5CAD66728FF0))((::PBYTE)hIl2Cpp + CLASS_2_ADC92DDC0BBBEB69_METHOD_2_4AB57B08814DFCBA_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Boolean Method_2_389486378BEF2498(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_ADC92DDC0BBBEB69_METHOD_2_389486378BEF2498_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_BA4F5A3623915D8E(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_ADC92DDC0BBBEB69_METHOD_2_BA4F5A3623915D8E_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_0E5A0413708D21A1(::System::Collections::Generic::IList_1<::System::String*>* a1, ::System::String* a2)
	{
		return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_ADC92DDC0BBBEB69_METHOD_2_0E5A0413708D21A1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_DAB65F30E4454DBE(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_ADC92DDC0BBBEB69_METHOD_2_DAB65F30E4454DBE_OFFSET))(this, a1);
	}

	::System::Void Method_2_CD67A124D9B571B3(::System::String* a1, ::Class_1_07A210D994F284D8_4* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_07A210D994F284D8_4*))((::PBYTE)hIl2Cpp + CLASS_2_ADC92DDC0BBBEB69_METHOD_2_CD67A124D9B571B3_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_2_E3ED34A23CEEFD04(::System::String* a1, ::UnityEngine::GameObject* a2, ::Class_3_848BA58F81F05F34_1* a3, ::Class_3_01E03BF53558728A* a4, ::Class_3_848BA58F81F05F34* a5, ::System::UInt32 a6, ::AkCallbackManager_EventCallback* a7)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*, ::Class_3_848BA58F81F05F34_1*, ::Class_3_01E03BF53558728A*, ::Class_3_848BA58F81F05F34*, ::System::UInt32, ::AkCallbackManager_EventCallback*))((::PBYTE)hIl2Cpp + CLASS_2_ADC92DDC0BBBEB69_METHOD_2_E3ED34A23CEEFD04_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_2_B1B448B2EC103605(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_ADC92DDC0BBBEB69_METHOD_2_B1B448B2EC103605_OFFSET))(this, a1);
	}

	static ::System::String* Method_2_B4DCBD12CEE63CCA(::Struct_2_F39E5CAD66728FF0 a1, ::UnityEngine::GameObject* a2, ::System::Boolean& a3)
	{
		return ((::System::String*(*)(::Struct_2_F39E5CAD66728FF0, ::UnityEngine::GameObject*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_2_ADC92DDC0BBBEB69_METHOD_2_B4DCBD12CEE63CCA_OFFSET))(a1, a2, a3);
	}

	static ::System::String* Method_2_F8C24709996EA74E(::System::String* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::String*(*)(::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_ADC92DDC0BBBEB69_METHOD_2_F8C24709996EA74E_OFFSET))(a1, a2);
	}
};
