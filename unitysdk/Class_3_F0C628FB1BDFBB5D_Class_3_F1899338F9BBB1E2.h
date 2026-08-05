#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FGameplayTagContainer.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_3_F0C628FB1BDFBB5D_CLASS_3_F1899338F9BBB1E2_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x10B248A0)
#define CLASS_3_F0C628FB1BDFBB5D_CLASS_3_F1899338F9BBB1E2_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x10B24950)
#define CLASS_3_F0C628FB1BDFBB5D_CLASS_3_F1899338F9BBB1E2_INVOKE_OFFSET UNITYSDK_OFFSET(0x10B24560)
#define CLASS_3_F0C628FB1BDFBB5D_CLASS_3_F1899338F9BBB1E2__CTOR_OFFSET UNITYSDK_OFFSET(0x10B24540)

inline static constexpr unsigned int Class_3_F0C628FB1BDFBB5D_Class_3_F1899338F9BBB1E2_TypeDefinitionIndex = 63331;

class Class_3_F0C628FB1BDFBB5D_Class_3_F1899338F9BBB1E2 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_F0C628FB1BDFBB5D_CLASS_3_F1899338F9BBB1E2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::Foundation::Unreal::FGameplayTagContainer& a1, ::Foundation::Unreal::FGameplayTagContainer& a2, ::Foundation::Unreal::FGameplayTagContainer& a3)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTagContainer&, ::Foundation::Unreal::FGameplayTagContainer&, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + CLASS_3_F0C628FB1BDFBB5D_CLASS_3_F1899338F9BBB1E2_INVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::IAsyncResult* BeginInvoke(::Foundation::Unreal::FGameplayTagContainer& a1, ::Foundation::Unreal::FGameplayTagContainer& a2, ::Foundation::Unreal::FGameplayTagContainer& a3, ::System::AsyncCallback* a4, ::System::Object* a5)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Foundation::Unreal::FGameplayTagContainer&, ::Foundation::Unreal::FGameplayTagContainer&, ::Foundation::Unreal::FGameplayTagContainer&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_F0C628FB1BDFBB5D_CLASS_3_F1899338F9BBB1E2_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void EndInvoke(::Foundation::Unreal::FGameplayTagContainer& a1, ::Foundation::Unreal::FGameplayTagContainer& a2, ::Foundation::Unreal::FGameplayTagContainer& a3, ::System::IAsyncResult* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTagContainer&, ::Foundation::Unreal::FGameplayTagContainer&, ::Foundation::Unreal::FGameplayTagContainer&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_F0C628FB1BDFBB5D_CLASS_3_F1899338F9BBB1E2_ENDINVOKE_OFFSET))(this, a1, a2, a3, a4);
	}
};
