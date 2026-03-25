#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class BatchAnimationClipGroup;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_F84A89D9E3CCB841_CLASS_3_A6F48C4639F89890_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x10987300)
#define CLASS_1_F84A89D9E3CCB841_CLASS_3_A6F48C4639F89890_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x10987330)
#define CLASS_1_F84A89D9E3CCB841_CLASS_3_A6F48C4639F89890_INVOKE_OFFSET UNITYSDK_OFFSET(0x10985750)
#define CLASS_1_F84A89D9E3CCB841_CLASS_3_A6F48C4639F89890__CTOR_OFFSET UNITYSDK_OFFSET(0x109872E0)

inline static constexpr unsigned int Class_1_F84A89D9E3CCB841_Class_3_A6F48C4639F89890_TypeDefinitionIndex = 56626;

class Class_1_F84A89D9E3CCB841_Class_3_A6F48C4639F89890 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_F84A89D9E3CCB841_CLASS_3_A6F48C4639F89890__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::BatchAnimationClipGroup* a1)
	{
		return ((::System::Void(*)(::PVOID, ::BatchAnimationClipGroup*))((::PBYTE)hIl2Cpp + CLASS_1_F84A89D9E3CCB841_CLASS_3_A6F48C4639F89890_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::BatchAnimationClipGroup* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::BatchAnimationClipGroup*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F84A89D9E3CCB841_CLASS_3_A6F48C4639F89890_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_F84A89D9E3CCB841_CLASS_3_A6F48C4639F89890_ENDINVOKE_OFFSET))(this, a1);
	}
};
