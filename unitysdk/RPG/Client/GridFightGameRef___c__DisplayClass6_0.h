#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_DDB796240B07BA45;
namespace RPG::Client { class GridFightGameRef; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9821D80)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS6_0__SENDGRIDFIGHTREADGAMEREFUPDATEREQ_B__0_OFFSET UNITYSDK_OFFSET(0x9829A80)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS6_0__SENDGRIDFIGHTREADGAMEREFUPDATEREQ_B__1_OFFSET UNITYSDK_OFFSET(0x9829AF0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRef___c__DisplayClass6_0_TypeDefinitionIndex = 52527;

	class GridFightGameRef___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* ids; // 0x10
		::System::Action_1<::System::Boolean>* callback; // 0x18
		::RPG::Client::GridFightGameRef* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Object* _SendGridFightReadGameRefUpdateReq_b__0(::System::String* authkey)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS6_0__SENDGRIDFIGHTREADGAMEREFUPDATEREQ_B__0_OFFSET))(this, authkey);
		}

		::System::Void _SendGridFightReadGameRefUpdateReq_b__1(::Class_1_DDB796240B07BA45* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_DDB796240B07BA45*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS6_0__SENDGRIDFIGHTREADGAMEREFUPDATEREQ_B__1_OFFSET))(this, rsp);
		}
	};
}
