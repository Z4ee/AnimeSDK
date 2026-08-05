#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/System/Object.h"

class Class_1_0D2F62EE0080B2A1;
class Class_1_165FBB84936002B9;
class Class_1_3F98947A20FC799A;
class Class_1_71A741F5D691F2DB;
class Class_1_849BDF188AEF4F8D;
class Class_1_889CA1053E4BF344;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_B5199E29CF4E68F9_METHOD_1_01746650EFB5C402_OFFSET UNITYSDK_OFFSET(0x15FE9210)
#define CLASS_1_B5199E29CF4E68F9_METHOD_1_0F26F6C53D5E7BC4_OFFSET UNITYSDK_OFFSET(0x15FE9490)
#define CLASS_1_B5199E29CF4E68F9_METHOD_1_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0x15FE9270)
#define CLASS_1_B5199E29CF4E68F9_METHOD_1_9345D465C2ECE776_OFFSET UNITYSDK_OFFSET(0x15FE9160)
#define CLASS_1_B5199E29CF4E68F9_METHOD_1_970F83AA36AAD910_OFFSET UNITYSDK_OFFSET(0x15FE9430)
#define CLASS_1_B5199E29CF4E68F9_METHOD_1_EC349FF01F2F8C82_OFFSET UNITYSDK_OFFSET(0x15FE9100)
#define CLASS_1_B5199E29CF4E68F9_METHOD_1_F7BA13C72A6B3F58_OFFSET UNITYSDK_OFFSET(0x15FE94F0)
#define CLASS_1_B5199E29CF4E68F9__CTOR_OFFSET UNITYSDK_OFFSET(0x15FE8EC0)

inline static constexpr unsigned int Class_1_B5199E29CF4E68F9_TypeDefinitionIndex = 59379;

class Class_1_B5199E29CF4E68F9 : public ::System::Object
{
public:
	::Class_1_849BDF188AEF4F8D* Field_1_2; // 0x10
	::Class_1_889CA1053E4BF344* Field_1_0; // 0x18
	::System::Collections::Generic::HashSet_1<::MoleMole::HollowChessboard::HollowCell>* Field_1_11; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_1_10; // 0x28
	::System::Collections::Generic::HashSet_1<::MoleMole::HollowChessboard::HollowCell>* Field_1_5; // 0x30
	::Class_1_165FBB84936002B9* Field_1_1; // 0x38
	::System::Collections::Generic::HashSet_1<::MoleMole::HollowChessboard::HollowCell>* Field_1_6; // 0x40
	::Class_1_3F98947A20FC799A* Field_1_4; // 0x48
	::Class_1_0D2F62EE0080B2A1* Field_1_8; // 0x50
	::MoleMole::HollowChessboard::HollowChessboardUID Field_1_7; // 0x58
	::System::Boolean Field_1_9; // 0x60

	::System::Void _ctor(::MoleMole::HollowChessboard::HollowChessboardUID a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + CLASS_1_B5199E29CF4E68F9__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_EC349FF01F2F8C82(::Class_1_71A741F5D691F2DB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_71A741F5D691F2DB*))((::PBYTE)hIl2Cpp + CLASS_1_B5199E29CF4E68F9_METHOD_1_EC349FF01F2F8C82_OFFSET))(this, a1);
	}

	::System::Void Method_1_9345D465C2ECE776(::MoleMole::HollowChessboard::HollowChessboardUID a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + CLASS_1_B5199E29CF4E68F9_METHOD_1_9345D465C2ECE776_OFFSET))(this, a1);
	}

	::System::Void Method_1_01746650EFB5C402(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B5199E29CF4E68F9_METHOD_1_01746650EFB5C402_OFFSET))(this, a1);
	}

	::System::Void Method_1_84B92802FDAFF6C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5199E29CF4E68F9_METHOD_1_84B92802FDAFF6C8_OFFSET))(this);
	}

	::System::Void Method_1_970F83AA36AAD910(::Class_1_71A741F5D691F2DB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_71A741F5D691F2DB*))((::PBYTE)hIl2Cpp + CLASS_1_B5199E29CF4E68F9_METHOD_1_970F83AA36AAD910_OFFSET))(this, a1);
	}

	::Class_1_71A741F5D691F2DB* Method_1_0F26F6C53D5E7BC4(::System::UInt32 a1)
	{
		return ((::Class_1_71A741F5D691F2DB*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B5199E29CF4E68F9_METHOD_1_0F26F6C53D5E7BC4_OFFSET))(this, a1);
	}

	::System::Void Method_1_F7BA13C72A6B3F58()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5199E29CF4E68F9_METHOD_1_F7BA13C72A6B3F58_OFFSET))(this);
	}
};
