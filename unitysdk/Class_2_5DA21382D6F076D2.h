#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6A1DFE1822B872F8.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

namespace System { class String; }

#define CLASS_2_5DA21382D6F076D2_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1350B670)
#define CLASS_2_5DA21382D6F076D2_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x1350B980)
#define CLASS_2_5DA21382D6F076D2_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x1350BBD0)
#define CLASS_2_5DA21382D6F076D2_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x1350BB60)
#define CLASS_2_5DA21382D6F076D2_METHOD_2_601EF3E7226D7DC2_OFFSET UNITYSDK_OFFSET(0x1350B680)
#define CLASS_2_5DA21382D6F076D2_METHOD_2_BB2928BEC244DEB7_OFFSET UNITYSDK_OFFSET(0x1350BB50)
#define CLASS_2_5DA21382D6F076D2_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1350B940)
#define CLASS_2_5DA21382D6F076D2__CTOR_OFFSET UNITYSDK_OFFSET(0x1350BB40)

inline static constexpr unsigned int Class_2_5DA21382D6F076D2_TypeDefinitionIndex = 52419;

class Class_2_5DA21382D6F076D2 : public ::Class_1_6A1DFE1822B872F8
{
public:
	::System::String* Field_2_0; // 0x10
	::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x18
	::RPG::GameCore::FixPoint Field_2_2; // 0x20
	::RPG::GameCore::FixPoint Field_2_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5DA21382D6F076D2__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::LogSamplerType get_Type()
	{
		return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5DA21382D6F076D2_GET_TYPE_OFFSET))(this);
	}

	::System::Void Method_2_601EF3E7226D7DC2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5DA21382D6F076D2_METHOD_2_601EF3E7226D7DC2_OFFSET))(this);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5DA21382D6F076D2_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5DA21382D6F076D2_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_BB2928BEC244DEB7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5DA21382D6F076D2_METHOD_2_BB2928BEC244DEB7_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5DA21382D6F076D2_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5DA21382D6F076D2_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}
};
