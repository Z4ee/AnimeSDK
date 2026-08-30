#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_601;
class Class_1_51EED7CD291B614D;
class Class_1_D70A30D666F20D90;
class Class_3_2B2F6402EA3EAA0F;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TransformComponent; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define CLASS_2_523C55AEA55804D8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12E97D50)
#define CLASS_2_523C55AEA55804D8_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x12E99490)
#define CLASS_2_523C55AEA55804D8_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x12E9AD90)
#define CLASS_2_523C55AEA55804D8_METHOD_2_1FFE4260A7179061_OFFSET UNITYSDK_OFFSET(0x12E9AEE0)
#define CLASS_2_523C55AEA55804D8_METHOD_2_25C863F1B6DFA9F4_OFFSET UNITYSDK_OFFSET(0x12E97E40)
#define CLASS_2_523C55AEA55804D8_METHOD_2_2A2B4A2E0BDAAF15_OFFSET UNITYSDK_OFFSET(0x12E98E30)
#define CLASS_2_523C55AEA55804D8_METHOD_2_3CAC93BF77250DAD_OFFSET UNITYSDK_OFFSET(0x12E9AEC0)
#define CLASS_2_523C55AEA55804D8_METHOD_2_4538E9501054E688_OFFSET UNITYSDK_OFFSET(0x12E99510)
#define CLASS_2_523C55AEA55804D8_METHOD_2_4AB9012B5D01108B_OFFSET UNITYSDK_OFFSET(0x12E9ABF0)
#define CLASS_2_523C55AEA55804D8_METHOD_2_51BBA01F511E6107_OFFSET UNITYSDK_OFFSET(0x12E99430)
#define CLASS_2_523C55AEA55804D8_METHOD_2_57D80B372834C5D1_OFFSET UNITYSDK_OFFSET(0x12E99800)
#define CLASS_2_523C55AEA55804D8_METHOD_2_595E641DF1B4387D_OFFSET UNITYSDK_OFFSET(0x12E98ED0)
#define CLASS_2_523C55AEA55804D8_METHOD_2_5C00C2EE4FCF347E_OFFSET UNITYSDK_OFFSET(0x12E9AFA0)
#define CLASS_2_523C55AEA55804D8_METHOD_2_6516DD2B8C441001_OFFSET UNITYSDK_OFFSET(0x12E98B40)
#define CLASS_2_523C55AEA55804D8_METHOD_2_68A2CA32DC720C44_OFFSET UNITYSDK_OFFSET(0x12E9ACA0)
#define CLASS_2_523C55AEA55804D8_METHOD_2_7F4EBEC55EBE2D81_OFFSET UNITYSDK_OFFSET(0x12E9A160)
#define CLASS_2_523C55AEA55804D8_METHOD_2_7F5959D5B740D04C_OFFSET UNITYSDK_OFFSET(0x12E98D90)
#define CLASS_2_523C55AEA55804D8_METHOD_2_7FCED9DBE84C0CF1_OFFSET UNITYSDK_OFFSET(0x12E99A30)
#define CLASS_2_523C55AEA55804D8_METHOD_2_8493EBF84986D042_OFFSET UNITYSDK_OFFSET(0x12E99610)
#define CLASS_2_523C55AEA55804D8_METHOD_2_A944F7B3B6322143_OFFSET UNITYSDK_OFFSET(0x12E99020)
#define CLASS_2_523C55AEA55804D8_METHOD_2_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0x12E9AED0)
#define CLASS_2_523C55AEA55804D8_METHOD_2_BA0C5F78E9FFA006_OFFSET UNITYSDK_OFFSET(0x12E9A260)
#define CLASS_2_523C55AEA55804D8_METHOD_2_C0A2DE8417347362_OFFSET UNITYSDK_OFFSET(0x12E98500)
#define CLASS_2_523C55AEA55804D8_METHOD_2_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x12E9AF20)
#define CLASS_2_523C55AEA55804D8_METHOD_2_C74CF020AA42ED85_1_OFFSET UNITYSDK_OFFSET(0x12E9AFB0)
#define CLASS_2_523C55AEA55804D8_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x12E9AF10)
#define CLASS_2_523C55AEA55804D8_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x12E999E0)
#define CLASS_2_523C55AEA55804D8_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12E99990)
#define CLASS_2_523C55AEA55804D8_METHOD_2_CE18697B63E52504_OFFSET UNITYSDK_OFFSET(0x12E9AF40)
#define CLASS_2_523C55AEA55804D8_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x12E99860)
#define CLASS_2_523C55AEA55804D8_METHOD_2_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x12E97C60)
#define CLASS_2_523C55AEA55804D8_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x12E9AF30)
#define CLASS_2_523C55AEA55804D8_ONMODELROOTLOADED_OFFSET UNITYSDK_OFFSET(0x12E988B0)
#define CLASS_2_523C55AEA55804D8_ONMODELROOTUNLOADED_OFFSET UNITYSDK_OFFSET(0x12E98D20)
#define CLASS_2_523C55AEA55804D8__CCTOR_OFFSET UNITYSDK_OFFSET(0x12E9AFC0)
#define CLASS_2_523C55AEA55804D8__CTOR_OFFSET UNITYSDK_OFFSET(0x12E97BB0)

