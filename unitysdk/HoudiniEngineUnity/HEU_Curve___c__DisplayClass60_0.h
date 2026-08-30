#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace HoudiniEngineUnity { class CurveNodeData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HOUDINIENGINEUNITY_HEU_CURVE___C__DISPLAYCLASS60_0__CTOR_OFFSET UNITYSDK_OFFSET(0x167CFD60)
#define HOUDINIENGINEUNITY_HEU_CURVE___C__DISPLAYCLASS60_0__GETALLPOINTS_B__0_OFFSET UNITYSDK_OFFSET(0x167D9060)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_Curve___c__DisplayClass60_0_TypeDefinitionIndex = 39087;

	class HEU_Curve___c__DisplayClass60_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* points; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE___C__DISPLAYCLASS60_0__CTOR_OFFSET))(this);
		}

		::System::Void _GetAllPoints_b__0(::HoudiniEngineUnity::CurveNodeData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::CurveNodeData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_CURVE___C__DISPLAYCLASS60_0__GETALLPOINTS_B__0_OFFSET))(this, a1);
		}
	};
}
