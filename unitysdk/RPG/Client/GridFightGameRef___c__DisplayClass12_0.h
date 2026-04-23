#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_AC6C63F15E9794D3;
class Class_1_AC6C63F15E9794D3_Class_1_084C324841B5505D;
class Class_1_DDB796240B07BA45;
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA4C41B0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS12_0___SENDGAMEREFHTTPREQ_B__0_OFFSET UNITYSDK_OFFSET(0xA4C41C0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS12_0___SENDGAMEREFHTTPREQ_B__1_OFFSET UNITYSDK_OFFSET(0xA4C41E0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS12_0___SENDGAMEREFHTTPREQ_B__2_OFFSET UNITYSDK_OFFSET(0xA4C4210)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRef___c__DisplayClass12_0_TypeDefinitionIndex = 59556;

	class GridFightGameRef___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::Class_1_AC6C63F15E9794D3* req; // 0x10
		::Class_1_AC6C63F15E9794D3_Class_1_084C324841B5505D* sendParams; // 0x18
		::System::Action_1<::Class_1_DDB796240B07BA45*>* onResponce; // 0x20
		::System::Func_2<::System::String*, ::System::Object*>* getJsonBody; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Object* __SendGameRefHttpReq_b__0(::System::String* authKey)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS12_0___SENDGAMEREFHTTPREQ_B__0_OFFSET))(this, authKey);
		}

		::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>* __SendGameRefHttpReq_b__1()
		{
			return ((::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS12_0___SENDGAMEREFHTTPREQ_B__1_OFFSET))(this);
		}

		::System::Void __SendGameRefHttpReq_b__2(::Class_1_DDB796240B07BA45* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_DDB796240B07BA45*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS12_0___SENDGAMEREFHTTPREQ_B__2_OFFSET))(this, rsp);
		}
	};
}
