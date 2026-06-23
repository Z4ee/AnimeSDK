#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ROOTMOTION_SOLVERMANAGER_POSTLATEUPDATEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1DD3E310)
#define ROOTMOTION_SOLVERMANAGER_POSTLATEUPDATEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1DD3E340)
#define ROOTMOTION_SOLVERMANAGER_POSTLATEUPDATEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DD3E070)
#define ROOTMOTION_SOLVERMANAGER_POSTLATEUPDATEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD3E050)

namespace RootMotion
{
	inline static constexpr unsigned int SolverManager_PostLateUpdateDelegate_TypeDefinitionIndex = 38146;

	class SolverManager_PostLateUpdateDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ROOTMOTION_SOLVERMANAGER_POSTLATEUPDATEDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_SOLVERMANAGER_POSTLATEUPDATEDELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ROOTMOTION_SOLVERMANAGER_POSTLATEUPDATEDELEGATE_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ROOTMOTION_SOLVERMANAGER_POSTLATEUPDATEDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
