#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

class Class_1_11BB6859CA92E509;
class Class_1_D3CB1F18440FC779;
class Class_4_AC6D98911872E0CE;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_5709424BFAC97E48_METHOD_1_7FA0E324170FCE4E_OFFSET UNITYSDK_OFFSET(0x125EA250)
#define CLASS_1_5709424BFAC97E48_METHOD_1_A3CD8010EE7E2C0B_OFFSET UNITYSDK_OFFSET(0x125EA1F0)
#define CLASS_1_5709424BFAC97E48_METHOD_1_ACA3AEB325B9E8C3_OFFSET UNITYSDK_OFFSET(0x125EA310)
#define CLASS_1_5709424BFAC97E48_METHOD_1_B78A2C8EE71DC1F9_OFFSET UNITYSDK_OFFSET(0x125EA060)
#define CLASS_1_5709424BFAC97E48_METHOD_1_BDBC83C0D87AA6BF_OFFSET UNITYSDK_OFFSET(0x125E9FD0)
#define CLASS_1_5709424BFAC97E48_METHOD_1_C7C4399D2E9567C9_OFFSET UNITYSDK_OFFSET(0x125EA590)
#define CLASS_1_5709424BFAC97E48_METHOD_1_C979BCE3C3E914A2_OFFSET UNITYSDK_OFFSET(0x125E9770)
#define CLASS_1_5709424BFAC97E48_METHOD_1_D49E5A1C691771A3_OFFSET UNITYSDK_OFFSET(0x125EA5A0)
#define CLASS_1_5709424BFAC97E48_METHOD_1_EBAF10BBA97B82DD_OFFSET UNITYSDK_OFFSET(0x125E9780)
#define CLASS_1_5709424BFAC97E48__CTOR_OFFSET UNITYSDK_OFFSET(0x125E9690)

inline static constexpr unsigned int Class_1_5709424BFAC97E48_TypeDefinitionIndex = 56604;

class Class_1_5709424BFAC97E48 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::Class_1_11BB6859CA92E509*>* Field_1_0; // 0x10
	::System::Collections::Generic::HashSet_1<::MoleMole::HollowChessboard::HollowCell>* Field_1_4; // 0x18
	::System::Collections::Generic::HashSet_1<::MoleMole::HollowChessboard::HollowCell>* Field_1_7; // 0x20
	::Class_4_AC6D98911872E0CE* Field_1_6; // 0x28
	::System::Boolean Field_1_5; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5709424BFAC97E48__CTOR_OFFSET))(this);
	}

	::Class_4_AC6D98911872E0CE* Method_1_C979BCE3C3E914A2()
	{
		return ((::Class_4_AC6D98911872E0CE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5709424BFAC97E48_METHOD_1_C979BCE3C3E914A2_OFFSET))(this);
	}

	::System::Void Method_1_EBAF10BBA97B82DD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5709424BFAC97E48_METHOD_1_EBAF10BBA97B82DD_OFFSET))(this);
	}

	::System::Void Method_1_BDBC83C0D87AA6BF(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_5709424BFAC97E48_METHOD_1_BDBC83C0D87AA6BF_OFFSET))(this, a1);
	}

	::System::Void Method_1_B78A2C8EE71DC1F9(::MoleMole::HollowChessboard::HollowCell a1, ::Class_1_D3CB1F18440FC779* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::Class_1_D3CB1F18440FC779*))((::PBYTE)hIl2Cpp + CLASS_1_5709424BFAC97E48_METHOD_1_B78A2C8EE71DC1F9_OFFSET))(this, a1, a2);
	}

	::Class_1_D3CB1F18440FC779* Method_1_7FA0E324170FCE4E(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::Class_1_D3CB1F18440FC779*(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_1_5709424BFAC97E48_METHOD_1_7FA0E324170FCE4E_OFFSET))(this, a1);
	}

	::System::Void Method_1_ACA3AEB325B9E8C3(::MoleMole::HollowChessboard::HollowCell a1, ::Class_4_AC6D98911872E0CE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::Class_4_AC6D98911872E0CE*))((::PBYTE)hIl2Cpp + CLASS_1_5709424BFAC97E48_METHOD_1_ACA3AEB325B9E8C3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C7C4399D2E9567C9(::Class_4_AC6D98911872E0CE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_AC6D98911872E0CE*))((::PBYTE)hIl2Cpp + CLASS_1_5709424BFAC97E48_METHOD_1_C7C4399D2E9567C9_OFFSET))(this, a1);
	}

	::System::Void Method_1_D49E5A1C691771A3(::MoleMole::HollowChessboard::HollowCell a1, ::Class_1_D3CB1F18440FC779* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::Class_1_D3CB1F18440FC779*))((::PBYTE)hIl2Cpp + CLASS_1_5709424BFAC97E48_METHOD_1_D49E5A1C691771A3_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_A3CD8010EE7E2C0B(::Class_1_D3CB1F18440FC779* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D3CB1F18440FC779*))((::PBYTE)hIl2Cpp + CLASS_1_5709424BFAC97E48_METHOD_1_A3CD8010EE7E2C0B_OFFSET))(this, a1);
	}
};
