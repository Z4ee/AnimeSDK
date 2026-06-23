#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0D6706375CDAAE8C;
class Class_1_82A04EA7E45454A5_1;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0C18835FA06ACE81_METHOD_1_E092EFE670864887_OFFSET UNITYSDK_OFFSET(0x13FB6400)
#define CLASS_1_0C18835FA06ACE81__CTOR_OFFSET UNITYSDK_OFFSET(0x13FB6370)

inline static constexpr unsigned int Class_1_0C18835FA06ACE81_TypeDefinitionIndex = 71166;

class Class_1_0C18835FA06ACE81 : public ::System::Object
{
public:
	::System::String* Field_1_3; // 0x10
	::Class_1_82A04EA7E45454A5_1* Field_1_11; // 0x18
	::System::String* Field_1_9; // 0x20
	::System::String* Field_1_7; // 0x28
	::System::String* Field_1_2; // 0x30
	::System::String* Field_1_1; // 0x38
	::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* Field_1_10; // 0x40
	::System::String* Field_1_0; // 0x48
	::System::Int64 Field_1_6; // 0x50
	::System::UInt64 Field_1_4; // 0x58
	::System::Boolean Field_1_8; // 0x60
	::System::UInt64 Field_1_5; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C18835FA06ACE81__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E092EFE670864887()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C18835FA06ACE81_METHOD_1_E092EFE670864887_OFFSET))(this);
	}
};
