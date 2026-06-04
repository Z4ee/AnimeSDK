#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_296A7AC90F028539;
class Class_1_92B1BD6FC8375724;
class Class_1_92B1BD6FC8375724_Class_1_084C324841B5505D;
class Class_1_E14CBC48FE052048_2;
namespace RPG::Client { class GridFightGameRef; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBB60340)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS2_0__SENDGRIDFIGHTGAMEREFLIKEREQ_B__0_OFFSET UNITYSDK_OFFSET(0xBB69ED0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS2_0__SENDGRIDFIGHTGAMEREFLIKEREQ_B__1_OFFSET UNITYSDK_OFFSET(0xBB69F50)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS2_0__SENDGRIDFIGHTGAMEREFLIKEREQ_B__2_OFFSET UNITYSDK_OFFSET(0xBB69F80)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRef___c__DisplayClass2_0_TypeDefinitionIndex = 60493;

	class GridFightGameRef___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightGameRef* __4__this; // 0x10
		::System::Action_1<::System::Boolean>* callback; // 0x18
		::Class_1_92B1BD6FC8375724* req; // 0x20
		::System::String* id; // 0x28
		::Class_1_92B1BD6FC8375724_Class_1_084C324841B5505D* sendParams; // 0x30
		::System::Boolean isLike; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::Class_1_E14CBC48FE052048_2* _SendGridFightGameRefLikeReq_b__0(::System::String* a1)
		{
			return ((::Class_1_E14CBC48FE052048_2*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS2_0__SENDGRIDFIGHTGAMEREFLIKEREQ_B__0_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::Class_1_296A7AC90F028539*>* _SendGridFightGameRefLikeReq_b__1()
		{
			return ((::RPG::Client::Promises::IPromise_1<::Class_1_296A7AC90F028539*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS2_0__SENDGRIDFIGHTGAMEREFLIKEREQ_B__1_OFFSET))(this);
		}

		::System::Void _SendGridFightGameRefLikeReq_b__2(::Class_1_296A7AC90F028539* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_296A7AC90F028539*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS2_0__SENDGRIDFIGHTGAMEREFLIKEREQ_B__2_OFFSET))(this, a1);
		}
	};
}
