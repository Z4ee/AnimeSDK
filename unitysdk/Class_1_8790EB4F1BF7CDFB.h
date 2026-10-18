#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_8C89E99063848B63.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_60475C2D4D583319;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_8790EB4F1BF7CDFB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x159B64D0)
#define CLASS_1_8790EB4F1BF7CDFB_GET_FOLLOWTARGETVELOCITY_OFFSET UNITYSDK_OFFSET(0x159B3F80)
#define CLASS_1_8790EB4F1BF7CDFB_GET_FOLLOWYAW_OFFSET UNITYSDK_OFFSET(0x159B3F60)
#define CLASS_1_8790EB4F1BF7CDFB_GET_LEADERTARGETPOS_OFFSET UNITYSDK_OFFSET(0x159B3F20)
#define CLASS_1_8790EB4F1BF7CDFB_METHOD_1_01C00AED4805279E_OFFSET UNITYSDK_OFFSET(0x159B6450)
#define CLASS_1_8790EB4F1BF7CDFB_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x159B6230)
#define CLASS_1_8790EB4F1BF7CDFB_METHOD_1_1B6B4C09D0026505_OFFSET UNITYSDK_OFFSET(0x159B4F90)
#define CLASS_1_8790EB4F1BF7CDFB_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x159B5AC0)
#define CLASS_1_8790EB4F1BF7CDFB_METHOD_1_281A0245E582D263_OFFSET UNITYSDK_OFFSET(0x159B4520)
#define CLASS_1_8790EB4F1BF7CDFB_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x159B5810)
#define CLASS_1_8790EB4F1BF7CDFB_METHOD_1_4A39E219B2D003CC_OFFSET UNITYSDK_OFFSET(0x159B5600)
#define CLASS_1_8790EB4F1BF7CDFB_METHOD_1_4B86AB00EE74348B_OFFSET UNITYSDK_OFFSET(0x159B5B20)
#define CLASS_1_8790EB4F1BF7CDFB_METHOD_1_4F821A50172FF32C_OFFSET UNITYSDK_OFFSET(0x159B3FC0)
#define CLASS_1_8790EB4F1BF7CDFB_METHOD_1_61EC2AC0BD93363E_OFFSET UNITYSDK_OFFSET(0x159B6670)
#define CLASS_1_8790EB4F1BF7CDFB_METHOD_1_7171B5DE42DDF364_OFFSET UNITYSDK_OFFSET(0x159B49E0)
#define CLASS_1_8790EB4F1BF7CDFB_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x159B6390)
#define CLASS_1_8790EB4F1BF7CDFB_METHOD_1_B741B463286E5EDA_OFFSET UNITYSDK_OFFSET(0x159B4CC0)
#define CLASS_1_8790EB4F1BF7CDFB_METHOD_1_DB724851FEB3D97C_OFFSET UNITYSDK_OFFSET(0x159B6520)
#define CLASS_1_8790EB4F1BF7CDFB_METHOD_1_E44BBEA060592AD0_OFFSET UNITYSDK_OFFSET(0x159B5C00)
#define CLASS_1_8790EB4F1BF7CDFB_SET_FOLLOWTARGETVELOCITY_OFFSET UNITYSDK_OFFSET(0x159B3FA0)
#define CLASS_1_8790EB4F1BF7CDFB_SET_FOLLOWYAW_OFFSET UNITYSDK_OFFSET(0x159B3F70)
#define CLASS_1_8790EB4F1BF7CDFB_SET_LEADERTARGETPOS_OFFSET UNITYSDK_OFFSET(0x159B3F40)
#define CLASS_1_8790EB4F1BF7CDFB__CTOR_OFFSET UNITYSDK_OFFSET(0x159B3EF0)

inline static constexpr unsigned int Class_1_8790EB4F1BF7CDFB_TypeDefinitionIndex = 53508;

