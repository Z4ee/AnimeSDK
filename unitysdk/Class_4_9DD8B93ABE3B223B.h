#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TriggerEffect.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CRPVirtualCameraTargetConfig; }
namespace SimpleJSON { class JSONNode; }

#define CLASS_4_9DD8B93ABE3B223B_METHOD_4_3E9E85BB9A92923D_OFFSET UNITYSDK_OFFSET(0x1C71FE90)
#define CLASS_4_9DD8B93ABE3B223B_METHOD_4_3EFF1FD63ABD70FF_OFFSET UNITYSDK_OFFSET(0x1C71EA60)
#define CLASS_4_9DD8B93ABE3B223B_METHOD_4_BD2A52F6D1A8E3D0_OFFSET UNITYSDK_OFFSET(0x1C71FF10)
#define CLASS_4_9DD8B93ABE3B223B_METHOD_4_C616402C1FF54AE8_OFFSET UNITYSDK_OFFSET(0x1C71EB30)
#define CLASS_4_9DD8B93ABE3B223B__CTOR_OFFSET UNITYSDK_OFFSET(0x1C71EAE0)

inline static constexpr unsigned int Class_4_9DD8B93ABE3B223B_TypeDefinitionIndex = 22637;

class Class_4_9DD8B93ABE3B223B : public ::RPG::GameCore::TriggerEffect
{
public:
	::RPG::GameCore::CRPVirtualCameraTargetConfig* AKJBPEPHNPG; // 0x158
	::RPG::GameCore::CRPVirtualCameraTargetConfig* IMAFEMCIJDK; // 0x160
	::RPG::GameCore::CRPVirtualCameraTargetConfig* MFHDAFAFHAD; // 0x168
	::RPG::GameCore::CRPVirtualCameraTargetConfig* IEIOCHGPBAM; // 0x170
	::RPG::GameCore::CRPVirtualCameraTargetConfig* HENPNIABNAD; // 0x178
	::System::Boolean BEBFMAPHDLK; // 0x180
	::System::Boolean NIEKCEHHNIP; // 0x181
	::System::Single GGKJFMBJEIB; // 0x184

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_9DD8B93ABE3B223B__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_3EFF1FD63ABD70FF(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_9DD8B93ABE3B223B*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_9DD8B93ABE3B223B*&))((::PBYTE)hIl2Cpp + CLASS_4_9DD8B93ABE3B223B_METHOD_4_3EFF1FD63ABD70FF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_C616402C1FF54AE8(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_9DD8B93ABE3B223B* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_9DD8B93ABE3B223B*))((::PBYTE)hIl2Cpp + CLASS_4_9DD8B93ABE3B223B_METHOD_4_C616402C1FF54AE8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_3E9E85BB9A92923D(::SimpleJSON::JSONNode* a1, ::Class_4_9DD8B93ABE3B223B*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_9DD8B93ABE3B223B*&))((::PBYTE)hIl2Cpp + CLASS_4_9DD8B93ABE3B223B_METHOD_4_3E9E85BB9A92923D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_BD2A52F6D1A8E3D0(::SimpleJSON::JSONNode* a1, ::Class_4_9DD8B93ABE3B223B* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_9DD8B93ABE3B223B*))((::PBYTE)hIl2Cpp + CLASS_4_9DD8B93ABE3B223B_METHOD_4_BD2A52F6D1A8E3D0_OFFSET))(a1, a2);
	}
};
