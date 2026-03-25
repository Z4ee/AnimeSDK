#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_54897FD7051CEF6A;
class Class_2_49CAB3DE74280C58;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_9A2AA85558CB58A2_METHOD_1_1C8D83853CCD9B64_OFFSET UNITYSDK_OFFSET(0x113E7290)
#define CLASS_1_9A2AA85558CB58A2_METHOD_1_E875885542B220AD_OFFSET UNITYSDK_OFFSET(0x113E73C0)
#define CLASS_1_9A2AA85558CB58A2_METHOD_1_EDE32A962468ABF6_OFFSET UNITYSDK_OFFSET(0x113E6C60)
#define CLASS_1_9A2AA85558CB58A2__CTOR_OFFSET UNITYSDK_OFFSET(0x113E7560)

inline static constexpr unsigned int Class_1_9A2AA85558CB58A2_TypeDefinitionIndex = 63133;

class Class_1_9A2AA85558CB58A2 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A2AA85558CB58A2__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_EDE32A962468ABF6(::System::Int32 a1, ::Class_2_49CAB3DE74280C58* a2, ::Class_2_49CAB3DE74280C58* a3, ::System::Int32& a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_2_49CAB3DE74280C58*, ::Class_2_49CAB3DE74280C58*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_9A2AA85558CB58A2_METHOD_1_EDE32A962468ABF6_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_1C8D83853CCD9B64(::Class_2_49CAB3DE74280C58* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_49CAB3DE74280C58*))((::PBYTE)hIl2Cpp + CLASS_1_9A2AA85558CB58A2_METHOD_1_1C8D83853CCD9B64_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_54897FD7051CEF6A*>* Method_1_E875885542B220AD(::System::String* a1, ::Class_2_49CAB3DE74280C58* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_54897FD7051CEF6A*>*(*)(::PVOID, ::System::String*, ::Class_2_49CAB3DE74280C58*))((::PBYTE)hIl2Cpp + CLASS_1_9A2AA85558CB58A2_METHOD_1_E875885542B220AD_OFFSET))(this, a1, a2);
	}
};