class Class_1_8790EB4F1BF7CDFB : public ::System::Object
{
public:
	// static const ::System::Single GLNIJIJBJPD; // 0x0
	// static const ::System::Single GPPJGOCCIMN; // 0x0
	// static const ::System::Single DKAALAJKACI; // 0x0
	::RPG::GameCore::GameEntity* JKLFGAPHING; // 0x10
	::Class_1_60475C2D4D583319* IEPCIODGJJD; // 0x18
	::Struct_2_8C89E99063848B63 BGDDKFHKAKM; // 0x20
	::RPG::GameCore::GameEntity* DIHCNFOOEFF; // 0x60
	::UnityEngine::Quaternion _FollowYaw_k__BackingField; // 0x68
	::UnityEngine::Vector3 GFAJINELEBN; // 0x78
	::System::Boolean JDNKBDPGNDK; // 0x84
	::System::Boolean HFGEINNJADO; // 0x85
	::UnityEngine::Vector3 _FollowTargetVelocity_k__BackingField; // 0x88
	::UnityEngine::Vector3 _LeaderTargetPos_k__BackingField; // 0x94

	::System::Void _ctor(::Struct_2_8C89E99063848B63 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_8C89E99063848B63))((::PBYTE)hIl2Cpp + CLASS_1_8790EB4F1BF7CDFB__CTOR_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 get_LeaderTargetPos()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8790EB4F1BF7CDFB_GET_LEADERTARGETPOS_OFFSET))(this);
	}

	::System::Void set_LeaderTargetPos(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_8790EB4F1BF7CDFB_SET_LEADERTARGETPOS_OFFSET))(this, a1);
	}

	::UnityEngine::Quaternion get_FollowYaw()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8790EB4F1BF7CDFB_GET_FOLLOWYAW_OFFSET))(this);
	}

	::System::Void set_FollowYaw(::UnityEngine::Quaternion a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_8790EB4F1BF7CDFB_SET_FOLLOWYAW_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 get_FollowTargetVelocity()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8790EB4F1BF7CDFB_GET_FOLLOWTARGETVELOCITY_OFFSET))(this);
	}

	::System::Void set_FollowTargetVelocity(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_8790EB4F1BF7CDFB_SET_FOLLOWTARGETVELOCITY_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_1_4F821A50172FF32C(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Quaternion& a4)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CLASS_1_8790EB4F1BF7CDFB_METHOD_1_4F821A50172FF32C_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_1_281A0245E582D263(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8790EB4F1BF7CDFB_METHOD_1_281A0245E582D263_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_B741B463286E5EDA(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_8790EB4F1BF7CDFB_METHOD_1_B741B463286E5EDA_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector3 Method_1_1B6B4C09D0026505(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_8790EB4F1BF7CDFB_METHOD_1_1B6B4C09D0026505_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8790EB4F1BF7CDFB_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8790EB4F1BF7CDFB_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_1_4B86AB00EE74348B(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_8790EB4F1BF7CDFB_METHOD_1_4B86AB00EE74348B_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_E44BBEA060592AD0(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_8790EB4F1BF7CDFB_METHOD_1_E44BBEA060592AD0_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8790EB4F1BF7CDFB_METHOD_1_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8790EB4F1BF7CDFB_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_7171B5DE42DDF364(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_8790EB4F1BF7CDFB_METHOD_1_7171B5DE42DDF364_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_1_01C00AED4805279E(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_8790EB4F1BF7CDFB_METHOD_1_01C00AED4805279E_OFFSET))(a1);
	}

	::System::Void Method_1_DB724851FEB3D97C(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_8790EB4F1BF7CDFB_METHOD_1_DB724851FEB3D97C_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8790EB4F1BF7CDFB_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_61EC2AC0BD93363E(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_8790EB4F1BF7CDFB_METHOD_1_61EC2AC0BD93363E_OFFSET))(this, a1);
	}

	static ::UnityEngine::Vector3 Method_1_4A39E219B2D003CC(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Vector3 a3)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_8790EB4F1BF7CDFB_METHOD_1_4A39E219B2D003CC_OFFSET))(a1, a2, a3);
	}
};
