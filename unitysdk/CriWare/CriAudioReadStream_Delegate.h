#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CRIWARE_CRIAUDIOREADSTREAM_DELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x11A31820)
#define CRIWARE_CRIAUDIOREADSTREAM_DELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x11A31880)
#define CRIWARE_CRIAUDIOREADSTREAM_DELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x11A312A0)
#define CRIWARE_CRIAUDIOREADSTREAM_DELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x11A31800)

namespace CriWare
{
	inline static constexpr unsigned int CriAudioReadStream_Delegate_TypeDefinitionIndex = 31113;

	class CriAudioReadStream_Delegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIAUDIOREADSTREAM_DELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::UInt32 Invoke(::Il2CppArray<::Il2CppArray<::System::Single>*>* buffer, ::System::UInt32 numSamples)
		{
			return ((::System::UInt32(*)(::PVOID, ::Il2CppArray<::Il2CppArray<::System::Single>*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIAUDIOREADSTREAM_DELEGATE_INVOKE_OFFSET))(this, buffer, numSamples);
		}

		::System::IAsyncResult* BeginInvoke(::Il2CppArray<::Il2CppArray<::System::Single>*>* buffer, ::System::UInt32 numSamples, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::Il2CppArray<::System::Single>*>*, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CRIWARE_CRIAUDIOREADSTREAM_DELEGATE_BEGININVOKE_OFFSET))(this, buffer, numSamples, callback, object);
		}

		::System::UInt32 EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CRIWARE_CRIAUDIOREADSTREAM_DELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
