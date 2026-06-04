#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChallengeGroupType.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client { template <typename T1, typename T2> class PrefDictionary_2; }

#define STRUCT_2_7C798A110E7A1EEF_METHOD_2_08C578DC970E5EED_OFFSET UNITYSDK_OFFSET(0x89AE0)
#define STRUCT_2_7C798A110E7A1EEF_METHOD_2_44E5266BA32A4FF6_OFFSET UNITYSDK_OFFSET(0x89A40)
#define STRUCT_2_7C798A110E7A1EEF_METHOD_2_8F7AD00CE70D0A7B_OFFSET UNITYSDK_OFFSET(0x89980)
#define STRUCT_2_7C798A110E7A1EEF_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x89A50)
#define STRUCT_2_7C798A110E7A1EEF__CTOR_OFFSET UNITYSDK_OFFSET(0x89970)

inline static constexpr unsigned int Struct_2_7C798A110E7A1EEF_TypeDefinitionIndex = 59068;

struct alignas(8) Struct_2_7C798A110E7A1EEF
{
	::RPG::Client::PrefDictionary_2<::System::UInt32, ::System::UInt32>* Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x18

	::System::Void _ctor(::RPG::GameCore::ChallengeGroupType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + STRUCT_2_7C798A110E7A1EEF__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_8F7AD00CE70D0A7B(::System::UInt32 a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_7C798A110E7A1EEF_METHOD_2_8F7AD00CE70D0A7B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_44E5266BA32A4FF6(::System::UInt32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_7C798A110E7A1EEF_METHOD_2_44E5266BA32A4FF6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_7C798A110E7A1EEF_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_08C578DC970E5EED(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_7C798A110E7A1EEF_METHOD_2_08C578DC970E5EED_OFFSET))(this, a1);
	}
};
