#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class UIController; }
namespace System { class Action; }
namespace System { class String; }

#define CLASS_1_739D86F44AC12352_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x17653EA0)
#define CLASS_1_739D86F44AC12352_METHOD_1_256B6E165124982E_1_OFFSET UNITYSDK_OFFSET(0x17654050)
#define CLASS_1_739D86F44AC12352_METHOD_1_256B6E165124982E_OFFSET UNITYSDK_OFFSET(0x17653FB0)
#define CLASS_1_739D86F44AC12352_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x17653D60)
#define CLASS_1_739D86F44AC12352_METHOD_1_3B258437A86233AC_OFFSET UNITYSDK_OFFSET(0x17653EE0)
#define CLASS_1_739D86F44AC12352_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17654010)
#define CLASS_1_739D86F44AC12352_METHOD_1_D14D1C669EDC2D6B_OFFSET UNITYSDK_OFFSET(0x17653DA0)
#define CLASS_1_739D86F44AC12352__CTOR_OFFSET UNITYSDK_OFFSET(0x17653D50)

inline static constexpr unsigned int Class_1_739D86F44AC12352_TypeDefinitionIndex = 57760;

class Class_1_739D86F44AC12352 : public ::System::Object
{
public:
	::RPG::Client::UIController* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18

	::System::Void _ctor(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_739D86F44AC12352__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_739D86F44AC12352_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_D14D1C669EDC2D6B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_739D86F44AC12352_METHOD_1_D14D1C669EDC2D6B_OFFSET))(this);
	}

	::System::Void Method_1_3B258437A86233AC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_739D86F44AC12352_METHOD_1_3B258437A86233AC_OFFSET))(this);
	}

	::System::Void Method_1_256B6E165124982E(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_739D86F44AC12352_METHOD_1_256B6E165124982E_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_739D86F44AC12352_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_256B6E165124982E_1(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_739D86F44AC12352_METHOD_1_256B6E165124982E_1_OFFSET))(this, a1);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_739D86F44AC12352_METHOD_1_128774387667156B_OFFSET))(this);
	}
};
