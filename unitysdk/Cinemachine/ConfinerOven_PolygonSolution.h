#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ClipperLib/IntPoint.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CINEMACHINE_CONFINEROVEN_POLYGONSOLUTION_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x427580)
#define CINEMACHINE_CONFINEROVEN_POLYGONSOLUTION_STATECHANGED_OFFSET UNITYSDK_OFFSET(0xA731E0)

namespace Cinemachine
{
	inline static constexpr unsigned int ConfinerOven_PolygonSolution_TypeDefinitionIndex = 34135;

	struct alignas(8) ConfinerOven_PolygonSolution
	{
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::ClipperLib::IntPoint>*>* m_Polygons; // 0x10
		::System::Single m_FrustumHeight; // 0x18

		::System::Boolean StateChanged(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::ClipperLib::IntPoint>*>*& paths)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::ClipperLib::IntPoint>*>*&))((::PBYTE)hIl2Cpp + CINEMACHINE_CONFINEROVEN_POLYGONSOLUTION_STATECHANGED_OFFSET))(this, paths);
		}

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CONFINEROVEN_POLYGONSOLUTION_GET_ISEMPTY_OFFSET))(this);
		}
	};
}
