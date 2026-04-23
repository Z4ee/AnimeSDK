#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8_8.h"
#include "unitysdk/RPG/Client/ChenLingBattle/SoldierPropertyChangeType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_9558C17B323AF335;
class Class_1_E8533E8BF8712E1D;
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG::Client::ChenLingBattle { class Soldier; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_53B5B6BCE730F64E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x117C5460)
#define CLASS_1_53B5B6BCE730F64E_METHOD_1_260BB9B6CA6BDA1B_OFFSET UNITYSDK_OFFSET(0x117C59B0)
#define CLASS_1_53B5B6BCE730F64E_METHOD_1_5B7B7CD2F3D0E492_OFFSET UNITYSDK_OFFSET(0x117C6110)
#define CLASS_1_53B5B6BCE730F64E_METHOD_1_6E6682ED9FD6F719_OFFSET UNITYSDK_OFFSET(0x117C54E0)
#define CLASS_1_53B5B6BCE730F64E_METHOD_1_74A8A6B080457733_OFFSET UNITYSDK_OFFSET(0x117C51E0)
#define CLASS_1_53B5B6BCE730F64E_METHOD_1_F3C7CF662BAFDA51_OFFSET UNITYSDK_OFFSET(0x117C5770)
#define CLASS_1_53B5B6BCE730F64E__CTOR_OFFSET UNITYSDK_OFFSET(0x117C5450)

inline static constexpr unsigned int Class_1_53B5B6BCE730F64E_TypeDefinitionIndex = 70143;

class Class_1_53B5B6BCE730F64E : public ::System::Object
{
public:
	::RPG::PoolDictionary_2<::Enum_3_71AA90D596A09AC8_8, ::Class_1_9558C17B323AF335*>* Field_1_2; // 0x10
	::RPG::Client::ChenLingBattle::Soldier* Field_1_0; // 0x18
	::RPG::PoolDictionary_2<::Enum_3_71AA90D596A09AC8_8, ::Class_1_9558C17B323AF335*>* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53B5B6BCE730F64E__CTOR_OFFSET))(this);
	}

	static ::Class_1_53B5B6BCE730F64E* Method_1_74A8A6B080457733(::RPG::Client::ChenLingBattle::Soldier* a1)
	{
		return ((::Class_1_53B5B6BCE730F64E*(*)(::RPG::Client::ChenLingBattle::Soldier*))((::PBYTE)hIl2Cpp + CLASS_1_53B5B6BCE730F64E_METHOD_1_74A8A6B080457733_OFFSET))(a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53B5B6BCE730F64E_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_6E6682ED9FD6F719()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53B5B6BCE730F64E_METHOD_1_6E6682ED9FD6F719_OFFSET))(this);
	}

	::Class_1_E8533E8BF8712E1D* Method_1_F3C7CF662BAFDA51()
	{
		return ((::Class_1_E8533E8BF8712E1D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53B5B6BCE730F64E_METHOD_1_F3C7CF662BAFDA51_OFFSET))(this);
	}

	::System::Void Method_1_260BB9B6CA6BDA1B(::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* a2, ::RPG::Client::ChenLingBattle::SoldierPropertyChangeType a3, ::Enum_3_71AA90D596A09AC8_8 a4, ::Class_1_E8533E8BF8712E1D*& a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>*, ::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>*, ::RPG::Client::ChenLingBattle::SoldierPropertyChangeType, ::Enum_3_71AA90D596A09AC8_8, ::Class_1_E8533E8BF8712E1D*&))((::PBYTE)hIl2Cpp + CLASS_1_53B5B6BCE730F64E_METHOD_1_260BB9B6CA6BDA1B_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::RPG::PoolDictionary_2<::RPG::GameCore::FixPoint, ::System::Int32>* Method_1_5B7B7CD2F3D0E492(::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* a1)
	{
		return ((::RPG::PoolDictionary_2<::RPG::GameCore::FixPoint, ::System::Int32>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_53B5B6BCE730F64E_METHOD_1_5B7B7CD2F3D0E492_OFFSET))(this, a1);
	}
};
