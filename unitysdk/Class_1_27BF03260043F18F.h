#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace R3 { template <typename T> class ReactiveProperty_1; }
namespace System { class String; }

#define CLASS_1_27BF03260043F18F_GET_TITLE_OFFSET UNITYSDK_OFFSET(0xD26F290)
#define CLASS_1_27BF03260043F18F_METHOD_1_9CE3056B66B7573D_OFFSET UNITYSDK_OFFSET(0xD26F2A0)
#define CLASS_1_27BF03260043F18F__CTOR_OFFSET UNITYSDK_OFFSET(0xD26F380)

inline static constexpr unsigned int Class_1_27BF03260043F18F_TypeDefinitionIndex = 50393;

class Class_1_27BF03260043F18F : public ::System::Object
{
public:
	::R3::ReactiveProperty_1<::System::String*>* _Title_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_27BF03260043F18F__CTOR_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::System::String*>* get_Title()
	{
		return ((::R3::ReactiveProperty_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_27BF03260043F18F_GET_TITLE_OFFSET))(this);
	}

	::System::Void Method_1_9CE3056B66B7573D(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_27BF03260043F18F_METHOD_1_9CE3056B66B7573D_OFFSET))(this, a1);
	}
};
