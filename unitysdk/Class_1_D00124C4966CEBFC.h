#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D00124C4966CEBFC__CTOR_OFFSET UNITYSDK_OFFSET(0x162C5C60)

inline static constexpr unsigned int Class_1_D00124C4966CEBFC_TypeDefinitionIndex = 87580;

class Class_1_D00124C4966CEBFC : public ::System::Object
{
public:
	::System::String* Field_1_5; // 0x10
	::System::Collections::Generic::List_1<::System::Tuple_2<::System::Int32, ::System::Single>*>* Field_1_2; // 0x18
	::System::Collections::Generic::List_1<::System::Tuple_2<::System::Int32, ::System::Single>*>* Field_1_3; // 0x20
	::System::UInt32 Field_1_6; // 0x28
	::System::Int32 Field_1_7; // 0x2C
	::System::Int32 Field_1_1; // 0x30
	::System::Boolean Field_1_0; // 0x34
	::MoleMole::Config::ScreenEffectType Field_1_4; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D00124C4966CEBFC__CTOR_OFFSET))(this);
	}
};
