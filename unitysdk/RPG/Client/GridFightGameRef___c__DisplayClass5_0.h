#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_296A7AC90F028539;
class Class_1_AC17C9769683A06E_1;
class Class_1_AC6C63F15E9794D3;
class Class_1_AC6C63F15E9794D3_Class_1_084C324841B5505D;
class Class_1_B1050BB558D637BF;
namespace RPG::Client { class GridFightGameRef; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA0C770)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS5_0__SENDGRIDFIGHTGETGAMEREFINTERECTDATAREQ_B__0_OFFSET UNITYSDK_OFFSET(0x1BA164A0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS5_0__SENDGRIDFIGHTGETGAMEREFINTERECTDATAREQ_B__1_OFFSET UNITYSDK_OFFSET(0x1BA16510)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS5_0__SENDGRIDFIGHTGETGAMEREFINTERECTDATAREQ_B__2_OFFSET UNITYSDK_OFFSET(0x1BA16540)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRef___c__DisplayClass5_0_TypeDefinitionIndex = 64771;

	class GridFightGameRef___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::Class_1_AC6C63F15E9794D3_Class_1_084C324841B5505D* sendParams; // 0x10
		::System::Action_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_B1050BB558D637BF*>*>* callback; // 0x18
		::Class_1_AC6C63F15E9794D3* req; // 0x20
		::RPG::Client::GridFightGameRef* __4__this; // 0x28
		::Il2CppArray<::System::String*>* ids; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::Class_1_AC17C9769683A06E_1* _SendGridFightGetGameRefInterectDataReq_b__0(::System::String* a1)
		{
			return ((::Class_1_AC17C9769683A06E_1*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS5_0__SENDGRIDFIGHTGETGAMEREFINTERECTDATAREQ_B__0_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::Class_1_296A7AC90F028539*>* _SendGridFightGetGameRefInterectDataReq_b__1()
		{
			return ((::RPG::Client::Promises::IPromise_1<::Class_1_296A7AC90F028539*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS5_0__SENDGRIDFIGHTGETGAMEREFINTERECTDATAREQ_B__1_OFFSET))(this);
		}

		::System::Void _SendGridFightGetGameRefInterectDataReq_b__2(::Class_1_296A7AC90F028539* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_296A7AC90F028539*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS5_0__SENDGRIDFIGHTGETGAMEREFINTERECTDATAREQ_B__2_OFFSET))(this, a1);
		}
	};
}
