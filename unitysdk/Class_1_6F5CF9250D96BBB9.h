#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_06B506F3349584D7;
class Class_3_3C711A620EE5733D;
class Class_3_42E99B6238AA7291_2;
class Class_3_898F909148BCCF95;
class Class_3_AE02BC8285203464_26;
class Class_3_AE02BC8285203464_40;
class Class_3_C3F0E3B5AB5977AE_44;
class Class_3_CFE48D402ECBB0B9;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6F5CF9250D96BBB9_METHOD_1_0B875F13C0CA4D38_OFFSET UNITYSDK_OFFSET(0xF5D0F30)
#define CLASS_1_6F5CF9250D96BBB9_METHOD_1_5A5F2C00302AB2A0_OFFSET UNITYSDK_OFFSET(0xF5D0580)
#define CLASS_1_6F5CF9250D96BBB9_METHOD_1_62341E74E99EEE86_1_OFFSET UNITYSDK_OFFSET(0xF5D10B0)
#define CLASS_1_6F5CF9250D96BBB9_METHOD_1_62341E74E99EEE86_OFFSET UNITYSDK_OFFSET(0xF5D0800)
#define CLASS_1_6F5CF9250D96BBB9__CTOR_OFFSET UNITYSDK_OFFSET(0xF5D01D0)

inline static constexpr unsigned int Class_1_6F5CF9250D96BBB9_TypeDefinitionIndex = 82176;

class Class_1_6F5CF9250D96BBB9 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_4; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_5; // 0x18
	::System::Collections::Generic::List_1<::Class_3_C3F0E3B5AB5977AE_44*>* Field_1_6; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_9; // 0x28
	::System::Collections::Generic::List_1<::Class_3_CFE48D402ECBB0B9*>* Field_1_3; // 0x30
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_11; // 0x38
	::System::Collections::Generic::List_1<::Class_3_06B506F3349584D7*>* Field_1_1; // 0x40
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_7; // 0x48
	::System::Collections::Generic::List_1<::Class_3_898F909148BCCF95*>* Field_1_12; // 0x50
	::System::Collections::Generic::List_1<::Class_3_3C711A620EE5733D*>* Field_1_2; // 0x58
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_8; // 0x60
	::System::Collections::Generic::List_1<::Class_3_42E99B6238AA7291_2*>* Field_1_10; // 0x68
	::System::UInt32 Field_1_0; // 0x70
	::System::Boolean Field_1_13; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F5CF9250D96BBB9__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5A5F2C00302AB2A0(::Class_3_06B506F3349584D7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_06B506F3349584D7*))((::PBYTE)hIl2Cpp + CLASS_1_6F5CF9250D96BBB9_METHOD_1_5A5F2C00302AB2A0_OFFSET))(this, a1);
	}

	::System::Void Method_1_62341E74E99EEE86(::Class_3_AE02BC8285203464_40* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_AE02BC8285203464_40*))((::PBYTE)hIl2Cpp + CLASS_1_6F5CF9250D96BBB9_METHOD_1_62341E74E99EEE86_OFFSET))(this, a1);
	}

	::System::Void Method_1_0B875F13C0CA4D38(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6F5CF9250D96BBB9_METHOD_1_0B875F13C0CA4D38_OFFSET))(this, a1);
	}

	::System::Void Method_1_62341E74E99EEE86_1(::Class_3_AE02BC8285203464_26* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_AE02BC8285203464_26*))((::PBYTE)hIl2Cpp + CLASS_1_6F5CF9250D96BBB9_METHOD_1_62341E74E99EEE86_1_OFFSET))(this, a1);
	}
};
