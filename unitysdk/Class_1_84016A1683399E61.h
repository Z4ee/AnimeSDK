#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

class Class_1_80CEC7B990B4301D;
class Class_1_E87E347C649FDDBC;
class Class_5_FCAF801AC482D3B5;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_84016A1683399E61_METHOD_1_820BD3CD4A7418CB_OFFSET UNITYSDK_OFFSET(0x15CBAC10)
#define CLASS_1_84016A1683399E61_METHOD_1_821BBDC04720A2EB_OFFSET UNITYSDK_OFFSET(0x15CBA490)
#define CLASS_1_84016A1683399E61_METHOD_1_905ABCEEB988709B_OFFSET UNITYSDK_OFFSET(0x15CBAD40)
#define CLASS_1_84016A1683399E61_METHOD_1_999B8B439422C7E7_OFFSET UNITYSDK_OFFSET(0x15CBA3D0)
#define CLASS_1_84016A1683399E61_METHOD_1_9B4820DC20059345_OFFSET UNITYSDK_OFFSET(0x15CBACF0)
#define CLASS_1_84016A1683399E61_METHOD_1_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x15CBA380)
#define CLASS_1_84016A1683399E61_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x15CBA370)
#define CLASS_1_84016A1683399E61_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x15CBBA10)
#define CLASS_1_84016A1683399E61__CTOR_OFFSET UNITYSDK_OFFSET(0x15CBA130)

inline static constexpr unsigned int Class_1_84016A1683399E61_TypeDefinitionIndex = 44038;

class Class_1_84016A1683399E61 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_5; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_3; // 0x18
	::Class_1_80CEC7B990B4301D* Field_1_1; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_6; // 0x28
	::Class_5_FCAF801AC482D3B5* Field_1_0; // 0x30
	::System::Single Field_1_2; // 0x38
	::System::Boolean Field_1_4; // 0x3C

	::System::Void _ctor(::Class_5_FCAF801AC482D3B5* a1, ::Class_1_80CEC7B990B4301D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_FCAF801AC482D3B5*, ::Class_1_80CEC7B990B4301D*))((::PBYTE)hIl2Cpp + CLASS_1_84016A1683399E61__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_84016A1683399E61_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_E9A575D18A0748D9(::Class_1_E87E347C649FDDBC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E87E347C649FDDBC*))((::PBYTE)hIl2Cpp + CLASS_1_84016A1683399E61_METHOD_1_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_1_999B8B439422C7E7(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_84016A1683399E61_METHOD_1_999B8B439422C7E7_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* Method_1_820BD3CD4A7418CB(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_84016A1683399E61_METHOD_1_820BD3CD4A7418CB_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_9B4820DC20059345()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_84016A1683399E61_METHOD_1_9B4820DC20059345_OFFSET))(this);
	}

	::System::Void Method_1_821BBDC04720A2EB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_84016A1683399E61_METHOD_1_821BBDC04720A2EB_OFFSET))(this);
	}

	::System::Void Method_1_F8C7231308CD2C82()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_84016A1683399E61_METHOD_1_F8C7231308CD2C82_OFFSET))(this);
	}

	::System::Tuple_2<::System::Int32, ::System::String*>* Method_1_905ABCEEB988709B(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Tuple_2<::System::Int32, ::System::String*>*(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_84016A1683399E61_METHOD_1_905ABCEEB988709B_OFFSET))(this, a1);
	}
};
