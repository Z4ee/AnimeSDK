#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ROOTMOTION_FINALIK_IKSOLVER_ITERATIONDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x85EC8F0)
#define ROOTMOTION_FINALIK_IKSOLVER_ITERATIONDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x85EC940)
#define ROOTMOTION_FINALIK_IKSOLVER_ITERATIONDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x85EC600)
#define ROOTMOTION_FINALIK_IKSOLVER_ITERATIONDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x85EC5E0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int IKSolver_IterationDelegate_TypeDefinitionIndex = 35208;

	class IKSolver_IterationDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVER_ITERATIONDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Int32 i)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVER_ITERATIONDELEGATE_INVOKE_OFFSET))(this, i);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 i, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVER_ITERATIONDELEGATE_BEGININVOKE_OFFSET))(this, i, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVER_ITERATIONDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
