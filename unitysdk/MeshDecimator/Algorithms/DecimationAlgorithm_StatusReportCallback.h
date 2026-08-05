#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MESHDECIMATOR_ALGORITHMS_DECIMATIONALGORITHM_STATUSREPORTCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1E268700)
#define MESHDECIMATOR_ALGORITHMS_DECIMATIONALGORITHM_STATUSREPORTCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1E2687C0)
#define MESHDECIMATOR_ALGORITHMS_DECIMATIONALGORITHM_STATUSREPORTCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E2680B0)
#define MESHDECIMATOR_ALGORITHMS_DECIMATIONALGORITHM_STATUSREPORTCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2686E0)

namespace MeshDecimator::Algorithms
{
	inline static constexpr unsigned int DecimationAlgorithm_StatusReportCallback_TypeDefinitionIndex = 35491;

	class DecimationAlgorithm_StatusReportCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MESHDECIMATOR_ALGORITHMS_DECIMATIONALGORITHM_STATUSREPORTCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::String* message, ::System::Int32 originalTris, ::System::Int32 currentTris, ::System::Int32 targetTris)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MESHDECIMATOR_ALGORITHMS_DECIMATIONALGORITHM_STATUSREPORTCALLBACK_INVOKE_OFFSET))(this, message, originalTris, currentTris, targetTris);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* message, ::System::Int32 originalTris, ::System::Int32 currentTris, ::System::Int32 targetTris, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MESHDECIMATOR_ALGORITHMS_DECIMATIONALGORITHM_STATUSREPORTCALLBACK_BEGININVOKE_OFFSET))(this, message, originalTris, currentTris, targetTris, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MESHDECIMATOR_ALGORITHMS_DECIMATIONALGORITHM_STATUSREPORTCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
