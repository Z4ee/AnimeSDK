#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6A1DFE1822B872F8.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

namespace System { class String; }

#define CLASS_2_D9F03AE9D7C68821_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x13551010)
#define CLASS_2_D9F03AE9D7C68821_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x13551330)
#define CLASS_2_D9F03AE9D7C68821_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x13551590)
#define CLASS_2_D9F03AE9D7C68821_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x13551520)
#define CLASS_2_D9F03AE9D7C68821_METHOD_2_601EF3E7226D7DC2_OFFSET UNITYSDK_OFFSET(0x13551020)
#define CLASS_2_D9F03AE9D7C68821_METHOD_2_BB2928BEC244DEB7_OFFSET UNITYSDK_OFFSET(0x13551510)
#define CLASS_2_D9F03AE9D7C68821_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x135512F0)
#define CLASS_2_D9F03AE9D7C68821__CTOR_OFFSET UNITYSDK_OFFSET(0x13551500)

inline static constexpr unsigned int Class_2_D9F03AE9D7C68821_TypeDefinitionIndex = 52387;

class Class_2_D9F03AE9D7C68821 : public ::Class_1_6A1DFE1822B872F8
{
public:
	::System::String* Field_2_0; // 0x10
	::System::String* Field_2_1; // 0x18
	::System::Int32 Field_2_2; // 0x20
	::System::Int32 Field_2_3; // 0x24
	::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x28
	::System::UInt32 Field_2_5; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9F03AE9D7C68821__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::LogSamplerType get_Type()
	{
		return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9F03AE9D7C68821_GET_TYPE_OFFSET))(this);
	}

	::System::Void Method_2_601EF3E7226D7DC2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9F03AE9D7C68821_METHOD_2_601EF3E7226D7DC2_OFFSET))(this);
	}

	::System::Void Method_2_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9F03AE9D7C68821_METHOD_2_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9F03AE9D7C68821_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_BB2928BEC244DEB7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9F03AE9D7C68821_METHOD_2_BB2928BEC244DEB7_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9F03AE9D7C68821_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9F03AE9D7C68821_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}
};
