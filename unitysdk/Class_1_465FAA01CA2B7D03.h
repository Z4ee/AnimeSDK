#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_1152;
class Class_0_16E4307DCC419505_1153;
class Class_1_0F98E9AF592164E3;
class Class_1_4BC03BAAC61C4531;
namespace RPG::Client::NavMap { class ITrackPointInfo; }
namespace RPG::Client::NavMap { class MappingInfoNode; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_465FAA01CA2B7D03_METHOD_1_319F77ED714C7B1B_OFFSET UNITYSDK_OFFSET(0x14CEB190)
#define CLASS_1_465FAA01CA2B7D03_METHOD_1_3256D65C150B1DEE_OFFSET UNITYSDK_OFFSET(0x14CEDAB0)
#define CLASS_1_465FAA01CA2B7D03_METHOD_1_4DFFC76C2888B205_OFFSET UNITYSDK_OFFSET(0x14CEB580)
#define CLASS_1_465FAA01CA2B7D03_METHOD_1_9AC94F12AC1D852D_OFFSET UNITYSDK_OFFSET(0x14CEC2F0)
#define CLASS_1_465FAA01CA2B7D03_METHOD_1_AD125F4F7EE61610_OFFSET UNITYSDK_OFFSET(0x14CEB080)
#define CLASS_1_465FAA01CA2B7D03_METHOD_1_B32523ABACDCDB7F_OFFSET UNITYSDK_OFFSET(0x14CEB100)
#define CLASS_1_465FAA01CA2B7D03__CTOR_OFFSET UNITYSDK_OFFSET(0x14CEB0F0)

inline static constexpr unsigned int Class_1_465FAA01CA2B7D03_TypeDefinitionIndex = 71155;

class Class_1_465FAA01CA2B7D03 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_465FAA01CA2B7D03__CTOR_OFFSET))(this);
	}

	static ::Class_1_465FAA01CA2B7D03* Method_1_AD125F4F7EE61610()
	{
		return ((::Class_1_465FAA01CA2B7D03*(*)())((::PBYTE)hIl2Cpp + CLASS_1_465FAA01CA2B7D03_METHOD_1_AD125F4F7EE61610_OFFSET))();
	}

	::Class_1_0F98E9AF592164E3* Method_1_B32523ABACDCDB7F(::Class_1_4BC03BAAC61C4531* a1, ::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>* a2, ::RPG::Client::NavMap::ITrackPointInfo* a3)
	{
		return ((::Class_1_0F98E9AF592164E3*(*)(::PVOID, ::Class_1_4BC03BAAC61C4531*, ::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>*, ::RPG::Client::NavMap::ITrackPointInfo*))((::PBYTE)hIl2Cpp + CLASS_1_465FAA01CA2B7D03_METHOD_1_B32523ABACDCDB7F_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_0F98E9AF592164E3* Method_1_319F77ED714C7B1B(::Class_1_4BC03BAAC61C4531* a1, ::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>* a2, ::RPG::Client::NavMap::ITrackPointInfo* a3)
	{
		return ((::Class_1_0F98E9AF592164E3*(*)(::PVOID, ::Class_1_4BC03BAAC61C4531*, ::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>*, ::RPG::Client::NavMap::ITrackPointInfo*))((::PBYTE)hIl2Cpp + CLASS_1_465FAA01CA2B7D03_METHOD_1_319F77ED714C7B1B_OFFSET))(this, a1, a2, a3);
	}

	::System::ValueTuple_2<::Class_0_16E4307DCC419505_1152*, ::Class_0_16E4307DCC419505_1153*> Method_1_4DFFC76C2888B205(::Class_1_4BC03BAAC61C4531* a1, ::RPG::Client::NavMap::ITrackPointInfo* a2)
	{
		return ((::System::ValueTuple_2<::Class_0_16E4307DCC419505_1152*, ::Class_0_16E4307DCC419505_1153*>(*)(::PVOID, ::Class_1_4BC03BAAC61C4531*, ::RPG::Client::NavMap::ITrackPointInfo*))((::PBYTE)hIl2Cpp + CLASS_1_465FAA01CA2B7D03_METHOD_1_4DFFC76C2888B205_OFFSET))(this, a1, a2);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::NavMap::MappingInfoNode*>* Method_1_9AC94F12AC1D852D(::Class_1_4BC03BAAC61C4531* a1, ::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>* a2, ::Class_0_16E4307DCC419505_1153* a3, ::Class_0_16E4307DCC419505_1152* a4)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::NavMap::MappingInfoNode*>*(*)(::Class_1_4BC03BAAC61C4531*, ::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>*, ::Class_0_16E4307DCC419505_1153*, ::Class_0_16E4307DCC419505_1152*))((::PBYTE)hIl2Cpp + CLASS_1_465FAA01CA2B7D03_METHOD_1_9AC94F12AC1D852D_OFFSET))(a1, a2, a3, a4);
	}

	::Class_0_16E4307DCC419505_1152* Method_1_3256D65C150B1DEE(::Class_1_4BC03BAAC61C4531* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::NavMap::MappingInfoNode*>* a2)
	{
		return ((::Class_0_16E4307DCC419505_1152*(*)(::PVOID, ::Class_1_4BC03BAAC61C4531*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::NavMap::MappingInfoNode*>*))((::PBYTE)hIl2Cpp + CLASS_1_465FAA01CA2B7D03_METHOD_1_3256D65C150B1DEE_OFFSET))(this, a1, a2);
	}
};
