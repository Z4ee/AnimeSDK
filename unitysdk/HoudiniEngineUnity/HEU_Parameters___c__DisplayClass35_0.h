#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_ParmInfo.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Predicate_1; }

#define HOUDINIENGINEUNITY_HEU_PARAMETERS___C__DISPLAYCLASS35_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8CA0BA0)
#define HOUDINIENGINEUNITY_HEU_PARAMETERS___C__DISPLAYCLASS35_0__INITIALIZE_B__0_OFFSET UNITYSDK_OFFSET(0x8CA1950)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_Parameters___c__DisplayClass35_0_TypeDefinitionIndex = 43638;

	class HEU_Parameters___c__DisplayClass35_0 : public ::System::Object
	{
	public:
		::System::Predicate_1<::HoudiniEngineUnity::HAPI_ParmInfo>* __9__0; // 0x10
		::System::Int32 parentID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS___C__DISPLAYCLASS35_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _Initialize_b__0(::HoudiniEngineUnity::HAPI_ParmInfo p)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HAPI_ParmInfo))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PARAMETERS___C__DISPLAYCLASS35_0__INITIALIZE_B__0_OFFSET))(this, p);
		}
	};
}
