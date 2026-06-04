#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/RendererMoveReason.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_0A24888DF04C995E_1;
class Class_1_6DE8726ADEF173A7_6;
class Class_1_E5DFDD7C057D0C86;
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG { template <typename T> class PoolList_1; }
namespace System { class String; }

#define CLASS_1_B0AE402A30E726B1_CLEAR_OFFSET UNITYSDK_OFFSET(0x18D568C0)
#define CLASS_1_B0AE402A30E726B1_METHOD_1_01C5F8CE46F98185_OFFSET UNITYSDK_OFFSET(0x18D55F00)
#define CLASS_1_B0AE402A30E726B1_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x18D56860)
#define CLASS_1_B0AE402A30E726B1_METHOD_1_2F1AB5AC1D431D0D_OFFSET UNITYSDK_OFFSET(0x18D56380)
#define CLASS_1_B0AE402A30E726B1_METHOD_1_4B54A3FFA322F468_OFFSET UNITYSDK_OFFSET(0x18D55D70)
#define CLASS_1_B0AE402A30E726B1_METHOD_1_5022DB1DC5AA8CB4_OFFSET UNITYSDK_OFFSET(0x18D562D0)
#define CLASS_1_B0AE402A30E726B1_METHOD_1_8A0C05ECADC6319B_OFFSET UNITYSDK_OFFSET(0x18D56550)
#define CLASS_1_B0AE402A30E726B1_METHOD_1_8CD42F2DACE92462_OFFSET UNITYSDK_OFFSET(0x18D55E20)
#define CLASS_1_B0AE402A30E726B1_METHOD_1_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x18D567F0)
#define CLASS_1_B0AE402A30E726B1_METHOD_1_DFF98536D8B4074F_OFFSET UNITYSDK_OFFSET(0x18D56720)
#define CLASS_1_B0AE402A30E726B1_METHOD_1_F11560A2B1C05F19_OFFSET UNITYSDK_OFFSET(0x18D56140)
#define CLASS_1_B0AE402A30E726B1_METHOD_1_F74441856239DF08_OFFSET UNITYSDK_OFFSET(0x18D565F0)
#define CLASS_1_B0AE402A30E726B1_ONALLOC_OFFSET UNITYSDK_OFFSET(0x18D56D80)
#define CLASS_1_B0AE402A30E726B1_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x18D56DF0)
#define CLASS_1_B0AE402A30E726B1__CTOR_OFFSET UNITYSDK_OFFSET(0x18D56E30)

inline static constexpr unsigned int Class_1_B0AE402A30E726B1_TypeDefinitionIndex = 39882;

class Class_1_B0AE402A30E726B1 : public ::System::Object
{
public:
	::RPG::PoolDictionary_2<::RPG::Client::LittleGame::FiveDim::RendererMoveReason, ::Class_1_6DE8726ADEF173A7_6*>* Field_1_0; // 0x10
	::RPG::PoolList_1<::Class_1_0A24888DF04C995E_1*>* Field_1_1; // 0x18
	::RPG::PoolDictionary_2<::RPG::Client::LittleGame::FiveDim::RendererMoveReason, ::RPG::PoolDictionary_2<::System::String*, ::Class_1_E5DFDD7C057D0C86*>*>* Field_1_2; // 0x20
	::System::Boolean Field_1_3; // 0x28
	::System::Boolean Field_1_4; // 0x29
	::UnityEngine::Vector3 Field_1_5; // 0x2C
	::UnityEngine::Quaternion Field_1_6; // 0x38
	::UnityEngine::Quaternion Field_1_7; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B0AE402A30E726B1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4B54A3FFA322F468(::Class_1_6DE8726ADEF173A7_6* a1, ::RPG::Client::LittleGame::FiveDim::RendererMoveReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6DE8726ADEF173A7_6*, ::RPG::Client::LittleGame::FiveDim::RendererMoveReason))((::PBYTE)hIl2Cpp + CLASS_1_B0AE402A30E726B1_METHOD_1_4B54A3FFA322F468_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_01C5F8CE46F98185(::Class_1_E5DFDD7C057D0C86* a1, ::RPG::Client::LittleGame::FiveDim::RendererMoveReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E5DFDD7C057D0C86*, ::RPG::Client::LittleGame::FiveDim::RendererMoveReason))((::PBYTE)hIl2Cpp + CLASS_1_B0AE402A30E726B1_METHOD_1_01C5F8CE46F98185_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F11560A2B1C05F19(::UnityEngine::Vector3 a1, ::RPG::Client::LittleGame::FiveDim::RendererMoveReason a2, ::System::String* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::RPG::Client::LittleGame::FiveDim::RendererMoveReason, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B0AE402A30E726B1_METHOD_1_F11560A2B1C05F19_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_5022DB1DC5AA8CB4(::Class_1_0A24888DF04C995E_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0A24888DF04C995E_1*))((::PBYTE)hIl2Cpp + CLASS_1_B0AE402A30E726B1_METHOD_1_5022DB1DC5AA8CB4_OFFSET))(this, a1);
	}

	::System::Void Method_1_8CD42F2DACE92462(::RPG::Client::LittleGame::FiveDim::RendererMoveReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::RendererMoveReason))((::PBYTE)hIl2Cpp + CLASS_1_B0AE402A30E726B1_METHOD_1_8CD42F2DACE92462_OFFSET))(this, a1);
	}

	::System::Void Method_1_2F1AB5AC1D431D0D(::RPG::Client::LittleGame::FiveDim::RendererMoveReason a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::RendererMoveReason, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B0AE402A30E726B1_METHOD_1_2F1AB5AC1D431D0D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8A0C05ECADC6319B(::Class_1_0A24888DF04C995E_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0A24888DF04C995E_1*))((::PBYTE)hIl2Cpp + CLASS_1_B0AE402A30E726B1_METHOD_1_8A0C05ECADC6319B_OFFSET))(this, a1);
	}

	::System::Void Method_1_F74441856239DF08()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B0AE402A30E726B1_METHOD_1_F74441856239DF08_OFFSET))(this);
	}

	::System::Boolean Method_1_DFF98536D8B4074F()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B0AE402A30E726B1_METHOD_1_DFF98536D8B4074F_OFFSET))(this);
	}

	::System::Boolean Method_1_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B0AE402A30E726B1_METHOD_1_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B0AE402A30E726B1_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B0AE402A30E726B1_CLEAR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B0AE402A30E726B1_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B0AE402A30E726B1_ONRECYCLE_OFFSET))(this);
	}
};
