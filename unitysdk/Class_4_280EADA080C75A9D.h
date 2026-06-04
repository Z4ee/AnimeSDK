#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define CLASS_4_280EADA080C75A9D_METHOD_4_162058F8831C7217_OFFSET UNITYSDK_OFFSET(0x19D73410)
#define CLASS_4_280EADA080C75A9D_METHOD_4_BEF80FB83E1A1534_OFFSET UNITYSDK_OFFSET(0x19D737D0)
#define CLASS_4_280EADA080C75A9D_METHOD_4_C5032BE74465413D_OFFSET UNITYSDK_OFFSET(0x19D73850)
#define CLASS_4_280EADA080C75A9D_METHOD_4_E0B9D6256CA0393B_OFFSET UNITYSDK_OFFSET(0x19D734E0)
#define CLASS_4_280EADA080C75A9D__CTOR_OFFSET UNITYSDK_OFFSET(0x19D73490)

inline static constexpr unsigned int Class_4_280EADA080C75A9D_TypeDefinitionIndex = 22987;

class Class_4_280EADA080C75A9D : public ::RPG::GameCore::PredicateConfig
{
public:
	::System::UInt32 Field_4_0; // 0x20
	::System::Int32 Field_4_1; // 0x24
	::System::Int32 Field_4_2; // 0x28
	::System::Int32 Field_4_3; // 0x2C
	::System::Int32 Field_4_4; // 0x30

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

	static ::System::Void Method_4_BEF80FB83E1A1534(::SimpleJSON::JSONNode* a1, ::Class_4_280EADA080C75A9D*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_280EADA080C75A9D*&))((::PBYTE)hIl2Cpp + CLASS_4_280EADA080C75A9D_METHOD_4_BEF80FB83E1A1534_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_C5032BE74465413D(::SimpleJSON::JSONNode* a1, ::Class_4_280EADA080C75A9D* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_280EADA080C75A9D*))((::PBYTE)hIl2Cpp + CLASS_4_280EADA080C75A9D_METHOD_4_C5032BE74465413D_OFFSET))(a1, a2);
	}
};
