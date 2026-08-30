#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace BansheeGz::BGSpline::Curve { class BGCurve; }
namespace RPG::Client { class CurveUndirectedConnection; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CURVEUNDIRECTEDEDGESETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x192D2050)

namespace RPG::Client
{
	inline static constexpr unsigned int CurveUndirectedEdgeSetting_TypeDefinitionIndex = 68534;

	class CurveUndirectedEdgeSetting : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::BansheeGz::BGSpline::Curve::BGCurve* curve; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::CurveUndirectedConnection*>* startPointConnectCurves; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::CurveUndirectedConnection*>* finishPointConnectCurves; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEUNDIRECTEDEDGESETTING__CTOR_OFFSET))(this);
		}
	};
}
