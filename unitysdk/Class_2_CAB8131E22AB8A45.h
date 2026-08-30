#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0FEB237AF044DA54_1.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

namespace System { class String; }

#define CLASS_2_CAB8131E22AB8A45_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x165B0490)
#define CLASS_2_CAB8131E22AB8A45_METHOD_2_601EF3E7226D7DC2_OFFSET UNITYSDK_OFFSET(0x165B04A0)
#define CLASS_2_CAB8131E22AB8A45_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x165B07C0)
#define CLASS_2_CAB8131E22AB8A45_METHOD_2_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0x165B0800)
#define CLASS_2_CAB8131E22AB8A45__CTOR_OFFSET UNITYSDK_OFFSET(0x165B09F0)

inline static constexpr unsigned int Class_2_CAB8131E22AB8A45_TypeDefinitionIndex = 56299;

class Class_2_CAB8131E22AB8A45 : public ::Class_1_0FEB237AF044DA54_1
{
public:
	::System::String* MCLLALGABAB; // 0x10
	::RPG::GameCore::FixPoint DHPDILNLIPC; // 0x18
	::RPG::GameCore::FixPoint KHBBNDBJAFK; // 0x20
	::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x28
	::System::Int32 ACHILGIPGKL; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CAB8131E22AB8A45__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::LogSamplerType get_Type()
	{
		return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CAB8131E22AB8A45_GET_TYPE_OFFSET))(this);
	}

	::System::Void Method_2_601EF3E7226D7DC2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CAB8131E22AB8A45_METHOD_2_601EF3E7226D7DC2_OFFSET))(this);
	}

	::System::Void Method_2_E41B6A823556FEEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CAB8131E22AB8A45_METHOD_2_E41B6A823556FEEA_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CAB8131E22AB8A45_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
