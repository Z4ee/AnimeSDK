#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ROOTMOTION_FINALIK_IKSOLVER_ITERATIONDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x19276400)
#define ROOTMOTION_FINALIK_IKSOLVER_ITERATIONDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x19276450)
#define ROOTMOTION_FINALIK_IKSOLVER_ITERATIONDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x192763F0)
#define ROOTMOTION_FINALIK_IKSOLVER_ITERATIONDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x19276380)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int IKSolver_IterationDelegate_TypeDefinitionIndex = 42698;

	class IKSolver_IterationDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVER_ITERATIONDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVER_ITERATIONDELEGATE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVER_ITERATIONDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVER_ITERATIONDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
