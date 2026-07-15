#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityTag.h"
#include "unitysdk/System/Object.h"

class Class_1_6C30C65EACF8D014;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TransformComponent; }
namespace RPG::GameCore { class VisionConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_6F8DD29344D23142_GET_ALERTSPEEDLEFTVALUE_OFFSET UNITYSDK_OFFSET(0x170C6F70)
#define CLASS_1_6F8DD29344D23142_GET_ALERTSPEEDRIGHTVALUE_OFFSET UNITYSDK_OFFSET(0x170C6F90)
#define CLASS_1_6F8DD29344D23142_GET_DISTANCE_OFFSET UNITYSDK_OFFSET(0x170C6E70)
#define CLASS_1_6F8DD29344D23142_GET_EXCLUDEENTITYTAGS_OFFSET UNITYSDK_OFFSET(0x170C6FB0)
#define CLASS_1_6F8DD29344D23142_GET_NAME_OFFSET UNITYSDK_OFFSET(0x170C6DD0)
#define CLASS_1_6F8DD29344D23142_GET_PITCHLIMITMAX_OFFSET UNITYSDK_OFFSET(0x170C6F10)
#define CLASS_1_6F8DD29344D23142_GET_PITCHLIMITMIN_OFFSET UNITYSDK_OFFSET(0x170C6EF0)
#define CLASS_1_6F8DD29344D23142_GET_RAYSOURCEPOINTNAME_OFFSET UNITYSDK_OFFSET(0x170C6F30)
#define CLASS_1_6F8DD29344D23142_GET_RAYTARGETPOINTNAME_OFFSET UNITYSDK_OFFSET(0x170C6F50)
#define CLASS_1_6F8DD29344D23142_GET_YAWANGLE_OFFSET UNITYSDK_OFFSET(0x170C6DF0)
#define CLASS_1_6F8DD29344D23142_METHOD_1_4B57FC15B39EDB4E_OFFSET UNITYSDK_OFFSET(0x170C7DC0)
#define CLASS_1_6F8DD29344D23142_METHOD_1_4D851AEC7175AA9E_OFFSET UNITYSDK_OFFSET(0x170C7910)
#define CLASS_1_6F8DD29344D23142_METHOD_1_883D7E346EAED533_OFFSET UNITYSDK_OFFSET(0x170C7520)
#define CLASS_1_6F8DD29344D23142_METHOD_1_A36150C5DCC8409E_1_OFFSET UNITYSDK_OFFSET(0x170C6E90)
#define CLASS_1_6F8DD29344D23142_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x170C6E10)
#define CLASS_1_6F8DD29344D23142_METHOD_1_AF99A26E836BCC88_OFFSET UNITYSDK_OFFSET(0x170C7AC0)
#define CLASS_1_6F8DD29344D23142_METHOD_1_CAB09625B03CCCA7_OFFSET UNITYSDK_OFFSET(0x170C76F0)
#define CLASS_1_6F8DD29344D23142_METHOD_1_CEAE256FB1DEC448_OFFSET UNITYSDK_OFFSET(0x170C72D0)
#define CLASS_1_6F8DD29344D23142_METHOD_1_D437D090E63BE8A7_OFFSET UNITYSDK_OFFSET(0x170C8360)
#define CLASS_1_6F8DD29344D23142_METHOD_1_DE45EA3A177BC33B_OFFSET UNITYSDK_OFFSET(0x170C7680)
#define CLASS_1_6F8DD29344D23142_SET_ALERTSPEEDLEFTVALUE_OFFSET UNITYSDK_OFFSET(0x170C6F80)
#define CLASS_1_6F8DD29344D23142_SET_ALERTSPEEDRIGHTVALUE_OFFSET UNITYSDK_OFFSET(0x170C6FA0)
#define CLASS_1_6F8DD29344D23142_SET_DISTANCE_OFFSET UNITYSDK_OFFSET(0x170C6E80)
#define CLASS_1_6F8DD29344D23142_SET_EXCLUDEENTITYTAGS_OFFSET UNITYSDK_OFFSET(0x170C6FC0)
#define CLASS_1_6F8DD29344D23142_SET_NAME_OFFSET UNITYSDK_OFFSET(0x170C6DE0)
#define CLASS_1_6F8DD29344D23142_SET_PITCHLIMITMAX_OFFSET UNITYSDK_OFFSET(0x170C6F20)
#define CLASS_1_6F8DD29344D23142_SET_PITCHLIMITMIN_OFFSET UNITYSDK_OFFSET(0x170C6F00)
#define CLASS_1_6F8DD29344D23142_SET_RAYSOURCEPOINTNAME_OFFSET UNITYSDK_OFFSET(0x170C6F40)
#define CLASS_1_6F8DD29344D23142_SET_RAYTARGETPOINTNAME_OFFSET UNITYSDK_OFFSET(0x170C6F60)
#define CLASS_1_6F8DD29344D23142_SET_YAWANGLE_OFFSET UNITYSDK_OFFSET(0x170C6E00)
#define CLASS_1_6F8DD29344D23142__CTOR_1_OFFSET UNITYSDK_OFFSET(0x170C7220)
#define CLASS_1_6F8DD29344D23142__CTOR_OFFSET UNITYSDK_OFFSET(0x170C6FD0)

inline static constexpr unsigned int Class_1_6F8DD29344D23142_TypeDefinitionIndex = 54421;

class Class_1_6F8DD29344D23142 : public ::System::Object
{
public:
	::System::String* _RaySourcePointName_k__BackingField; // 0x10
	::RPG::GameCore::TransformComponent* Field_1_1; // 0x18
	::System::String* _RayTargetPointName_k__BackingField; // 0x20
	::System::String* _Name_k__BackingField; // 0x28
	::UnityEngine::Transform* Field_1_4; // 0x30
	::RPG::GameCore::GameEntity* Field_1_5; // 0x38
	::System::Int32 _ExcludeEntityTags_k__BackingField; // 0x40
	::System::Single _PitchLimitMax_k__BackingField; // 0x44
	::System::Single _AlertSpeedRightValue_k__BackingField; // 0x48
	::System::Single _AlertSpeedLeftValue_k__BackingField; // 0x4C
	::System::Single _YawAngle_k__BackingField; // 0x50
	::System::Single _Distance_k__BackingField; // 0x54
	::System::Single _PitchLimitMin_k__BackingField; // 0x58

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TransformComponent* a2, ::RPG::GameCore::VisionConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TransformComponent*, ::RPG::GameCore::VisionConfig*))((::PBYTE)hIl2Cpp + CLASS_1_6F8DD29344D23142__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _ctor_1(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TransformComponent* a2, ::System::String* a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Single a7, ::System::String* a8, ::System::String* a9, ::System::Single a10, ::System::Single a11)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TransformComponent*, ::System::String*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::String*, ::System::String*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6F8DD29344D23142__CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
	}

	::System::String* get_Name()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F8DD29344D23142_GET_NAME_OFFSET))(this);
	}

	::System::Void set_Name(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6F8DD29344D23142_SET_NAME_OFFSET))(this, a1);
	}

	::System::Single get_YawAngle()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F8DD29344D23142_GET_YAWANGLE_OFFSET))(this);
	}

	::System::Void set_YawAngle(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6F8DD29344D23142_SET_YAWANGLE_OFFSET))(this, a1);
	}

	::System::Single Method_1_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F8DD29344D23142_METHOD_1_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Single get_Distance()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F8DD29344D23142_GET_DISTANCE_OFFSET))(this);
	}

	::System::Void set_Distance(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6F8DD29344D23142_SET_DISTANCE_OFFSET))(this, a1);
	}

	::System::Single Method_1_A36150C5DCC8409E_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F8DD29344D23142_METHOD_1_A36150C5DCC8409E_1_OFFSET))(this);
	}

	::System::Single get_PitchLimitMin()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F8DD29344D23142_GET_PITCHLIMITMIN_OFFSET))(this);
	}

	::System::Void set_PitchLimitMin(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6F8DD29344D23142_SET_PITCHLIMITMIN_OFFSET))(this, a1);
	}

	::System::Single get_PitchLimitMax()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F8DD29344D23142_GET_PITCHLIMITMAX_OFFSET))(this);
	}

	::System::Void set_PitchLimitMax(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6F8DD29344D23142_SET_PITCHLIMITMAX_OFFSET))(this, a1);
	}

	::System::String* get_RaySourcePointName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F8DD29344D23142_GET_RAYSOURCEPOINTNAME_OFFSET))(this);
	}

	::System::Void set_RaySourcePointName(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6F8DD29344D23142_SET_RAYSOURCEPOINTNAME_OFFSET))(this, a1);
	}

	::System::String* get_RayTargetPointName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F8DD29344D23142_GET_RAYTARGETPOINTNAME_OFFSET))(this);
	}

	::System::Void set_RayTargetPointName(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6F8DD29344D23142_SET_RAYTARGETPOINTNAME_OFFSET))(this, a1);
	}

	::System::Single get_AlertSpeedLeftValue()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F8DD29344D23142_GET_ALERTSPEEDLEFTVALUE_OFFSET))(this);
	}

	::System::Void set_AlertSpeedLeftValue(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6F8DD29344D23142_SET_ALERTSPEEDLEFTVALUE_OFFSET))(this, a1);
	}

	::System::Single get_AlertSpeedRightValue()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F8DD29344D23142_GET_ALERTSPEEDRIGHTVALUE_OFFSET))(this);
	}

	::System::Void set_AlertSpeedRightValue(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6F8DD29344D23142_SET_ALERTSPEEDRIGHTVALUE_OFFSET))(this, a1);
	}

	::System::Int32 get_ExcludeEntityTags()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F8DD29344D23142_GET_EXCLUDEENTITYTAGS_OFFSET))(this);
	}

	::System::Void set_ExcludeEntityTags(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6F8DD29344D23142_SET_EXCLUDEENTITYTAGS_OFFSET))(this, a1);
	}

	::System::Void Method_1_CEAE256FB1DEC448(::RPG::GameCore::GameEntity* a1, ::Class_1_6C30C65EACF8D014* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_1_6C30C65EACF8D014*))((::PBYTE)hIl2Cpp + CLASS_1_6F8DD29344D23142_METHOD_1_CEAE256FB1DEC448_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_883D7E346EAED533(::RPG::GameCore::GameEntity* a1, ::Class_1_6C30C65EACF8D014* a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_1_6C30C65EACF8D014*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6F8DD29344D23142_METHOD_1_883D7E346EAED533_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_4D851AEC7175AA9E(::Class_1_6C30C65EACF8D014* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6C30C65EACF8D014*))((::PBYTE)hIl2Cpp + CLASS_1_6F8DD29344D23142_METHOD_1_4D851AEC7175AA9E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_AF99A26E836BCC88(::Class_1_6C30C65EACF8D014* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6C30C65EACF8D014*))((::PBYTE)hIl2Cpp + CLASS_1_6F8DD29344D23142_METHOD_1_AF99A26E836BCC88_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_CAB09625B03CCCA7(::Class_1_6C30C65EACF8D014* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6C30C65EACF8D014*))((::PBYTE)hIl2Cpp + CLASS_1_6F8DD29344D23142_METHOD_1_CAB09625B03CCCA7_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_DE45EA3A177BC33B(::Class_1_6C30C65EACF8D014* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6C30C65EACF8D014*))((::PBYTE)hIl2Cpp + CLASS_1_6F8DD29344D23142_METHOD_1_DE45EA3A177BC33B_OFFSET))(this, a1);
	}

	::System::Void Method_1_4B57FC15B39EDB4E(::System::Boolean a1, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::EntityTag>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::EntityTag>*))((::PBYTE)hIl2Cpp + CLASS_1_6F8DD29344D23142_METHOD_1_4B57FC15B39EDB4E_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_D437D090E63BE8A7(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6F8DD29344D23142_METHOD_1_D437D090E63BE8A7_OFFSET))(this, a1);
	}
};
