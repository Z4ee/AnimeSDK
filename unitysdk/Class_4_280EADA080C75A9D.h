#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_4_280EADA080C75A9D_METHOD_4_162058F8831C7217_OFFSET UNITYSDK_OFFSET(0x184637C0)
#define CLASS_4_280EADA080C75A9D_METHOD_4_E0B9D6256CA0393B_OFFSET UNITYSDK_OFFSET(0x18463890)
#define CLASS_4_280EADA080C75A9D__CTOR_OFFSET UNITYSDK_OFFSET(0x18463840)

inline static constexpr unsigned int Class_4_280EADA080C75A9D_TypeDefinitionIndex = 23322;

class Class_4_280EADA080C75A9D : public ::RPG::GameCore::PredicateConfig
{
public:
	::System::Int32 Field_4_3; // 0x20
	::System::Int32 Field_4_0; // 0x24
	::System::UInt32 Field_4_2; // 0x28
	::System::Int32 Field_4_4; // 0x2C
	::System::Int32 Field_4_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_280EADA080C75A9D__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_162058F8831C7217(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_280EADA080C75A9D*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_280EADA080C75A9D*&))((::PBYTE)hIl2Cpp + CLASS_4_280EADA080C75A9D_METHOD_4_162058F8831C7217_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_E0B9D6256CA0393B(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_280EADA080C75A9D* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_280EADA080C75A9D*))((::PBYTE)hIl2Cpp + CLASS_4_280EADA080C75A9D_METHOD_4_E0B9D6256CA0393B_OFFSET))(a1, a2);
	}
};
