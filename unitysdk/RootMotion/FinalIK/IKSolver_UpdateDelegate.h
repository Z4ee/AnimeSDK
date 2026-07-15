#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ROOTMOTION_FINALIK_IKSOLVER_UPDATEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x192768F0)
#define ROOTMOTION_FINALIK_IKSOLVER_UPDATEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x19276920)
#define ROOTMOTION_FINALIK_IKSOLVER_UPDATEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x192734E0)
#define ROOTMOTION_FINALIK_IKSOLVER_UPDATEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x19276880)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int IKSolver_UpdateDelegate_TypeDefinitionIndex = 42697;

	class IKSolver_UpdateDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVER_UPDATEDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVER_UPDATEDELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVER_UPDATEDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVER_UPDATEDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
