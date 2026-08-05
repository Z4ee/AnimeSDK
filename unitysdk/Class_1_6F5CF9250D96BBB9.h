#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_06B506F3349584D7;
class Class_3_3C711A620EE5733D;
class Class_3_42E99B6238AA7291;
class Class_3_4F8F6678506B53F7_1;
class Class_3_898F909148BCCF95;
class Class_3_AE02BC8285203464_12;
class Class_3_C3F0E3B5AB5977AE_13;
class Class_3_CFE48D402ECBB0B9;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6F5CF9250D96BBB9_METHOD_1_0B875F13C0CA4D38_OFFSET UNITYSDK_OFFSET(0x128B3CD0)
#define CLASS_1_6F5CF9250D96BBB9_METHOD_1_5A5F2C00302AB2A0_OFFSET UNITYSDK_OFFSET(0x128B49C0)
#define CLASS_1_6F5CF9250D96BBB9_METHOD_1_D6D5C2F25B29E6BD_1_OFFSET UNITYSDK_OFFSET(0x128B3E50)
#define CLASS_1_6F5CF9250D96BBB9_METHOD_1_D6D5C2F25B29E6BD_OFFSET UNITYSDK_OFFSET(0x128B32A0)
#define CLASS_1_6F5CF9250D96BBB9__CTOR_OFFSET UNITYSDK_OFFSET(0x128B2EF0)

inline static constexpr unsigned int Class_1_6F5CF9250D96BBB9_TypeDefinitionIndex = 49605;

class Class_1_6F5CF9250D96BBB9 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_5; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_10; // 0x18
	::System::Collections::Generic::List_1<::Class_3_898F909148BCCF95*>* Field_1_14; // 0x20
	::System::Collections::Generic::List_1<::Class_3_42E99B6238AA7291*>* Field_1_8; // 0x28
	::System::Collections::Generic::List_1<::Class_3_C3F0E3B5AB5977AE_13*>* Field_1_4; // 0x30
	::System::Collections::Generic::List_1<::Class_3_CFE48D402ECBB0B9*>* Field_1_7; // 0x38
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_9; // 0x40
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_11; // 0x48
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_15; // 0x50
	::System::Collections::Generic::List_1<::Class_3_06B506F3349584D7*>* Field_1_1; // 0x58
	::System::Collections::Generic::List_1<::Class_3_3C711A620EE5733D*>* Field_1_0; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_6; // 0x68
	::System::Boolean Field_1_13; // 0x70
	::System::UInt32 Field_1_2; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F5CF9250D96BBB9__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D6D5C2F25B29E6BD(::Class_3_4F8F6678506B53F7_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_4F8F6678506B53F7_1*))((::PBYTE)hIl2Cpp + CLASS_1_6F5CF9250D96BBB9_METHOD_1_D6D5C2F25B29E6BD_OFFSET))(this, a1);
	}

	::System::Void Method_1_0B875F13C0CA4D38(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6F5CF9250D96BBB9_METHOD_1_0B875F13C0CA4D38_OFFSET))(this, a1);
	}

	::System::Void Method_1_D6D5C2F25B29E6BD_1(::Class_3_AE02BC8285203464_12* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_AE02BC8285203464_12*))((::PBYTE)hIl2Cpp + CLASS_1_6F5CF9250D96BBB9_METHOD_1_D6D5C2F25B29E6BD_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_5A5F2C00302AB2A0(::Class_3_06B506F3349584D7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_06B506F3349584D7*))((::PBYTE)hIl2Cpp + CLASS_1_6F5CF9250D96BBB9_METHOD_1_5A5F2C00302AB2A0_OFFSET))(this, a1);
	}
};
