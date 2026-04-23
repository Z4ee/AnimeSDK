#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace CriWare { class CriAudioReadStream_Delegate; }
namespace CriWare { class CriAudioReadStream_InternalDelegate; }

#define CRIWARE_CRIAUDIOREADSTREAM_GET_CALLBACKFUNCTION_OFFSET UNITYSDK_OFFSET(0x12BFF7C0)
#define CRIWARE_CRIAUDIOREADSTREAM_GET_CALLBACKPOINTER_OFFSET UNITYSDK_OFFSET(0x12BFF7E0)
#define CRIWARE_CRIAUDIOREADSTREAM_SET_CALLBACKFUNCTION_OFFSET UNITYSDK_OFFSET(0x12BFF7D0)
#define CRIWARE_CRIAUDIOREADSTREAM_SET_CALLBACKPOINTER_OFFSET UNITYSDK_OFFSET(0x12BFF7F0)
#define CRIWARE_CRIAUDIOREADSTREAM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x12BFF810)
#define CRIWARE_CRIAUDIOREADSTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x12BFF800)

namespace CriWare
{
	inline static constexpr unsigned int CriAudioReadStream_TypeDefinitionIndex = 36831;

	class CriAudioReadStream : public ::System::Object
	{
	public:
		::CriWare::CriAudioReadStream_InternalDelegate* internalDelegate; // 0x10
		::System::IntPtr _callbackPointer_k__BackingField; // 0x18
		::System::IntPtr _callbackFunction_k__BackingField; // 0x20

		::System::Void _ctor(::System::IntPtr callbackFunction, ::System::IntPtr callbackPointer)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIAUDIOREADSTREAM__CTOR_OFFSET))(this, callbackFunction, callbackPointer);
		}

		::System::Void _ctor_1(::CriWare::CriAudioReadStream_Delegate* callback, ::System::Int32 numChannels, ::System::Int32 bufferSize)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAudioReadStream_Delegate*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIAUDIOREADSTREAM__CTOR_1_OFFSET))(this, callback, numChannels, bufferSize);
		}

		::System::IntPtr get_callbackFunction()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIAUDIOREADSTREAM_GET_CALLBACKFUNCTION_OFFSET))(this);
		}

		::System::Void set_callbackFunction(::System::IntPtr value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIAUDIOREADSTREAM_SET_CALLBACKFUNCTION_OFFSET))(this, value);
		}

		::System::IntPtr get_callbackPointer()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIAUDIOREADSTREAM_GET_CALLBACKPOINTER_OFFSET))(this);
		}

		::System::Void set_callbackPointer(::System::IntPtr value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIAUDIOREADSTREAM_SET_CALLBACKPOINTER_OFFSET))(this, value);
		}
	};
}
