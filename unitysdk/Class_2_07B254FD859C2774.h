#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0FEB237AF044DA54_1.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

#define CLASS_2_07B254FD859C2774_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x17879D50)
#define CLASS_2_07B254FD859C2774_METHOD_2_601EF3E7226D7DC2_OFFSET UNITYSDK_OFFSET(0x17879D60)
#define CLASS_2_07B254FD859C2774_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1787A060)
#define CLASS_2_07B254FD859C2774_METHOD_2_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0x1787A0A0)
#define CLASS_2_07B254FD859C2774__CTOR_OFFSET UNITYSDK_OFFSET(0x1787A280)

inline static constexpr unsigned int Class_2_07B254FD859C2774_TypeDefinitionIndex = 56346;

class Class_2_07B254FD859C2774 : public ::Class_1_0FEB237AF044DA54_1
{
public:
	::System::Int32 ACHILGIPGKL; // 0x10
	::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x14
	::RPG::GameCore::FixPoint KHBBNDBJAFK; // 0x18
	::RPG::GameCore::FixPoint DHPDILNLIPC; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_07B254FD859C2774__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::LogSamplerType get_Type()
	{
		return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_07B254FD859C2774_GET_TYPE_OFFSET))(this);
	}

	::System::Void Method_2_601EF3E7226D7DC2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_07B254FD859C2774_METHOD_2_601EF3E7226D7DC2_OFFSET))(this);
	}

	::System::Void Method_2_E41B6A823556FEEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_07B254FD859C2774_METHOD_2_E41B6A823556FEEA_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_07B254FD859C2774_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
