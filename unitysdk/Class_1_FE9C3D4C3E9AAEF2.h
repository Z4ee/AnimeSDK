#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_FE9C3D4C3E9AAEF2_METHOD_1_70681DEC15D070A4_OFFSET UNITYSDK_OFFSET(0x1A0BBF70)
#define CLASS_1_FE9C3D4C3E9AAEF2_METHOD_1_80C2F584D76D1A12_OFFSET UNITYSDK_OFFSET(0x1A0BBF10)
#define CLASS_1_FE9C3D4C3E9AAEF2__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0BBF00)

inline static constexpr unsigned int Class_1_FE9C3D4C3E9AAEF2_TypeDefinitionIndex = 57671;

class Class_1_FE9C3D4C3E9AAEF2 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE9C3D4C3E9AAEF2__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_80C2F584D76D1A12(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_FE9C3D4C3E9AAEF2_METHOD_1_80C2F584D76D1A12_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_70681DEC15D070A4(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FE9C3D4C3E9AAEF2_METHOD_1_70681DEC15D070A4_OFFSET))(a1, a2, a3, a4);
	}
};
