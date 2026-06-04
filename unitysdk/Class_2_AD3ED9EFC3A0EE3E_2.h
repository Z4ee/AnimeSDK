#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6A1DFE1822B872F8.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

namespace System { class String; }

#define CLASS_2_AD3ED9EFC3A0EE3E_2_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xA46C6B0)
#define CLASS_2_AD3ED9EFC3A0EE3E_2_METHOD_2_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0xA46CA30)
#define CLASS_2_AD3ED9EFC3A0EE3E_2_METHOD_2_2A06FF69BDFDBD4F_OFFSET UNITYSDK_OFFSET(0xA46C970)
#define CLASS_2_AD3ED9EFC3A0EE3E_2_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0xA46CBE0)
#define CLASS_2_AD3ED9EFC3A0EE3E_2_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xA46CB70)
#define CLASS_2_AD3ED9EFC3A0EE3E_2_METHOD_2_BB2928BEC244DEB7_OFFSET UNITYSDK_OFFSET(0xA46CB60)
#define CLASS_2_AD3ED9EFC3A0EE3E_2_METHOD_2_C706B1EC6D2E1C64_OFFSET UNITYSDK_OFFSET(0xA46C6C0)
#define CLASS_2_AD3ED9EFC3A0EE3E_2__CTOR_OFFSET UNITYSDK_OFFSET(0xA46CB50)

inline static constexpr unsigned int Class_2_AD3ED9EFC3A0EE3E_2_TypeDefinitionIndex = 52386;

class Class_2_AD3ED9EFC3A0EE3E_2 : public ::Class_1_6A1DFE1822B872F8
{
public:
	::System::String* Field_2_0; // 0x10
	::System::String* Field_2_1; // 0x18
	::System::String* Field_2_2; // 0x20
	::System::String* Field_2_3; // 0x28
	::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD3ED9EFC3A0EE3E_2__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::LogSamplerType get_Type()
	{
		return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD3ED9EFC3A0EE3E_2_GET_TYPE_OFFSET))(this);
	}

	::System::Void Method_2_C706B1EC6D2E1C64()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD3ED9EFC3A0EE3E_2_METHOD_2_C706B1EC6D2E1C64_OFFSET))(this);
	}

	::System::Void Method_2_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD3ED9EFC3A0EE3E_2_METHOD_2_0865E94460F11643_OFFSET))(this);
	}

	::System::Void Method_2_2A06FF69BDFDBD4F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD3ED9EFC3A0EE3E_2_METHOD_2_2A06FF69BDFDBD4F_OFFSET))(this);
	}

	::System::Void Method_2_BB2928BEC244DEB7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD3ED9EFC3A0EE3E_2_METHOD_2_BB2928BEC244DEB7_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD3ED9EFC3A0EE3E_2_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD3ED9EFC3A0EE3E_2_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}
};
