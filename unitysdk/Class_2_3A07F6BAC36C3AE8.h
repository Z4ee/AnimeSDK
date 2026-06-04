#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6A1DFE1822B872F8.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"
#include "unitysdk/Struct_2_9E453D160BF69F98.h"

namespace System { class String; }

#define CLASS_2_3A07F6BAC36C3AE8_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x143467A0)
#define CLASS_2_3A07F6BAC36C3AE8_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x14346C30)
#define CLASS_2_3A07F6BAC36C3AE8_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x14346BC0)
#define CLASS_2_3A07F6BAC36C3AE8_METHOD_2_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x14346A50)
#define CLASS_2_3A07F6BAC36C3AE8_METHOD_2_BB2928BEC244DEB7_OFFSET UNITYSDK_OFFSET(0x14346BB0)
#define CLASS_2_3A07F6BAC36C3AE8_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14346A10)
#define CLASS_2_3A07F6BAC36C3AE8_METHOD_2_DAEB67F34AF80609_OFFSET UNITYSDK_OFFSET(0x143467B0)
#define CLASS_2_3A07F6BAC36C3AE8__CTOR_OFFSET UNITYSDK_OFFSET(0x14346BA0)

inline static constexpr unsigned int Class_2_3A07F6BAC36C3AE8_TypeDefinitionIndex = 52413;

class Class_2_3A07F6BAC36C3AE8 : public ::Class_1_6A1DFE1822B872F8
{
public:
	::System::String* Field_2_0; // 0x10
	::Struct_2_9E453D160BF69F98 Field_2_1; // 0x18
	::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x30
	::RPG::GameCore::FixPoint Field_2_3; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A07F6BAC36C3AE8__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::LogSamplerType get_Type()
	{
		return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A07F6BAC36C3AE8_GET_TYPE_OFFSET))(this);
	}

	::System::Void Method_2_DAEB67F34AF80609()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A07F6BAC36C3AE8_METHOD_2_DAEB67F34AF80609_OFFSET))(this);
	}

	::System::Void Method_2_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A07F6BAC36C3AE8_METHOD_2_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A07F6BAC36C3AE8_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_BB2928BEC244DEB7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A07F6BAC36C3AE8_METHOD_2_BB2928BEC244DEB7_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A07F6BAC36C3AE8_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A07F6BAC36C3AE8_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}
};
