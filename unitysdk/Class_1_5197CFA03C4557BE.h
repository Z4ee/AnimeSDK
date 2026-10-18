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

#define CLASS_1_5197CFA03C4557BE_GET_CHAIN_OFFSET UNITYSDK_OFFSET(0xBD59840)
#define CLASS_1_5197CFA03C4557BE_GET_EFFECTOR_OFFSET UNITYSDK_OFFSET(0xBD59800)
#define CLASS_1_5197CFA03C4557BE_GET_MAPPINGLIMB_OFFSET UNITYSDK_OFFSET(0xBD59820)
#define CLASS_1_5197CFA03C4557BE_METHOD_1_493F6BD4595BA453_OFFSET UNITYSDK_OFFSET(0xBD59990)
#define CLASS_1_5197CFA03C4557BE_SET_CHAIN_OFFSET UNITYSDK_OFFSET(0xBD59850)
#define CLASS_1_5197CFA03C4557BE_SET_EFFECTOR_OFFSET UNITYSDK_OFFSET(0xBD59810)
#define CLASS_1_5197CFA03C4557BE_SET_MAPPINGLIMB_OFFSET UNITYSDK_OFFSET(0xBD59830)
#define CLASS_1_5197CFA03C4557BE__CTOR_OFFSET UNITYSDK_OFFSET(0xBD59860)

inline static constexpr unsigned int Class_1_5197CFA03C4557BE_TypeDefinitionIndex = 68595;

class Class_1_5197CFA03C4557BE : public ::System::Object
{
public:
	::Class_2_59D029BA0ED43EE1* OAMFLPIGGMK; // 0x10
	::Class_2_59D029BA0ED43EE1* LLBFJLFOFOO; // 0x18
	::UnityEngine::Transform* BINPONHFJMI; // 0x20
	::RPG::Client::FullBody::FBIKChain* _Chain_k__BackingField; // 0x28
	::Class_2_59D029BA0ED43EE1* JKFPNAHMIHP; // 0x30
	::Class_2_D86370ADB102E0A7* JOAOMHBAIIL; // 0x38
	::UnityEngine::Transform* MJEOHEEKBJM; // 0x40
	::Class_2_59D029BA0ED43EE1* GJLIDKDMIEK; // 0x48
	::Class_2_59D029BA0ED43EE1* DNOGHLIMDNI; // 0x50
	::RPG::Client::FullBody::IKMappingLimb* _MappingLimb_k__BackingField; // 0x58
	::RPG::Client::FullBody::IKEffector* _Effector_k__BackingField; // 0x60
	::Class_2_53FF91FD73E01B49* ANGPECFOEKG; // 0x68
	::System::Single OEGJAFPDHNA; // 0x70
	::System::Single APAKCBFMCAB; // 0x74
	::System::Nullable_1<::UnityEngine::Vector3> IMJPIMGLOHI; // 0x78
	::System::Single HBJCLDCNJEC; // 0x88
	::System::Single NCHIPMCELLL; // 0x8C
	::System::Single JKFCLDLBJNG; // 0x90
	::System::Single NGCANACGEIM; // 0x94
	::UnityEngine::Vector3 NOCIBIPHFKP; // 0x98
	::System::Single KPIIEJBJMNJ; // 0xA4
	::System::Nullable_1<::UnityEngine::Quaternion> MJFMMNMIKCF; // 0xA8
	::UnityEngine::Quaternion MDKPKLOEEMB; // 0xBC
	::System::Single GFPCONPCNOD; // 0xCC
	::System::Single MKJJIHELDOF; // 0xD0
	::System::Single OHBAAMMACAE; // 0xD4
	::System::Boolean KKJLMNLCMBK; // 0xD8
	::System::Single GILLGDEBFGN; // 0xDC

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
