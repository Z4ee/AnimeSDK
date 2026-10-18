#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class UIController; }
namespace System { class Action; }
namespace System { class String; }

#define CLASS_1_5E04D9DEC4CBB78D_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0xBA2C940)
#define CLASS_1_5E04D9DEC4CBB78D_METHOD_1_0A50B8D0FB7E316B_OFFSET UNITYSDK_OFFSET(0xBA2C7D0)
#define CLASS_1_5E04D9DEC4CBB78D_METHOD_1_256B6E165124982E_1_OFFSET UNITYSDK_OFFSET(0xBA2CB00)
#define CLASS_1_5E04D9DEC4CBB78D_METHOD_1_256B6E165124982E_OFFSET UNITYSDK_OFFSET(0xBA2CA60)
#define CLASS_1_5E04D9DEC4CBB78D_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xBA2C790)
#define CLASS_1_5E04D9DEC4CBB78D_METHOD_1_3B258437A86233AC_OFFSET UNITYSDK_OFFSET(0xBA2C990)
#define CLASS_1_5E04D9DEC4CBB78D_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xBA2CAC0)
#define CLASS_1_5E04D9DEC4CBB78D__CTOR_OFFSET UNITYSDK_OFFSET(0xBA2C750)

inline static constexpr unsigned int Class_1_5E04D9DEC4CBB78D_TypeDefinitionIndex = 60480;

class Class_1_5E04D9DEC4CBB78D : public ::System::Object
{
public:
	::System::String* GJELMKNIJCM; // 0x10
	::System::String* KBAIDFMELHL; // 0x18
	::RPG::Client::UIController* JONJFNGDLKI; // 0x20
	::System::Boolean PLAFGMADPMC; // 0x28

	::System::Void _ctor(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5E04D9DEC4CBB78D__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E04D9DEC4CBB78D_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_0A50B8D0FB7E316B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E04D9DEC4CBB78D_METHOD_1_0A50B8D0FB7E316B_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5E04D9DEC4CBB78D_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Void Method_1_3B258437A86233AC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E04D9DEC4CBB78D_METHOD_1_3B258437A86233AC_OFFSET))(this);
	}

	::System::Void Method_1_256B6E165124982E(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_5E04D9DEC4CBB78D_METHOD_1_256B6E165124982E_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E04D9DEC4CBB78D_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_256B6E165124982E_1(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_5E04D9DEC4CBB78D_METHOD_1_256B6E165124982E_1_OFFSET))(this, a1);
	}
};
