#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A509A996D269C6F2;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define CLASS_1_C062860557C4F0A0_METHOD_1_19844080C13BA28F_OFFSET UNITYSDK_OFFSET(0x15653540)
#define CLASS_1_C062860557C4F0A0_METHOD_1_4628F59881B23161_OFFSET UNITYSDK_OFFSET(0x156537E0)
#define CLASS_1_C062860557C4F0A0_METHOD_1_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0x15653880)
#define CLASS_1_C062860557C4F0A0_METHOD_1_6691493280AD4EE1_OFFSET UNITYSDK_OFFSET(0x15653920)
#define CLASS_1_C062860557C4F0A0__CTOR_OFFSET UNITYSDK_OFFSET(0x156534C0)

inline static constexpr unsigned int Class_1_C062860557C4F0A0_TypeDefinitionIndex = 78224;

class Class_1_C062860557C4F0A0 : public ::System::Object
{
public:
	::System::Collections::Generic::Stack_1<::Class_1_A509A996D269C6F2*>* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C062860557C4F0A0__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_19844080C13BA28F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C062860557C4F0A0_METHOD_1_19844080C13BA28F_OFFSET))(this);
	}

	::System::UInt32 Method_1_4628F59881B23161()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C062860557C4F0A0_METHOD_1_4628F59881B23161_OFFSET))(this);
	}

	::System::Boolean Method_1_4DA6D4A624E42CAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C062860557C4F0A0_METHOD_1_4DA6D4A624E42CAB_OFFSET))(this);
	}

	::System::Void Method_1_6691493280AD4EE1(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C062860557C4F0A0_METHOD_1_6691493280AD4EE1_OFFSET))(this, a1, a2);
	}
};
