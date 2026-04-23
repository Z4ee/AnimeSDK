#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8E690193A2EE0AD6;
namespace RPG::Client { class RogueTournModule; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS30_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB0D7160)
#define RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS30_0__SENDGETROGUETOURNBUILDREFSTATICDATAHTTPREQ_B__0_OFFSET UNITYSDK_OFFSET(0xB0E7C90)
#define RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS30_0__SENDGETROGUETOURNBUILDREFSTATICDATAHTTPREQ_B__1_OFFSET UNITYSDK_OFFSET(0xB0E7CC0)
#define RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS30_0__SENDGETROGUETOURNBUILDREFSTATICDATAHTTPREQ_B__2_OFFSET UNITYSDK_OFFSET(0xB0E7E90)
#define RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS30_0__SENDGETROGUETOURNBUILDREFSTATICDATAHTTPREQ_B__3_OFFSET UNITYSDK_OFFSET(0xB0E7EB0)
#define RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS30_0__SENDGETROGUETOURNBUILDREFSTATICDATAHTTPREQ_B__4_OFFSET UNITYSDK_OFFSET(0xB0E7DF0)
#define RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS30_0__SENDGETROGUETOURNBUILDREFSTATICDATAHTTPREQ_B__5_OFFSET UNITYSDK_OFFSET(0xB0E7E20)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournModule___c__DisplayClass30_0_TypeDefinitionIndex = 62493;

	class RogueTournModule___c__DisplayClass30_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* promise; // 0x10
		::System::Action_1<::Class_1_8E690193A2EE0AD6*>* __9__4; // 0x18
		::RPG::Client::Promises::Promise_1<::Class_1_8E690193A2EE0AD6*>* reqPromise; // 0x20
		::RPG::Client::RogueTournModule* __4__this; // 0x28
		::System::Action_1<::System::Exception*>* __9__5; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS30_0__CTOR_OFFSET))(this);
		}

		::System::Void _SendGetRogueTournBuildRefStaticDataHttpReq_b__0(::Class_1_8E690193A2EE0AD6* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_8E690193A2EE0AD6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS30_0__SENDGETROGUETOURNBUILDREFSTATICDATAHTTPREQ_B__0_OFFSET))(this, data);
		}

		::System::Void _SendGetRogueTournBuildRefStaticDataHttpReq_b__1(::System::Exception* ex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS30_0__SENDGETROGUETOURNBUILDREFSTATICDATAHTTPREQ_B__1_OFFSET))(this, ex);
		}

		::System::Void _SendGetRogueTournBuildRefStaticDataHttpReq_b__4(::Class_1_8E690193A2EE0AD6* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_8E690193A2EE0AD6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS30_0__SENDGETROGUETOURNBUILDREFSTATICDATAHTTPREQ_B__4_OFFSET))(this, data);
		}

		::System::Void _SendGetRogueTournBuildRefStaticDataHttpReq_b__5(::System::Exception* innerEx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS30_0__SENDGETROGUETOURNBUILDREFSTATICDATAHTTPREQ_B__5_OFFSET))(this, innerEx);
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
