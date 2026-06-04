#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CRIWARE_CRIAUDIOREADSTREAM_DELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x146BBD50)
#define CRIWARE_CRIAUDIOREADSTREAM_DELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x146BBDB0)
#define CRIWARE_CRIAUDIOREADSTREAM_DELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x146BBCC0)
#define CRIWARE_CRIAUDIOREADSTREAM_DELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x146BBCD0)

namespace CriWare
{
	inline static constexpr unsigned int CriAudioReadStream_Delegate_TypeDefinitionIndex = 37133;

	class CriAudioReadStream_Delegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIAUDIOREADSTREAM_DELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 Invoke(::Il2CppArray<::Il2CppArray<::System::Single>*>* a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::Il2CppArray<::Il2CppArray<::System::Single>*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIAUDIOREADSTREAM_DELEGATE_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::Il2CppArray<::Il2CppArray<::System::Single>*>* a1, ::System::UInt32 a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::Il2CppArray<::System::Single>*>*, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CRIWARE_CRIAUDIOREADSTREAM_DELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::UInt32 EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CRIWARE_CRIAUDIOREADSTREAM_DELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
