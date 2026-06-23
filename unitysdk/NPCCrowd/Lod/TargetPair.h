#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Lod { class INPCCrowdDistanceCheckInterface; }
namespace System { class Object; }

#define NPCCROWD_LOD_TARGETPAIR_EQUALS_OFFSET UNITYSDK_OFFSET(0x74E3C0)
#define NPCCROWD_LOD_TARGETPAIR_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x74E4C0)
#define NPCCROWD_LOD_TARGETPAIR__CTOR_OFFSET UNITYSDK_OFFSET(0x2BDE80)
#define NPCCROWD_LOD_TARGETPAIR___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x74E4D0)
#define NPCCROWD_LOD_TARGETPAIR___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x74E540)

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int TargetPair_TypeDefinitionIndex = 78654;

	struct alignas(8) TargetPair
	{
		::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface* p1; // 0x10
		::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface* p2; // 0x18

		::System::Void _ctor(::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface* p1, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface* p2)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface*, ::NPCCrowd::Lod::INPCCrowdDistanceCheckInterface*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_TARGETPAIR__CTOR_OFFSET))(this, p1, p2);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_TARGETPAIR_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_TARGETPAIR_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_TARGETPAIR___BASE_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_TARGETPAIR___BASE_GETHASHCODE_OFFSET))(this);
		}
	};
}
