#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_334451C7D64128FE_ECoverImgState.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1422;
namespace System { class Random; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define CLASS_1_334451C7D64128FE_GET_DEBUGHOLDSECONDS_OFFSET UNITYSDK_OFFSET(0x15399CC0)
#define CLASS_1_334451C7D64128FE_GET_DEBUGPHASEREMAINSECONDS_OFFSET UNITYSDK_OFFSET(0x15399CA0)
#define CLASS_1_334451C7D64128FE_METHOD_1_01244C5D42565CB2_OFFSET UNITYSDK_OFFSET(0x15398DC0)
#define CLASS_1_334451C7D64128FE_METHOD_1_10054BB010E03EDD_OFFSET UNITYSDK_OFFSET(0x15399340)
#define CLASS_1_334451C7D64128FE_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x15399180)
#define CLASS_1_334451C7D64128FE_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x15399600)
#define CLASS_1_334451C7D64128FE_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x15399730)
#define CLASS_1_334451C7D64128FE_METHOD_1_7EEBD5CFECCBC45E_OFFSET UNITYSDK_OFFSET(0x15398F80)
#define CLASS_1_334451C7D64128FE_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x15399B00)
#define CLASS_1_334451C7D64128FE_METHOD_1_A9A50625EA2594BB_OFFSET UNITYSDK_OFFSET(0x153997B0)
#define CLASS_1_334451C7D64128FE_METHOD_1_AAA08DA9AA6317DB_OFFSET UNITYSDK_OFFSET(0x15399800)
#define CLASS_1_334451C7D64128FE_METHOD_1_BA0DC2F7F154B425_OFFSET UNITYSDK_OFFSET(0x15399B90)
#define CLASS_1_334451C7D64128FE_METHOD_1_C836268BEBB9DBE1_OFFSET UNITYSDK_OFFSET(0x153994F0)
#define CLASS_1_334451C7D64128FE_METHOD_1_D0658526DC9E67E7_OFFSET UNITYSDK_OFFSET(0x15399250)
#define CLASS_1_334451C7D64128FE_METHOD_1_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x15399670)
#define CLASS_1_334451C7D64128FE_METHOD_1_DEC1B04AD9CDEC55_OFFSET UNITYSDK_OFFSET(0x15399920)
#define CLASS_1_334451C7D64128FE_SET_DEBUGHOLDSECONDS_OFFSET UNITYSDK_OFFSET(0x15399CD0)
#define CLASS_1_334451C7D64128FE_SET_DEBUGPHASEREMAINSECONDS_OFFSET UNITYSDK_OFFSET(0x15399CB0)
#define CLASS_1_334451C7D64128FE__CTOR_OFFSET UNITYSDK_OFFSET(0x15398D30)

inline static constexpr unsigned int Class_1_334451C7D64128FE_TypeDefinitionIndex = 80545;

class Class_1_334451C7D64128FE : public ::System::Object
{
public:
	// static const ::System::String* IAIIGBOEBEL; // 0x0
	// static const ::System::String* NJMCMEFNGKB; // 0x0
	// static const ::System::Single NPHGJBKKANA; // 0x0
	// static const ::System::Single ADBGENNIIDF; // 0x0
	// static const ::System::Single NJNACJNMHAA; // 0x0
	// static const ::System::Single LJBFBGNLBID; // 0x0
	// static const ::System::Single EGBEJCFEKAP; // 0x0
	// static const ::System::Single PNBJLHBEADP; // 0x0
	::System::Random* OLEEIPHBJKB; // 0x10
	::Class_0_16E4307DCC419505_1422* NHJIMBADBEN; // 0x18
	::UnityEngine::RectTransform* ANKEBBNJMGK; // 0x20
	::UnityEngine::Transform* ONEECBFKDFP; // 0x28
	::UnityEngine::Animation* CJDNFGANEKG; // 0x30
	::System::String* FKIDFLIMFGM; // 0x38
	::System::Single _DebugPhaseRemainSeconds_k__BackingField; // 0x40
	::System::Boolean NIDMGGBEGNH; // 0x44
	::System::Single _DebugHoldSeconds_k__BackingField; // 0x48
	::Class_1_334451C7D64128FE_ECoverImgState DLNIGFGLPLJ; // 0x4C

	::System::Void _ctor(::UnityEngine::Transform* a1, ::UnityEngine::RectTransform* a2, ::UnityEngine::Animation* a3, ::Class_0_16E4307DCC419505_1422* a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::RectTransform*, ::UnityEngine::Animation*, ::Class_0_16E4307DCC419505_1422*))((::PBYTE)hIl2Cpp + CLASS_1_334451C7D64128FE__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_01244C5D42565CB2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_334451C7D64128FE_METHOD_1_01244C5D42565CB2_OFFSET))(this, a1);
	}

	::System::Void Method_1_10054BB010E03EDD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_334451C7D64128FE_METHOD_1_10054BB010E03EDD_OFFSET))(this);
	}

	::System::Void Method_1_C836268BEBB9DBE1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_334451C7D64128FE_METHOD_1_C836268BEBB9DBE1_OFFSET))(this, a1);
	}

	::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_334451C7D64128FE_METHOD_1_6B72D4EE8C6E907F_OFFSET))(this);
	}

	::System::Void Method_1_A9A50625EA2594BB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_334451C7D64128FE_METHOD_1_A9A50625EA2594BB_OFFSET))(this, a1);
	}

	::System::Void Method_1_7EEBD5CFECCBC45E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_334451C7D64128FE_METHOD_1_7EEBD5CFECCBC45E_OFFSET))(this);
	}

	::System::Single Method_1_AAA08DA9AA6317DB(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_334451C7D64128FE_METHOD_1_AAA08DA9AA6317DB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_334451C7D64128FE_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_334451C7D64128FE_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_334451C7D64128FE_METHOD_1_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_334451C7D64128FE_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Boolean Method_1_DEC1B04AD9CDEC55(::System::String* a1, ::Class_1_334451C7D64128FE_ECoverImgState a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Class_1_334451C7D64128FE_ECoverImgState))((::PBYTE)hIl2Cpp + CLASS_1_334451C7D64128FE_METHOD_1_DEC1B04AD9CDEC55_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D0658526DC9E67E7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_334451C7D64128FE_METHOD_1_D0658526DC9E67E7_OFFSET))(this, a1);
	}

	::System::String* Method_1_BA0DC2F7F154B425()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_334451C7D64128FE_METHOD_1_BA0DC2F7F154B425_OFFSET))(this);
	}

	::System::Single get_DebugPhaseRemainSeconds()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_334451C7D64128FE_GET_DEBUGPHASEREMAINSECONDS_OFFSET))(this);
	}

	::System::Void set_DebugPhaseRemainSeconds(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_334451C7D64128FE_SET_DEBUGPHASEREMAINSECONDS_OFFSET))(this, a1);
	}

	::System::Single get_DebugHoldSeconds()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_334451C7D64128FE_GET_DEBUGHOLDSECONDS_OFFSET))(this);
	}

	::System::Void set_DebugHoldSeconds(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_334451C7D64128FE_SET_DEBUGHOLDSECONDS_OFFSET))(this, a1);
	}
};
