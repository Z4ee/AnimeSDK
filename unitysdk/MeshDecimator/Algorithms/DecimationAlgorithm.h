#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MeshDecimator { class Mesh; }
namespace MeshDecimator::Algorithms { class DecimationAlgorithm_StatusReportCallback; }
namespace System { class String; }

#define MESHDECIMATOR_ALGORITHMS_DECIMATIONALGORITHM_ADD_STATUSREPORT_OFFSET UNITYSDK_OFFSET(0x1AA31080)
#define MESHDECIMATOR_ALGORITHMS_DECIMATIONALGORITHM_GET_KEEPBORDERS_OFFSET UNITYSDK_OFFSET(0x1AA30FD0)
#define MESHDECIMATOR_ALGORITHMS_DECIMATIONALGORITHM_GET_KEEPLINKEDVERTICES_OFFSET UNITYSDK_OFFSET(0x1AA31010)
#define MESHDECIMATOR_ALGORITHMS_DECIMATIONALGORITHM_GET_MAXVERTEXCOUNT_OFFSET UNITYSDK_OFFSET(0x1AA31030)
#define MESHDECIMATOR_ALGORITHMS_DECIMATIONALGORITHM_GET_PRESERVEBORDERS_OFFSET UNITYSDK_OFFSET(0x1AA30FF0)
#define MESHDECIMATOR_ALGORITHMS_DECIMATIONALGORITHM_GET_VERBOSE_OFFSET UNITYSDK_OFFSET(0x1AA31060)
#define MESHDECIMATOR_ALGORITHMS_DECIMATIONALGORITHM_REMOVE_STATUSREPORT_OFFSET UNITYSDK_OFFSET(0x1AA31100)
#define MESHDECIMATOR_ALGORITHMS_DECIMATIONALGORITHM_REPORTSTATUS_OFFSET UNITYSDK_OFFSET(0x1AA31180)
#define MESHDECIMATOR_ALGORITHMS_DECIMATIONALGORITHM_SET_KEEPBORDERS_OFFSET UNITYSDK_OFFSET(0x1AA30FE0)
#define MESHDECIMATOR_ALGORITHMS_DECIMATIONALGORITHM_SET_KEEPLINKEDVERTICES_OFFSET UNITYSDK_OFFSET(0x1AA31020)
#define MESHDECIMATOR_ALGORITHMS_DECIMATIONALGORITHM_SET_MAXVERTEXCOUNT_OFFSET UNITYSDK_OFFSET(0x1AA31040)
#define MESHDECIMATOR_ALGORITHMS_DECIMATIONALGORITHM_SET_PRESERVEBORDERS_OFFSET UNITYSDK_OFFSET(0x1AA31000)
#define MESHDECIMATOR_ALGORITHMS_DECIMATIONALGORITHM_SET_VERBOSE_OFFSET UNITYSDK_OFFSET(0x1AA31070)
#define MESHDECIMATOR_ALGORITHMS_DECIMATIONALGORITHM__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA317B0)

namespace MeshDecimator::Algorithms
{
	inline static constexpr unsigned int DecimationAlgorithm_TypeDefinitionIndex = 33268;

	class DecimationAlgorithm : public ::System::Object
	{
	public:
		::MeshDecimator::Algorithms::DecimationAlgorithm_StatusReportCallback* StatusReport; // 0x10
		::System::Int32 maxVertexCount; // 0x18
		::System::Boolean verbose; // 0x1C
		::System::Boolean preserveBorders; // 0x1D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_ALGORITHMS_DECIMATIONALGORITHM__CTOR_OFFSET))(this);
		}

		::System::Boolean get_KeepBorders()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_ALGORITHMS_DECIMATIONALGORITHM_GET_KEEPBORDERS_OFFSET))(this);
		}

		::System::Void set_KeepBorders(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MESHDECIMATOR_ALGORITHMS_DECIMATIONALGORITHM_SET_KEEPBORDERS_OFFSET))(this, value);
		}

		::System::Boolean get_PreserveBorders()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_ALGORITHMS_DECIMATIONALGORITHM_GET_PRESERVEBORDERS_OFFSET))(this);
		}

		::System::Void set_PreserveBorders(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MESHDECIMATOR_ALGORITHMS_DECIMATIONALGORITHM_SET_PRESERVEBORDERS_OFFSET))(this, value);
		}

		::System::Boolean get_KeepLinkedVertices()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_ALGORITHMS_DECIMATIONALGORITHM_GET_KEEPLINKEDVERTICES_OFFSET))(this);
		}

		::System::Void set_KeepLinkedVertices(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MESHDECIMATOR_ALGORITHMS_DECIMATIONALGORITHM_SET_KEEPLINKEDVERTICES_OFFSET))(this, value);
		}

		::System::Int32 get_MaxVertexCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_ALGORITHMS_DECIMATIONALGORITHM_GET_MAXVERTEXCOUNT_OFFSET))(this);
		}

		::System::Void set_MaxVertexCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESHDECIMATOR_ALGORITHMS_DECIMATIONALGORITHM_SET_MAXVERTEXCOUNT_OFFSET))(this, value);
		}

		::System::Boolean get_Verbose()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_ALGORITHMS_DECIMATIONALGORITHM_GET_VERBOSE_OFFSET))(this);
		}

		::System::Void set_Verbose(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MESHDECIMATOR_ALGORITHMS_DECIMATIONALGORITHM_SET_VERBOSE_OFFSET))(this, value);
		}

		::System::Void add_StatusReport(::MeshDecimator::Algorithms::DecimationAlgorithm_StatusReportCallback* value)
		{
			return ((::System::Void(*)(::PVOID, ::MeshDecimator::Algorithms::DecimationAlgorithm_StatusReportCallback*))((::PBYTE)hIl2Cpp + MESHDECIMATOR_ALGORITHMS_DECIMATIONALGORITHM_ADD_STATUSREPORT_OFFSET))(this, value);
		}

		::System::Void remove_StatusReport(::MeshDecimator::Algorithms::DecimationAlgorithm_StatusReportCallback* value)
		{
			return ((::System::Void(*)(::PVOID, ::MeshDecimator::Algorithms::DecimationAlgorithm_StatusReportCallback*))((::PBYTE)hIl2Cpp + MESHDECIMATOR_ALGORITHMS_DECIMATIONALGORITHM_REMOVE_STATUSREPORT_OFFSET))(this, value);
		}

		::System::Void ReportStatus(::System::String* message, ::System::Int32 originalTris, ::System::Int32 currentTris, ::System::Int32 targetTris)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MESHDECIMATOR_ALGORITHMS_DECIMATIONALGORITHM_REPORTSTATUS_OFFSET))(this, message, originalTris, currentTris, targetTris);
		}
	};
}
