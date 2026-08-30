#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A4ED94721C8F4303_2;
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILVIEWMODEL___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD456C70)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILVIEWMODEL___C__DISPLAYCLASS1_0__SETDEFAULTCONTENTID_B__0_OFFSET UNITYSDK_OFFSET(0xD457B40)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsInterviewDetailViewModel___c__DisplayClass1_0_TypeDefinitionIndex = 79134;

	class LimaoNewsInterviewDetailViewModel___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::System::Predicate_1<::Class_1_A4ED94721C8F4303_2*>* __9__0; // 0x10
		::System::UInt32 defaultContentID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILVIEWMODEL___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _SetDefaultContentID_b__0(::Class_1_A4ED94721C8F4303_2* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_A4ED94721C8F4303_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWDETAILVIEWMODEL___C__DISPLAYCLASS1_0__SETDEFAULTCONTENTID_B__0_OFFSET))(this, a1);
		}
	};
}
