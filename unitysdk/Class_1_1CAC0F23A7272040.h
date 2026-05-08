#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1CAC0F23A7272040_Enum_3_8FE846AA208E3824.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_205;
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1CAC0F23A7272040_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x12ABEFE0)
#define CLASS_1_1CAC0F23A7272040__CTOR_OFFSET UNITYSDK_OFFSET(0x12ABEDC0)

inline static constexpr unsigned int Class_1_1CAC0F23A7272040_TypeDefinitionIndex = 79650;

class Class_1_1CAC0F23A7272040 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Func_1<::UnityEngine::Vector3>*>* Field_1_14; // 0x10
	::System::String* Field_1_17; // 0x18
	::System::Object* Field_1_18; // 0x20
	::System::Collections::Generic::List_1<::System::String*>* Field_1_7; // 0x28
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_1_5; // 0x30
	::System::Collections::Generic::List_1<::System::String*>* Field_1_8; // 0x38
	::System::Collections::Generic::List_1<::System::String*>* Field_1_9; // 0x40
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_12; // 0x48
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_205*>* Field_1_6; // 0x50
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_3; // 0x58
	::System::Boolean Field_1_1; // 0x60
	::System::Boolean Field_1_2; // 0x61
	::MoleMole::Config::CampType Field_1_11; // 0x64
	::Class_1_1CAC0F23A7272040_Enum_3_8FE846AA208E3824 Field_1_0; // 0x68
	::System::Single Field_1_10; // 0x6C
	::System::Boolean Field_1_15; // 0x70
	::System::Boolean Field_1_4; // 0x71
	::System::Boolean Field_1_13; // 0x72
	::System::Int32 Field_1_16; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CAC0F23A7272040__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CAC0F23A7272040_METHOD_1_F0E307B84478A272_OFFSET))(this);
	}
};
