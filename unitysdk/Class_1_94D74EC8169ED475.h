#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EnumEnterPerformanceResult.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PerformanceManager; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_94D74EC8169ED475_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB8211C0)
#define CLASS_1_94D74EC8169ED475_METHOD_1_1C298FA6BB9350FA_OFFSET UNITYSDK_OFFSET(0xB8215F0)
#define CLASS_1_94D74EC8169ED475_METHOD_1_1D21341EB0F67606_OFFSET UNITYSDK_OFFSET(0xB821360)
#define CLASS_1_94D74EC8169ED475_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xB821590)
#define CLASS_1_94D74EC8169ED475_METHOD_1_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0xB8218E0)
#define CLASS_1_94D74EC8169ED475_METHOD_1_770D42DDA6A5C614_OFFSET UNITYSDK_OFFSET(0xB821200)
#define CLASS_1_94D74EC8169ED475_METHOD_1_DF55371EF915C84F_OFFSET UNITYSDK_OFFSET(0xB821AA0)
#define CLASS_1_94D74EC8169ED475_METHOD_1_DFF98536D8B4074F_OFFSET UNITYSDK_OFFSET(0xB821990)
#define CLASS_1_94D74EC8169ED475_METHOD_1_EF0BDF2F835A0321_OFFSET UNITYSDK_OFFSET(0xB821850)
#define CLASS_1_94D74EC8169ED475__CTOR_OFFSET UNITYSDK_OFFSET(0xB821110)

inline static constexpr unsigned int Class_1_94D74EC8169ED475_TypeDefinitionIndex = 60697;

class Class_1_94D74EC8169ED475 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::RPG::Client::EnumEnterPerformanceResult>* IDCCPLMFOBM; // 0x10
	::RPG::Client::PerformanceManager* IEGBIPMGBPA; // 0x18

	::System::Void _ctor(::RPG::Client::PerformanceManager* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PerformanceManager*))((::PBYTE)hIl2Cpp + CLASS_1_94D74EC8169ED475__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_94D74EC8169ED475_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_770D42DDA6A5C614(::RPG::Client::EnumEnterPerformanceResult a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::EnumEnterPerformanceResult, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_94D74EC8169ED475_METHOD_1_770D42DDA6A5C614_OFFSET))(this, a1, a2);
	}

	::RPG::Client::EnumEnterPerformanceResult Method_1_1D21341EB0F67606(::RPG::GameCore::ELevelPerformanceType a1, ::System::UInt32 a2)
	{
		return ((::RPG::Client::EnumEnterPerformanceResult(*)(::PVOID, ::RPG::GameCore::ELevelPerformanceType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_94D74EC8169ED475_METHOD_1_1D21341EB0F67606_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DF55371EF915C84F(::RPG::Client::EnumEnterPerformanceResult a1, ::RPG::GameCore::ELevelPerformanceType a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::EnumEnterPerformanceResult, ::RPG::GameCore::ELevelPerformanceType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_94D74EC8169ED475_METHOD_1_DF55371EF915C84F_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_94D74EC8169ED475_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_1_1C298FA6BB9350FA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_94D74EC8169ED475_METHOD_1_1C298FA6BB9350FA_OFFSET))(this);
	}

	::System::Boolean Method_1_EF0BDF2F835A0321(::RPG::GameCore::ELevelPerformanceType a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ELevelPerformanceType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_94D74EC8169ED475_METHOD_1_EF0BDF2F835A0321_OFFSET))(this, a1, a2);
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
