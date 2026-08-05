#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/System/Object.h"

class Class_1_CB85D785B1C6006D;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_16EA9862B8D2E5C9_METHOD_1_2A202D88FC4C292F_OFFSET UNITYSDK_OFFSET(0x18B86C40)
#define CLASS_1_16EA9862B8D2E5C9_METHOD_1_32C8FC0DB2BB1DB5_OFFSET UNITYSDK_OFFSET(0x18B86590)
#define CLASS_1_16EA9862B8D2E5C9_METHOD_1_37D0382D0C30A2DC_OFFSET UNITYSDK_OFFSET(0x18B86BD0)
#define CLASS_1_16EA9862B8D2E5C9_METHOD_1_65D50051007BF6D1_OFFSET UNITYSDK_OFFSET(0x18B86870)
#define CLASS_1_16EA9862B8D2E5C9_METHOD_1_BB6F4AB6CB8A048D_OFFSET UNITYSDK_OFFSET(0x18B865F0)
#define CLASS_1_16EA9862B8D2E5C9_METHOD_1_F52588958242F29E_OFFSET UNITYSDK_OFFSET(0x18B86B20)
#define CLASS_1_16EA9862B8D2E5C9__CTOR_OFFSET UNITYSDK_OFFSET(0x18B86480)

inline static constexpr unsigned int Class_1_16EA9862B8D2E5C9_TypeDefinitionIndex = 57046;

class Class_1_16EA9862B8D2E5C9 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* Field_1_6; // 0x10
	::Class_1_CB85D785B1C6006D* Field_1_0; // 0x18
	::MoleMole::HollowChessboard::HollowChessboardUID Field_1_7; // 0x20

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_16EA9862B8D2E5C9__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_32C8FC0DB2BB1DB5(::MoleMole::HollowChessboard::HollowChessboardUID a1, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*))((::PBYTE)hIl2Cpp + CLASS_1_16EA9862B8D2E5C9_METHOD_1_32C8FC0DB2BB1DB5_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_BB6F4AB6CB8A048D(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntity*>*& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntity*>*&))((::PBYTE)hIl2Cpp + CLASS_1_16EA9862B8D2E5C9_METHOD_1_BB6F4AB6CB8A048D_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_65D50051007BF6D1(::System::Int32 a1, ::System::String* a2, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntity*>*& a3, ::System::String*& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntity*>*&, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_16EA9862B8D2E5C9_METHOD_1_65D50051007BF6D1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Int32 Method_1_37D0382D0C30A2DC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16EA9862B8D2E5C9_METHOD_1_37D0382D0C30A2DC_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_2A202D88FC4C292F()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16EA9862B8D2E5C9_METHOD_1_2A202D88FC4C292F_OFFSET))(this);
	}

	::System::Boolean Method_1_F52588958242F29E(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_16EA9862B8D2E5C9_METHOD_1_F52588958242F29E_OFFSET))(this, a1);
	}
};
