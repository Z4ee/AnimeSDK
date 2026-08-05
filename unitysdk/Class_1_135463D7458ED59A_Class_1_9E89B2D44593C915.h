#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_135463D7458ED59A_CLASS_1_9E89B2D44593C915__CTOR_OFFSET UNITYSDK_OFFSET(0x15308510)

inline static constexpr unsigned int Class_1_135463D7458ED59A_Class_1_9E89B2D44593C915_TypeDefinitionIndex = 10801;

class Class_1_135463D7458ED59A_Class_1_9E89B2D44593C915 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_11; // 0x10
	::System::String* Field_1_0; // 0x18
	::System::Int32 Field_1_1; // 0x20
	::System::Int32 Field_1_2; // 0x24
	::System::Int32 Field_1_5; // 0x28
	::System::Int32 Field_1_7; // 0x2C
	::System::Boolean Field_1_4; // 0x30
	::System::Int32 Field_1_6; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_135463D7458ED59A_CLASS_1_9E89B2D44593C915__CTOR_OFFSET))(this);
	}
};
