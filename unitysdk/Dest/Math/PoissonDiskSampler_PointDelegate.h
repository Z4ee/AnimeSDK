#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define DEST_MATH_POISSONDISKSAMPLER_POINTDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C4A4D40)
#define DEST_MATH_POISSONDISKSAMPLER_POINTDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C4A4D90)
#define DEST_MATH_POISSONDISKSAMPLER_POINTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C4A4A00)
#define DEST_MATH_POISSONDISKSAMPLER_POINTDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4A49F0)

namespace Dest::Math
{
	inline static constexpr unsigned int PoissonDiskSampler_PointDelegate_TypeDefinitionIndex = 33240;

	class PoissonDiskSampler_PointDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + DEST_MATH_POISSONDISKSAMPLER_POINTDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Single Invoke(::UnityEngine::Vector2& point)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + DEST_MATH_POISSONDISKSAMPLER_POINTDELEGATE_INVOKE_OFFSET))(this, point);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Vector2& point, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Vector2&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + DEST_MATH_POISSONDISKSAMPLER_POINTDELEGATE_BEGININVOKE_OFFSET))(this, point, callback, object);
		}

		::System::Single EndInvoke(::UnityEngine::Vector2& point, ::System::IAsyncResult* result)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector2&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + DEST_MATH_POISSONDISKSAMPLER_POINTDELEGATE_ENDINVOKE_OFFSET))(this, point, result);
		}
	};
}
