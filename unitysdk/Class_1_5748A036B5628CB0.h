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

#define CLASS_1_5748A036B5628CB0_CLEAR_OFFSET UNITYSDK_OFFSET(0x187C2600)
#define CLASS_1_5748A036B5628CB0_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x187C25A0)
#define CLASS_1_5748A036B5628CB0_METHOD_1_3D8C42F8CC3A01E9_OFFSET UNITYSDK_OFFSET(0x187C1C30)
#define CLASS_1_5748A036B5628CB0_METHOD_1_4B54A3FFA322F468_OFFSET UNITYSDK_OFFSET(0x187C1AA0)
#define CLASS_1_5748A036B5628CB0_METHOD_1_5022DB1DC5AA8CB4_OFFSET UNITYSDK_OFFSET(0x187C1FF0)
#define CLASS_1_5748A036B5628CB0_METHOD_1_56DCDC75A2E42299_OFFSET UNITYSDK_OFFSET(0x187C20A0)
#define CLASS_1_5748A036B5628CB0_METHOD_1_8CD42F2DACE92462_OFFSET UNITYSDK_OFFSET(0x187C1B50)
#define CLASS_1_5748A036B5628CB0_METHOD_1_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x187C2530)
#define CLASS_1_5748A036B5628CB0_METHOD_1_CC75865AF9CCA3AF_OFFSET UNITYSDK_OFFSET(0x187C22C0)
#define CLASS_1_5748A036B5628CB0_METHOD_1_DFF98536D8B4074F_OFFSET UNITYSDK_OFFSET(0x187C2460)
#define CLASS_1_5748A036B5628CB0_METHOD_1_E95714AB4DE1901F_OFFSET UNITYSDK_OFFSET(0x187C1E70)
#define CLASS_1_5748A036B5628CB0_METHOD_1_F74441856239DF08_OFFSET UNITYSDK_OFFSET(0x187C2330)
#define CLASS_1_5748A036B5628CB0_ONALLOC_OFFSET UNITYSDK_OFFSET(0x187C2AD0)
#define CLASS_1_5748A036B5628CB0_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x187C2B40)
#define CLASS_1_5748A036B5628CB0__CTOR_OFFSET UNITYSDK_OFFSET(0x187C2B80)

inline static constexpr unsigned int Class_1_5748A036B5628CB0_TypeDefinitionIndex = 40694;

class Class_1_5748A036B5628CB0 : public ::System::Object
{
public:
	::RPG::PoolDictionary_2<::RPG::Client::LittleGame::FiveDim::RendererMoveReason, ::Class_1_6DE8726ADEF173A7_6*>* Field_1_0; // 0x10
	::RPG::PoolList_1<::Class_1_0A24888DF04C995E_1*>* Field_1_1; // 0x18
	::RPG::PoolDictionary_2<::RPG::Client::LittleGame::FiveDim::RendererMoveReason, ::RPG::PoolDictionary_2<::Struct_2_EBD47A6A04BEEE4E, ::Class_1_FAE2544A4708BA7F_5*>*>* Field_1_2; // 0x20
	::UnityEngine::Quaternion Field_1_3; // 0x28
	::UnityEngine::Vector3 Field_1_4; // 0x38
	::System::Boolean Field_1_5; // 0x44
	::System::Boolean Field_1_6; // 0x45
	::UnityEngine::Quaternion Field_1_7; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5748A036B5628CB0__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4B54A3FFA322F468(::Class_1_6DE8726ADEF173A7_6* a1, ::RPG::Client::LittleGame::FiveDim::RendererMoveReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6DE8726ADEF173A7_6*, ::RPG::Client::LittleGame::FiveDim::RendererMoveReason))((::PBYTE)hIl2Cpp + CLASS_1_5748A036B5628CB0_METHOD_1_4B54A3FFA322F468_OFFSET))(this, a1, a2);
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

	::System::Void Method_1_8CD42F2DACE92462(::RPG::Client::LittleGame::FiveDim::RendererMoveReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::RendererMoveReason))((::PBYTE)hIl2Cpp + CLASS_1_5748A036B5628CB0_METHOD_1_8CD42F2DACE92462_OFFSET))(this, a1);
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
