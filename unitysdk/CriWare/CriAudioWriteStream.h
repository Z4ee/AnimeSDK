#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace CriWare { class CriAudioWriteStream_Delegate; }
namespace CriWare { class CriAudioWriteStream_InternalDelegate; }

#define CRIWARE_CRIAUDIOWRITESTREAM_GET_CALLBACKFUNCTION_OFFSET UNITYSDK_OFFSET(0x1D383940)
#define CRIWARE_CRIAUDIOWRITESTREAM_GET_CALLBACKPOINTER_OFFSET UNITYSDK_OFFSET(0x1D383960)
#define CRIWARE_CRIAUDIOWRITESTREAM_SET_CALLBACKFUNCTION_OFFSET UNITYSDK_OFFSET(0x1D383950)
#define CRIWARE_CRIAUDIOWRITESTREAM_SET_CALLBACKPOINTER_OFFSET UNITYSDK_OFFSET(0x1D383970)
#define CRIWARE_CRIAUDIOWRITESTREAM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D383990)
#define CRIWARE_CRIAUDIOWRITESTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D383980)

namespace CriWare
{
	inline static constexpr unsigned int CriAudioWriteStream_TypeDefinitionIndex = 38794;

	class CriAudioWriteStream : public ::System::Object
	{
	public:
		::CriWare::CriAudioWriteStream_InternalDelegate* internalDelegate; // 0x10
		::System::IntPtr _callbackPointer_k__BackingField; // 0x18
		::System::IntPtr _callbackFunction_k__BackingField; // 0x20

		::System::Void _ctor(::System::IntPtr a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIAUDIOWRITESTREAM__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::CriWare::CriAudioWriteStream_Delegate* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAudioWriteStream_Delegate*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIAUDIOWRITESTREAM__CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		::System::IntPtr get_callbackFunction()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIAUDIOWRITESTREAM_GET_CALLBACKFUNCTION_OFFSET))(this);
		}

		::System::Void set_callbackFunction(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIAUDIOWRITESTREAM_SET_CALLBACKFUNCTION_OFFSET))(this, a1);
		}

		::System::IntPtr get_callbackPointer()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIAUDIOWRITESTREAM_GET_CALLBACKPOINTER_OFFSET))(this);
		}

		::System::Void set_callbackPointer(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIAUDIOWRITESTREAM_SET_CALLBACKPOINTER_OFFSET))(this, a1);
		}
	};
}
