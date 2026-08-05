#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SPINE_POLYGON_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1FBB66B0)
#define SPINE_POLYGON_GET_VERTICES_OFFSET UNITYSDK_OFFSET(0x1FBB6690)
#define SPINE_POLYGON_SET_COUNT_OFFSET UNITYSDK_OFFSET(0x1FBB66C0)
#define SPINE_POLYGON_SET_VERTICES_OFFSET UNITYSDK_OFFSET(0x1FBB66A0)
#define SPINE_POLYGON__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBB66D0)

namespace Spine
{
	inline static constexpr unsigned int Polygon_TypeDefinitionIndex = 33530;

	class Polygon : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* _Vertices_k__BackingField; // 0x10
		::System::Int32 _Count_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_POLYGON__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::System::Single>* get_Vertices()
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_POLYGON_GET_VERTICES_OFFSET))(this);
		}

		::System::Void set_Vertices(::Il2CppArray<::System::Single>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + SPINE_POLYGON_SET_VERTICES_OFFSET))(this, value);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_POLYGON_GET_COUNT_OFFSET))(this);
		}

		::System::Void set_Count(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_POLYGON_SET_COUNT_OFFSET))(this, value);
		}
	};
}
