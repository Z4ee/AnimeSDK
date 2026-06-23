#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

namespace System { class EventArgs; }
namespace System { template <typename T> class Action_1; }
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_4_3D95C6B6A5A1ABAB_METHOD_4_052FAABF5BB8BE83_OFFSET UNITYSDK_OFFSET(0x145C9BF0)
#define CLASS_4_3D95C6B6A5A1ABAB_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x145CA1E0)
#define CLASS_4_3D95C6B6A5A1ABAB_METHOD_4_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x145C9B10)
#define CLASS_4_3D95C6B6A5A1ABAB__CTOR_OFFSET UNITYSDK_OFFSET(0x145CA0F0)

inline static constexpr unsigned int Class_4_3D95C6B6A5A1ABAB_TypeDefinitionIndex = 47441;

class Class_4_3D95C6B6A5A1ABAB : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_F91115D9A1F02F5F<::System::Boolean>* Field_4_0; // 0x28
	::Class_4_F91115D9A1F02F5F<::System::Int32>* Field_4_1; // 0x30
	::System::Action_1<::System::EventArgs*>* Field_4_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3D95C6B6A5A1ABAB__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3D95C6B6A5A1ABAB_METHOD_4_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_4_052FAABF5BB8BE83(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_3D95C6B6A5A1ABAB_METHOD_4_052FAABF5BB8BE83_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3D95C6B6A5A1ABAB_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
