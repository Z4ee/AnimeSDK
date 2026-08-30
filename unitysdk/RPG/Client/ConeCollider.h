#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseCustomCollider.h"

namespace UnityEngine { class Mesh; }

#define RPG_CLIENT_CONECOLLIDER_METHOD_6_0452194CF7C240C7_OFFSET UNITYSDK_OFFSET(0xCC696A0)
#define RPG_CLIENT_CONECOLLIDER_METHOD_6_DA008CFDB996753E_OFFSET UNITYSDK_OFFSET(0xCC6A070)
#define RPG_CLIENT_CONECOLLIDER_RECREATE_OFFSET UNITYSDK_OFFSET(0xCC69420)
#define RPG_CLIENT_CONECOLLIDER_SUBMITBYANGLE_OFFSET UNITYSDK_OFFSET(0xCC69390)
#define RPG_CLIENT_CONECOLLIDER_SUBMITBYRADIUS_OFFSET UNITYSDK_OFFSET(0xCC69600)
#define RPG_CLIENT_CONECOLLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0xCC6AE00)

namespace RPG::Client
{
	inline static constexpr unsigned int ConeCollider_TypeDefinitionIndex = 68866;

	class ConeCollider : public ::RPG::Client::BaseCustomCollider
	{
	public:
		::System::Single m_radius; // 0x28
		::System::Single m_length; // 0x2C
		::System::Boolean m_useOpenAngle; // 0x30
		::System::Single m_openAngle; // 0x34
		::System::Int32 m_numVertices; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONECOLLIDER__CTOR_OFFSET))(this);
		}

		::System::Void SubmitByAngle(::System::Single a1, ::System::Single a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONECOLLIDER_SUBMITBYANGLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SubmitByRadius(::System::Single a1, ::System::Single a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONECOLLIDER_SUBMITBYRADIUS_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void ReCreate(::System::Single a1, ::System::Single a2, ::System::Boolean a3, ::System::Single a4, ::System::Int32 a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean, ::System::Single, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONECOLLIDER_RECREATE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::UnityEngine::Mesh* Method_6_0452194CF7C240C7(::System::Single a1, ::System::Single a2, ::System::Boolean a3, ::System::Single a4, ::System::Int32 a5)
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONECOLLIDER_METHOD_6_0452194CF7C240C7_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::UnityEngine::Mesh* Method_6_DA008CFDB996753E(::System::Single a1, ::System::Single a2, ::System::Boolean a3, ::System::Single a4, ::System::Int32 a5)
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONECOLLIDER_METHOD_6_DA008CFDB996753E_OFFSET))(this, a1, a2, a3, a4, a5);
		}
	};
}
