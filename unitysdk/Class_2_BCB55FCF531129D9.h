#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F5305E2110EE0B0C.h"
#include "unitysdk/Enum_3_70248E32F82D4889.h"
#include "unitysdk/MoleMole/MiniUIGame/SimpleParkour/ETrackType.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_19461BA1CD085490;
class Class_1_F1B93E9ABCA6C70F;
class Class_2_C2B0CD36FFC49CE8;

#define CLASS_2_BCB55FCF531129D9_METHOD_2_5EBFC42D86D4A4DB_OFFSET UNITYSDK_OFFSET(0x14A5FFA0)
#define CLASS_2_BCB55FCF531129D9_METHOD_2_912676B4A11299FE_OFFSET UNITYSDK_OFFSET(0x14A60100)
#define CLASS_2_BCB55FCF531129D9_METHOD_2_990C937A7EFED2E0_OFFSET UNITYSDK_OFFSET(0x14A5FF40)
#define CLASS_2_BCB55FCF531129D9__CTOR_OFFSET UNITYSDK_OFFSET(0x14A5FE10)

inline static constexpr unsigned int Class_2_BCB55FCF531129D9_TypeDefinitionIndex = 78200;

class Class_2_BCB55FCF531129D9 : public ::Class_1_F5305E2110EE0B0C
{
public:
	::System::Void _ctor(::Class_1_F1B93E9ABCA6C70F* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F1B93E9ABCA6C70F*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BCB55FCF531129D9__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_1_19461BA1CD085490* Method_2_990C937A7EFED2E0(::Class_2_C2B0CD36FFC49CE8* a1)
	{
		return ((::Class_1_19461BA1CD085490*(*)(::PVOID, ::Class_2_C2B0CD36FFC49CE8*))((::PBYTE)hIl2Cpp + CLASS_2_BCB55FCF531129D9_METHOD_2_990C937A7EFED2E0_OFFSET))(this, a1);
	}

	::System::Nullable_1<::Enum_3_70248E32F82D4889> Method_2_5EBFC42D86D4A4DB(::System::Single a1, ::MoleMole::MiniUIGame::SimpleParkour::ETrackType a2, ::Class_2_C2B0CD36FFC49CE8* a3, ::System::Boolean a4)
	{
		return ((::System::Nullable_1<::Enum_3_70248E32F82D4889>(*)(::PVOID, ::System::Single, ::MoleMole::MiniUIGame::SimpleParkour::ETrackType, ::Class_2_C2B0CD36FFC49CE8*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BCB55FCF531129D9_METHOD_2_5EBFC42D86D4A4DB_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Nullable_1<::Enum_3_70248E32F82D4889> Method_2_912676B4A11299FE(::System::Single a1, ::MoleMole::MiniUIGame::SimpleParkour::ETrackType a2, ::Class_2_C2B0CD36FFC49CE8* a3, ::System::Boolean a4)
	{
		return ((::System::Nullable_1<::Enum_3_70248E32F82D4889>(*)(::PVOID, ::System::Single, ::MoleMole::MiniUIGame::SimpleParkour::ETrackType, ::Class_2_C2B0CD36FFC49CE8*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BCB55FCF531129D9_METHOD_2_912676B4A11299FE_OFFSET))(this, a1, a2, a3, a4);
	}
};
