#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

class Class_5_F638703ACD0FA08E;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_41C791B40D5CE24D_METHOD_1_07EBC8FBB3C8F395_OFFSET UNITYSDK_OFFSET(0x14678750)
#define CLASS_1_41C791B40D5CE24D_METHOD_1_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x14678D00)
#define CLASS_1_41C791B40D5CE24D_METHOD_1_555CBE49169138CA_OFFSET UNITYSDK_OFFSET(0x146788E0)
#define CLASS_1_41C791B40D5CE24D_METHOD_1_70837E9C7B5392CB_OFFSET UNITYSDK_OFFSET(0x14678620)
#define CLASS_1_41C791B40D5CE24D_METHOD_1_DB8F0BEA650EAC43_OFFSET UNITYSDK_OFFSET(0x14678450)
#define CLASS_1_41C791B40D5CE24D__CTOR_OFFSET UNITYSDK_OFFSET(0x14678310)

inline static constexpr unsigned int Class_1_41C791B40D5CE24D_TypeDefinitionIndex = 70764;

class Class_1_41C791B40D5CE24D : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::HollowChessboard::HollowCell>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntity*>*>* Field_1_7; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_41C791B40D5CE24D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_DB8F0BEA650EAC43(::Class_5_F638703ACD0FA08E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_F638703ACD0FA08E*))((::PBYTE)hIl2Cpp + CLASS_1_41C791B40D5CE24D_METHOD_1_DB8F0BEA650EAC43_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntity*>* Method_1_70837E9C7B5392CB(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntity*>*(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_41C791B40D5CE24D_METHOD_1_70837E9C7B5392CB_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_07EBC8FBB3C8F395(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_41C791B40D5CE24D_METHOD_1_07EBC8FBB3C8F395_OFFSET))(this, a1);
	}

	::System::Void Method_1_555CBE49169138CA(::Class_5_F638703ACD0FA08E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_F638703ACD0FA08E*))((::PBYTE)hIl2Cpp + CLASS_1_41C791B40D5CE24D_METHOD_1_555CBE49169138CA_OFFSET))(this, a1);
	}

	::System::Void Method_1_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_41C791B40D5CE24D_METHOD_1_41A074549EF25F63_OFFSET))(this);
	}
};
