#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CCB0D6744495158D.h"
#include "unitysdk/RPG/Client/EPedestrianV2MotionState.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_7D9075FD1A3992DE;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelPedestrianV2IntersectionEscalatorInfo; }
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define CLASS_2_67CF98F2529A20C5_GET_BINDPROPGROUPENTITYID_OFFSET UNITYSDK_OFFSET(0x11C27840)
#define CLASS_2_67CF98F2529A20C5_GET_BINDPROPGROUPID_OFFSET UNITYSDK_OFFSET(0x11C27830)
#define CLASS_2_67CF98F2529A20C5_GET_WORLDUP_OFFSET UNITYSDK_OFFSET(0x11C281C0)
#define CLASS_2_67CF98F2529A20C5_METHOD_2_4805283D59625FD9_OFFSET UNITYSDK_OFFSET(0x11C27B20)
#define CLASS_2_67CF98F2529A20C5_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x11C28240)
#define CLASS_2_67CF98F2529A20C5_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x11C281E0)
#define CLASS_2_67CF98F2529A20C5_METHOD_2_8C3DB70FFBBF01C7_OFFSET UNITYSDK_OFFSET(0x11C27FC0)
#define CLASS_2_67CF98F2529A20C5_METHOD_2_96BDC4B57CCFE000_OFFSET UNITYSDK_OFFSET(0x11C28060)
#define CLASS_2_67CF98F2529A20C5_METHOD_2_C3C9BF311C318908_OFFSET UNITYSDK_OFFSET(0x11C27850)
#define CLASS_2_67CF98F2529A20C5_METHOD_2_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x11C27EB0)
#define CLASS_2_67CF98F2529A20C5_METHOD_2_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x11C280F0)
#define CLASS_2_67CF98F2529A20C5_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x11C281B0)
#define CLASS_2_67CF98F2529A20C5__CTOR_OFFSET UNITYSDK_OFFSET(0x11C27860)

inline static constexpr unsigned int Class_2_67CF98F2529A20C5_TypeDefinitionIndex = 63898;

class Class_2_67CF98F2529A20C5 : public ::Class_1_CCB0D6744495158D
{
public:
	::RPG::GameCore::GameEntity* Field_2_3; // 0x80
	::System::UInt32 _BindPropGroupEntityID_k__BackingField; // 0x88
	::System::UInt32 _BindPropGroupID_k__BackingField; // 0x8C
	::UnityEngine::Vector3 _WorldUp_k__BackingField; // 0x90
	::System::Boolean Field_2_4; // 0x9C

	::System::Void _ctor(::Class_1_7D9075FD1A3992DE* a1, ::RPG::GameCore::LevelPedestrianV2IntersectionEscalatorInfo* a2, ::System::Int32 a3, ::UnityEngine::Transform* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7D9075FD1A3992DE*, ::RPG::GameCore::LevelPedestrianV2IntersectionEscalatorInfo*, ::System::Int32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_67CF98F2529A20C5__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::UInt32 get_BindPropGroupID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67CF98F2529A20C5_GET_BINDPROPGROUPID_OFFSET))(this);
	}

	::System::UInt32 get_BindPropGroupEntityID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67CF98F2529A20C5_GET_BINDPROPGROUPENTITYID_OFFSET))(this);
	}

	::RPG::Client::EPedestrianV2MotionState Method_2_C3C9BF311C318908()
	{
		return ((::RPG::Client::EPedestrianV2MotionState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67CF98F2529A20C5_METHOD_2_C3C9BF311C318908_OFFSET))(this);
	}

	::System::Void Method_2_4805283D59625FD9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67CF98F2529A20C5_METHOD_2_4805283D59625FD9_OFFSET))(this);
	}

	::System::Void Method_2_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67CF98F2529A20C5_METHOD_2_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_2_8C3DB70FFBBF01C7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_67CF98F2529A20C5_METHOD_2_8C3DB70FFBBF01C7_OFFSET))(this, a1);
	}

	::System::Void Method_2_96BDC4B57CCFE000(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_67CF98F2529A20C5_METHOD_2_96BDC4B57CCFE000_OFFSET))(this, a1);
	}

	::System::Void Method_2_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67CF98F2529A20C5_METHOD_2_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67CF98F2529A20C5_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::UnityEngine::Vector3 get_WorldUp()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67CF98F2529A20C5_GET_WORLDUP_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67CF98F2529A20C5_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67CF98F2529A20C5_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}
};
