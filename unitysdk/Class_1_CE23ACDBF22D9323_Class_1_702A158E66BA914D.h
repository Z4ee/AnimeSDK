#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_11A58A840528E5B2;
class Class_2_DF73794ED874FFFB;
namespace System { class Action; }
namespace System { class String; }

#define CLASS_1_CE23ACDBF22D9323_CLASS_1_702A158E66BA914D__CTOR_OFFSET UNITYSDK_OFFSET(0xD4754E0)

inline static constexpr unsigned int Class_1_CE23ACDBF22D9323_Class_1_702A158E66BA914D_TypeDefinitionIndex = 58375;

class Class_1_CE23ACDBF22D9323_Class_1_702A158E66BA914D : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::System::Action* Field_1_1; // 0x18
	::Class_1_11A58A840528E5B2* Field_1_3; // 0x20
	::Class_2_DF73794ED874FFFB* Field_1_2; // 0x28
	::System::String* Field_1_7; // 0x30
	::System::String* Field_1_8; // 0x38
	::System::String* Field_1_9; // 0x40
	::System::Boolean Field_1_4; // 0x48
	::System::Boolean Field_1_5; // 0x49
	::System::Boolean Field_1_6; // 0x4A

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE23ACDBF22D9323_CLASS_1_702A158E66BA914D__CTOR_OFFSET))(this);
	}
};
