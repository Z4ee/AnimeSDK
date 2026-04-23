#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace CriWare { class CriAudioWriteStream_Delegate; }

#define CRIWARE_CRIAUDIOWRITESTREAM___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12C00730)
#define CRIWARE_CRIAUDIOWRITESTREAM___C__DISPLAYCLASS12_0___CTOR_B__0_OFFSET UNITYSDK_OFFSET(0x12C00760)

namespace CriWare
{
	inline static constexpr unsigned int CriAudioWriteStream___c__DisplayClass12_0_TypeDefinitionIndex = 36838;

	class CriAudioWriteStream___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::CriWare::CriAudioWriteStream_Delegate* callback; // 0x10
		::Il2CppArray<::Il2CppArray<::System::Single>*>* buffer; // 0x18
		::System::Int32 bufferSize; // 0x20
		::System::Int32 numChannels; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIAUDIOWRITESTREAM___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::UInt32 __ctor_b__0(::System::IntPtr cbobj, ::System::IntPtr data, ::System::UInt32 numSamples)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::IntPtr, ::System::IntPtr, ::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIAUDIOWRITESTREAM___C__DISPLAYCLASS12_0___CTOR_B__0_OFFSET))(this, cbobj, data, numSamples);
		}
	};
}
