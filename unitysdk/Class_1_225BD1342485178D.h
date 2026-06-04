#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_225BD1342485178D_METHOD_1_14F4328832FC0D38_OFFSET UNITYSDK_OFFSET(0xAF3BF30)
#define CLASS_1_225BD1342485178D_METHOD_1_8FA10442D8021CE2_OFFSET UNITYSDK_OFFSET(0xAF3C310)
#define CLASS_1_225BD1342485178D__CTOR_OFFSET UNITYSDK_OFFSET(0xAF3C760)

inline static constexpr unsigned int Class_1_225BD1342485178D_TypeDefinitionIndex = 57092;

class Class_1_225BD1342485178D : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_225BD1342485178D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_14F4328832FC0D38(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_225BD1342485178D_METHOD_1_14F4328832FC0D38_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8FA10442D8021CE2(::System::String* a1, ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*>>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*>>*))((::PBYTE)hIl2Cpp + CLASS_1_225BD1342485178D_METHOD_1_8FA10442D8021CE2_OFFSET))(this, a1, a2);
	}
};
