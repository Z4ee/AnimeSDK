#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D7E535A5B5558900_Enum_3_8FE846AA208E3824.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/MoleMole/Config/GuidePoint_AutoGenStrategy.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_523;
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D7E535A5B5558900_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x167D3720)
#define CLASS_1_D7E535A5B5558900__CTOR_OFFSET UNITYSDK_OFFSET(0x167D34F0)

inline static constexpr unsigned int Class_1_D7E535A5B5558900_TypeDefinitionIndex = 83295;

class Class_1_D7E535A5B5558900 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_0; // 0x10
	::System::String* Field_1_17; // 0x18
	::System::Collections::Generic::List_1<::System::Func_1<::UnityEngine::Vector3>*>* Field_1_12; // 0x20
	::System::Object* Field_1_23; // 0x28
	::System::Collections::Generic::List_1<::System::String*>* Field_1_4; // 0x30
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_523*>* Field_1_5; // 0x38
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_15; // 0x40
	::MoleMole::Config::GuidePoint_AutoGenStrategy Field_1_16; // 0x48
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_1_6; // 0x98
	::System::Collections::Generic::List_1<::System::String*>* Field_1_10; // 0xA0
	::System::Collections::Generic::List_1<::System::String*>* Field_1_11; // 0xA8
	::System::Single Field_1_9; // 0xB0
	::System::Int32 Field_1_18; // 0xB4
	::Class_1_D7E535A5B5558900_Enum_3_8FE846AA208E3824 Field_1_3; // 0xB8
	::MoleMole::Config::CampType Field_1_8; // 0xBC
	::System::Int32 Field_1_13; // 0xC0
	::System::Boolean Field_1_2; // 0xC4
	::System::Boolean Field_1_19; // 0xC5
	::System::Boolean Field_1_14; // 0xC6
	::System::Boolean Field_1_7; // 0xC7
	::System::Boolean Field_1_1; // 0xC8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7E535A5B5558900__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7E535A5B5558900_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}
};
