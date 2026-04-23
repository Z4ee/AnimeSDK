#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EnumEnterPerformanceResult.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PerformanceManager; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_0986CB4748F2A6F6_DISPOSE_OFFSET UNITYSDK_OFFSET(0x123BFF60)
#define CLASS_1_0986CB4748F2A6F6_METHOD_1_0ABB1DF9FC6E797E_OFFSET UNITYSDK_OFFSET(0x123C0100)
#define CLASS_1_0986CB4748F2A6F6_METHOD_1_14F96CE90F77CBB9_OFFSET UNITYSDK_OFFSET(0x123C04A0)
#define CLASS_1_0986CB4748F2A6F6_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x123C0440)
#define CLASS_1_0986CB4748F2A6F6_METHOD_1_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0x123C0770)
#define CLASS_1_0986CB4748F2A6F6_METHOD_1_568AE7A1499723FD_OFFSET UNITYSDK_OFFSET(0x123C0820)
#define CLASS_1_0986CB4748F2A6F6_METHOD_1_770D42DDA6A5C614_OFFSET UNITYSDK_OFFSET(0x123BFFA0)
#define CLASS_1_0986CB4748F2A6F6_METHOD_1_A36C610DBAAEFF02_OFFSET UNITYSDK_OFFSET(0x123C0920)
#define CLASS_1_0986CB4748F2A6F6_METHOD_1_C1993DA4111B8978_OFFSET UNITYSDK_OFFSET(0x123C06B0)
#define CLASS_1_0986CB4748F2A6F6__CTOR_OFFSET UNITYSDK_OFFSET(0x123BFEB0)

inline static constexpr unsigned int Class_1_0986CB4748F2A6F6_TypeDefinitionIndex = 55973;

class Class_1_0986CB4748F2A6F6 : public ::System::Object
{
public:
	::RPG::Client::PerformanceManager* Field_1_0; // 0x10
	::System::Collections::Generic::HashSet_1<::RPG::Client::EnumEnterPerformanceResult>* Field_1_1; // 0x18

	::System::Void _ctor(::RPG::Client::PerformanceManager* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PerformanceManager*))((::PBYTE)hIl2Cpp + CLASS_1_0986CB4748F2A6F6__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0986CB4748F2A6F6_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_770D42DDA6A5C614(::RPG::Client::EnumEnterPerformanceResult a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::EnumEnterPerformanceResult, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0986CB4748F2A6F6_METHOD_1_770D42DDA6A5C614_OFFSET))(this, a1, a2);
	}

	::RPG::Client::EnumEnterPerformanceResult Method_1_0ABB1DF9FC6E797E(::RPG::GameCore::ELevelPerformanceType a1, ::System::UInt32 a2)
	{
		return ((::RPG::Client::EnumEnterPerformanceResult(*)(::PVOID, ::RPG::GameCore::ELevelPerformanceType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0986CB4748F2A6F6_METHOD_1_0ABB1DF9FC6E797E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A36C610DBAAEFF02(::RPG::Client::EnumEnterPerformanceResult a1, ::RPG::GameCore::ELevelPerformanceType a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::EnumEnterPerformanceResult, ::RPG::GameCore::ELevelPerformanceType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0986CB4748F2A6F6_METHOD_1_A36C610DBAAEFF02_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0986CB4748F2A6F6_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_1_14F96CE90F77CBB9()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0986CB4748F2A6F6_METHOD_1_14F96CE90F77CBB9_OFFSET))(this);
	}

	::System::Boolean Method_1_C1993DA4111B8978(::RPG::GameCore::ELevelPerformanceType a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ELevelPerformanceType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0986CB4748F2A6F6_METHOD_1_C1993DA4111B8978_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_4DA6D4A624E42CAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0986CB4748F2A6F6_METHOD_1_4DA6D4A624E42CAB_OFFSET))(this);
	}

	::System::Boolean Method_1_568AE7A1499723FD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0986CB4748F2A6F6_METHOD_1_568AE7A1499723FD_OFFSET))(this);
	}
};
