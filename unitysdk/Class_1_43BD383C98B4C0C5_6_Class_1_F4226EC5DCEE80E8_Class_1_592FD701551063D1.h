#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define CLASS_1_43BD383C98B4C0C5_6_CLASS_1_F4226EC5DCEE80E8_CLASS_1_592FD701551063D1_METHOD_1_E052C39AF57FCBB8_OFFSET UNITYSDK_OFFSET(0x1F9BAB50)
#define CLASS_1_43BD383C98B4C0C5_6_CLASS_1_F4226EC5DCEE80E8_CLASS_1_592FD701551063D1__CTOR_OFFSET UNITYSDK_OFFSET(0x1F9BA8B0)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_6_Class_1_F4226EC5DCEE80E8_Class_1_592FD701551063D1_TypeDefinitionIndex = 28836;

class Class_1_43BD383C98B4C0C5_6_Class_1_F4226EC5DCEE80E8_Class_1_592FD701551063D1 : public ::System::Object
{
public:
	::System::Int32 Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_6_CLASS_1_F4226EC5DCEE80E8_CLASS_1_592FD701551063D1__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Int32> Method_1_E052C39AF57FCBB8(::System::String* a1, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* a2)
	{
		return ((::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Int32>(*)(::PVOID, ::System::String*, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_6_CLASS_1_F4226EC5DCEE80E8_CLASS_1_592FD701551063D1_METHOD_1_E052C39AF57FCBB8_OFFSET))(this, a1, a2);
	}
};
