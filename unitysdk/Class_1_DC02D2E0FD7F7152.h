#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_D02DABCF41CDA271;
class Class_2_DF2C726EEEEC912D;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_1_DC02D2E0FD7F7152__CTOR_OFFSET UNITYSDK_OFFSET(0x111B0800)

inline static constexpr unsigned int Class_1_DC02D2E0FD7F7152_TypeDefinitionIndex = 82966;

class Class_1_DC02D2E0FD7F7152 : public ::System::Object
{
public:
	::Class_2_DF2C726EEEEC912D* Field_1_0; // 0x10
	::Class_2_D02DABCF41CDA271* Field_1_1; // 0x18
	::System::Collections::Generic::IList_1<::System::Int32>* Field_1_5; // 0x20
	::System::String* Field_1_3; // 0x28
	::System::Collections::Generic::IList_1<::System::String*>* Field_1_4; // 0x30
	::System::String* Field_1_6; // 0x38
	::System::Int32 Field_1_2; // 0x40
	::System::Boolean Field_1_7; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC02D2E0FD7F7152__CTOR_OFFSET))(this);
	}
};
