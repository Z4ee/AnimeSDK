#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_NAMEDCURVE_GET_NAMEHASH_OFFSET UNITYSDK_OFFSET(0x18EAFCD0)
#define RPG_CLIENT_NAMEDCURVE_SET_NAMEHASH_OFFSET UNITYSDK_OFFSET(0x18EAFCE0)
#define RPG_CLIENT_NAMEDCURVE__CTOR_OFFSET UNITYSDK_OFFSET(0x18EAFCF0)

namespace RPG::Client
{
	inline static constexpr unsigned int NamedCurve_TypeDefinitionIndex = 57380;

	class NamedCurve : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Int32 _NameHash_k__BackingField; // 0x18
		::UnityEngine::AnimationCurve* Curve; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAMEDCURVE__CTOR_OFFSET))(this);
		}

		::System::Int32 get_NameHash()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAMEDCURVE_GET_NAMEHASH_OFFSET))(this);
		}

		::System::Void set_NameHash(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAMEDCURVE_SET_NAMEHASH_OFFSET))(this, a1);
		}
	};
}
