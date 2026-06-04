#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_1106;
class Class_0_16E4307DCC419505_1107;
class Class_1_0F98E9AF592164E3;
class Class_1_4BC03BAAC61C4531;
namespace RPG::Client::NavMap { class ITrackPointInfo; }
namespace RPG::Client::NavMap { class MappingInfoNode; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_128539D3048EEECE_METHOD_1_319F77ED714C7B1B_OFFSET UNITYSDK_OFFSET(0xABED970)
#define CLASS_1_128539D3048EEECE_METHOD_1_4DFFC76C2888B205_OFFSET UNITYSDK_OFFSET(0xABEDC90)
#define CLASS_1_128539D3048EEECE_METHOD_1_72F90B69037DA259_OFFSET UNITYSDK_OFFSET(0xABEE5E0)
#define CLASS_1_128539D3048EEECE_METHOD_1_848B4278356DC659_OFFSET UNITYSDK_OFFSET(0xABEF6D0)
#define CLASS_1_128539D3048EEECE_METHOD_1_AD125F4F7EE61610_OFFSET UNITYSDK_OFFSET(0xABED860)
#define CLASS_1_128539D3048EEECE_METHOD_1_B32523ABACDCDB7F_OFFSET UNITYSDK_OFFSET(0xABED8E0)
#define CLASS_1_128539D3048EEECE__CTOR_OFFSET UNITYSDK_OFFSET(0xABED8D0)

inline static constexpr unsigned int Class_1_128539D3048EEECE_TypeDefinitionIndex = 69632;

class Class_1_128539D3048EEECE : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_128539D3048EEECE__CTOR_OFFSET))(this);
	}

	static ::Class_1_128539D3048EEECE* Method_1_AD125F4F7EE61610()
	{
		return ((::Class_1_128539D3048EEECE*(*)())((::PBYTE)hIl2Cpp + CLASS_1_128539D3048EEECE_METHOD_1_AD125F4F7EE61610_OFFSET))();
	}

	::Class_1_0F98E9AF592164E3* Method_1_B32523ABACDCDB7F(::Class_1_4BC03BAAC61C4531* a1, ::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>* a2, ::RPG::Client::NavMap::ITrackPointInfo* a3)
	{
		return ((::Class_1_0F98E9AF592164E3*(*)(::PVOID, ::Class_1_4BC03BAAC61C4531*, ::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>*, ::RPG::Client::NavMap::ITrackPointInfo*))((::PBYTE)hIl2Cpp + CLASS_1_128539D3048EEECE_METHOD_1_B32523ABACDCDB7F_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_0F98E9AF592164E3* Method_1_319F77ED714C7B1B(::Class_1_4BC03BAAC61C4531* a1, ::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>* a2, ::RPG::Client::NavMap::ITrackPointInfo* a3)
	{
		return ((::Class_1_0F98E9AF592164E3*(*)(::PVOID, ::Class_1_4BC03BAAC61C4531*, ::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>*, ::RPG::Client::NavMap::ITrackPointInfo*))((::PBYTE)hIl2Cpp + CLASS_1_128539D3048EEECE_METHOD_1_319F77ED714C7B1B_OFFSET))(this, a1, a2, a3);
	}

	::System::ValueTuple_2<::Class_0_16E4307DCC419505_1106*, ::Class_0_16E4307DCC419505_1107*> Method_1_4DFFC76C2888B205(::Class_1_4BC03BAAC61C4531* a1, ::RPG::Client::NavMap::ITrackPointInfo* a2)
	{
		return ((::System::ValueTuple_2<::Class_0_16E4307DCC419505_1106*, ::Class_0_16E4307DCC419505_1107*>(*)(::PVOID, ::Class_1_4BC03BAAC61C4531*, ::RPG::Client::NavMap::ITrackPointInfo*))((::PBYTE)hIl2Cpp + CLASS_1_128539D3048EEECE_METHOD_1_4DFFC76C2888B205_OFFSET))(this, a1, a2);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::NavMap::MappingInfoNode*>* Method_1_72F90B69037DA259(::Class_1_4BC03BAAC61C4531* a1, ::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>* a2, ::Class_0_16E4307DCC419505_1107* a3, ::Class_0_16E4307DCC419505_1106* a4)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::NavMap::MappingInfoNode*>*(*)(::Class_1_4BC03BAAC61C4531*, ::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>*, ::Class_0_16E4307DCC419505_1107*, ::Class_0_16E4307DCC419505_1106*))((::PBYTE)hIl2Cpp + CLASS_1_128539D3048EEECE_METHOD_1_72F90B69037DA259_OFFSET))(a1, a2, a3, a4);
	}

	::Class_0_16E4307DCC419505_1106* Method_1_848B4278356DC659(::Class_1_4BC03BAAC61C4531* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::NavMap::MappingInfoNode*>* a2)
	{
		return ((::Class_0_16E4307DCC419505_1106*(*)(::PVOID, ::Class_1_4BC03BAAC61C4531*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::NavMap::MappingInfoNode*>*))((::PBYTE)hIl2Cpp + CLASS_1_128539D3048EEECE_METHOD_1_848B4278356DC659_OFFSET))(this, a1, a2);
	}
};
