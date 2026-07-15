#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_296A7AC90F028539;
class Class_1_47EB23CB5C4B2615_32;
class Class_1_92B1BD6FC8375724;
class Class_1_92B1BD6FC8375724_Class_1_084C324841B5505D;
class Class_1_E14CBC48FE052048_4;
namespace RPG::Client { class GridFightGameRef; }
namespace RPG::Client { template <typename T> class GridFightGameRefHttpRspBody_1; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABE21A0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS7_0__SENDGETGRIDFIGHTGAMEREFSHARECODEREQ_B__0_OFFSET UNITYSDK_OFFSET(0x1ABEAB10)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS7_0__SENDGETGRIDFIGHTGAMEREFSHARECODEREQ_B__1_OFFSET UNITYSDK_OFFSET(0x1ABEAB80)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS7_0__SENDGETGRIDFIGHTGAMEREFSHARECODEREQ_B__2_OFFSET UNITYSDK_OFFSET(0x1ABEABB0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRef___c__DisplayClass7_0_TypeDefinitionIndex = 61791;

	class GridFightGameRef___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightGameRef* __4__this; // 0x10
		::Class_1_92B1BD6FC8375724_Class_1_084C324841B5505D* sendParams; // 0x18
		::Class_1_92B1BD6FC8375724* req; // 0x20
		::System::Action_1<::RPG::Client::GridFightGameRefHttpRspBody_1<::Class_1_47EB23CB5C4B2615_32*>*>* callback; // 0x28
		::System::String* shareCode; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::Class_1_E14CBC48FE052048_4* _SendGetGridFightGameRefShareCodeReq_b__0(::System::String* a1)
		{
			return ((::Class_1_E14CBC48FE052048_4*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS7_0__SENDGETGRIDFIGHTGAMEREFSHARECODEREQ_B__0_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::Class_1_296A7AC90F028539*>* _SendGetGridFightGameRefShareCodeReq_b__1()
		{
			return ((::RPG::Client::Promises::IPromise_1<::Class_1_296A7AC90F028539*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS7_0__SENDGETGRIDFIGHTGAMEREFSHARECODEREQ_B__1_OFFSET))(this);
		}

		::System::Void _SendGetGridFightGameRefShareCodeReq_b__2(::Class_1_296A7AC90F028539* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_296A7AC90F028539*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS7_0__SENDGETGRIDFIGHTGAMEREFSHARECODEREQ_B__2_OFFSET))(this, a1);
		}
	};
}
