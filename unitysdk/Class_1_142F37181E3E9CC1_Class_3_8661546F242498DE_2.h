#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_1_142F37181E3E9CC1_CLASS_3_8661546F242498DE_2_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x127E3490)
#define CLASS_1_142F37181E3E9CC1_CLASS_3_8661546F242498DE_2_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x127E34C0)
#define CLASS_1_142F37181E3E9CC1_CLASS_3_8661546F242498DE_2_INVOKE_OFFSET UNITYSDK_OFFSET(0x127E23E0)
#define CLASS_1_142F37181E3E9CC1_CLASS_3_8661546F242498DE_2__CTOR_OFFSET UNITYSDK_OFFSET(0x127E3470)

inline static constexpr unsigned int Class_1_142F37181E3E9CC1_Class_3_8661546F242498DE_2_TypeDefinitionIndex = 63872;

class Class_1_142F37181E3E9CC1_Class_3_8661546F242498DE_2 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1_142F37181E3E9CC1_CLASS_3_8661546F242498DE_2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_142F37181E3E9CC1_CLASS_3_8661546F242498DE_2_INVOKE_OFFSET))(this, a1);
	}

	::System::IAsyncResult* BeginInvoke(::System::String* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_142F37181E3E9CC1_CLASS_3_8661546F242498DE_2_BEGININVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_1_142F37181E3E9CC1_CLASS_3_8661546F242498DE_2_ENDINVOKE_OFFSET))(this, a1);
	}
};
