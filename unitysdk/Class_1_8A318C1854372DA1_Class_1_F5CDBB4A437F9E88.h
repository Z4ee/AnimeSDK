#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2DDAC2F6C97EB8AD;
class Class_3_A7F1CBF026E489C4_1;
class Class_3_E54D0DE062FD8194;
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_1_27F786FF2A30778C;

#define CLASS_1_8A318C1854372DA1_CLASS_1_F5CDBB4A437F9E88_METHOD_1_24642F8683674797_OFFSET UNITYSDK_OFFSET(0x1349D190)
#define CLASS_1_8A318C1854372DA1_CLASS_1_F5CDBB4A437F9E88_METHOD_1_D857FE6C61182CD0_OFFSET UNITYSDK_OFFSET(0x1349D620)
#define CLASS_1_8A318C1854372DA1_CLASS_1_F5CDBB4A437F9E88_METHOD_1_FE4B832B699BA712_OFFSET UNITYSDK_OFFSET(0x1349D560)
#define CLASS_1_8A318C1854372DA1_CLASS_1_F5CDBB4A437F9E88__CTOR_OFFSET UNITYSDK_OFFSET(0x1349CF40)

inline static constexpr unsigned int Class_1_8A318C1854372DA1_Class_1_F5CDBB4A437F9E88_TypeDefinitionIndex = 51714;

class Class_1_8A318C1854372DA1_Class_1_F5CDBB4A437F9E88 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_3; // 0x0
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_6; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* Field_1_7; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Int32>* Field_1_1; // 0x20
	::System::Collections::Generic::List_1<::Class_3_E54D0DE062FD8194*>* Field_1_11; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* Field_1_0; // 0x30
	::System::Single Field_1_4; // 0x38
	::System::Int32 Field_1_2; // 0x3C
	::System::Int32 Field_1_5; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A318C1854372DA1_CLASS_1_F5CDBB4A437F9E88__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_24642F8683674797(::System::UInt32 a1, ::Class_1_2DDAC2F6C97EB8AD* a2, ::Class_3_A7F1CBF026E489C4_1* a3, ::System::Collections::Generic::List_1<::Class_3_E54D0DE062FD8194*>*& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Class_1_2DDAC2F6C97EB8AD*, ::Class_3_A7F1CBF026E489C4_1*, ::System::Collections::Generic::List_1<::Class_3_E54D0DE062FD8194*>*&))((::PBYTE)hIl2Cpp + CLASS_1_8A318C1854372DA1_CLASS_1_F5CDBB4A437F9E88_METHOD_1_24642F8683674797_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_D857FE6C61182CD0(::Class_1_27F786FF2A30778C<::Class_3_E54D0DE062FD8194*>* a1, ::System::UInt32 a2, ::Class_3_E54D0DE062FD8194*& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_27F786FF2A30778C<::Class_3_E54D0DE062FD8194*>*, ::System::UInt32, ::Class_3_E54D0DE062FD8194*&))((::PBYTE)hIl2Cpp + CLASS_1_8A318C1854372DA1_CLASS_1_F5CDBB4A437F9E88_METHOD_1_D857FE6C61182CD0_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_1_FE4B832B699BA712(::System::UInt32 a1, ::System::Int32& a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::UInt32, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_8A318C1854372DA1_CLASS_1_F5CDBB4A437F9E88_METHOD_1_FE4B832B699BA712_OFFSET))(this, a1, a2);
	}
};
