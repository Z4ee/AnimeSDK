#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_92B1BD6FC8375724;
class Class_1_92B1BD6FC8375724_Class_1_084C324841B5505D;
class Class_1_A8FCE4080863560C;
class Class_1_DDB796240B07BA45;
namespace RPG::Client { class GridFightGameRef; }
namespace RPG::Client { class GridFightGameRefData; }
namespace RPG::Client { template <typename T> class GridFightGameRefHttpRspBody_1; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x981FEE0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS0_0__SENDGRIDFIGHTGETFAVOURLISTGAMEREFREQ_B__0_OFFSET UNITYSDK_OFFSET(0x9828EC0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS0_0__SENDGRIDFIGHTGETFAVOURLISTGAMEREFREQ_B__1_OFFSET UNITYSDK_OFFSET(0x9828EF0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS0_0__SENDGRIDFIGHTGETFAVOURLISTGAMEREFREQ_B__2_OFFSET UNITYSDK_OFFSET(0x9828FB0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS0_0__SENDGRIDFIGHTGETFAVOURLISTGAMEREFREQ_B__3_OFFSET UNITYSDK_OFFSET(0x9828FF0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRef___c__DisplayClass0_0_TypeDefinitionIndex = 52518;

	class GridFightGameRef___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightGameRef* __4__this; // 0x10
		::Class_1_92B1BD6FC8375724* req; // 0x18
		::System::Action_1<::System::Collections::Generic::List_1<::RPG::Client::GridFightGameRefData*>*>* callback; // 0x20
		::Class_1_92B1BD6FC8375724_Class_1_084C324841B5505D* sendParams; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>* _SendGridFightGetFavourListGameRefReq_b__0()
		{
			return ((::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS0_0__SENDGRIDFIGHTGETFAVOURLISTGAMEREFREQ_B__0_OFFSET))(this);
		}

		::RPG::Client::GridFightGameRefHttpRspBody_1<::Class_1_A8FCE4080863560C*>* _SendGridFightGetFavourListGameRefReq_b__1(::Class_1_DDB796240B07BA45* rsp)
		{
			return ((::RPG::Client::GridFightGameRefHttpRspBody_1<::Class_1_A8FCE4080863560C*>*(*)(::PVOID, ::Class_1_DDB796240B07BA45*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS0_0__SENDGRIDFIGHTGETFAVOURLISTGAMEREFREQ_B__1_OFFSET))(this, rsp);
		}

		::System::Void _SendGridFightGetFavourListGameRefReq_b__2(::RPG::Client::GridFightGameRefHttpRspBody_1<::Class_1_A8FCE4080863560C*>* body)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefHttpRspBody_1<::Class_1_A8FCE4080863560C*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS0_0__SENDGRIDFIGHTGETFAVOURLISTGAMEREFREQ_B__2_OFFSET))(this, body);
		}

		::System::Void _SendGridFightGetFavourListGameRefReq_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS0_0__SENDGRIDFIGHTGETFAVOURLISTGAMEREFREQ_B__3_OFFSET))(this);
		}
	};
}
