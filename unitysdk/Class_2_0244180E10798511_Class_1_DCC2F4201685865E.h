#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_2C5A03A90BB5E900.h"
#include "unitysdk/Struct_2_76CCAEE20B3AE57C.h"
#include "unitysdk/System/Object.h"

class Class_2_0244180E10798511;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_2_0244180E10798511_CLASS_1_DCC2F4201685865E__CTOR_OFFSET UNITYSDK_OFFSET(0xF518060)

inline static constexpr unsigned int Class_2_0244180E10798511_Class_1_DCC2F4201685865E_TypeDefinitionIndex = 58102;

class Class_2_0244180E10798511_Class_1_DCC2F4201685865E : public ::System::Object
{
public:
	::System::Collections::Generic::IEnumerable_1<::Struct_2_76CCAEE20B3AE57C>* Field_1_0; // 0x10
	::Class_2_0244180E10798511* Field_1_1; // 0x18
	::System::Action_1<::Struct_2_2C5A03A90BB5E900>* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0244180E10798511_CLASS_1_DCC2F4201685865E__CTOR_OFFSET))(this);
	}
};
