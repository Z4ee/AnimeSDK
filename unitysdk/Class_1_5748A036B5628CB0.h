#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/RendererMoveReason.h"
#include "unitysdk/Struct_2_EBD47A6A04BEEE4E.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_0A24888DF04C995E_1;
class Class_1_6DE8726ADEF173A7_6;
class Class_1_FAE2544A4708BA7F_5;
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG { template <typename T> class PoolList_1; }

#define CLASS_1_5748A036B5628CB0_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CA8A560)
#define CLASS_1_5748A036B5628CB0_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x1CA8A500)
#define CLASS_1_5748A036B5628CB0_METHOD_1_3D8C42F8CC3A01E9_OFFSET UNITYSDK_OFFSET(0x1CA89B90)
#define CLASS_1_5748A036B5628CB0_METHOD_1_3F6435A17B157AFD_OFFSET UNITYSDK_OFFSET(0x1CA89A70)
#define CLASS_1_5748A036B5628CB0_METHOD_1_5022DB1DC5AA8CB4_OFFSET UNITYSDK_OFFSET(0x1CA89F50)
#define CLASS_1_5748A036B5628CB0_METHOD_1_56DCDC75A2E42299_OFFSET UNITYSDK_OFFSET(0x1CA8A000)
#define CLASS_1_5748A036B5628CB0_METHOD_1_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x1CA8A490)
#define CLASS_1_5748A036B5628CB0_METHOD_1_CC75865AF9CCA3AF_OFFSET UNITYSDK_OFFSET(0x1CA8A220)
#define CLASS_1_5748A036B5628CB0_METHOD_1_D605F1EFFC4B0D43_OFFSET UNITYSDK_OFFSET(0x1CA899A0)
#define CLASS_1_5748A036B5628CB0_METHOD_1_DFF98536D8B4074F_OFFSET UNITYSDK_OFFSET(0x1CA8A3C0)
#define CLASS_1_5748A036B5628CB0_METHOD_1_E95714AB4DE1901F_OFFSET UNITYSDK_OFFSET(0x1CA89DD0)
#define CLASS_1_5748A036B5628CB0_METHOD_1_F74441856239DF08_OFFSET UNITYSDK_OFFSET(0x1CA8A290)
#define CLASS_1_5748A036B5628CB0_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1CA8AA30)
#define CLASS_1_5748A036B5628CB0_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1CA8AAA0)
#define CLASS_1_5748A036B5628CB0__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA8AAE0)

inline static constexpr unsigned int Class_1_5748A036B5628CB0_TypeDefinitionIndex = 43287;

class Class_1_5748A036B5628CB0 : public ::System::Object
{
public:
	::RPG::PoolDictionary_2<::RPG::Client::LittleGame::FiveDim::RendererMoveReason, ::Class_1_6DE8726ADEF173A7_6*>* BMGBOIBPGKL; // 0x10
	::RPG::PoolDictionary_2<::RPG::Client::LittleGame::FiveDim::RendererMoveReason, ::RPG::PoolDictionary_2<::Struct_2_EBD47A6A04BEEE4E, ::Class_1_FAE2544A4708BA7F_5*>*>* CAGGBOGCPHH; // 0x18
	::RPG::PoolList_1<::Class_1_0A24888DF04C995E_1*>* CEHBONLFIIO; // 0x20
	::System::Boolean PLFEMPPAFAB; // 0x28
	::System::Boolean BJMHBKDMIAG; // 0x29
	::UnityEngine::Quaternion HMLADPBJAMB; // 0x2C
	::UnityEngine::Vector3 OHLPJGIECPF; // 0x3C
	::UnityEngine::Quaternion FBGGLNLDMKE; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5748A036B5628CB0__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D605F1EFFC4B0D43(::Class_1_6DE8726ADEF173A7_6* a1, ::RPG::Client::LittleGame::FiveDim::RendererMoveReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6DE8726ADEF173A7_6*, ::RPG::Client::LittleGame::FiveDim::RendererMoveReason))((::PBYTE)hIl2Cpp + CLASS_1_5748A036B5628CB0_METHOD_1_D605F1EFFC4B0D43_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3D8C42F8CC3A01E9(::Class_1_FAE2544A4708BA7F_5* a1, ::Struct_2_EBD47A6A04BEEE4E a2, ::RPG::Client::LittleGame::FiveDim::RendererMoveReason a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FAE2544A4708BA7F_5*, ::Struct_2_EBD47A6A04BEEE4E, ::RPG::Client::LittleGame::FiveDim::RendererMoveReason))((::PBYTE)hIl2Cpp + CLASS_1_5748A036B5628CB0_METHOD_1_3D8C42F8CC3A01E9_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_E95714AB4DE1901F(::UnityEngine::Vector3 a1, ::RPG::Client::LittleGame::FiveDim::RendererMoveReason a2, ::Struct_2_EBD47A6A04BEEE4E a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::RPG::Client::LittleGame::FiveDim::RendererMoveReason, ::Struct_2_EBD47A6A04BEEE4E))((::PBYTE)hIl2Cpp + CLASS_1_5748A036B5628CB0_METHOD_1_E95714AB4DE1901F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_5022DB1DC5AA8CB4(::Class_1_0A24888DF04C995E_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0A24888DF04C995E_1*))((::PBYTE)hIl2Cpp + CLASS_1_5748A036B5628CB0_METHOD_1_5022DB1DC5AA8CB4_OFFSET))(this, a1);
	}

	::System::Void Method_1_3F6435A17B157AFD(::RPG::Client::LittleGame::FiveDim::RendererMoveReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::RendererMoveReason))((::PBYTE)hIl2Cpp + CLASS_1_5748A036B5628CB0_METHOD_1_3F6435A17B157AFD_OFFSET))(this, a1);
	}

	::System::Void Method_1_56DCDC75A2E42299(::RPG::Client::LittleGame::FiveDim::RendererMoveReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::RendererMoveReason))((::PBYTE)hIl2Cpp + CLASS_1_5748A036B5628CB0_METHOD_1_56DCDC75A2E42299_OFFSET))(this, a1);
	}

	::System::Void Method_1_CC75865AF9CCA3AF(::Class_1_0A24888DF04C995E_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0A24888DF04C995E_1*))((::PBYTE)hIl2Cpp + CLASS_1_5748A036B5628CB0_METHOD_1_CC75865AF9CCA3AF_OFFSET))(this, a1);
	}

	::System::Void Method_1_F74441856239DF08()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5748A036B5628CB0_METHOD_1_F74441856239DF08_OFFSET))(this);
	}

	::System::Boolean Method_1_DFF98536D8B4074F()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5748A036B5628CB0_METHOD_1_DFF98536D8B4074F_OFFSET))(this);
	}

	::System::Boolean Method_1_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5748A036B5628CB0_METHOD_1_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5748A036B5628CB0_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5748A036B5628CB0_CLEAR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5748A036B5628CB0_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5748A036B5628CB0_ONRECYCLE_OFFSET))(this);
	}
};
