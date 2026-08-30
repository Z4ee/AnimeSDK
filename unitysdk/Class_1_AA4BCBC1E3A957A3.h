#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ExeCode.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_AA4BCBC1E3A957A3_METHOD_1_0CA79FB1AE838DB6_OFFSET UNITYSDK_OFFSET(0x184FDF30)
#define CLASS_1_AA4BCBC1E3A957A3_METHOD_1_C4A5BDE4470F3901_OFFSET UNITYSDK_OFFSET(0x184FDF20)
#define CLASS_1_AA4BCBC1E3A957A3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x184FE0B0)
#define CLASS_1_AA4BCBC1E3A957A3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x184FDF50)
#define CLASS_1_AA4BCBC1E3A957A3__CTOR_2_OFFSET UNITYSDK_OFFSET(0x184FE000)
#define CLASS_1_AA4BCBC1E3A957A3__CTOR_OFFSET UNITYSDK_OFFSET(0x184FDF40)

inline static constexpr unsigned int Class_1_AA4BCBC1E3A957A3_TypeDefinitionIndex = 59776;

class Class_1_AA4BCBC1E3A957A3 : public ::System::Object
{
public:
	::System::String* CAJPAGKBBML; // 0x10
	::System::DateTime KBIHLBEECKN; // 0x18
	::System::Int32 EOONMIGPBEF; // 0x20
	::System::Int32 GMDHMGAGAFK; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA4BCBC1E3A957A3__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::Int32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_AA4BCBC1E3A957A3__CTOR_1_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_2(::System::Int32 a1, ::System::String* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AA4BCBC1E3A957A3__CTOR_2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_C4A5BDE4470F3901(::RPG::Client::ExeCode a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ExeCode))((::PBYTE)hIl2Cpp + CLASS_1_AA4BCBC1E3A957A3_METHOD_1_C4A5BDE4470F3901_OFFSET))(this, a1);
	}

	::RPG::Client::ExeCode Method_1_0CA79FB1AE838DB6()
	{
		return ((::RPG::Client::ExeCode(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA4BCBC1E3A957A3_METHOD_1_0CA79FB1AE838DB6_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA4BCBC1E3A957A3_TOSTRING_OFFSET))(this);
	}
};
