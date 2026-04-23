#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace CriWare { class CriAudioWriteStream_Delegate; }
namespace CriWare { class CriAudioWriteStream_InternalDelegate; }

#define CRIWARE_CRIAUDIOWRITESTREAM_GET_CALLBACKFUNCTION_OFFSET UNITYSDK_OFFSET(0x12C00520)
#define CRIWARE_CRIAUDIOWRITESTREAM_GET_CALLBACKPOINTER_OFFSET UNITYSDK_OFFSET(0x12C00540)
#define CRIWARE_CRIAUDIOWRITESTREAM_SET_CALLBACKFUNCTION_OFFSET UNITYSDK_OFFSET(0x12C00530)
#define CRIWARE_CRIAUDIOWRITESTREAM_SET_CALLBACKPOINTER_OFFSET UNITYSDK_OFFSET(0x12C00550)
#define CRIWARE_CRIAUDIOWRITESTREAM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x12C00570)
#define CRIWARE_CRIAUDIOWRITESTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x12C00560)

namespace CriWare
{
	inline static constexpr unsigned int CriAudioWriteStream_TypeDefinitionIndex = 36835;

	class CriAudioWriteStream : public ::System::Object
	{
	public:
		::CriWare::CriAudioWriteStream_InternalDelegate* internalDelegate; // 0x10
		::System::IntPtr _callbackFunction_k__BackingField; // 0x18
		::System::IntPtr _callbackPointer_k__BackingField; // 0x20

		::System::Void _ctor(::System::IntPtr callbackFunction, ::System::IntPtr callbackPointer)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIAUDIOWRITESTREAM__CTOR_OFFSET))(this, callbackFunction, callbackPointer);
		}

		::System::Void _ctor_1(::CriWare::CriAudioWriteStream_Delegate* callback, ::System::Int32 numChannels, ::System::Int32 bufferSize)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAudioWriteStream_Delegate*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIAUDIOWRITESTREAM__CTOR_1_OFFSET))(this, callback, numChannels, bufferSize);
		}

		::System::IntPtr get_callbackFunction()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIAUDIOWRITESTREAM_GET_CALLBACKFUNCTION_OFFSET))(this);
		}

		::System::Void set_callbackFunction(::System::IntPtr value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIAUDIOWRITESTREAM_SET_CALLBACKFUNCTION_OFFSET))(this, value);
		}

		::System::IntPtr get_callbackPointer()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIAUDIOWRITESTREAM_GET_CALLBACKPOINTER_OFFSET))(this);
		}

		::System::Void set_callbackPointer(::System::IntPtr value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIAUDIOWRITESTREAM_SET_CALLBACKPOINTER_OFFSET))(this, value);
		}
	};
}
