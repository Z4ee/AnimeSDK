#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8_10.h"
#include "unitysdk/RPG/Client/ChenLingBattle/SoldierPropertyChangeType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_9558C17B323AF335;
class Class_1_E8533E8BF8712E1D;
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG::Client::ChenLingBattle { class Soldier; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D393582BD6283486_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17900510)
#define CLASS_1_D393582BD6283486_METHOD_1_175E8684F7D817CF_OFFSET UNITYSDK_OFFSET(0x17900810)
#define CLASS_1_D393582BD6283486_METHOD_1_739DB9F245C7FAD0_OFFSET UNITYSDK_OFFSET(0x17900590)
#define CLASS_1_D393582BD6283486_METHOD_1_74A8A6B080457733_OFFSET UNITYSDK_OFFSET(0x17900290)
#define CLASS_1_D393582BD6283486_METHOD_1_81275B848FB21F2A_OFFSET UNITYSDK_OFFSET(0x17900A40)
#define CLASS_1_D393582BD6283486_METHOD_1_E965414E177FFCFE_OFFSET UNITYSDK_OFFSET(0x17901010)
#define CLASS_1_D393582BD6283486__CTOR_OFFSET UNITYSDK_OFFSET(0x17900500)

inline static constexpr unsigned int Class_1_D393582BD6283486_TypeDefinitionIndex = 75904;

class Class_1_D393582BD6283486 : public ::System::Object
{
public:
	::RPG::PoolDictionary_2<::Enum_3_71AA90D596A09AC8_10, ::Class_1_9558C17B323AF335*>* CEBECBOBLDO; // 0x10
	::RPG::Client::ChenLingBattle::Soldier* APDOFPIONOB; // 0x18
	::RPG::PoolDictionary_2<::Enum_3_71AA90D596A09AC8_10, ::Class_1_9558C17B323AF335*>* FCBNHDCINHC; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D393582BD6283486__CTOR_OFFSET))(this);
	}

	static ::Class_1_D393582BD6283486* Method_1_74A8A6B080457733(::RPG::Client::ChenLingBattle::Soldier* a1)
	{
		return ((::Class_1_D393582BD6283486*(*)(::RPG::Client::ChenLingBattle::Soldier*))((::PBYTE)hIl2Cpp + CLASS_1_D393582BD6283486_METHOD_1_74A8A6B080457733_OFFSET))(a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D393582BD6283486_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_739DB9F245C7FAD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D393582BD6283486_METHOD_1_739DB9F245C7FAD0_OFFSET))(this);
	}

	::Class_1_E8533E8BF8712E1D* Method_1_175E8684F7D817CF()
	{
		return ((::Class_1_E8533E8BF8712E1D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D393582BD6283486_METHOD_1_175E8684F7D817CF_OFFSET))(this);
	}

	::System::Void Method_1_81275B848FB21F2A(::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* a2, ::RPG::Client::ChenLingBattle::SoldierPropertyChangeType a3, ::Enum_3_71AA90D596A09AC8_10 a4, ::Class_1_E8533E8BF8712E1D*& a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>*, ::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>*, ::RPG::Client::ChenLingBattle::SoldierPropertyChangeType, ::Enum_3_71AA90D596A09AC8_10, ::Class_1_E8533E8BF8712E1D*&))((::PBYTE)hIl2Cpp + CLASS_1_D393582BD6283486_METHOD_1_81275B848FB21F2A_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::RPG::PoolDictionary_2<::RPG::GameCore::FixPoint, ::System::Int32>* Method_1_E965414E177FFCFE(::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* a1)
	{
		return ((::RPG::PoolDictionary_2<::RPG::GameCore::FixPoint, ::System::Int32>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_D393582BD6283486_METHOD_1_E965414E177FFCFE_OFFSET))(this, a1);
	}
};
