#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_53FF91FD73E01B49;
class Class_2_5EA26E7CA6D6CD47;
class Class_2_D86370ADB102E0A7;
namespace RPG::Client::FullBody { class FBIKChain; }
namespace RPG::Client::FullBody { class IKEffector; }
namespace RPG::Client::FullBody { class IKMappingLimb; }
namespace UnityEngine { class Transform; }

#define CLASS_1_5197CFA03C4557BE_GET_CHAIN_OFFSET UNITYSDK_OFFSET(0x128037B0)
#define CLASS_1_5197CFA03C4557BE_GET_EFFECTOR_OFFSET UNITYSDK_OFFSET(0x12803770)
#define CLASS_1_5197CFA03C4557BE_GET_MAPPINGLIMB_OFFSET UNITYSDK_OFFSET(0x12803790)
#define CLASS_1_5197CFA03C4557BE_METHOD_1_83F0C654F5BEADF2_OFFSET UNITYSDK_OFFSET(0x12803900)
#define CLASS_1_5197CFA03C4557BE_SET_CHAIN_OFFSET UNITYSDK_OFFSET(0x128037C0)
#define CLASS_1_5197CFA03C4557BE_SET_EFFECTOR_OFFSET UNITYSDK_OFFSET(0x12803780)
#define CLASS_1_5197CFA03C4557BE_SET_MAPPINGLIMB_OFFSET UNITYSDK_OFFSET(0x128037A0)
#define CLASS_1_5197CFA03C4557BE__CTOR_OFFSET UNITYSDK_OFFSET(0x128037D0)

inline static constexpr unsigned int Class_1_5197CFA03C4557BE_TypeDefinitionIndex = 63258;

class Class_1_5197CFA03C4557BE : public ::System::Object
{
public:
	::Class_2_53FF91FD73E01B49* Field_1_5; // 0x10
	::RPG::Client::FullBody::IKMappingLimb* _MappingLimb_k__BackingField; // 0x18
	::RPG::Client::FullBody::IKEffector* _Effector_k__BackingField; // 0x20
	::Class_2_5EA26E7CA6D6CD47* Field_1_14; // 0x28
	::UnityEngine::Transform* Field_1_21; // 0x30
	::Class_2_D86370ADB102E0A7* Field_1_6; // 0x38
	::Class_2_5EA26E7CA6D6CD47* Field_1_20; // 0x40
	::UnityEngine::Transform* Field_1_0; // 0x48
	::Class_2_5EA26E7CA6D6CD47* Field_1_11; // 0x50
	::RPG::Client::FullBody::FBIKChain* _Chain_k__BackingField; // 0x58
	::Class_2_5EA26E7CA6D6CD47* Field_1_24; // 0x60
	::Class_2_5EA26E7CA6D6CD47* Field_1_17; // 0x68
	::System::Nullable_1<::UnityEngine::Vector3> Field_1_3; // 0x70
	::System::Single Field_1_9; // 0x80
	::System::Single Field_1_15; // 0x84
	::System::Single Field_1_8; // 0x88
	::System::Single Field_1_22; // 0x8C
	::System::Single Field_1_18; // 0x90
	::UnityEngine::Vector3 Field_1_1; // 0x94
	::System::Single Field_1_16; // 0xA0
	::UnityEngine::Quaternion Field_1_2; // 0xA4
	::System::Nullable_1<::UnityEngine::Quaternion> Field_1_4; // 0xB4
	::System::Single Field_1_19; // 0xC8
	::System::Single Field_1_10; // 0xCC
	::System::Boolean Field_1_7; // 0xD0
	::System::Single Field_1_12; // 0xD4
	::System::Single Field_1_13; // 0xD8
	::System::Single Field_1_23; // 0xDC

	::System::Void _ctor(::RPG::Client::FullBody::IKEffector* a1, ::RPG::Client::FullBody::IKMappingLimb* a2, ::RPG::Client::FullBody::FBIKChain* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::IKEffector*, ::RPG::Client::FullBody::IKMappingLimb*, ::RPG::Client::FullBody::FBIKChain*))((::PBYTE)hIl2Cpp + CLASS_1_5197CFA03C4557BE__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::FullBody::IKEffector* get_Effector()
	{
		return ((::RPG::Client::FullBody::IKEffector*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5197CFA03C4557BE_GET_EFFECTOR_OFFSET))(this);
	}

	::System::Void set_Effector(::RPG::Client::FullBody::IKEffector* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::IKEffector*))((::PBYTE)hIl2Cpp + CLASS_1_5197CFA03C4557BE_SET_EFFECTOR_OFFSET))(this, value);
	}

	::RPG::Client::FullBody::IKMappingLimb* get_MappingLimb()
	{
		return ((::RPG::Client::FullBody::IKMappingLimb*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5197CFA03C4557BE_GET_MAPPINGLIMB_OFFSET))(this);
	}

	::System::Void set_MappingLimb(::RPG::Client::FullBody::IKMappingLimb* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::IKMappingLimb*))((::PBYTE)hIl2Cpp + CLASS_1_5197CFA03C4557BE_SET_MAPPINGLIMB_OFFSET))(this, value);
	}

	::RPG::Client::FullBody::FBIKChain* get_Chain()
	{
		return ((::RPG::Client::FullBody::FBIKChain*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5197CFA03C4557BE_GET_CHAIN_OFFSET))(this);
	}

	::System::Void set_Chain(::RPG::Client::FullBody::FBIKChain* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::FBIKChain*))((::PBYTE)hIl2Cpp + CLASS_1_5197CFA03C4557BE_SET_CHAIN_OFFSET))(this, value);
	}

	::System::Boolean Method_1_83F0C654F5BEADF2(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5197CFA03C4557BE_METHOD_1_83F0C654F5BEADF2_OFFSET))(this, a1);
	}
};
