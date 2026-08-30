#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0FEB237AF044DA54_1.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

namespace System { class String; }

#define CLASS_2_CAB8131E22AB8A45_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xCFCE940)
#define CLASS_2_CAB8131E22AB8A45_METHOD_2_601EF3E7226D7DC2_OFFSET UNITYSDK_OFFSET(0xCFCE950)
#define CLASS_2_CAB8131E22AB8A45_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xCFCEC70)
#define CLASS_2_CAB8131E22AB8A45_METHOD_2_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0xCFCECB0)
#define CLASS_2_CAB8131E22AB8A45__CTOR_OFFSET UNITYSDK_OFFSET(0xCFCEEA0)

inline static constexpr unsigned int Class_2_CAB8131E22AB8A45_TypeDefinitionIndex = 56299;

class Class_2_CAB8131E22AB8A45 : public ::Class_1_0FEB237AF044DA54_1
{
public:
	::System::String* MCLLALGABAB; // 0x10
	::RPG::GameCore::FixPoint KHBBNDBJAFK; // 0x18
	::RPG::GameCore::FixPoint DHPDILNLIPC; // 0x20
	::System::Int32 ACHILGIPGKL; // 0x28
	::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x2C

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
