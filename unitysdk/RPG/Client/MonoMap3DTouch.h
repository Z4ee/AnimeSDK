#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoMap3DTouch_Struct_2_89E69CD783F83437.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace HedgehogTeam::EasyTouch { class Gesture; }
namespace RPG::Client { class MonoMap3DTouch_Class_1_62A09217E5E46D38; }

#define RPG_CLIENT_MONOMAP3DTOUCH_ISPAGENOTFOCUSED_OFFSET UNITYSDK_OFFSET(0xC12A530)
#define RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_0DC794B6E3A200E7_OFFSET UNITYSDK_OFFSET(0xC12A700)
#define RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_2958B160D1DF7640_OFFSET UNITYSDK_OFFSET(0xC12AA60)
#define RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_2C5421072C50A323_OFFSET UNITYSDK_OFFSET(0xC12B1C0)
#define RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_3E06E2491B129B22_OFFSET UNITYSDK_OFFSET(0xC12A010)
#define RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_42CE8882317DE3CD_1_OFFSET UNITYSDK_OFFSET(0xC12B840)
#define RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_42CE8882317DE3CD_OFFSET UNITYSDK_OFFSET(0xC12B210)
#define RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0xC12A240)
#define RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0xC12D590)
#define RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xC12C8C0)
#define RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_49A086C8E6F42C45_OFFSET UNITYSDK_OFFSET(0xC12CAB0)
#define RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_67E989182507B304_OFFSET UNITYSDK_OFFSET(0xC12ACD0)
#define RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_7A73F165001BC325_1_OFFSET UNITYSDK_OFFSET(0xC12D200)
#define RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_7A73F165001BC325_OFFSET UNITYSDK_OFFSET(0xC12CFF0)
#define RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_7FBD7054FC0495F3_1_OFFSET UNITYSDK_OFFSET(0xC12B6A0)
#define RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_7FBD7054FC0495F3_2_OFFSET UNITYSDK_OFFSET(0xC12B770)
#define RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_7FBD7054FC0495F3_OFFSET UNITYSDK_OFFSET(0xC12B5D0)
#define RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_842C2C83BCD87BDA_OFFSET UNITYSDK_OFFSET(0xC12AF90)
#define RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_94A2F63DE8B7DB51_OFFSET UNITYSDK_OFFSET(0xC12A6B0)
#define RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xC12D410)
#define RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_C08EA6252F773E6C_1_OFFSET UNITYSDK_OFFSET(0xC12B460)
#define RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_C08EA6252F773E6C_OFFSET UNITYSDK_OFFSET(0xC12B2F0)
#define RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_D2A08F3D951A0C1D_OFFSET UNITYSDK_OFFSET(0xC12D4A0)
#define RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_F70DC5473DF715AD_OFFSET UNITYSDK_OFFSET(0xC12CD20)
#define RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_FBF2CB29FD3B55E6_OFFSET UNITYSDK_OFFSET(0xC12A3D0)
#define RPG_CLIENT_MONOMAP3DTOUCH_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xC12C810)
#define RPG_CLIENT_MONOMAP3DTOUCH_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xC12C0A0)
#define RPG_CLIENT_MONOMAP3DTOUCH_ONENABLE_OFFSET UNITYSDK_OFFSET(0xC12B920)
#define RPG_CLIENT_MONOMAP3DTOUCH_REFRESH_OFFSET UNITYSDK_OFFSET(0xC129E30)
#define RPG_CLIENT_MONOMAP3DTOUCH_RESETTOUCH_OFFSET UNITYSDK_OFFSET(0xC12C9B0)
#define RPG_CLIENT_MONOMAP3DTOUCH_SUBSCRIBEEVENT_OFFSET UNITYSDK_OFFSET(0xC12B9A0)
#define RPG_CLIENT_MONOMAP3DTOUCH_UNSUBSCRIBEEVENT_OFFSET UNITYSDK_OFFSET(0xC12C110)
#define RPG_CLIENT_MONOMAP3DTOUCH_UPDATE_OFFSET UNITYSDK_OFFSET(0xC129FB0)
#define RPG_CLIENT_MONOMAP3DTOUCH__CTOR_OFFSET UNITYSDK_OFFSET(0xC12D5F0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoMap3DTouch_TypeDefinitionIndex = 64568;

	class MonoMap3DTouch : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Single Field_5_0; // 0x0
		::RPG::Client::MonoMap3DTouch_Struct_2_89E69CD783F83437 TouchEvents; // 0x18
		::RPG::Client::MonoMap3DTouch_Class_1_62A09217E5E46D38* Field_5_2; // 0x68
		::System::Boolean Field_5_3; // 0x70
		::System::Boolean Field_5_4; // 0x71
		::System::Boolean Field_5_5; // 0x72
		::System::Boolean Field_5_6; // 0x73
		::System::Boolean Field_5_7; // 0x74
		::System::Single Field_5_8; // 0x78
		::UnityEngine::Vector3 Field_5_9; // 0x7C
		::System::Boolean Field_5_10; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH__CTOR_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_REFRESH_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_UPDATE_OFFSET))(this);
		}

		::System::Void Method_5_3E06E2491B129B22()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_3E06E2491B129B22_OFFSET))(this);
		}

		::System::Boolean IsPageNotFocused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_ISPAGENOTFOCUSED_OFFSET))(this);
		}

		::System::Void Method_5_2958B160D1DF7640(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_2958B160D1DF7640_OFFSET))(this, a1);
		}

		::System::Void Method_5_67E989182507B304(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_67E989182507B304_OFFSET))(this, a1);
		}

		::System::Void Method_5_842C2C83BCD87BDA(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_842C2C83BCD87BDA_OFFSET))(this, a1);
		}

		::System::Void Method_5_2C5421072C50A323(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_2C5421072C50A323_OFFSET))(this, a1);
		}

		::System::Void Method_5_42CE8882317DE3CD(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_42CE8882317DE3CD_OFFSET))(this, a1);
		}

		::System::Void Method_5_C08EA6252F773E6C(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_C08EA6252F773E6C_OFFSET))(this, a1);
		}

		::System::Void Method_5_C08EA6252F773E6C_1(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_C08EA6252F773E6C_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_7FBD7054FC0495F3(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_7FBD7054FC0495F3_OFFSET))(this, a1);
		}

		::System::Void Method_5_7FBD7054FC0495F3_1(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_7FBD7054FC0495F3_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_7FBD7054FC0495F3_2(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_7FBD7054FC0495F3_2_OFFSET))(this, a1);
		}

		::System::Void Method_5_42CE8882317DE3CD_1(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_42CE8882317DE3CD_1_OFFSET))(this, a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_ONDESTROY_OFFSET))(this);
		}

		::System::Void Method_5_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void SubscribeEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_SUBSCRIBEEVENT_OFFSET))(this);
		}

		::System::Void UnsubscribeEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_UNSUBSCRIBEEVENT_OFFSET))(this);
		}

		::System::Void ResetTouch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_RESETTOUCH_OFFSET))(this);
		}

		::System::Void Method_5_94A2F63DE8B7DB51()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_94A2F63DE8B7DB51_OFFSET))(this);
		}

		::System::Void Method_5_49A086C8E6F42C45()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_49A086C8E6F42C45_OFFSET))(this);
		}

		::System::Void Method_5_F70DC5473DF715AD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_F70DC5473DF715AD_OFFSET))(this);
		}

		::System::Void Method_5_7A73F165001BC325()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_7A73F165001BC325_OFFSET))(this);
		}

		::System::Void Method_5_7A73F165001BC325_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_7A73F165001BC325_1_OFFSET))(this);
		}

		::System::Void Method_5_0DC794B6E3A200E7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_0DC794B6E3A200E7_OFFSET))(this);
		}

		::System::Void Method_5_4343F372F34C05BF_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_4343F372F34C05BF_1_OFFSET))(this);
		}

		::System::Void Method_5_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_5_D2A08F3D951A0C1D(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_D2A08F3D951A0C1D_OFFSET))(this, a1);
		}

		::System::Void Method_5_4343F372F34C05BF_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_4343F372F34C05BF_2_OFFSET))(this);
		}

		::System::Void Method_5_FBF2CB29FD3B55E6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_FBF2CB29FD3B55E6_OFFSET))(this);
		}
	};
}
