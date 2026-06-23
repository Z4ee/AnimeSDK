#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F5305E2110EE0B0C.h"
#include "unitysdk/Enum_3_70248E32F82D4889.h"
#include "unitysdk/MoleMole/MiniUIGame/SimpleParkour/ETrackType.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_19461BA1CD085490;
class Class_1_F1B93E9ABCA6C70F;
class Class_2_C2B0CD36FFC49CE8;

#define CLASS_2_C5C09CD18B321231_METHOD_2_990C937A7EFED2E0_OFFSET UNITYSDK_OFFSET(0x1281F4D0)
#define CLASS_2_C5C09CD18B321231_METHOD_2_E61930D872EB9F94_OFFSET UNITYSDK_OFFSET(0x1281F5D0)
#define CLASS_2_C5C09CD18B321231_METHOD_2_FFECFA5ED1312EEC_OFFSET UNITYSDK_OFFSET(0x1281F530)
#define CLASS_2_C5C09CD18B321231__CTOR_OFFSET UNITYSDK_OFFSET(0x1281F3A0)

inline static constexpr unsigned int Class_2_C5C09CD18B321231_TypeDefinitionIndex = 65673;

class Class_2_C5C09CD18B321231 : public ::Class_1_F5305E2110EE0B0C
{
public:
	::System::Void _ctor(::Class_1_F1B93E9ABCA6C70F* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F1B93E9ABCA6C70F*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C5C09CD18B321231__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_1_19461BA1CD085490* Method_2_990C937A7EFED2E0(::Class_2_C2B0CD36FFC49CE8* a1)
	{
		return ((::Class_1_19461BA1CD085490*(*)(::PVOID, ::Class_2_C2B0CD36FFC49CE8*))((::PBYTE)hIl2Cpp + CLASS_2_C5C09CD18B321231_METHOD_2_990C937A7EFED2E0_OFFSET))(this, a1);
	}

	::System::Nullable_1<::Enum_3_70248E32F82D4889> Method_2_FFECFA5ED1312EEC(::System::Single a1, ::MoleMole::MiniUIGame::SimpleParkour::ETrackType a2, ::Class_1_19461BA1CD085490* a3, ::System::Boolean a4)
	{
		return ((::System::Nullable_1<::Enum_3_70248E32F82D4889>(*)(::PVOID, ::System::Single, ::MoleMole::MiniUIGame::SimpleParkour::ETrackType, ::Class_1_19461BA1CD085490*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C5C09CD18B321231_METHOD_2_FFECFA5ED1312EEC_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Nullable_1<::Enum_3_70248E32F82D4889> Method_2_E61930D872EB9F94(::System::Single a1, ::MoleMole::MiniUIGame::SimpleParkour::ETrackType a2, ::Class_1_19461BA1CD085490* a3, ::System::Boolean a4)
	{
		return ((::System::Nullable_1<::Enum_3_70248E32F82D4889>(*)(::PVOID, ::System::Single, ::MoleMole::MiniUIGame::SimpleParkour::ETrackType, ::Class_1_19461BA1CD085490*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C5C09CD18B321231_METHOD_2_E61930D872EB9F94_OFFSET))(this, a1, a2, a3, a4);
	}
};
