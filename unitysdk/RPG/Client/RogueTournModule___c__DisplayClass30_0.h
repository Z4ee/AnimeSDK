#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_917011F650CA881D;
namespace RPG::Client { class RogueTournModule; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS30_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC827570)
#define RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS30_0__SENDGETROGUETOURNBUILDREFSTATICDATAHTTPREQ_B__0_OFFSET UNITYSDK_OFFSET(0xC83A0B0)
#define RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS30_0__SENDGETROGUETOURNBUILDREFSTATICDATAHTTPREQ_B__1_OFFSET UNITYSDK_OFFSET(0xC83A0E0)
#define RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS30_0__SENDGETROGUETOURNBUILDREFSTATICDATAHTTPREQ_B__2_OFFSET UNITYSDK_OFFSET(0xC83A2E0)
#define RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS30_0__SENDGETROGUETOURNBUILDREFSTATICDATAHTTPREQ_B__3_OFFSET UNITYSDK_OFFSET(0xC83A300)
#define RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS30_0__SENDGETROGUETOURNBUILDREFSTATICDATAHTTPREQ_B__4_OFFSET UNITYSDK_OFFSET(0xC83A240)
#define RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS30_0__SENDGETROGUETOURNBUILDREFSTATICDATAHTTPREQ_B__5_OFFSET UNITYSDK_OFFSET(0xC83A270)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournModule___c__DisplayClass30_0_TypeDefinitionIndex = 63426;

	class RogueTournModule___c__DisplayClass30_0 : public ::System::Object
	{
	public:
		::RPG::Client::RogueTournModule* __4__this; // 0x10
		::RPG::Client::Promises::Promise_1<::Class_1_917011F650CA881D*>* reqPromise; // 0x18
		::System::Action_1<::Class_1_917011F650CA881D*>* __9__4; // 0x20
		::RPG::Client::Promises::Promise* promise; // 0x28
		::System::Action_1<::System::Exception*>* __9__5; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS30_0__CTOR_OFFSET))(this);
		}

		::System::Void _SendGetRogueTournBuildRefStaticDataHttpReq_b__0(::Class_1_917011F650CA881D* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_917011F650CA881D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS30_0__SENDGETROGUETOURNBUILDREFSTATICDATAHTTPREQ_B__0_OFFSET))(this, a1);
		}

		::System::Void _SendGetRogueTournBuildRefStaticDataHttpReq_b__1(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS30_0__SENDGETROGUETOURNBUILDREFSTATICDATAHTTPREQ_B__1_OFFSET))(this, a1);
		}

		::System::Void _SendGetRogueTournBuildRefStaticDataHttpReq_b__4(::Class_1_917011F650CA881D* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_917011F650CA881D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS30_0__SENDGETROGUETOURNBUILDREFSTATICDATAHTTPREQ_B__4_OFFSET))(this, a1);
		}

		::System::Void _SendGetRogueTournBuildRefStaticDataHttpReq_b__5(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS30_0__SENDGETROGUETOURNBUILDREFSTATICDATAHTTPREQ_B__5_OFFSET))(this, a1);
		}

		::System::Void _SendGetRogueTournBuildRefStaticDataHttpReq_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS30_0__SENDGETROGUETOURNBUILDREFSTATICDATAHTTPREQ_B__2_OFFSET))(this);
		}

		::System::Void _SendGetRogueTournBuildRefStaticDataHttpReq_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS30_0__SENDGETROGUETOURNBUILDREFSTATICDATAHTTPREQ_B__3_OFFSET))(this);
		}
	};
}
