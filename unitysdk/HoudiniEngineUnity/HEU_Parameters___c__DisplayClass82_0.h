#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_ParmInfo.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Predicate_1; }

#define HOUDINIENGINEUNITY_HEU_PARAMETERS___C__DISPLAYCLASS82_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B464B50)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS___C__DISPLAYCLASS82_0__INITIALIZE_B__0_OFFSET UNITYSDK_OFFSET(0x1B465830)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_Parameters___c__DisplayClass82_0_TypeDefinitionIndex = 39256;

	class HEU_Parameters___c__DisplayClass82_0 : public ::System::Object
	{
	public:
		::System::Predicate_1<::HoudiniEngineUnity::HAPI_ParmInfo>* __9__0; // 0x10
		::System::Int32 parentID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS___C__DISPLAYCLASS82_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _Initialize_b__0(::HoudiniEngineUnity::HAPI_ParmInfo a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HAPI_ParmInfo))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS___C__DISPLAYCLASS82_0__INITIALIZE_B__0_OFFSET))(this, a1);
		}
	};
}
