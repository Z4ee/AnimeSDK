#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2BC1F0DE405AE0D4.h"
#include "unitysdk/RPG/Client/EPedestrianV2MotionState.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_483ED67B5E0A21FB;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelPedestrianV2IntersectionEscalatorInfo; }
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define CLASS_2_7C59294E2ED9748E_GET_BINDPROPGROUPENTITYID_OFFSET UNITYSDK_OFFSET(0x134CE070)
#define CLASS_2_7C59294E2ED9748E_GET_BINDPROPGROUPID_OFFSET UNITYSDK_OFFSET(0x134CE060)
#define CLASS_2_7C59294E2ED9748E_GET_WORLDUP_OFFSET UNITYSDK_OFFSET(0x134CEAA0)
#define CLASS_2_7C59294E2ED9748E_METHOD_2_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x134CE9A0)
#define CLASS_2_7C59294E2ED9748E_METHOD_2_61EC2AC0BD93363E_OFFSET UNITYSDK_OFFSET(0x134CE870)
#define CLASS_2_7C59294E2ED9748E_METHOD_2_67D41ACFEF39E84E_OFFSET UNITYSDK_OFFSET(0x134CE3C0)
#define CLASS_2_7C59294E2ED9748E_METHOD_2_8C3DB70FFBBF01C7_OFFSET UNITYSDK_OFFSET(0x134CE910)
#define CLASS_2_7C59294E2ED9748E_METHOD_2_C3C9BF311C318908_OFFSET UNITYSDK_OFFSET(0x134CE080)
#define CLASS_2_7C59294E2ED9748E_METHOD_2_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x134CE710)
#define CLASS_2_7C59294E2ED9748E_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x134CEA90)
#define CLASS_2_7C59294E2ED9748E__CTOR_OFFSET UNITYSDK_OFFSET(0x134CE090)

inline static constexpr unsigned int Class_2_7C59294E2ED9748E_TypeDefinitionIndex = 69284;

class Class_2_7C59294E2ED9748E : public ::Class_1_2BC1F0DE405AE0D4
{
public:
	::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x80
	::System::Boolean EGGNNPNDIDD; // 0x88
	::System::UInt32 _BindPropGroupEntityID_k__BackingField; // 0x8C
	::UnityEngine::Vector3 _WorldUp_k__BackingField; // 0x90
	::System::UInt32 _BindPropGroupID_k__BackingField; // 0x9C

	::System::Void _ctor(::Class_1_483ED67B5E0A21FB* a1, ::RPG::GameCore::LevelPedestrianV2IntersectionEscalatorInfo* a2, ::System::Int32 a3, ::UnityEngine::Transform* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_483ED67B5E0A21FB*, ::RPG::GameCore::LevelPedestrianV2IntersectionEscalatorInfo*, ::System::Int32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_7C59294E2ED9748E__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::UInt32 get_BindPropGroupID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C59294E2ED9748E_GET_BINDPROPGROUPID_OFFSET))(this);
	}

	::System::UInt32 get_BindPropGroupEntityID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C59294E2ED9748E_GET_BINDPROPGROUPENTITYID_OFFSET))(this);
	}

	::RPG::Client::EPedestrianV2MotionState Method_2_C3C9BF311C318908()
	{
		return ((::RPG::Client::EPedestrianV2MotionState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C59294E2ED9748E_METHOD_2_C3C9BF311C318908_OFFSET))(this);
	}

	::System::Void Method_2_67D41ACFEF39E84E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C59294E2ED9748E_METHOD_2_67D41ACFEF39E84E_OFFSET))(this);
	}

	::System::Void Method_2_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C59294E2ED9748E_METHOD_2_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Void Method_2_61EC2AC0BD93363E(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7C59294E2ED9748E_METHOD_2_61EC2AC0BD93363E_OFFSET))(this, a1);
	}

	::System::Void Method_2_8C3DB70FFBBF01C7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7C59294E2ED9748E_METHOD_2_8C3DB70FFBBF01C7_OFFSET))(this, a1);
	}

	::System::Void Method_2_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C59294E2ED9748E_METHOD_2_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C59294E2ED9748E_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::UnityEngine::Vector3 get_WorldUp()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C59294E2ED9748E_GET_WORLDUP_OFFSET))(this);
	}
};
