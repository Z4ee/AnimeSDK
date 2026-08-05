#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_1_FCD23D791C67FD42_CLASS_1_A7458404C16FF427_CLASS_3_281CE7FB57584482_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x13588990)
#define CLASS_1_FCD23D791C67FD42_CLASS_1_A7458404C16FF427_CLASS_3_281CE7FB57584482_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x135889C0)
#define CLASS_1_FCD23D791C67FD42_CLASS_1_A7458404C16FF427_CLASS_3_281CE7FB57584482_INVOKE_OFFSET UNITYSDK_OFFSET(0x13588470)
#define CLASS_1_FCD23D791C67FD42_CLASS_1_A7458404C16FF427_CLASS_3_281CE7FB57584482__CTOR_OFFSET UNITYSDK_OFFSET(0x13588450)

inline static constexpr unsigned int Class_1_FCD23D791C67FD42_Class_1_A7458404C16FF427_Class_3_281CE7FB57584482_TypeDefinitionIndex = 65920;

class Class_1_FCD23D791C67FD42_Class_1_A7458404C16FF427_Class_3_281CE7FB57584482 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_FCD23D791C67FD42_CLASS_1_A7458404C16FF427_CLASS_3_281CE7FB57584482__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FCD23D791C67FD42_CLASS_1_A7458404C16FF427_CLASS_3_281CE7FB57584482_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::System::Object* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FCD23D791C67FD42_CLASS_1_A7458404C16FF427_CLASS_3_281CE7FB57584482_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_FCD23D791C67FD42_CLASS_1_A7458404C16FF427_CLASS_3_281CE7FB57584482_ENDINVOKE_OFFSET))(this, a1);
	}
};
