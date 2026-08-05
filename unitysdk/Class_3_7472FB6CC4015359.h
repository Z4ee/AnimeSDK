#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/Struct_2_013B83C8B1FC7527.h"

class Class_0_16E4307DCC419505_135;
class Class_1_48D56DACBE4271BC;
class Class_3_7472FB6CC4015359_Class_2_4270FDAA7BABA466;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }

#define CLASS_3_7472FB6CC4015359_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x18BA91A0)
#define CLASS_3_7472FB6CC4015359_METHOD_3_2222AB70F193BF96_OFFSET UNITYSDK_OFFSET(0x18BA9820)
#define CLASS_3_7472FB6CC4015359_METHOD_3_47536891B7FB273E_OFFSET UNITYSDK_OFFSET(0x18BA9100)
#define CLASS_3_7472FB6CC4015359_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x18BA95A0)
#define CLASS_3_7472FB6CC4015359_METHOD_3_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x18BA9770)
#define CLASS_3_7472FB6CC4015359_METHOD_3_C74E50CBD41F0264_2_OFFSET UNITYSDK_OFFSET(0x18BA9970)
#define CLASS_3_7472FB6CC4015359_METHOD_3_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x18BA9750)
#define CLASS_3_7472FB6CC4015359_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x18BA9630)
#define CLASS_3_7472FB6CC4015359_METHOD_3_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x18BA9980)
#define CLASS_3_7472FB6CC4015359_METHOD_3_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x18BA9990)
#define CLASS_3_7472FB6CC4015359_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x18BA9760)
#define CLASS_3_7472FB6CC4015359_METHOD_3_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18BA99A0)
#define CLASS_3_7472FB6CC4015359_METHOD_3_F2B94768004EB1C1_1_OFFSET UNITYSDK_OFFSET(0x18BA9780)
#define CLASS_3_7472FB6CC4015359_METHOD_3_F2B94768004EB1C1_OFFSET UNITYSDK_OFFSET(0x18BA96B0)
#define CLASS_3_7472FB6CC4015359_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x18BA8DC0)
#define CLASS_3_7472FB6CC4015359__CCTOR_OFFSET UNITYSDK_OFFSET(0x18BA91F0)
#define CLASS_3_7472FB6CC4015359__CTOR_OFFSET UNITYSDK_OFFSET(0x18BA9270)

inline static constexpr unsigned int Class_3_7472FB6CC4015359_TypeDefinitionIndex = 43204;

class Class_3_7472FB6CC4015359 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_27 = 0x3A; // 0x0
	::Class_1_48D56DACBE4271BC* Field_3_21; // 0x48
	::Class_0_16E4307DCC419505_135* Field_3_20; // 0x50
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_3_18; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_3_10; // 0x60
	::Class_1_48D56DACBE4271BC* Field_3_22; // 0x68
	::Class_3_7472FB6CC4015359_Class_2_4270FDAA7BABA466* Field_3_23; // 0x70
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::LinkedList_1<::Struct_2_013B83C8B1FC7527>*>* Field_3_14; // 0x78
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_3_13; // 0x80
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_3_12; // 0x88
	::MoleMole::Config::CampType Field_3_6; // 0x90
	::System::Single Field_3_7; // 0x94
	::System::Boolean Field_3_16; // 0x98
	::System::Boolean Field_3_8; // 0x99
	::System::Boolean Field_3_5; // 0x9A
	::System::Boolean Field_3_19; // 0x9B
	::System::Single Field_3_0; // 0x9C
	::System::Boolean Field_3_17; // 0xA0
	::System::Boolean Field_3_9; // 0xA1
	::System::Boolean Field_3_11; // 0xA2
	::System::Boolean Field_3_15; // 0xA3
	::System::Int32 Field_3_4; // 0xA4
	::System::UInt32 Field_3_1; // 0xA8

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_7472FB6CC4015359__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7472FB6CC4015359__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7472FB6CC4015359_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7472FB6CC4015359_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7472FB6CC4015359_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::Class_3_7472FB6CC4015359_Class_2_4270FDAA7BABA466* Method_3_47536891B7FB273E()
	{
		return ((::Class_3_7472FB6CC4015359_Class_2_4270FDAA7BABA466*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7472FB6CC4015359_METHOD_3_47536891B7FB273E_OFFSET))(this);
	}

	static ::Class_3_7472FB6CC4015359* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_7472FB6CC4015359*(*)())((::PBYTE)hIl2Cpp + CLASS_3_7472FB6CC4015359_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::Class_1_48D56DACBE4271BC* Method_3_F2B94768004EB1C1()
	{
		return ((::Class_1_48D56DACBE4271BC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7472FB6CC4015359_METHOD_3_F2B94768004EB1C1_OFFSET))(this);
	}

	::System::Void Method_3_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_7472FB6CC4015359_METHOD_3_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7472FB6CC4015359_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_3_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_7472FB6CC4015359_METHOD_3_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::Class_1_48D56DACBE4271BC* Method_3_F2B94768004EB1C1_1()
	{
		return ((::Class_1_48D56DACBE4271BC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7472FB6CC4015359_METHOD_3_F2B94768004EB1C1_1_OFFSET))(this);
	}

	::System::Void Method_3_2222AB70F193BF96(::System::UInt32 a1, ::MoleMole::Config::CampType a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::Config::CampType, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_7472FB6CC4015359_METHOD_3_2222AB70F193BF96_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_C74E50CBD41F0264_2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_7472FB6CC4015359_METHOD_3_C74E50CBD41F0264_2_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7472FB6CC4015359_METHOD_3_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7472FB6CC4015359_METHOD_3_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Boolean Method_3_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7472FB6CC4015359_METHOD_3_F0E307B84478A272_OFFSET))(this);
	}
};