inline static constexpr unsigned int Class_2_523C55AEA55804D8_TypeDefinitionIndex = 57242;

class Class_2_523C55AEA55804D8 : public ::RPG::GameCore::GameComponentBase
{
public:
	static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_FENJLMIKLKC()
	{
		return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_523C55AEA55804D8_TypeDefinitionIndex)->GetStaticField(0x5CD70);
	}
	static ::System::Boolean* StaticGet_KFHCFCMBDOJ()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_523C55AEA55804D8_TypeDefinitionIndex)->GetStaticField(0x13190);
	}
	// static const ::System::Single DKHMHBCIJGP; // 0x0
	::System::Action* NLOIDDNMFOP; // 0x18
	::System::Action_1<::RPG::GameCore::GameEntity*>* KBNBHMMIOIP; // 0x20
	::RPG::GameCore::GameEntity* ANGPGEHPJPD; // 0x28
	::UnityEngine::Collider* HGNKFKIBFGM; // 0x30
	::Class_1_51EED7CD291B614D* ICBMFGHKKLI; // 0x38
	::RPG::GameCore::TransformComponent* PLJPNMPJMJH; // 0x40
	::UnityEngine::Collider* LOPJEONAFBH; // 0x48
	::Class_0_16E4307DCC419505_601* GMNBNHFCMMN; // 0x50
	::Class_3_2B2F6402EA3EAA0F* MDOBEIPOEON; // 0x58
	::System::Action* IBJMGFCCEFK; // 0x60
	::System::Action_2<::UnityEngine::Vector3, ::UnityEngine::Quaternion>* EHCFMGLAIFF; // 0x68
	::Class_1_D70A30D666F20D90* DKIHLDAOIPN; // 0x70
	::System::Int32 IINLNILNJCD; // 0x78
	::System::Int32 OLHKBFJJDNJ; // 0x7C
	::System::Int32 AJGAFBFBDEC; // 0x80
	::UnityEngine::Vector3 LPNNBBFOIAD; // 0x84
	::UnityEngine::RaycastHit HNMGAGFMIFN; // 0x90
	::System::Boolean KCCHNDJMOKE; // 0xC0
	::System::Boolean HEODKNPDLKG; // 0xC1
	::System::Boolean BFCDDGNPFPC; // 0xC2
	::UnityEngine::Vector3 KBCKIAMJKIF; // 0xC4
	::System::Boolean PMMIMFDJJMC; // 0xD0
	::System::Boolean KFMPCPBPLHA; // 0xD1

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_523C55AEA55804D8__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_523C55AEA55804D8__CCTOR_OFFSET))();
	}

	::System::Void Method_2_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_523C55AEA55804D8_METHOD_2_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_523C55AEA55804D8_DISPOSE_OFFSET))(this);
	}

	::System::Void OnModelRootLoaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_523C55AEA55804D8_ONMODELROOTLOADED_OFFSET))(this);
	}

	::System::Void OnModelRootUnloaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_523C55AEA55804D8_ONMODELROOTUNLOADED_OFFSET))(this);
	}

	::System::Void Method_2_7F5959D5B740D04C(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_523C55AEA55804D8_METHOD_2_7F5959D5B740D04C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2A2B4A2E0BDAAF15(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_523C55AEA55804D8_METHOD_2_2A2B4A2E0BDAAF15_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_6516DD2B8C441001()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_523C55AEA55804D8_METHOD_2_6516DD2B8C441001_OFFSET))(this);
	}

	::System::Void Method_2_51BBA01F511E6107()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_523C55AEA55804D8_METHOD_2_51BBA01F511E6107_OFFSET))(this);
	}

	::System::Void LateUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_523C55AEA55804D8_LATEUPDATE_OFFSET))(this, a1);
	}

	::System::Void Method_2_4538E9501054E688(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_523C55AEA55804D8_METHOD_2_4538E9501054E688_OFFSET))(this, a1);
	}

	::System::Void Method_2_8493EBF84986D042(::UnityEngine::RaycastHit a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + CLASS_2_523C55AEA55804D8_METHOD_2_8493EBF84986D042_OFFSET))(this, a1);
	}

	::System::Void Method_2_25C863F1B6DFA9F4(::UnityEngine::Collider* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_523C55AEA55804D8_METHOD_2_25C863F1B6DFA9F4_OFFSET))(this, a1);
	}

	::System::Void Method_2_C0A2DE8417347362(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_523C55AEA55804D8_METHOD_2_C0A2DE8417347362_OFFSET))(this, a1);
	}

	::System::Void Method_2_57D80B372834C5D1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_523C55AEA55804D8_METHOD_2_57D80B372834C5D1_OFFSET))(this, a1);
	}

	::System::Void Method_2_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_523C55AEA55804D8_METHOD_2_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_523C55AEA55804D8_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_523C55AEA55804D8_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_7FCED9DBE84C0CF1(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_523C55AEA55804D8_METHOD_2_7FCED9DBE84C0CF1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_7F4EBEC55EBE2D81()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_523C55AEA55804D8_METHOD_2_7F4EBEC55EBE2D81_OFFSET))(this);
	}

	::System::Boolean Method_2_BA0C5F78E9FFA006(::UnityEngine::Transform* a1, ::UnityEngine::Collider* a2, ::UnityEngine::RaycastHit& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Collider*, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + CLASS_2_523C55AEA55804D8_METHOD_2_BA0C5F78E9FFA006_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_A944F7B3B6322143(::UnityEngine::Vector3 a1, ::UnityEngine::RaycastHit& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + CLASS_2_523C55AEA55804D8_METHOD_2_A944F7B3B6322143_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_523C55AEA55804D8_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::UnityEngine::Collider* Method_2_3CAC93BF77250DAD()
	{
		return ((::UnityEngine::Collider*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_523C55AEA55804D8_METHOD_2_3CAC93BF77250DAD_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_2_B1445E8504415D4D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_523C55AEA55804D8_METHOD_2_B1445E8504415D4D_OFFSET))(this);
	}

	::UnityEngine::RaycastHit Method_2_1FFE4260A7179061()
	{
		return ((::UnityEngine::RaycastHit(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_523C55AEA55804D8_METHOD_2_1FFE4260A7179061_OFFSET))(this);
	}

	::System::Single Method_2_68A2CA32DC720C44()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_523C55AEA55804D8_METHOD_2_68A2CA32DC720C44_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_4AB9012B5D01108B()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_523C55AEA55804D8_METHOD_2_4AB9012B5D01108B_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_523C55AEA55804D8_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_2_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_523C55AEA55804D8_METHOD_2_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_523C55AEA55804D8_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_2_595E641DF1B4387D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_523C55AEA55804D8_METHOD_2_595E641DF1B4387D_OFFSET))(this);
	}

	::System::Boolean Method_2_CE18697B63E52504()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_523C55AEA55804D8_METHOD_2_CE18697B63E52504_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_601* Method_2_5C00C2EE4FCF347E()
	{
		return ((::Class_0_16E4307DCC419505_601*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_523C55AEA55804D8_METHOD_2_5C00C2EE4FCF347E_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_523C55AEA55804D8_METHOD_2_C74CF020AA42ED85_1_OFFSET))(this);
	}
};
