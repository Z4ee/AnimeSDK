#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoMap3DTouch_Struct_2_89E69CD783F83437.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace HedgehogTeam::EasyTouch { class Gesture; }
namespace RPG::Client { class MonoMap3DTouch_Class_1_7919F3AA7BCFEB6C; }

#define RPG_CLIENT_MONOMAP3DTOUCH_ISPAGENOTFOCUSED_OFFSET UNITYSDK_OFFSET(0xA9DC4C0)
#define RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_0DA2C55EA555FBD4_OFFSET UNITYSDK_OFFSET(0xA9DD1C0)
#define RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_0DC794B6E3A200E7_OFFSET UNITYSDK_OFFSET(0xA9DC640)
#define RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_232E79648899E21B_OFFSET UNITYSDK_OFFSET(0xA9DF1E0)
#define RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_3E06E2491B129B22_OFFSET UNITYSDK_OFFSET(0xA9DBFB0)
#define RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0xA9DC1E0)
#define RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xA9DE670)
#define RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_49A086C8E6F42C45_OFFSET UNITYSDK_OFFSET(0xA9DE880)
#define RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_4A997C91819DC81F_OFFSET UNITYSDK_OFFSET(0xA9DCC50)
#define RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_53F9EED4C485B1BF_1_OFFSET UNITYSDK_OFFSET(0xA9DD810)
#define RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_53F9EED4C485B1BF_OFFSET UNITYSDK_OFFSET(0xA9DD210)
#define RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_7A73F165001BC325_1_OFFSET UNITYSDK_OFFSET(0xA9DEFC0)
#define RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_7A73F165001BC325_OFFSET UNITYSDK_OFFSET(0xA9DEDA0)
#define RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_81B573871B4EA4D9_OFFSET UNITYSDK_OFFSET(0xA9DC9C0)
#define RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_92CF8E9074F633FA_OFFSET UNITYSDK_OFFSET(0xA9DCF00)
#define RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_94A2F63DE8B7DB51_OFFSET UNITYSDK_OFFSET(0xA9DC5F0)
#define RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_9A6DA36CCAE7D188_OFFSET UNITYSDK_OFFSET(0xA9DF350)
#define RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_C08EA6252F773E6C_1_OFFSET UNITYSDK_OFFSET(0xA9DD460)
#define RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_C08EA6252F773E6C_OFFSET UNITYSDK_OFFSET(0xA9DD2F0)
#define RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_D2A08F3D951A0C1D_OFFSET UNITYSDK_OFFSET(0xA9DF260)
#define RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_D37935A0927E84C3_1_OFFSET UNITYSDK_OFFSET(0xA9DD690)
#define RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_D37935A0927E84C3_2_OFFSET UNITYSDK_OFFSET(0xA9DD750)
#define RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_D37935A0927E84C3_OFFSET UNITYSDK_OFFSET(0xA9DD5D0)
#define RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_F70DC5473DF715AD_OFFSET UNITYSDK_OFFSET(0xA9DEAE0)
#define RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_FBF2CB29FD3B55E6_OFFSET UNITYSDK_OFFSET(0xA9DC370)
#define RPG_CLIENT_MONOMAP3DTOUCH_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA9DE5C0)
#define RPG_CLIENT_MONOMAP3DTOUCH_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA9DDF60)
#define RPG_CLIENT_MONOMAP3DTOUCH_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA9DD8F0)
#define RPG_CLIENT_MONOMAP3DTOUCH_REFRESH_OFFSET UNITYSDK_OFFSET(0xA9DBDD0)
#define RPG_CLIENT_MONOMAP3DTOUCH_RESETTOUCH_OFFSET UNITYSDK_OFFSET(0xA9DE760)
#define RPG_CLIENT_MONOMAP3DTOUCH_SUBSCRIBEEVENT_OFFSET UNITYSDK_OFFSET(0xA9DD970)
#define RPG_CLIENT_MONOMAP3DTOUCH_UNSUBSCRIBEEVENT_OFFSET UNITYSDK_OFFSET(0xA9DDFD0)
#define RPG_CLIENT_MONOMAP3DTOUCH_UPDATE_OFFSET UNITYSDK_OFFSET(0xA9DBF50)
#define RPG_CLIENT_MONOMAP3DTOUCH__CTOR_OFFSET UNITYSDK_OFFSET(0xA9DF3A0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoMap3DTouch_TypeDefinitionIndex = 63647;

	class MonoMap3DTouch : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Single Field_5_2; // 0x0
		::RPG::Client::MonoMap3DTouch_Struct_2_89E69CD783F83437 TouchEvents; // 0x18
		::RPG::Client::MonoMap3DTouch_Class_1_7919F3AA7BCFEB6C* Field_5_1; // 0x68
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

		::System::Void Method_5_81B573871B4EA4D9(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_81B573871B4EA4D9_OFFSET))(this, a1);
		}

		::System::Void Method_5_4A997C91819DC81F(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_4A997C91819DC81F_OFFSET))(this, a1);
		}

		::System::Void Method_5_92CF8E9074F633FA(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_92CF8E9074F633FA_OFFSET))(this, a1);
		}

		::System::Void Method_5_0DA2C55EA555FBD4(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_0DA2C55EA555FBD4_OFFSET))(this, a1);
		}

		::System::Void Method_5_53F9EED4C485B1BF(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_53F9EED4C485B1BF_OFFSET))(this, a1);
		}

		::System::Void Method_5_C08EA6252F773E6C(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_C08EA6252F773E6C_OFFSET))(this, a1);
		}

		::System::Void Method_5_C08EA6252F773E6C_1(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_C08EA6252F773E6C_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_D37935A0927E84C3(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_D37935A0927E84C3_OFFSET))(this, a1);
		}

		::System::Void Method_5_D37935A0927E84C3_1(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_D37935A0927E84C3_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_D37935A0927E84C3_2(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_D37935A0927E84C3_2_OFFSET))(this, a1);
		}

		::System::Void Method_5_53F9EED4C485B1BF_1(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_53F9EED4C485B1BF_1_OFFSET))(this, a1);
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

		::System::Void Method_5_232E79648899E21B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_232E79648899E21B_OFFSET))(this);
		}

		::System::Void Method_5_D2A08F3D951A0C1D(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_D2A08F3D951A0C1D_OFFSET))(this, a1);
		}

		::System::Void Method_5_9A6DA36CCAE7D188()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_9A6DA36CCAE7D188_OFFSET))(this);
		}

		::System::Void Method_5_FBF2CB29FD3B55E6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_FBF2CB29FD3B55E6_OFFSET))(this);
		}
	};
}
