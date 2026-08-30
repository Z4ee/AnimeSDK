#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_53FF91FD73E01B49;
class Class_2_59D029BA0ED43EE1;
class Class_2_D86370ADB102E0A7;
namespace RPG::Client::FullBody { class FBIKChain; }
namespace RPG::Client::FullBody { class IKEffector; }
namespace RPG::Client::FullBody { class IKMappingLimb; }
namespace UnityEngine { class Transform; }

#define CLASS_1_5197CFA03C4557BE_GET_CHAIN_OFFSET UNITYSDK_OFFSET(0xBECF350)
#define CLASS_1_5197CFA03C4557BE_GET_EFFECTOR_OFFSET UNITYSDK_OFFSET(0xBECF310)
#define CLASS_1_5197CFA03C4557BE_GET_MAPPINGLIMB_OFFSET UNITYSDK_OFFSET(0xBECF330)
#define CLASS_1_5197CFA03C4557BE_METHOD_1_493F6BD4595BA453_OFFSET UNITYSDK_OFFSET(0xBECF4A0)
#define CLASS_1_5197CFA03C4557BE_SET_CHAIN_OFFSET UNITYSDK_OFFSET(0xBECF360)
#define CLASS_1_5197CFA03C4557BE_SET_EFFECTOR_OFFSET UNITYSDK_OFFSET(0xBECF320)
#define CLASS_1_5197CFA03C4557BE_SET_MAPPINGLIMB_OFFSET UNITYSDK_OFFSET(0xBECF340)
#define CLASS_1_5197CFA03C4557BE__CTOR_OFFSET UNITYSDK_OFFSET(0xBECF370)

inline static constexpr unsigned int Class_1_5197CFA03C4557BE_TypeDefinitionIndex = 68561;

class Class_1_5197CFA03C4557BE : public ::System::Object
{
public:
	::Class_2_59D029BA0ED43EE1* LLBFJLFOFOO; // 0x10
	::Class_2_D86370ADB102E0A7* JOAOMHBAIIL; // 0x18
	::Class_2_53FF91FD73E01B49* ANGPECFOEKG; // 0x20
	::UnityEngine::Transform* BINPONHFJMI; // 0x28
	::Class_2_59D029BA0ED43EE1* DNOGHLIMDNI; // 0x30
	::Class_2_59D029BA0ED43EE1* OAMFLPIGGMK; // 0x38
	::RPG::Client::FullBody::IKMappingLimb* _MappingLimb_k__BackingField; // 0x40
	::Class_2_59D029BA0ED43EE1* GJLIDKDMIEK; // 0x48
	::UnityEngine::Transform* MJEOHEEKBJM; // 0x50
	::RPG::Client::FullBody::FBIKChain* _Chain_k__BackingField; // 0x58
	::RPG::Client::FullBody::IKEffector* _Effector_k__BackingField; // 0x60
	::Class_2_59D029BA0ED43EE1* JKFPNAHMIHP; // 0x68
	::System::Single JKFCLDLBJNG; // 0x70
	::System::Single GILLGDEBFGN; // 0x74
	::System::Single MKJJIHELDOF; // 0x78
	::System::Nullable_1<::UnityEngine::Quaternion> MJFMMNMIKCF; // 0x7C
	::System::Boolean KKJLMNLCMBK; // 0x90
	::System::Single NGCANACGEIM; // 0x94
	::System::Single OEGJAFPDHNA; // 0x98
	::UnityEngine::Vector3 NOCIBIPHFKP; // 0x9C
	::System::Single GFPCONPCNOD; // 0xA8
	::System::Single OHBAAMMACAE; // 0xAC
	::System::Single NCHIPMCELLL; // 0xB0
	::System::Single KPIIEJBJMNJ; // 0xB4
	::System::Nullable_1<::UnityEngine::Vector3> IMJPIMGLOHI; // 0xB8
	::System::Single APAKCBFMCAB; // 0xC8
	::System::Single HBJCLDCNJEC; // 0xCC
	::UnityEngine::Quaternion MDKPKLOEEMB; // 0xD0

	::System::Void _ctor(::RPG::Client::FullBody::IKEffector* a1, ::RPG::Client::FullBody::IKMappingLimb* a2, ::RPG::Client::FullBody::FBIKChain* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::IKEffector*, ::RPG::Client::FullBody::IKMappingLimb*, ::RPG::Client::FullBody::FBIKChain*))((::PBYTE)hIl2Cpp + CLASS_1_5197CFA03C4557BE__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::FullBody::IKEffector* get_Effector()
	{
		return ((::RPG::Client::FullBody::IKEffector*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5197CFA03C4557BE_GET_EFFECTOR_OFFSET))(this);
	}

	::System::Void set_Effector(::RPG::Client::FullBody::IKEffector* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::IKEffector*))((::PBYTE)hIl2Cpp + CLASS_1_5197CFA03C4557BE_SET_EFFECTOR_OFFSET))(this, a1);
	}

	::RPG::Client::FullBody::IKMappingLimb* get_MappingLimb()
	{
		return ((::RPG::Client::FullBody::IKMappingLimb*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5197CFA03C4557BE_GET_MAPPINGLIMB_OFFSET))(this);
	}

	::System::Void set_MappingLimb(::RPG::Client::FullBody::IKMappingLimb* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::IKMappingLimb*))((::PBYTE)hIl2Cpp + CLASS_1_5197CFA03C4557BE_SET_MAPPINGLIMB_OFFSET))(this, a1);
	}

	::RPG::Client::FullBody::FBIKChain* get_Chain()
	{
		return ((::RPG::Client::FullBody::FBIKChain*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5197CFA03C4557BE_GET_CHAIN_OFFSET))(this);
	}

	::System::Void set_Chain(::RPG::Client::FullBody::FBIKChain* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::FBIKChain*))((::PBYTE)hIl2Cpp + CLASS_1_5197CFA03C4557BE_SET_CHAIN_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_493F6BD4595BA453(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5197CFA03C4557BE_METHOD_1_493F6BD4595BA453_OFFSET))(this, a1);
	}
};
