#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MOLEMOLE_MONOITEMICON_CLASS_3_89DE316B64AEDB12_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x19169E10)
#define MOLEMOLE_MONOITEMICON_CLASS_3_89DE316B64AEDB12_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x19169EE0)
#define MOLEMOLE_MONOITEMICON_CLASS_3_89DE316B64AEDB12_INVOKE_OFFSET UNITYSDK_OFFSET(0x19169A80)
#define MOLEMOLE_MONOITEMICON_CLASS_3_89DE316B64AEDB12__CTOR_OFFSET UNITYSDK_OFFSET(0x19169A60)

namespace MoleMole
{
	inline static constexpr unsigned int MonoItemIcon_Class_3_89DE316B64AEDB12_TypeDefinitionIndex = 61380;

	class MonoItemIcon_Class_3_89DE316B64AEDB12 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOITEMICON_CLASS_3_89DE316B64AEDB12__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Int32 a1, ::System::UInt64 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt64, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOITEMICON_CLASS_3_89DE316B64AEDB12_INVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 a1, ::System::UInt64 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::AsyncCallback* a5, ::System::Object* a6)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::UInt64, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOITEMICON_CLASS_3_89DE316B64AEDB12_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOITEMICON_CLASS_3_89DE316B64AEDB12_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
