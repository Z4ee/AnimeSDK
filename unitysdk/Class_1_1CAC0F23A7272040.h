#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1CAC0F23A7272040_Enum_3_8FE846AA208E3824.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_261;
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1CAC0F23A7272040_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1133EF00)
#define CLASS_1_1CAC0F23A7272040__CTOR_OFFSET UNITYSDK_OFFSET(0x1133ECF0)

inline static constexpr unsigned int Class_1_1CAC0F23A7272040_TypeDefinitionIndex = 67139;

class Class_1_1CAC0F23A7272040 : public ::System::Object
{
public:
	::System::String* Field_1_17; // 0x10
	::System::Collections::Generic::List_1<::System::String*>* Field_1_8; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* Field_1_9; // 0x20
	::System::Collections::Generic::List_1<::System::Func_1<::UnityEngine::Vector3>*>* Field_1_14; // 0x28
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_1_5; // 0x30
	::System::Collections::Generic::List_1<::System::String*>* Field_1_7; // 0x38
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_3; // 0x40
	::System::Object* Field_1_18; // 0x48
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_261*>* Field_1_6; // 0x50
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_12; // 0x58
	::System::Single Field_1_10; // 0x60
	::System::Boolean Field_1_1; // 0x64
	::System::Boolean Field_1_2; // 0x65
	::System::Boolean Field_1_15; // 0x66
	::System::Boolean Field_1_13; // 0x67
	::System::Boolean Field_1_4; // 0x68
	::Class_1_1CAC0F23A7272040_Enum_3_8FE846AA208E3824 Field_1_0; // 0x6C
	::MoleMole::Config::CampType Field_1_11; // 0x70
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
