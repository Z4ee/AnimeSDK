#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_1_E081FCEC8F87505A;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MOLEMOLE_UILINEUPSELECTCONTEXT_BEGINBATTLEDEL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x19C9B830)
#define MOLEMOLE_UILINEUPSELECTCONTEXT_BEGINBATTLEDEL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x19C9B860)
#define MOLEMOLE_UILINEUPSELECTCONTEXT_BEGINBATTLEDEL_INVOKE_OFFSET UNITYSDK_OFFSET(0x19C9B310)
#define MOLEMOLE_UILINEUPSELECTCONTEXT_BEGINBATTLEDEL__CTOR_OFFSET UNITYSDK_OFFSET(0x19C9B2F0)

namespace MoleMole
{
	inline static constexpr unsigned int UILineupSelectContext_BeginBattleDel_TypeDefinitionIndex = 52588;

	class UILineupSelectContext_BeginBattleDel : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT_BEGINBATTLEDEL__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Class_1_E081FCEC8F87505A* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E081FCEC8F87505A*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT_BEGINBATTLEDEL_INVOKE_OFFSET))(this, data);
		}

		::System::IAsyncResult* BeginInvoke(::Class_1_E081FCEC8F87505A* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Class_1_E081FCEC8F87505A*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT_BEGINBATTLEDEL_BEGININVOKE_OFFSET))(this, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT_BEGINBATTLEDEL_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
