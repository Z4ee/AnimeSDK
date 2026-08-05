#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1ACEC71D301B3F14;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_AACC21FBE88566B5_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x1E6950E0)
#define CLASS_1_AACC21FBE88566B5_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E694E50)
#define CLASS_1_AACC21FBE88566B5__CTOR_OFFSET UNITYSDK_OFFSET(0x1E695060)

inline static constexpr unsigned int Class_1_AACC21FBE88566B5_TypeDefinitionIndex = 92704;

class Class_1_AACC21FBE88566B5 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_1ACEC71D301B3F14*>* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AACC21FBE88566B5__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AACC21FBE88566B5_TOSTRING_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AACC21FBE88566B5_METHOD_1_128774387667156B_OFFSET))(this);
	}
};
