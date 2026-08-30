#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_AD6EAABC8C018C94.h"

class Class_1_C9DFE5EE7107C629_8;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class ChessRogueCabinetDataItem; }
namespace RPG::Client { class ChessRogueData; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_7729EAF6391037D1_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB79E780)
#define CLASS_2_7729EAF6391037D1_METHOD_2_1524AD83A3833A17_OFFSET UNITYSDK_OFFSET(0xB79EC40)
#define CLASS_2_7729EAF6391037D1_METHOD_2_27C5766ACD13DC01_OFFSET UNITYSDK_OFFSET(0xB79E9A0)
#define CLASS_2_7729EAF6391037D1_METHOD_2_3C98CA656474384D_OFFSET UNITYSDK_OFFSET(0xB79E830)
#define CLASS_2_7729EAF6391037D1_METHOD_2_901D5A7422339B1D_OFFSET UNITYSDK_OFFSET(0xB79F280)
#define CLASS_2_7729EAF6391037D1_METHOD_2_CE779D888EF1FAFC_OFFSET UNITYSDK_OFFSET(0xB79DEB0)
#define CLASS_2_7729EAF6391037D1_METHOD_2_F89C48EE20723849_OFFSET UNITYSDK_OFFSET(0xB79F070)
#define CLASS_2_7729EAF6391037D1__CTOR_OFFSET UNITYSDK_OFFSET(0xB79DE70)

inline static constexpr unsigned int Class_2_7729EAF6391037D1_TypeDefinitionIndex = 66960;

class Class_2_7729EAF6391037D1 : public ::Class_1_AD6EAABC8C018C94
{
public:
	::RPG::Client::Promises::Promise* GJLMIAMPLLE; // 0x38
	::System::Collections::Generic::List_1<::RPG::Client::ChessRogueCabinetDataItem*>* BFPDGNPGELG; // 0x40
	::System::Boolean PBNMDACHCHL; // 0x48

	::System::Void _ctor(::RPG::Client::ChessRogueData* a1, ::Class_1_C9DFE5EE7107C629_8* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChessRogueData*, ::Class_1_C9DFE5EE7107C629_8*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7729EAF6391037D1__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7729EAF6391037D1_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_3C98CA656474384D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7729EAF6391037D1_METHOD_2_3C98CA656474384D_OFFSET))(this);
	}

	::RPG::Client::Promises::Promise* Method_2_27C5766ACD13DC01()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7729EAF6391037D1_METHOD_2_27C5766ACD13DC01_OFFSET))(this);
	}

	::RPG::Client::Promises::Promise* Method_2_1524AD83A3833A17()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7729EAF6391037D1_METHOD_2_1524AD83A3833A17_OFFSET))(this);
	}

	::RPG::Client::Promises::Promise* Method_2_F89C48EE20723849()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7729EAF6391037D1_METHOD_2_F89C48EE20723849_OFFSET))(this);
	}

	::System::Void Method_2_901D5A7422339B1D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7729EAF6391037D1_METHOD_2_901D5A7422339B1D_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::Client::ChessRogueCabinetDataItem*>* Method_2_CE779D888EF1FAFC(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::ChessRogueCabinetDataItem*>*(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_7729EAF6391037D1_METHOD_2_CE779D888EF1FAFC_OFFSET))(this, a1);
	}
};
