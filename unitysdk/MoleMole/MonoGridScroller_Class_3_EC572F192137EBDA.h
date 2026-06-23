#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOGRIDSCROLLER_CLASS_3_EC572F192137EBDA_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1640D3F0)
#define MOLEMOLE_MONOGRIDSCROLLER_CLASS_3_EC572F192137EBDA_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1640D470)
#define MOLEMOLE_MONOGRIDSCROLLER_CLASS_3_EC572F192137EBDA_INVOKE_OFFSET UNITYSDK_OFFSET(0x164077D0)
#define MOLEMOLE_MONOGRIDSCROLLER_CLASS_3_EC572F192137EBDA__CTOR_OFFSET UNITYSDK_OFFSET(0x1640CD20)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGridScroller_Class_3_EC572F192137EBDA_TypeDefinitionIndex = 40036;

	class MonoGridScroller_Class_3_EC572F192137EBDA : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_CLASS_3_EC572F192137EBDA__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::UnityEngine::Transform* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_CLASS_3_EC572F192137EBDA_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Transform* a1, ::System::Int32 a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Transform*, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_CLASS_3_EC572F192137EBDA_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_CLASS_3_EC572F192137EBDA_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
