#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D00124C4966CEBFC__CTOR_OFFSET UNITYSDK_OFFSET(0x15BB3A90)

inline static constexpr unsigned int Class_1_D00124C4966CEBFC_TypeDefinitionIndex = 72625;

class Class_1_D00124C4966CEBFC : public ::System::Object
{
public:
	::System::String* Field_1_6; // 0x10
	::System::Collections::Generic::List_1<::System::Tuple_2<::System::Int32, ::System::Single>*>* Field_1_0; // 0x18
	::System::Collections::Generic::List_1<::System::Tuple_2<::System::Int32, ::System::Single>*>* Field_1_1; // 0x20
	::System::Int32 Field_1_4; // 0x28
	::System::Boolean Field_1_3; // 0x2C
	::System::UInt32 Field_1_5; // 0x30
	::MoleMole::Config::ScreenEffectType Field_1_7; // 0x34
	::System::Int32 Field_1_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D00124C4966CEBFC__CTOR_OFFSET))(this);
	}
};
