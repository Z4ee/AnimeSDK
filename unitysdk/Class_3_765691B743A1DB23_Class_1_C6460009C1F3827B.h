#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/GroupMemberIdentifier.h"
#include "unitysdk/System/Object.h"

class Class_3_765691B743A1DB23_Class_1_E60DE679F7F7F44B;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_765691B743A1DB23_CLASS_1_C6460009C1F3827B__CTOR_OFFSET UNITYSDK_OFFSET(0x14BB91A0)

inline static constexpr unsigned int Class_3_765691B743A1DB23_Class_1_C6460009C1F3827B_TypeDefinitionIndex = 72211;

class Class_3_765691B743A1DB23_Class_1_C6460009C1F3827B : public ::System::Object
{
public:
	::Class_3_765691B743A1DB23_Class_1_E60DE679F7F7F44B* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::Foundation::ViewObject::GroupMemberIdentifier>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_765691B743A1DB23_CLASS_1_C6460009C1F3827B__CTOR_OFFSET))(this);
	}
};
