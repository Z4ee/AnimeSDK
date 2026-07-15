#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_296A7AC90F028539;
class Class_1_89740498BBACFF75;
class Class_1_92B1BD6FC8375724;
class Class_1_92B1BD6FC8375724_Class_1_084C324841B5505D;
namespace RPG::Client { class GridFightGameRef; }
namespace RPG::Client { class GridFightGameRefData; }
namespace RPG::Client { template <typename T> class GridFightGameRefHttpRspBody_1; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABDF160)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS0_0__SENDGRIDFIGHTGETFAVOURLISTGAMEREFREQ_B__0_OFFSET UNITYSDK_OFFSET(0x1ABE9DB0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS0_0__SENDGRIDFIGHTGETFAVOURLISTGAMEREFREQ_B__1_OFFSET UNITYSDK_OFFSET(0x1ABE9DE0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS0_0__SENDGRIDFIGHTGETFAVOURLISTGAMEREFREQ_B__2_OFFSET UNITYSDK_OFFSET(0x1ABE9EA0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS0_0__SENDGRIDFIGHTGETFAVOURLISTGAMEREFREQ_B__3_OFFSET UNITYSDK_OFFSET(0x1ABE9EE0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRef___c__DisplayClass0_0_TypeDefinitionIndex = 61778;

	class GridFightGameRef___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::Class_1_92B1BD6FC8375724_Class_1_084C324841B5505D* sendParams; // 0x10
		::Class_1_92B1BD6FC8375724* req; // 0x18
		::System::Action_1<::System::Collections::Generic::List_1<::RPG::Client::GridFightGameRefData*>*>* callback; // 0x20
		::RPG::Client::GridFightGameRef* __4__this; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::Class_1_296A7AC90F028539*>* _SendGridFightGetFavourListGameRefReq_b__0()
		{
			return ((::RPG::Client::Promises::IPromise_1<::Class_1_296A7AC90F028539*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS0_0__SENDGRIDFIGHTGETFAVOURLISTGAMEREFREQ_B__0_OFFSET))(this);
		}

		::RPG::Client::GridFightGameRefHttpRspBody_1<::Class_1_89740498BBACFF75*>* _SendGridFightGetFavourListGameRefReq_b__1(::Class_1_296A7AC90F028539* a1)
		{
			return ((::RPG::Client::GridFightGameRefHttpRspBody_1<::Class_1_89740498BBACFF75*>*(*)(::PVOID, ::Class_1_296A7AC90F028539*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS0_0__SENDGRIDFIGHTGETFAVOURLISTGAMEREFREQ_B__1_OFFSET))(this, a1);
		}

		::System::Void _SendGridFightGetFavourListGameRefReq_b__2(::RPG::Client::GridFightGameRefHttpRspBody_1<::Class_1_89740498BBACFF75*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefHttpRspBody_1<::Class_1_89740498BBACFF75*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS0_0__SENDGRIDFIGHTGETFAVOURLISTGAMEREFREQ_B__2_OFFSET))(this, a1);
		}

		::System::Void _SendGridFightGetFavourListGameRefReq_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS0_0__SENDGRIDFIGHTGETFAVOURLISTGAMEREFREQ_B__3_OFFSET))(this);
		}
	};
}
