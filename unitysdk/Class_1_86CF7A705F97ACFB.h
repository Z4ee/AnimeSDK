#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityTag.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_6C30C65EACF8D014;
namespace RPG::Client { class MonoCharacterConicalVisionForward; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class ConicalVisionConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TransformComponent; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_1_86CF7A705F97ACFB_GET_ALERTSPEEDLEFTVALUE_OFFSET UNITYSDK_OFFSET(0x1190CB50)
#define CLASS_1_86CF7A705F97ACFB_GET_ALERTSPEEDRIGHTVALUE_OFFSET UNITYSDK_OFFSET(0x1190CB70)
#define CLASS_1_86CF7A705F97ACFB_GET_ANGLE_OFFSET UNITYSDK_OFFSET(0x1190CA70)
#define CLASS_1_86CF7A705F97ACFB_GET_ATTACHEDPOINT_OFFSET UNITYSDK_OFFSET(0x1190C6E0)
#define CLASS_1_86CF7A705F97ACFB_GET_EXCLUDEENTITYTAGS_OFFSET UNITYSDK_OFFSET(0x1190CB90)
#define CLASS_1_86CF7A705F97ACFB_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0x1190CA50)
#define CLASS_1_86CF7A705F97ACFB_GET_TARGETPIVOTPOINT_OFFSET UNITYSDK_OFFSET(0x1190CA10)
#define CLASS_1_86CF7A705F97ACFB_GET_TARGETRAYPOINT_OFFSET UNITYSDK_OFFSET(0x1190CA30)
#define CLASS_1_86CF7A705F97ACFB_METHOD_1_073339CA0CC86DD4_OFFSET UNITYSDK_OFFSET(0x1190C700)
#define CLASS_1_86CF7A705F97ACFB_METHOD_1_1B38DDAB1EBE93B0_OFFSET UNITYSDK_OFFSET(0x1190D550)
#define CLASS_1_86CF7A705F97ACFB_METHOD_1_1FF8A9F0CF51FBDE_OFFSET UNITYSDK_OFFSET(0x1190CF70)
#define CLASS_1_86CF7A705F97ACFB_METHOD_1_4232EA0800C54D53_OFFSET UNITYSDK_OFFSET(0x1190CDD0)
#define CLASS_1_86CF7A705F97ACFB_METHOD_1_9F59C088ACADFAC2_1_OFFSET UNITYSDK_OFFSET(0x1190C8D0)
#define CLASS_1_86CF7A705F97ACFB_METHOD_1_9F59C088ACADFAC2_OFFSET UNITYSDK_OFFSET(0x1190C770)
#define CLASS_1_86CF7A705F97ACFB_METHOD_1_A36150C5DCC8409E_1_OFFSET UNITYSDK_OFFSET(0x1190CAF0)
#define CLASS_1_86CF7A705F97ACFB_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x1190CA90)
#define CLASS_1_86CF7A705F97ACFB_METHOD_1_A99EF338505A0EA9_OFFSET UNITYSDK_OFFSET(0x1190D5F0)
#define CLASS_1_86CF7A705F97ACFB_METHOD_1_AF99A26E836BCC88_OFFSET UNITYSDK_OFFSET(0x1190D7E0)
#define CLASS_1_86CF7A705F97ACFB_METHOD_1_D437D090E63BE8A7_OFFSET UNITYSDK_OFFSET(0x1190DAE0)
#define CLASS_1_86CF7A705F97ACFB_SET_ALERTSPEEDLEFTVALUE_OFFSET UNITYSDK_OFFSET(0x1190CB60)
#define CLASS_1_86CF7A705F97ACFB_SET_ALERTSPEEDRIGHTVALUE_OFFSET UNITYSDK_OFFSET(0x1190CB80)
#define CLASS_1_86CF7A705F97ACFB_SET_ANGLE_OFFSET UNITYSDK_OFFSET(0x1190CA80)
#define CLASS_1_86CF7A705F97ACFB_SET_ATTACHEDPOINT_OFFSET UNITYSDK_OFFSET(0x1190C6F0)
#define CLASS_1_86CF7A705F97ACFB_SET_EXCLUDEENTITYTAGS_OFFSET UNITYSDK_OFFSET(0x1190CBA0)
#define CLASS_1_86CF7A705F97ACFB_SET_RADIUS_OFFSET UNITYSDK_OFFSET(0x1190CA60)
#define CLASS_1_86CF7A705F97ACFB_SET_TARGETPIVOTPOINT_OFFSET UNITYSDK_OFFSET(0x1190CA20)
#define CLASS_1_86CF7A705F97ACFB_SET_TARGETRAYPOINT_OFFSET UNITYSDK_OFFSET(0x1190CA40)
#define CLASS_1_86CF7A705F97ACFB__CTOR_OFFSET UNITYSDK_OFFSET(0x1190CBB0)

inline static constexpr unsigned int Class_1_86CF7A705F97ACFB_TypeDefinitionIndex = 53207;

class Class_1_86CF7A705F97ACFB : public ::System::Object
{
public:
	::Il2CppArray<::RPG::GameCore::EntityTag>* _ExcludeEntityTags_k__BackingField; // 0x10
	::System::String* _TargetRayPoint_k__BackingField; // 0x18
	::RPG::GameCore::AdventureCharacterController* Field_1_2; // 0x20
	::System::String* _AttachedPoint_k__BackingField; // 0x28
	::RPG::GameCore::GameEntity* Field_1_4; // 0x30
	::System::String* _TargetPivotPoint_k__BackingField; // 0x38
	::RPG::Client::MonoCharacterConicalVisionForward* Field_1_6; // 0x40
	::RPG::GameCore::TransformComponent* Field_1_7; // 0x48
	::System::Single _AlertSpeedLeftValue_k__BackingField; // 0x50
	::System::Single _Angle_k__BackingField; // 0x54
	::System::Single _Radius_k__BackingField; // 0x58
	::System::Single _AlertSpeedRightValue_k__BackingField; // 0x5C

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::ConicalVisionConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::ConicalVisionConfig*))((::PBYTE)hIl2Cpp + CLASS_1_86CF7A705F97ACFB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* get_AttachedPoint()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_86CF7A705F97ACFB_GET_ATTACHEDPOINT_OFFSET))(this);
	}

	::System::Void set_AttachedPoint(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_86CF7A705F97ACFB_SET_ATTACHEDPOINT_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* Method_1_073339CA0CC86DD4()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_86CF7A705F97ACFB_METHOD_1_073339CA0CC86DD4_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_9F59C088ACADFAC2()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_86CF7A705F97ACFB_METHOD_1_9F59C088ACADFAC2_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_9F59C088ACADFAC2_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_86CF7A705F97ACFB_METHOD_1_9F59C088ACADFAC2_1_OFFSET))(this);
	}

	::System::String* get_TargetPivotPoint()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_86CF7A705F97ACFB_GET_TARGETPIVOTPOINT_OFFSET))(this);
	}

	::System::Void set_TargetPivotPoint(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_86CF7A705F97ACFB_SET_TARGETPIVOTPOINT_OFFSET))(this, a1);
	}

	::System::String* get_TargetRayPoint()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_86CF7A705F97ACFB_GET_TARGETRAYPOINT_OFFSET))(this);
	}

	::System::Void set_TargetRayPoint(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_86CF7A705F97ACFB_SET_TARGETRAYPOINT_OFFSET))(this, a1);
	}

	::System::Single get_Radius()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_86CF7A705F97ACFB_GET_RADIUS_OFFSET))(this);
	}

	::System::Void set_Radius(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_86CF7A705F97ACFB_SET_RADIUS_OFFSET))(this, a1);
	}

	::System::Single get_Angle()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_86CF7A705F97ACFB_GET_ANGLE_OFFSET))(this);
	}

	::System::Void set_Angle(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_86CF7A705F97ACFB_SET_ANGLE_OFFSET))(this, a1);
	}

	::System::Single Method_1_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_86CF7A705F97ACFB_METHOD_1_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Single Method_1_A36150C5DCC8409E_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_86CF7A705F97ACFB_METHOD_1_A36150C5DCC8409E_1_OFFSET))(this);
	}

	::System::Single get_AlertSpeedLeftValue()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_86CF7A705F97ACFB_GET_ALERTSPEEDLEFTVALUE_OFFSET))(this);
	}

	::System::Void set_AlertSpeedLeftValue(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_86CF7A705F97ACFB_SET_ALERTSPEEDLEFTVALUE_OFFSET))(this, a1);
	}

	::System::Single get_AlertSpeedRightValue()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_86CF7A705F97ACFB_GET_ALERTSPEEDRIGHTVALUE_OFFSET))(this);
	}

	::System::Void set_AlertSpeedRightValue(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_86CF7A705F97ACFB_SET_ALERTSPEEDRIGHTVALUE_OFFSET))(this, a1);
	}

	::Il2CppArray<::RPG::GameCore::EntityTag>* get_ExcludeEntityTags()
	{
		return ((::Il2CppArray<::RPG::GameCore::EntityTag>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_86CF7A705F97ACFB_GET_EXCLUDEENTITYTAGS_OFFSET))(this);
	}

	::System::Void set_ExcludeEntityTags(::Il2CppArray<::RPG::GameCore::EntityTag>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::EntityTag>*))((::PBYTE)hIl2Cpp + CLASS_1_86CF7A705F97ACFB_SET_EXCLUDEENTITYTAGS_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_4232EA0800C54D53(::RPG::GameCore::GameEntity* a1, ::Class_1_6C30C65EACF8D014* a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_1_6C30C65EACF8D014*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_86CF7A705F97ACFB_METHOD_1_4232EA0800C54D53_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_1_D437D090E63BE8A7(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_86CF7A705F97ACFB_METHOD_1_D437D090E63BE8A7_OFFSET))(this, a1);
	}

	::System::Void Method_1_1FF8A9F0CF51FBDE(::RPG::GameCore::GameEntity* a1, ::Class_1_6C30C65EACF8D014* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_1_6C30C65EACF8D014*))((::PBYTE)hIl2Cpp + CLASS_1_86CF7A705F97ACFB_METHOD_1_1FF8A9F0CF51FBDE_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_AF99A26E836BCC88(::Class_1_6C30C65EACF8D014* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6C30C65EACF8D014*))((::PBYTE)hIl2Cpp + CLASS_1_86CF7A705F97ACFB_METHOD_1_AF99A26E836BCC88_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A99EF338505A0EA9(::Class_1_6C30C65EACF8D014* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6C30C65EACF8D014*))((::PBYTE)hIl2Cpp + CLASS_1_86CF7A705F97ACFB_METHOD_1_A99EF338505A0EA9_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1B38DDAB1EBE93B0(::Class_1_6C30C65EACF8D014* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6C30C65EACF8D014*))((::PBYTE)hIl2Cpp + CLASS_1_86CF7A705F97ACFB_METHOD_1_1B38DDAB1EBE93B0_OFFSET))(this, a1);
	}
};
