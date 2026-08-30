#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CRIWARE_CRIATOMTRANSCEIVER_SETCONTROLIDMETHOD_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D3833A0)
#define CRIWARE_CRIATOMTRANSCEIVER_SETCONTROLIDMETHOD_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D3833F0)
#define CRIWARE_CRIATOMTRANSCEIVER_SETCONTROLIDMETHOD_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D383260)
#define CRIWARE_CRIATOMTRANSCEIVER_SETCONTROLIDMETHOD__CTOR_OFFSET UNITYSDK_OFFSET(0x1D383330)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomTransceiver_SetControlIdMethod_TypeDefinitionIndex = 38649;

	class CriAtomTransceiver_SetControlIdMethod : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMTRANSCEIVER_SETCONTROLIDMETHOD__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::UInt16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMTRANSCEIVER_SETCONTROLIDMETHOD_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt16 a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt16, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMTRANSCEIVER_SETCONTROLIDMETHOD_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMTRANSCEIVER_SETCONTROLIDMETHOD_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
