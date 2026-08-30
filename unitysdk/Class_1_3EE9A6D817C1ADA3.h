#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_06E38C65842C3B24;
class Class_1_DFB5A9B3A6CD66C9;
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceRecordBase; }
namespace System { class Action; }

#define CLASS_1_3EE9A6D817C1ADA3_ADD_ONRECORDCHANGED_OFFSET UNITYSDK_OFFSET(0xCA54230)
#define CLASS_1_3EE9A6D817C1ADA3_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCA546E0)
#define CLASS_1_3EE9A6D817C1ADA3_METHOD_1_13FE76C7C96BEC2E_OFFSET UNITYSDK_OFFSET(0xCA54180)
#define CLASS_1_3EE9A6D817C1ADA3_METHOD_1_5F1CE4B44626D198_OFFSET UNITYSDK_OFFSET(0xCA541C0)
#define CLASS_1_3EE9A6D817C1ADA3_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xCA544A0)
#define CLASS_1_3EE9A6D817C1ADA3_METHOD_1_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0xCA548D0)
#define CLASS_1_3EE9A6D817C1ADA3_METHOD_1_F0BD65B017F2AC0B_1_OFFSET UNITYSDK_OFFSET(0xCA54960)
#define CLASS_1_3EE9A6D817C1ADA3_METHOD_1_F0BD65B017F2AC0B_OFFSET UNITYSDK_OFFSET(0xCA54880)
#define CLASS_1_3EE9A6D817C1ADA3_METHOD_1_FD407F543E29DD0C_OFFSET UNITYSDK_OFFSET(0xCA54550)
#define CLASS_1_3EE9A6D817C1ADA3_REMOVE_ONRECORDCHANGED_OFFSET UNITYSDK_OFFSET(0xCA54290)
#define CLASS_1_3EE9A6D817C1ADA3__CTOR_OFFSET UNITYSDK_OFFSET(0xCA542F0)

inline static constexpr unsigned int Class_1_3EE9A6D817C1ADA3_TypeDefinitionIndex = 80245;

class Class_1_3EE9A6D817C1ADA3 : public ::System::Object
{
public:
	::RPG::Client::Challenge::Tierce::ChallengeTierceRecordBase* IKMGKHNGJHB; // 0x10
	::System::Action* OnRecordChanged; // 0x18
	::Class_1_DFB5A9B3A6CD66C9* FCNCPKGEMJF; // 0x20
	::Class_1_06E38C65842C3B24* JHINGAOJMBI; // 0x28

	::System::Void _ctor(::Class_1_06E38C65842C3B24* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_06E38C65842C3B24*))((::PBYTE)hIl2Cpp + CLASS_1_3EE9A6D817C1ADA3__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::Challenge::Tierce::ChallengeTierceRecordBase* Method_1_13FE76C7C96BEC2E()
	{
		return ((::RPG::Client::Challenge::Tierce::ChallengeTierceRecordBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EE9A6D817C1ADA3_METHOD_1_13FE76C7C96BEC2E_OFFSET))(this);
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

	::System::Void Method_1_FD407F543E29DD0C(::Class_1_DFB5A9B3A6CD66C9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DFB5A9B3A6CD66C9*))((::PBYTE)hIl2Cpp + CLASS_1_3EE9A6D817C1ADA3_METHOD_1_FD407F543E29DD0C_OFFSET))(this, a1);
	}

	::System::Void Method_1_F0BD65B017F2AC0B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EE9A6D817C1ADA3_METHOD_1_F0BD65B017F2AC0B_OFFSET))(this);
	}

	::System::Void Method_1_E41B6A823556FEEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EE9A6D817C1ADA3_METHOD_1_E41B6A823556FEEA_OFFSET))(this);
	}

	::System::Void Method_1_F0BD65B017F2AC0B_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3EE9A6D817C1ADA3_METHOD_1_F0BD65B017F2AC0B_1_OFFSET))(this);
	}
};
