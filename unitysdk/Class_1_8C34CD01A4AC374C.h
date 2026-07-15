#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1152;
class Class_0_16E4307DCC419505_1153;
class Class_0_16E4307DCC419505_1156;
class Class_1_44D5AE5377975AEE;
class Class_1_4BC03BAAC61C4531;
namespace RPG::Client::NavMap { class ITrackPointInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8C34CD01A4AC374C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17EF6B90)
#define CLASS_1_8C34CD01A4AC374C_METHOD_1_0DC58CB62D850A3B_OFFSET UNITYSDK_OFFSET(0x17EF7660)
#define CLASS_1_8C34CD01A4AC374C_METHOD_1_250203490119AF47_OFFSET UNITYSDK_OFFSET(0x17EF6B10)
#define CLASS_1_8C34CD01A4AC374C_METHOD_1_252B84B412A66FDF_OFFSET UNITYSDK_OFFSET(0x17EF7350)
#define CLASS_1_8C34CD01A4AC374C_METHOD_1_34CDC5EE3F20E922_OFFSET UNITYSDK_OFFSET(0x17EF6D40)
#define CLASS_1_8C34CD01A4AC374C_METHOD_1_87BCF7BDB2D057F0_OFFSET UNITYSDK_OFFSET(0x17EF7CC0)
#define CLASS_1_8C34CD01A4AC374C_METHOD_1_A4670B7EB1CA5826_OFFSET UNITYSDK_OFFSET(0x17EF6BF0)
#define CLASS_1_8C34CD01A4AC374C_METHOD_1_D4D9F21FCFB1BBCC_OFFSET UNITYSDK_OFFSET(0x17EF76F0)
#define CLASS_1_8C34CD01A4AC374C_METHOD_1_FEEC7E429D17A26F_OFFSET UNITYSDK_OFFSET(0x17EF6EF0)
#define CLASS_1_8C34CD01A4AC374C__CTOR_OFFSET UNITYSDK_OFFSET(0x17EF6B80)

inline static constexpr unsigned int Class_1_8C34CD01A4AC374C_TypeDefinitionIndex = 71160;

class Class_1_8C34CD01A4AC374C : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_1152* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_1; // 0x18
	::Class_1_4BC03BAAC61C4531* Field_1_2; // 0x20
	::Class_0_16E4307DCC419505_1152* Field_1_3; // 0x28
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_4; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C34CD01A4AC374C__CTOR_OFFSET))(this);
	}

	static ::Class_1_8C34CD01A4AC374C* Method_1_250203490119AF47(::Class_1_4BC03BAAC61C4531* a1)
	{
		return ((::Class_1_8C34CD01A4AC374C*(*)(::Class_1_4BC03BAAC61C4531*))((::PBYTE)hIl2Cpp + CLASS_1_8C34CD01A4AC374C_METHOD_1_250203490119AF47_OFFSET))(a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C34CD01A4AC374C_DISPOSE_OFFSET))(this);
	}

	::RPG::Client::NavMap::ITrackPointInfo* Method_1_34CDC5EE3F20E922(::RPG::Client::NavMap::ITrackPointInfo* a1)
	{
		return ((::RPG::Client::NavMap::ITrackPointInfo*(*)(::PVOID, ::RPG::Client::NavMap::ITrackPointInfo*))((::PBYTE)hIl2Cpp + CLASS_1_8C34CD01A4AC374C_METHOD_1_34CDC5EE3F20E922_OFFSET))(this, a1);
	}

	::System::Single Method_1_0DC58CB62D850A3B(::RPG::Client::NavMap::ITrackPointInfo* a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::Client::NavMap::ITrackPointInfo*))((::PBYTE)hIl2Cpp + CLASS_1_8C34CD01A4AC374C_METHOD_1_0DC58CB62D850A3B_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_FEEC7E429D17A26F(::RPG::Client::NavMap::ITrackPointInfo* a1, ::Class_1_44D5AE5377975AEE*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NavMap::ITrackPointInfo*, ::Class_1_44D5AE5377975AEE*&))((::PBYTE)hIl2Cpp + CLASS_1_8C34CD01A4AC374C_METHOD_1_FEEC7E429D17A26F_OFFSET))(this, a1, a2);
	}

	::Class_1_44D5AE5377975AEE* Method_1_D4D9F21FCFB1BBCC(::Class_0_16E4307DCC419505_1156* a1, ::Class_0_16E4307DCC419505_1153* a2, ::Class_0_16E4307DCC419505_1156* a3, ::Class_0_16E4307DCC419505_1153* a4)
	{
		return ((::Class_1_44D5AE5377975AEE*(*)(::PVOID, ::Class_0_16E4307DCC419505_1156*, ::Class_0_16E4307DCC419505_1153*, ::Class_0_16E4307DCC419505_1156*, ::Class_0_16E4307DCC419505_1153*))((::PBYTE)hIl2Cpp + CLASS_1_8C34CD01A4AC374C_METHOD_1_D4D9F21FCFB1BBCC_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::Client::NavMap::ITrackPointInfo* Method_1_252B84B412A66FDF(::Class_1_44D5AE5377975AEE* a1)
	{
		return ((::RPG::Client::NavMap::ITrackPointInfo*(*)(::PVOID, ::Class_1_44D5AE5377975AEE*))((::PBYTE)hIl2Cpp + CLASS_1_8C34CD01A4AC374C_METHOD_1_252B84B412A66FDF_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* Method_1_87BCF7BDB2D057F0(::Class_0_16E4307DCC419505_1152* a1, ::Class_0_16E4307DCC419505_1153* a2, ::System::Boolean a3)
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1152*, ::Class_0_16E4307DCC419505_1153*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8C34CD01A4AC374C_METHOD_1_87BCF7BDB2D057F0_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_A4670B7EB1CA5826(::Class_0_16E4307DCC419505_1152* a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1152*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_8C34CD01A4AC374C_METHOD_1_A4670B7EB1CA5826_OFFSET))(this, a1, a2);
	}
};
