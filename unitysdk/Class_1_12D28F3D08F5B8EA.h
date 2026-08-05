#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1EA8435E138F2E03;
class Class_1_81B5F058B515CAFD;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_12D28F3D08F5B8EA_METHOD_1_4AAB1E68080DFA20_OFFSET UNITYSDK_OFFSET(0x12587830)
#define CLASS_1_12D28F3D08F5B8EA__CTOR_OFFSET UNITYSDK_OFFSET(0x12587820)

inline static constexpr unsigned int Class_1_12D28F3D08F5B8EA_TypeDefinitionIndex = 73728;

class Class_1_12D28F3D08F5B8EA : public ::System::Object
{
public:
	::Class_1_1EA8435E138F2E03* Field_1_4; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::Class_1_81B5F058B515CAFD*>* Field_1_5; // 0x20
	::System::Int64 Field_1_7; // 0x28
	::System::Int64 Field_1_0; // 0x30
	::System::Boolean Field_1_6; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12D28F3D08F5B8EA__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_4AAB1E68080DFA20()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12D28F3D08F5B8EA_METHOD_1_4AAB1E68080DFA20_OFFSET))(this);
	}
};
