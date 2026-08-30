#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_644D771B8B2368F7.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class CameraBlendCurve; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_D489F19F9366A723_METHOD_3_1A0514FD040929E0_OFFSET UNITYSDK_OFFSET(0x16E2D3B0)
#define CLASS_3_D489F19F9366A723_METHOD_3_421FA15616E006C4_OFFSET UNITYSDK_OFFSET(0x16E2D7F0)
#define CLASS_3_D489F19F9366A723_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x16E2DE70)
#define CLASS_3_D489F19F9366A723_METHOD_3_7646FFE662147970_1_OFFSET UNITYSDK_OFFSET(0x16E2DFC0)
#define CLASS_3_D489F19F9366A723_METHOD_3_7646FFE662147970_OFFSET UNITYSDK_OFFSET(0x16E2DEE0)
#define CLASS_3_D489F19F9366A723_METHOD_3_77577333B4681208_OFFSET UNITYSDK_OFFSET(0x16E2D730)
#define CLASS_3_D489F19F9366A723_METHOD_3_8A76897D6A693475_OFFSET UNITYSDK_OFFSET(0x16E2D600)
#define CLASS_3_D489F19F9366A723_METHOD_3_9525CB9DFF47EF9A_OFFSET UNITYSDK_OFFSET(0x16E2DD80)
#define CLASS_3_D489F19F9366A723_METHOD_3_99B422901E548512_OFFSET UNITYSDK_OFFSET(0x16E2E020)
#define CLASS_3_D489F19F9366A723_METHOD_3_A1781348F0A89177_OFFSET UNITYSDK_OFFSET(0x16E2DDF0)
#define CLASS_3_D489F19F9366A723_METHOD_3_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x16E2CEA0)
#define CLASS_3_D489F19F9366A723_METHOD_3_F10A0D072D26C4BF_OFFSET UNITYSDK_OFFSET(0x16E2CD30)
#define CLASS_3_D489F19F9366A723__CTOR_OFFSET UNITYSDK_OFFSET(0x16E2CC80)

inline static constexpr unsigned int Class_3_D489F19F9366A723_TypeDefinitionIndex = 52688;

class Class_3_D489F19F9366A723 : public ::Class_2_644D771B8B2368F7
{
public:
	::RPG::Client::CameraBlendCurve* HDJMDBIPKOE; // 0xE0
	::System::Single ALPDJLABECC; // 0xE8
	::System::Single IGMFDEIJLCO; // 0xEC
	::System::Single LDBPJDGPFBE; // 0xF0
	::System::Single MNLONPNBPMK; // 0xF4
	::System::Single NHIJIAFHAOO; // 0xF8
	::UnityEngine::Vector3 BBCPCAKFPEN; // 0xFC
	::UnityEngine::Vector3 DDGJAFOFCMB; // 0x108
	::System::Single PHGOEPOKMGE; // 0x114
	::System::Single NINAAADLGOA; // 0x118

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_D489F19F9366A723__CTOR_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_3_F10A0D072D26C4BF()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D489F19F9366A723_METHOD_3_F10A0D072D26C4BF_OFFSET))(this);
	}

	::System::Void Method_3_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D489F19F9366A723_METHOD_3_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Boolean Method_3_1A0514FD040929E0(::UnityEngine::Vector3& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_3_D489F19F9366A723_METHOD_3_1A0514FD040929E0_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_8A76897D6A693475()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D489F19F9366A723_METHOD_3_8A76897D6A693475_OFFSET))(this);
	}

	::System::Boolean Method_3_77577333B4681208()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D489F19F9366A723_METHOD_3_77577333B4681208_OFFSET))(this);
	}

	::System::Void Method_3_421FA15616E006C4(::RPG::GameCore::CharacterMotionFlag a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Single a7, ::System::Single a8, ::RPG::Client::CameraBlendCurve* a9, ::System::Single a10, ::System::Single a11, ::RPG::GameCore::TaskContext* a12, ::RPG::GameCore::TaskConfig* a13, ::System::Single a14, ::System::Single a15, ::System::Single a16, ::System::Single a17, ::System::Single a18, ::System::Boolean a19, ::System::Single a20, ::System::Single a21)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterMotionFlag, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::RPG::Client::CameraBlendCurve*, ::System::Single, ::System::Single, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TaskConfig*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_D489F19F9366A723_METHOD_3_421FA15616E006C4_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21);
	}

	::System::Void Method_3_A1781348F0A89177()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D489F19F9366A723_METHOD_3_A1781348F0A89177_OFFSET))(this);
	}

	::System::Void Method_3_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D489F19F9366A723_METHOD_3_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_3_7646FFE662147970()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D489F19F9366A723_METHOD_3_7646FFE662147970_OFFSET))(this);
	}

	::System::Void Method_3_7646FFE662147970_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D489F19F9366A723_METHOD_3_7646FFE662147970_1_OFFSET))(this);
	}

	::System::Void Method_3_9525CB9DFF47EF9A(::RPG::Client::CameraBlendCurve* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraBlendCurve*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_D489F19F9366A723_METHOD_3_9525CB9DFF47EF9A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_99B422901E548512(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_D489F19F9366A723_METHOD_3_99B422901E548512_OFFSET))(this, a1);
	}
};
