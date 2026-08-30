#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseCustomCollider.h"

namespace UnityEngine { class Mesh; }

#define RPG_CLIENT_FANCYLINDERCOLLIDER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1B8A7E80)
#define RPG_CLIENT_FANCYLINDERCOLLIDER_METHOD_6_B8D84B51D5BA2413_OFFSET UNITYSDK_OFFSET(0x1B8A8060)
#define RPG_CLIENT_FANCYLINDERCOLLIDER_RECREATE_OFFSET UNITYSDK_OFFSET(0x1B8A7EE0)
#define RPG_CLIENT_FANCYLINDERCOLLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8A9270)

namespace RPG::Client
{
	inline static constexpr unsigned int FanCylinderCollider_TypeDefinitionIndex = 68867;

	class FanCylinderCollider : public ::RPG::Client::BaseCustomCollider
	{
	public:
		::System::Single m_radius; // 0x28
		::System::Single m_height; // 0x2C
		::System::Int32 m_fanAngle; // 0x30
		::System::Int32 m_numVertices; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANCYLINDERCOLLIDER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANCYLINDERCOLLIDER_AWAKE_OFFSET))(this);
		}

		::System::Void ReCreate(::System::Single a1, ::System::Single a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANCYLINDERCOLLIDER_RECREATE_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Mesh* Method_6_B8D84B51D5BA2413(::System::Single a1, ::System::Single a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID, ::System::Single, ::System::Single, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANCYLINDERCOLLIDER_METHOD_6_B8D84B51D5BA2413_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
