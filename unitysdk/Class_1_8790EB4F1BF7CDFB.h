#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_8C89E99063848B63.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_60475C2D4D583319;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_8790EB4F1BF7CDFB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x159C0EF0)
#define CLASS_1_8790EB4F1BF7CDFB_GET_FOLLOWTARGETVELOCITY_OFFSET UNITYSDK_OFFSET(0x159BE9C0)
#define CLASS_1_8790EB4F1BF7CDFB_GET_FOLLOWYAW_OFFSET UNITYSDK_OFFSET(0x159BE9A0)
#define CLASS_1_8790EB4F1BF7CDFB_GET_LEADERTARGETPOS_OFFSET UNITYSDK_OFFSET(0x159BE970)
#define CLASS_1_8790EB4F1BF7CDFB_METHOD_1_01C00AED4805279E_OFFSET UNITYSDK_OFFSET(0x159C0E70)
#define CLASS_1_8790EB4F1BF7CDFB_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x159C0C70)
#define CLASS_1_8790EB4F1BF7CDFB_METHOD_1_1B6B4C09D0026505_OFFSET UNITYSDK_OFFSET(0x159BF9D0)
#define CLASS_1_8790EB4F1BF7CDFB_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x159C0500)
#define CLASS_1_8790EB4F1BF7CDFB_METHOD_1_281A0245E582D263_OFFSET UNITYSDK_OFFSET(0x159BEF50)
#define CLASS_1_8790EB4F1BF7CDFB_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x159C0250)
#define CLASS_1_8790EB4F1BF7CDFB_METHOD_1_4A39E219B2D003CC_OFFSET UNITYSDK_OFFSET(0x159C0040)
#define CLASS_1_8790EB4F1BF7CDFB_METHOD_1_4B86AB00EE74348B_OFFSET UNITYSDK_OFFSET(0x159C0560)
#define CLASS_1_8790EB4F1BF7CDFB_METHOD_1_4F821A50172FF32C_OFFSET UNITYSDK_OFFSET(0x159BE9F0)
#define CLASS_1_8790EB4F1BF7CDFB_METHOD_1_61EC2AC0BD93363E_OFFSET UNITYSDK_OFFSET(0x159C1090)
#define CLASS_1_8790EB4F1BF7CDFB_METHOD_1_7171B5DE42DDF364_OFFSET UNITYSDK_OFFSET(0x159BF410)
#define CLASS_1_8790EB4F1BF7CDFB_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x159C0DB0)
#define CLASS_1_8790EB4F1BF7CDFB_METHOD_1_B741B463286E5EDA_OFFSET UNITYSDK_OFFSET(0x159BF6E0)
#define CLASS_1_8790EB4F1BF7CDFB_METHOD_1_DB724851FEB3D97C_OFFSET UNITYSDK_OFFSET(0x159C0F40)
#define CLASS_1_8790EB4F1BF7CDFB_METHOD_1_E44BBEA060592AD0_OFFSET UNITYSDK_OFFSET(0x159C0640)
#define CLASS_1_8790EB4F1BF7CDFB_SET_FOLLOWTARGETVELOCITY_OFFSET UNITYSDK_OFFSET(0x159BE9E0)
#define CLASS_1_8790EB4F1BF7CDFB_SET_FOLLOWYAW_OFFSET UNITYSDK_OFFSET(0x159BE9B0)
#define CLASS_1_8790EB4F1BF7CDFB_SET_LEADERTARGETPOS_OFFSET UNITYSDK_OFFSET(0x159BE990)
#define CLASS_1_8790EB4F1BF7CDFB__CTOR_OFFSET UNITYSDK_OFFSET(0x159BE940)

inline static constexpr unsigned int Class_1_8790EB4F1BF7CDFB_TypeDefinitionIndex = 53508;

class Class_1_8790EB4F1BF7CDFB : public ::System::Object
{
public:
	// static const ::System::Single GLNIJIJBJPD; // 0x0
	// static const ::System::Single GPPJGOCCIMN; // 0x0
	// static const ::System::Single DKAALAJKACI; // 0x0
	::Struct_2_8C89E99063848B63 BGDDKFHKAKM; // 0x10
	::RPG::GameCore::GameEntity* DIHCNFOOEFF; // 0x50
	::RPG::GameCore::GameEntity* JKLFGAPHING; // 0x58
	::Class_1_60475C2D4D583319* IEPCIODGJJD; // 0x60
	::UnityEngine::Vector3 _LeaderTargetPos_k__BackingField; // 0x68
	::UnityEngine::Vector3 _FollowTargetVelocity_k__BackingField; // 0x74
	::UnityEngine::Vector3 GFAJINELEBN; // 0x80
	::UnityEngine::Quaternion _FollowYaw_k__BackingField; // 0x8C
	::System::Boolean HFGEINNJADO; // 0x9C
	::System::Boolean JDNKBDPGNDK; // 0x9D

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
