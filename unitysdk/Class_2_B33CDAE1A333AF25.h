#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6A1DFE1822B872F8.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

namespace System { class String; }

#define CLASS_2_B33CDAE1A333AF25_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1000C410)
#define CLASS_2_B33CDAE1A333AF25_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x1000C7C0)
#define CLASS_2_B33CDAE1A333AF25_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x1000CAC0)
#define CLASS_2_B33CDAE1A333AF25_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x1000CA40)
#define CLASS_2_B33CDAE1A333AF25_METHOD_2_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x1000C420)
#define CLASS_2_B33CDAE1A333AF25_METHOD_2_BB2928BEC244DEB7_OFFSET UNITYSDK_OFFSET(0x1000CA30)
#define CLASS_2_B33CDAE1A333AF25_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1000C780)
#define CLASS_2_B33CDAE1A333AF25__CTOR_OFFSET UNITYSDK_OFFSET(0x1000CA20)

inline static constexpr unsigned int Class_2_B33CDAE1A333AF25_TypeDefinitionIndex = 51720;

class Class_2_B33CDAE1A333AF25 : public ::Class_1_6A1DFE1822B872F8
{
public:
	::System::String* Field_2_4; // 0x10
	::System::String* Field_2_0; // 0x18
	::System::String* Field_2_5; // 0x20
	::RPG::GameCore::FixPoint Field_2_3; // 0x28
	::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x30
	::RPG::GameCore::FixPoint Field_2_1; // 0x38
	::RPG::GameCore::FixPoint Field_2_2; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B33CDAE1A333AF25__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::LogSamplerType get_Type()
	{
		return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B33CDAE1A333AF25_GET_TYPE_OFFSET))(this);
	}

	::System::Void Method_2_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B33CDAE1A333AF25_METHOD_2_6B72D4EE8C6E907F_OFFSET))(this);
	}

	::System::Void Method_2_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B33CDAE1A333AF25_METHOD_2_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B33CDAE1A333AF25_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_BB2928BEC244DEB7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B33CDAE1A333AF25_METHOD_2_BB2928BEC244DEB7_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B33CDAE1A333AF25_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B33CDAE1A333AF25_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}
};
