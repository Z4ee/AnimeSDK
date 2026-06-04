#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_AD6EAABC8C018C94.h"

class Class_1_6CF32442E7A80121;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class ChessRogueCabinetDataItem; }
namespace RPG::Client { class ChessRogueData; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_7729EAF6391037D1_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA4EB270)
#define CLASS_2_7729EAF6391037D1_METHOD_2_1524AD83A3833A17_OFFSET UNITYSDK_OFFSET(0xA4EB730)
#define CLASS_2_7729EAF6391037D1_METHOD_2_27C5766ACD13DC01_OFFSET UNITYSDK_OFFSET(0xA4EB490)
#define CLASS_2_7729EAF6391037D1_METHOD_2_3C98CA656474384D_OFFSET UNITYSDK_OFFSET(0xA4EB320)
#define CLASS_2_7729EAF6391037D1_METHOD_2_901D5A7422339B1D_OFFSET UNITYSDK_OFFSET(0xA4EBD60)
#define CLASS_2_7729EAF6391037D1_METHOD_2_CE779D888EF1FAFC_OFFSET UNITYSDK_OFFSET(0xA4EABB0)
#define CLASS_2_7729EAF6391037D1_METHOD_2_F89C48EE20723849_OFFSET UNITYSDK_OFFSET(0xA4EBB50)
#define CLASS_2_7729EAF6391037D1__CTOR_OFFSET UNITYSDK_OFFSET(0xA4EAB70)
#define CLASS_2_7729EAF6391037D1___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA4EBE50)

inline static constexpr unsigned int Class_2_7729EAF6391037D1_TypeDefinitionIndex = 62602;

class Class_2_7729EAF6391037D1 : public ::Class_1_AD6EAABC8C018C94
{
public:
	::RPG::Client::Promises::Promise* Field_2_0; // 0x38
	::System::Collections::Generic::List_1<::RPG::Client::ChessRogueCabinetDataItem*>* Field_2_1; // 0x40
	::System::Boolean Field_2_2; // 0x48

	::System::Void _ctor(::RPG::Client::ChessRogueData* a1, ::Class_1_6CF32442E7A80121* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChessRogueData*, ::Class_1_6CF32442E7A80121*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7729EAF6391037D1__CTOR_OFFSET))(this, a1, a2, a3);
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

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7729EAF6391037D1___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
