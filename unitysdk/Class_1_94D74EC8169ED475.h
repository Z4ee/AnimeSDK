#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EnumEnterPerformanceResult.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PerformanceManager; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_94D74EC8169ED475_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA648820)
#define CLASS_1_94D74EC8169ED475_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xA648B30)
#define CLASS_1_94D74EC8169ED475_METHOD_1_3600F66F20C66537_OFFSET UNITYSDK_OFFSET(0xA648B90)
#define CLASS_1_94D74EC8169ED475_METHOD_1_4B7B524AC5B1BD1D_OFFSET UNITYSDK_OFFSET(0xA648860)
#define CLASS_1_94D74EC8169ED475_METHOD_1_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0xA648EB0)
#define CLASS_1_94D74EC8169ED475_METHOD_1_AC2F036C558AFA23_OFFSET UNITYSDK_OFFSET(0xA648990)
#define CLASS_1_94D74EC8169ED475_METHOD_1_C1993DA4111B8978_OFFSET UNITYSDK_OFFSET(0xA648DF0)
#define CLASS_1_94D74EC8169ED475_METHOD_1_DF55371EF915C84F_OFFSET UNITYSDK_OFFSET(0xA649070)
#define CLASS_1_94D74EC8169ED475_METHOD_1_DFF98536D8B4074F_OFFSET UNITYSDK_OFFSET(0xA648F60)
#define CLASS_1_94D74EC8169ED475__CTOR_OFFSET UNITYSDK_OFFSET(0xA648770)

inline static constexpr unsigned int Class_1_94D74EC8169ED475_TypeDefinitionIndex = 56729;

class Class_1_94D74EC8169ED475 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::RPG::Client::EnumEnterPerformanceResult>* Field_1_0; // 0x10
	::RPG::Client::PerformanceManager* Field_1_1; // 0x18

	::System::Void _ctor(::RPG::Client::PerformanceManager* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PerformanceManager*))((::PBYTE)hIl2Cpp + CLASS_1_94D74EC8169ED475__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_94D74EC8169ED475_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_4B7B524AC5B1BD1D(::RPG::Client::EnumEnterPerformanceResult a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::EnumEnterPerformanceResult, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_94D74EC8169ED475_METHOD_1_4B7B524AC5B1BD1D_OFFSET))(this, a1, a2);
	}

	::RPG::Client::EnumEnterPerformanceResult Method_1_AC2F036C558AFA23(::RPG::GameCore::ELevelPerformanceType a1, ::System::UInt32 a2)
	{
		return ((::RPG::Client::EnumEnterPerformanceResult(*)(::PVOID, ::RPG::GameCore::ELevelPerformanceType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_94D74EC8169ED475_METHOD_1_AC2F036C558AFA23_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DF55371EF915C84F(::RPG::Client::EnumEnterPerformanceResult a1, ::RPG::GameCore::ELevelPerformanceType a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::EnumEnterPerformanceResult, ::RPG::GameCore::ELevelPerformanceType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_94D74EC8169ED475_METHOD_1_DF55371EF915C84F_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_94D74EC8169ED475_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_1_3600F66F20C66537()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_94D74EC8169ED475_METHOD_1_3600F66F20C66537_OFFSET))(this);
	}

	::System::Boolean Method_1_C1993DA4111B8978(::RPG::GameCore::ELevelPerformanceType a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ELevelPerformanceType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_94D74EC8169ED475_METHOD_1_C1993DA4111B8978_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_4DA6D4A624E42CAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_94D74EC8169ED475_METHOD_1_4DA6D4A624E42CAB_OFFSET))(this);
	}

	::System::Boolean Method_1_DFF98536D8B4074F()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_94D74EC8169ED475_METHOD_1_DFF98536D8B4074F_OFFSET))(this);
	}
};
