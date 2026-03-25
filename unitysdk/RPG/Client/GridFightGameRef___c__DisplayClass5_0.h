#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_92B1BD6FC8375724;
class Class_1_92B1BD6FC8375724_Class_1_084C324841B5505D;
class Class_1_AC17C9769683A06E_1;
class Class_1_B1050BB558D637BF;
class Class_1_DDB796240B07BA45;
namespace RPG::Client { class GridFightGameRef; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9821A20)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS5_0__SENDGRIDFIGHTGETGAMEREFINTERECTDATAREQ_B__0_OFFSET UNITYSDK_OFFSET(0x9829640)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS5_0__SENDGRIDFIGHTGETGAMEREFINTERECTDATAREQ_B__1_OFFSET UNITYSDK_OFFSET(0x98296B0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS5_0__SENDGRIDFIGHTGETGAMEREFINTERECTDATAREQ_B__2_OFFSET UNITYSDK_OFFSET(0x98296E0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRef___c__DisplayClass5_0_TypeDefinitionIndex = 52524;

	class GridFightGameRef___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* ids; // 0x10
		::Class_1_92B1BD6FC8375724_Class_1_084C324841B5505D* sendParams; // 0x18
		::System::Action_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_B1050BB558D637BF*>*>* callback; // 0x20
		::RPG::Client::GridFightGameRef* __4__this; // 0x28
		::Class_1_92B1BD6FC8375724* req; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::Class_1_AC17C9769683A06E_1* _SendGridFightGetGameRefInterectDataReq_b__0(::System::String* authKey)
		{
			return ((::Class_1_AC17C9769683A06E_1*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS5_0__SENDGRIDFIGHTGETGAMEREFINTERECTDATAREQ_B__0_OFFSET))(this, authKey);
		}

		::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>* _SendGridFightGetGameRefInterectDataReq_b__1()
		{
			return ((::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS5_0__SENDGRIDFIGHTGETGAMEREFINTERECTDATAREQ_B__1_OFFSET))(this);
		}

		::System::Void _SendGridFightGetGameRefInterectDataReq_b__2(::Class_1_DDB796240B07BA45* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_DDB796240B07BA45*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS5_0__SENDGRIDFIGHTGETGAMEREFINTERECTDATAREQ_B__2_OFFSET))(this, rsp);
		}
	};
}
