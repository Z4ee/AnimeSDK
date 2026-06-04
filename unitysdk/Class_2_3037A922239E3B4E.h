#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6A1DFE1822B872F8.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

namespace System { class String; }

#define CLASS_2_3037A922239E3B4E_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1427B430)
#define CLASS_2_3037A922239E3B4E_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x1427B750)
#define CLASS_2_3037A922239E3B4E_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x1427B9B0)
#define CLASS_2_3037A922239E3B4E_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x1427B940)
#define CLASS_2_3037A922239E3B4E_METHOD_2_BB2928BEC244DEB7_OFFSET UNITYSDK_OFFSET(0x1427B930)
#define CLASS_2_3037A922239E3B4E_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1427B710)
#define CLASS_2_3037A922239E3B4E_METHOD_2_E876C8B6D3B840A6_OFFSET UNITYSDK_OFFSET(0x1427B440)
#define CLASS_2_3037A922239E3B4E__CTOR_OFFSET UNITYSDK_OFFSET(0x1427B920)

inline static constexpr unsigned int Class_2_3037A922239E3B4E_TypeDefinitionIndex = 52383;

class Class_2_3037A922239E3B4E : public ::Class_1_6A1DFE1822B872F8
{
public:
	::System::String* Field_2_0; // 0x10
	::System::String* Field_2_1; // 0x18
	::System::String* Field_2_2; // 0x20
	::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x28
	::System::Int32 Field_2_4; // 0x2C
	::System::Byte Field_2_5; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3037A922239E3B4E__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::LogSamplerType get_Type()
	{
		return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3037A922239E3B4E_GET_TYPE_OFFSET))(this);
	}

	::System::Void Method_2_E876C8B6D3B840A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3037A922239E3B4E_METHOD_2_E876C8B6D3B840A6_OFFSET))(this);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3037A922239E3B4E_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3037A922239E3B4E_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_BB2928BEC244DEB7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3037A922239E3B4E_METHOD_2_BB2928BEC244DEB7_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3037A922239E3B4E_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3037A922239E3B4E_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}
};
