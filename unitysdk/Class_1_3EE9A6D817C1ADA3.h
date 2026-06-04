#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_06E38C65842C3B24;
class Class_1_608D5748B6FB2DB7;
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceRecordBase; }
namespace System { class Action; }

#define CLASS_1_3EE9A6D817C1ADA3_ADD_ONRECORDCHANGED_OFFSET UNITYSDK_OFFSET(0xB5181E0)
#define CLASS_1_3EE9A6D817C1ADA3_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB518660)
#define CLASS_1_3EE9A6D817C1ADA3_METHOD_1_2DFFCEC5BAFFBDEA_OFFSET UNITYSDK_OFFSET(0xB518160)
#define CLASS_1_3EE9A6D817C1ADA3_METHOD_1_5F1CE4B44626D198_OFFSET UNITYSDK_OFFSET(0xB518170)
#define CLASS_1_3EE9A6D817C1ADA3_METHOD_1_775B6D644F07B554_OFFSET UNITYSDK_OFFSET(0xB518850)
#define CLASS_1_3EE9A6D817C1ADA3_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xB518420)
#define CLASS_1_3EE9A6D817C1ADA3_METHOD_1_F0BD65B017F2AC0B_1_OFFSET UNITYSDK_OFFSET(0xB5188B0)
#define CLASS_1_3EE9A6D817C1ADA3_METHOD_1_F0BD65B017F2AC0B_OFFSET UNITYSDK_OFFSET(0xB518800)
#define CLASS_1_3EE9A6D817C1ADA3_METHOD_1_FD407F543E29DD0C_OFFSET UNITYSDK_OFFSET(0xB5184D0)
#define CLASS_1_3EE9A6D817C1ADA3_REMOVE_ONRECORDCHANGED_OFFSET UNITYSDK_OFFSET(0xB518240)
#define CLASS_1_3EE9A6D817C1ADA3__CTOR_OFFSET UNITYSDK_OFFSET(0xB5182A0)

inline static constexpr unsigned int Class_1_3EE9A6D817C1ADA3_TypeDefinitionIndex = 74225;

class Class_1_3EE9A6D817C1ADA3 : public ::System::Object
{
public:
	::Class_1_608D5748B6FB2DB7* Field_1_0; // 0x10
	::Class_1_06E38C65842C3B24* Field_1_1; // 0x18
	::RPG::Client::Challenge::Tierce::ChallengeTierceRecordBase* Field_1_2; // 0x20
	::System::Action* OnRecordChanged; // 0x28

	::System::Void _ctor(::Class_1_06E38C65842C3B24* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_06E38C65842C3B24*))((::PBYTE)hIl2Cpp + CLASS_1_3EE9A6D817C1ADA3__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::Challenge::Tierce::ChallengeTierceRecordBase* Method_1_2DFFCEC5BAFFBDEA()
	{
		return ((::RPG::Client::Challenge::Tierce::ChallengeTierceRecordBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EE9A6D817C1ADA3_METHOD_1_2DFFCEC5BAFFBDEA_OFFSET))(this);
	}

	::System::Void Method_1_5F1CE4B44626D198(::RPG::Client::Challenge::Tierce::ChallengeTierceRecordBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Challenge::Tierce::ChallengeTierceRecordBase*))((::PBYTE)hIl2Cpp + CLASS_1_3EE9A6D817C1ADA3_METHOD_1_5F1CE4B44626D198_OFFSET))(this, a1);
	}

	::System::Void add_OnRecordChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_3EE9A6D817C1ADA3_ADD_ONRECORDCHANGED_OFFSET))(this, a1);
	}

	::System::Void remove_OnRecordChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_3EE9A6D817C1ADA3_REMOVE_ONRECORDCHANGED_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EE9A6D817C1ADA3_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EE9A6D817C1ADA3_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_1_FD407F543E29DD0C(::Class_1_608D5748B6FB2DB7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_608D5748B6FB2DB7*))((::PBYTE)hIl2Cpp + CLASS_1_3EE9A6D817C1ADA3_METHOD_1_FD407F543E29DD0C_OFFSET))(this, a1);
	}

	::System::Void Method_1_F0BD65B017F2AC0B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EE9A6D817C1ADA3_METHOD_1_F0BD65B017F2AC0B_OFFSET))(this);
	}

	::System::Void Method_1_775B6D644F07B554()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EE9A6D817C1ADA3_METHOD_1_775B6D644F07B554_OFFSET))(this);
	}

	::System::Void Method_1_F0BD65B017F2AC0B_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EE9A6D817C1ADA3_METHOD_1_F0BD65B017F2AC0B_1_OFFSET))(this);
	}
};
