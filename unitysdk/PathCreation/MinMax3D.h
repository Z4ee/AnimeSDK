#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define PATHCREATION_MINMAX3D_ADDVALUE_OFFSET UNITYSDK_OFFSET(0x1DAB9CE0)
#define PATHCREATION_MINMAX3D_GET_MAX_OFFSET UNITYSDK_OFFSET(0x1DABED90)
#define PATHCREATION_MINMAX3D_GET_MIN_OFFSET UNITYSDK_OFFSET(0x1DABED60)
#define PATHCREATION_MINMAX3D_SET_MAX_OFFSET UNITYSDK_OFFSET(0x1DABEDB0)
#define PATHCREATION_MINMAX3D_SET_MIN_OFFSET UNITYSDK_OFFSET(0x1DABED80)
#define PATHCREATION_MINMAX3D__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB9BA0)

namespace PathCreation
{
	inline static constexpr unsigned int MinMax3D_TypeDefinitionIndex = 37447;

	class MinMax3D : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 _Max_k__BackingField; // 0x10
		::UnityEngine::Vector3 _Min_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PATHCREATION_MINMAX3D__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_Min()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + PATHCREATION_MINMAX3D_GET_MIN_OFFSET))(this);
		}

		::System::Void set_Min(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PATHCREATION_MINMAX3D_SET_MIN_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_Max()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + PATHCREATION_MINMAX3D_GET_MAX_OFFSET))(this);
		}

		::System::Void set_Max(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PATHCREATION_MINMAX3D_SET_MAX_OFFSET))(this, value);
		}

		::System::Void AddValue(::UnityEngine::Vector3 v)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PATHCREATION_MINMAX3D_ADDVALUE_OFFSET))(this, v);
		}
	};
}
