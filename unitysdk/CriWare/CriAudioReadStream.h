#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace CriWare { class CriAudioReadStream_Delegate; }
namespace CriWare { class CriAudioReadStream_InternalDelegate; }

#define CRIWARE_CRIAUDIOREADSTREAM_GET_CALLBACKFUNCTION_OFFSET UNITYSDK_OFFSET(0x1B7AAAD0)
#define CRIWARE_CRIAUDIOREADSTREAM_GET_CALLBACKPOINTER_OFFSET UNITYSDK_OFFSET(0x1B7AAAF0)
#define CRIWARE_CRIAUDIOREADSTREAM_SET_CALLBACKFUNCTION_OFFSET UNITYSDK_OFFSET(0x1B7AAAE0)
#define CRIWARE_CRIAUDIOREADSTREAM_SET_CALLBACKPOINTER_OFFSET UNITYSDK_OFFSET(0x1B7AAB00)
#define CRIWARE_CRIAUDIOREADSTREAM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B7AAB20)
#define CRIWARE_CRIAUDIOREADSTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7AAB10)

namespace CriWare
{
	inline static constexpr unsigned int CriAudioReadStream_TypeDefinitionIndex = 37931;

	class CriAudioReadStream : public ::System::Object
	{
	public:
		::CriWare::CriAudioReadStream_InternalDelegate* internalDelegate; // 0x10
		::System::IntPtr _callbackPointer_k__BackingField; // 0x18
		::System::IntPtr _callbackFunction_k__BackingField; // 0x20

		::System::Void _ctor(::System::IntPtr a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIAUDIOREADSTREAM__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::CriWare::CriAudioReadStream_Delegate* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAudioReadStream_Delegate*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIAUDIOREADSTREAM__CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		::System::IntPtr get_callbackFunction()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIAUDIOREADSTREAM_GET_CALLBACKFUNCTION_OFFSET))(this);
		}

		::System::Void set_callbackFunction(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIAUDIOREADSTREAM_SET_CALLBACKFUNCTION_OFFSET))(this, a1);
		}

		::System::IntPtr get_callbackPointer()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIAUDIOREADSTREAM_GET_CALLBACKPOINTER_OFFSET))(this);
		}

		::System::Void set_callbackPointer(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIAUDIOREADSTREAM_SET_CALLBACKPOINTER_OFFSET))(this, a1);
		}
	};
}
