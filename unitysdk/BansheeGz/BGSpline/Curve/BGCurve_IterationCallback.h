#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace BansheeGz::BGSpline::Curve { class BGCurvePointI; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_ITERATIONCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x16902E30)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_ITERATIONCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x16902EB0)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_ITERATIONCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x168FE090)
#define BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_ITERATIONCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x16902D40)

namespace BansheeGz::BGSpline::Curve
{
	inline static constexpr unsigned int BGCurve_IterationCallback_TypeDefinitionIndex = 34446;

	class BGCurve_IterationCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_ITERATIONCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::BansheeGz::BGSpline::Curve::BGCurvePointI* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurvePointI*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_ITERATIONCALLBACK_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::BansheeGz::BGSpline::Curve::BGCurvePointI* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurvePointI*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_ITERATIONCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_CURVE_BGCURVE_ITERATIONCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
