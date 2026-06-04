#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/RtModifierPropertyType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define CLASS_4_890BC79DA352586D_METHOD_4_2D82175F1B3B2673_OFFSET UNITYSDK_OFFSET(0x1928D390)
#define CLASS_4_890BC79DA352586D_METHOD_4_690EB21B07B220FD_OFFSET UNITYSDK_OFFSET(0x1928D2C0)
#define CLASS_4_890BC79DA352586D_METHOD_4_BEF80FB83E1A1534_OFFSET UNITYSDK_OFFSET(0x1928D5C0)
#define CLASS_4_890BC79DA352586D_METHOD_4_C5032BE74465413D_OFFSET UNITYSDK_OFFSET(0x1928D640)
#define CLASS_4_890BC79DA352586D__CTOR_OFFSET UNITYSDK_OFFSET(0x1928D340)

inline static constexpr unsigned int Class_4_890BC79DA352586D_TypeDefinitionIndex = 22883;

class Class_4_890BC79DA352586D : public ::RPG::GameCore::PredicateConfig
{
public:
	::RPG::GameCore::DynamicFloat* Field_4_0; // 0x20
	::RPG::GameCore::RtModifierPropertyType Field_4_1; // 0x28
	::RPG::GameCore::CompareType Field_4_2; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_890BC79DA352586D__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_690EB21B07B220FD(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_890BC79DA352586D*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_890BC79DA352586D*&))((::PBYTE)hIl2Cpp + CLASS_4_890BC79DA352586D_METHOD_4_690EB21B07B220FD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_2D82175F1B3B2673(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_890BC79DA352586D* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_890BC79DA352586D*))((::PBYTE)hIl2Cpp + CLASS_4_890BC79DA352586D_METHOD_4_2D82175F1B3B2673_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_BEF80FB83E1A1534(::SimpleJSON::JSONNode* a1, ::Class_4_890BC79DA352586D*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_890BC79DA352586D*&))((::PBYTE)hIl2Cpp + CLASS_4_890BC79DA352586D_METHOD_4_BEF80FB83E1A1534_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_C5032BE74465413D(::SimpleJSON::JSONNode* a1, ::Class_4_890BC79DA352586D* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_890BC79DA352586D*))((::PBYTE)hIl2Cpp + CLASS_4_890BC79DA352586D_METHOD_4_C5032BE74465413D_OFFSET))(a1, a2);
	}
};
