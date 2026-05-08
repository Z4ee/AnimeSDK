#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/TeamRelationship.h"
#include "unitysdk/System/Object.h"

class Class_3_E2819F45333A39BF;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_939F4CF9E3ADB3C5_METHOD_1_EC7754E974F49D4F_1_OFFSET UNITYSDK_OFFSET(0x115851E0)
#define CLASS_1_939F4CF9E3ADB3C5_METHOD_1_EC7754E974F49D4F_OFFSET UNITYSDK_OFFSET(0x11585140)
#define CLASS_1_939F4CF9E3ADB3C5__CTOR_OFFSET UNITYSDK_OFFSET(0x11585130)

inline static constexpr unsigned int Class_1_939F4CF9E3ADB3C5_TypeDefinitionIndex = 39916;

class Class_1_939F4CF9E3ADB3C5 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Config::TeamRelationship>* Field_1_3; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::Config::TeamRelationship>* Field_1_2; // 0x18
	::MoleMole::Config::TeamRelationship Field_1_1; // 0x20
	::MoleMole::Config::TeamRelationship Field_1_0; // 0x24
	::System::Boolean Field_1_5; // 0x28
	::System::Boolean Field_1_4; // 0x29
	::System::Boolean Field_1_6; // 0x2A

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_939F4CF9E3ADB3C5__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_EC7754E974F49D4F(::Class_3_E2819F45333A39BF* a1, ::Class_3_E2819F45333A39BF* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_E2819F45333A39BF*, ::Class_3_E2819F45333A39BF*))((::PBYTE)hIl2Cpp + CLASS_1_939F4CF9E3ADB3C5_METHOD_1_EC7754E974F49D4F_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_EC7754E974F49D4F_1(::Class_3_E2819F45333A39BF* a1, ::Class_3_E2819F45333A39BF* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_E2819F45333A39BF*, ::Class_3_E2819F45333A39BF*))((::PBYTE)hIl2Cpp + CLASS_1_939F4CF9E3ADB3C5_METHOD_1_EC7754E974F49D4F_1_OFFSET))(this, a1, a2);
	}
};
