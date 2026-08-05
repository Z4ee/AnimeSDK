#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_D1E41A156A4C6944_CLASS_1_444D2EF40DF11E61_METHOD_1_0CD46CA9150793AD_OFFSET UNITYSDK_OFFSET(0x194576D0)
#define CLASS_1_D1E41A156A4C6944_CLASS_1_444D2EF40DF11E61__CTOR_OFFSET UNITYSDK_OFFSET(0x194576C0)

inline static constexpr unsigned int Class_1_D1E41A156A4C6944_Class_1_444D2EF40DF11E61_TypeDefinitionIndex = 57892;

class Class_1_D1E41A156A4C6944_Class_1_444D2EF40DF11E61 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::System::Action_1<::System::String*>* Field_1_1; // 0x18
	::System::Action_1<::System::String*>* Field_1_2; // 0x20
	::System::Int32 Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1E41A156A4C6944_CLASS_1_444D2EF40DF11E61__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0CD46CA9150793AD(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D1E41A156A4C6944_CLASS_1_444D2EF40DF11E61_METHOD_1_0CD46CA9150793AD_OFFSET))(this, a1);
	}
};
