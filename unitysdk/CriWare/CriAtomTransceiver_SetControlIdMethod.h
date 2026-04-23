#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CRIWARE_CRIATOMTRANSCEIVER_SETCONTROLIDMETHOD_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x12BFF760)
#define CRIWARE_CRIATOMTRANSCEIVER_SETCONTROLIDMETHOD_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x12BFF7B0)
#define CRIWARE_CRIATOMTRANSCEIVER_SETCONTROLIDMETHOD_INVOKE_OFFSET UNITYSDK_OFFSET(0x12BFF3C0)
#define CRIWARE_CRIATOMTRANSCEIVER_SETCONTROLIDMETHOD__CTOR_OFFSET UNITYSDK_OFFSET(0x12BFF240)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomTransceiver_SetControlIdMethod_TypeDefinitionIndex = 36695;

	class CriAtomTransceiver_SetControlIdMethod : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMTRANSCEIVER_SETCONTROLIDMETHOD__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::UInt16 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMTRANSCEIVER_SETCONTROLIDMETHOD_INVOKE_OFFSET))(this, id);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt16 id, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt16, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMTRANSCEIVER_SETCONTROLIDMETHOD_BEGININVOKE_OFFSET))(this, id, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMTRANSCEIVER_SETCONTROLIDMETHOD_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
