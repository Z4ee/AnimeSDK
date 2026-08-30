#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_296A7AC90F028539;
class Class_1_AC6C63F15E9794D3;
class Class_1_AC6C63F15E9794D3_Class_1_084C324841B5505D;
class Class_1_E14CBC48FE052048_2;
namespace RPG::Client { class GridFightGameRef; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA0AE70)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS1_0__SENDGRIDFIGHTGAMEREFFAVOURREQ_B__0_OFFSET UNITYSDK_OFFSET(0x1BA15EE0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS1_0__SENDGRIDFIGHTGAMEREFFAVOURREQ_B__1_OFFSET UNITYSDK_OFFSET(0x1BA15F60)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS1_0__SENDGRIDFIGHTGAMEREFFAVOURREQ_B__2_OFFSET UNITYSDK_OFFSET(0x1BA15F90)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRef___c__DisplayClass1_0_TypeDefinitionIndex = 64767;

	class GridFightGameRef___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::Class_1_AC6C63F15E9794D3* req; // 0x10
		::System::String* id; // 0x18
		::Class_1_AC6C63F15E9794D3_Class_1_084C324841B5505D* sendParams; // 0x20
		::RPG::Client::GridFightGameRef* __4__this; // 0x28
		::System::Action_1<::System::Boolean>* callback; // 0x30
		::System::Boolean isFavour; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::Class_1_E14CBC48FE052048_2* _SendGridFightGameRefFavourReq_b__0(::System::String* a1)
		{
			return ((::Class_1_E14CBC48FE052048_2*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS1_0__SENDGRIDFIGHTGAMEREFFAVOURREQ_B__0_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::Class_1_296A7AC90F028539*>* _SendGridFightGameRefFavourReq_b__1()
		{
			return ((::RPG::Client::Promises::IPromise_1<::Class_1_296A7AC90F028539*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS1_0__SENDGRIDFIGHTGAMEREFFAVOURREQ_B__1_OFFSET))(this);
		}

		::System::Void _SendGridFightGameRefFavourReq_b__2(::Class_1_296A7AC90F028539* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_296A7AC90F028539*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS1_0__SENDGRIDFIGHTGAMEREFFAVOURREQ_B__2_OFFSET))(this, a1);
		}
	};
}
