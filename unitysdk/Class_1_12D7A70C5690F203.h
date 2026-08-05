#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MonoUIHideItem_ShowStatus.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIRealtimeQTEButtonBaseController; }
namespace MoleMole { class UIWindowController; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class RectTransform; }

#define CLASS_1_12D7A70C5690F203_METHOD_1_611142A6ECF0D805_OFFSET UNITYSDK_OFFSET(0x17C76DE0)
#define CLASS_1_12D7A70C5690F203_METHOD_1_7B32E6463125895B_OFFSET UNITYSDK_OFFSET(0x17C76640)
#define CLASS_1_12D7A70C5690F203_METHOD_1_7DB540F7EC4E5E2C_OFFSET UNITYSDK_OFFSET(0x17C76C80)
#define CLASS_1_12D7A70C5690F203_METHOD_1_9F8F6511E8EF1235_OFFSET UNITYSDK_OFFSET(0x17C77070)
#define CLASS_1_12D7A70C5690F203_METHOD_1_B51C9FF6BDC7B3F5_OFFSET UNITYSDK_OFFSET(0x17C76900)
#define CLASS_1_12D7A70C5690F203_METHOD_1_B6BF2A1BCE9B9659_OFFSET UNITYSDK_OFFSET(0x17C76E90)
#define CLASS_1_12D7A70C5690F203_METHOD_1_D8CB67039D051532_OFFSET UNITYSDK_OFFSET(0x17C77330)
#define CLASS_1_12D7A70C5690F203__CTOR_OFFSET UNITYSDK_OFFSET(0x17C764E0)

inline static constexpr unsigned int Class_1_12D7A70C5690F203_TypeDefinitionIndex = 54017;

class Class_1_12D7A70C5690F203 : public ::System::Object
{
public:
	::UnityEngine::RectTransform* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::UIRealtimeQTEButtonBaseController*>* Field_1_7; // 0x18
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_1_6; // 0x20
	::MoleMole::UIWindowController* Field_1_1; // 0x28
	::MonoUIHideItem_ShowStatus Field_1_5; // 0x30

	::System::Void _ctor(::MoleMole::UIWindowController* a1, ::UnityEngine::RectTransform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + CLASS_1_12D7A70C5690F203__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7B32E6463125895B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12D7A70C5690F203_METHOD_1_7B32E6463125895B_OFFSET))(this);
	}

	::System::Void Method_1_B51C9FF6BDC7B3F5(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_12D7A70C5690F203_METHOD_1_B51C9FF6BDC7B3F5_OFFSET))(this, a1);
	}

	::System::Void Method_1_7DB540F7EC4E5E2C(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_12D7A70C5690F203_METHOD_1_7DB540F7EC4E5E2C_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_1_611142A6ECF0D805(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_12D7A70C5690F203_METHOD_1_611142A6ECF0D805_OFFSET))(a1);
	}

	::System::Void Method_1_B6BF2A1BCE9B9659(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_12D7A70C5690F203_METHOD_1_B6BF2A1BCE9B9659_OFFSET))(this, a1);
	}

	::System::Void Method_1_9F8F6511E8EF1235()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12D7A70C5690F203_METHOD_1_9F8F6511E8EF1235_OFFSET))(this);
	}

	::System::Void Method_1_D8CB67039D051532(::System::String* a1, ::MonoUIHideItem_ShowStatus a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MonoUIHideItem_ShowStatus))((::PBYTE)hIl2Cpp + CLASS_1_12D7A70C5690F203_METHOD_1_D8CB67039D051532_OFFSET))(this, a1, a2);
	}
};
