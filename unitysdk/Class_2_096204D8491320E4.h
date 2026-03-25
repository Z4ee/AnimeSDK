#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6A1DFE1822B872F8.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

namespace System { class String; }

#define CLASS_2_096204D8491320E4_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xD7C4560)
#define CLASS_2_096204D8491320E4_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xD7C48D0)
#define CLASS_2_096204D8491320E4_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0xD7C4B90)
#define CLASS_2_096204D8491320E4_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xD7C4B10)
#define CLASS_2_096204D8491320E4_METHOD_2_601EF3E7226D7DC2_OFFSET UNITYSDK_OFFSET(0xD7C4570)
#define CLASS_2_096204D8491320E4_METHOD_2_BB2928BEC244DEB7_OFFSET UNITYSDK_OFFSET(0xD7C4B00)
#define CLASS_2_096204D8491320E4_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xD7C4890)
#define CLASS_2_096204D8491320E4__CTOR_OFFSET UNITYSDK_OFFSET(0xD7C4AF0)

inline static constexpr unsigned int Class_2_096204D8491320E4_TypeDefinitionIndex = 44959;

class Class_2_096204D8491320E4 : public ::Class_1_6A1DFE1822B872F8
{
public:
	::System::String* Field_2_1; // 0x10
	::RPG::GameCore::FixPoint Field_2_3; // 0x18
	::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x20
	::System::Int32 Field_2_0; // 0x24
	::RPG::GameCore::FixPoint Field_2_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_096204D8491320E4__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::LogSamplerType get_Type()
	{
		return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_096204D8491320E4_GET_TYPE_OFFSET))(this);
	}

	::System::Void Method_2_601EF3E7226D7DC2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_096204D8491320E4_METHOD_2_601EF3E7226D7DC2_OFFSET))(this);
	}

	::System::Void Method_2_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_096204D8491320E4_METHOD_2_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_096204D8491320E4_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_BB2928BEC244DEB7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_096204D8491320E4_METHOD_2_BB2928BEC244DEB7_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_096204D8491320E4_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_096204D8491320E4_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}
};
