#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_1210;
class Class_0_16E4307DCC419505_1211;
class Class_1_0F98E9AF592164E3;
class Class_1_4BC03BAAC61C4531;
namespace RPG::Client::NavMap { class ITrackPointInfo; }
namespace RPG::Client::NavMap { class MappingInfoNode; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E9E5EB6C92E442D0_METHOD_1_319F77ED714C7B1B_OFFSET UNITYSDK_OFFSET(0x16C097F0)
#define CLASS_1_E9E5EB6C92E442D0_METHOD_1_3256D65C150B1DEE_OFFSET UNITYSDK_OFFSET(0x16C0C400)
#define CLASS_1_E9E5EB6C92E442D0_METHOD_1_7C0C72C9272DA9BC_OFFSET UNITYSDK_OFFSET(0x16C09BE0)
#define CLASS_1_E9E5EB6C92E442D0_METHOD_1_AD125F4F7EE61610_OFFSET UNITYSDK_OFFSET(0x16C096E0)
#define CLASS_1_E9E5EB6C92E442D0_METHOD_1_B32523ABACDCDB7F_OFFSET UNITYSDK_OFFSET(0x16C09760)
#define CLASS_1_E9E5EB6C92E442D0_METHOD_1_BA16277FE72EA97B_OFFSET UNITYSDK_OFFSET(0x16C0A910)
#define CLASS_1_E9E5EB6C92E442D0__CTOR_OFFSET UNITYSDK_OFFSET(0x16C09750)

inline static constexpr unsigned int Class_1_E9E5EB6C92E442D0_TypeDefinitionIndex = 74454;

class Class_1_E9E5EB6C92E442D0 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E9E5EB6C92E442D0__CTOR_OFFSET))(this);
	}

	static ::Class_1_E9E5EB6C92E442D0* Method_1_AD125F4F7EE61610()
	{
		return ((::Class_1_E9E5EB6C92E442D0*(*)())((::PBYTE)hIl2Cpp + CLASS_1_E9E5EB6C92E442D0_METHOD_1_AD125F4F7EE61610_OFFSET))();
	}

	::Class_1_0F98E9AF592164E3* Method_1_B32523ABACDCDB7F(::Class_1_4BC03BAAC61C4531* a1, ::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>* a2, ::RPG::Client::NavMap::ITrackPointInfo* a3)
	{
		return ((::Class_1_0F98E9AF592164E3*(*)(::PVOID, ::Class_1_4BC03BAAC61C4531*, ::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>*, ::RPG::Client::NavMap::ITrackPointInfo*))((::PBYTE)hIl2Cpp + CLASS_1_E9E5EB6C92E442D0_METHOD_1_B32523ABACDCDB7F_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_0F98E9AF592164E3* Method_1_319F77ED714C7B1B(::Class_1_4BC03BAAC61C4531* a1, ::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>* a2, ::RPG::Client::NavMap::ITrackPointInfo* a3)
	{
		return ((::Class_1_0F98E9AF592164E3*(*)(::PVOID, ::Class_1_4BC03BAAC61C4531*, ::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>*, ::RPG::Client::NavMap::ITrackPointInfo*))((::PBYTE)hIl2Cpp + CLASS_1_E9E5EB6C92E442D0_METHOD_1_319F77ED714C7B1B_OFFSET))(this, a1, a2, a3);
	}

	::System::ValueTuple_2<::Class_0_16E4307DCC419505_1210*, ::Class_0_16E4307DCC419505_1211*> Method_1_7C0C72C9272DA9BC(::Class_1_4BC03BAAC61C4531* a1, ::RPG::Client::NavMap::ITrackPointInfo* a2)
	{
		return ((::System::ValueTuple_2<::Class_0_16E4307DCC419505_1210*, ::Class_0_16E4307DCC419505_1211*>(*)(::PVOID, ::Class_1_4BC03BAAC61C4531*, ::RPG::Client::NavMap::ITrackPointInfo*))((::PBYTE)hIl2Cpp + CLASS_1_E9E5EB6C92E442D0_METHOD_1_7C0C72C9272DA9BC_OFFSET))(this, a1, a2);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::NavMap::MappingInfoNode*>* Method_1_BA16277FE72EA97B(::Class_1_4BC03BAAC61C4531* a1, ::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>* a2, ::Class_0_16E4307DCC419505_1211* a3, ::Class_0_16E4307DCC419505_1210* a4)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::NavMap::MappingInfoNode*>*(*)(::Class_1_4BC03BAAC61C4531*, ::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>*, ::Class_0_16E4307DCC419505_1211*, ::Class_0_16E4307DCC419505_1210*))((::PBYTE)hIl2Cpp + CLASS_1_E9E5EB6C92E442D0_METHOD_1_BA16277FE72EA97B_OFFSET))(a1, a2, a3, a4);
	}

	::Class_0_16E4307DCC419505_1210* Method_1_3256D65C150B1DEE(::Class_1_4BC03BAAC61C4531* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::NavMap::MappingInfoNode*>* a2)
	{
		return ((::Class_0_16E4307DCC419505_1210*(*)(::PVOID, ::Class_1_4BC03BAAC61C4531*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::NavMap::MappingInfoNode*>*))((::PBYTE)hIl2Cpp + CLASS_1_E9E5EB6C92E442D0_METHOD_1_3256D65C150B1DEE_OFFSET))(this, a1, a2);
	}
};
