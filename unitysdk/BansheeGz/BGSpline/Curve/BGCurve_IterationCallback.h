#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace BansheeGz::BGSpline::Curve { class BGCurvePointI; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_ITERATIONCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x17BAC640)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_ITERATIONCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x17BAC6C0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_ITERATIONCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x17BA79C0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_ITERATIONCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x17BAC620)

namespace BansheeGz::BGSpline::Curve
{
	inline static constexpr unsigned int BGCurve_IterationCallback_TypeDefinitionIndex = 33793;

	class BGCurve_IterationCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_ITERATIONCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::BansheeGz::BGSpline::Curve::BGCurvePointI* point, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurvePointI*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_ITERATIONCALLBACK_INVOKE_OFFSET))(this, point, index, count);
		}

		::System::IAsyncResult* BeginInvoke(::BansheeGz::BGSpline::Curve::BGCurvePointI* point, ::System::Int32 index, ::System::Int32 count, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurvePointI*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_ITERATIONCALLBACK_BEGININVOKE_OFFSET))(this, point, index, count, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_ITERATIONCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
