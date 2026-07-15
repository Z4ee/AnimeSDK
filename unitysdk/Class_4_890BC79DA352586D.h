#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/RtModifierPropertyType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define CLASS_4_890BC79DA352586D_METHOD_4_2D82175F1B3B2673_OFFSET UNITYSDK_OFFSET(0x1B5624F0)
#define CLASS_4_890BC79DA352586D_METHOD_4_657D584BE35E89A2_OFFSET UNITYSDK_OFFSET(0x1B562750)
#define CLASS_4_890BC79DA352586D_METHOD_4_6D3BD31FF07A4A8E_OFFSET UNITYSDK_OFFSET(0x1B5624B0)
#define CLASS_4_890BC79DA352586D_METHOD_4_998FE0E79A92DBE5_OFFSET UNITYSDK_OFFSET(0x1B562720)
#define CLASS_4_890BC79DA352586D__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5624E0)

inline static constexpr unsigned int Class_4_890BC79DA352586D_TypeDefinitionIndex = 23350;

class Class_4_890BC79DA352586D : public ::RPG::GameCore::PredicateConfig
{
public:
	::RPG::GameCore::DynamicFloat* Field_4_0; // 0x20
	::RPG::GameCore::CompareType Field_4_1; // 0x28
	::RPG::GameCore::RtModifierPropertyType Field_4_2; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_890BC79DA352586D__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_6D3BD31FF07A4A8E(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_890BC79DA352586D*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_890BC79DA352586D*&))((::PBYTE)hIl2Cpp + CLASS_4_890BC79DA352586D_METHOD_4_6D3BD31FF07A4A8E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_2D82175F1B3B2673(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_890BC79DA352586D* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_890BC79DA352586D*))((::PBYTE)hIl2Cpp + CLASS_4_890BC79DA352586D_METHOD_4_2D82175F1B3B2673_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_998FE0E79A92DBE5(::SimpleJSON::JSONNode* a1, ::Class_4_890BC79DA352586D*& a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_890BC79DA352586D*&))((::PBYTE)hIl2Cpp + CLASS_4_890BC79DA352586D_METHOD_4_998FE0E79A92DBE5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_657D584BE35E89A2(::SimpleJSON::JSONNode* a1, ::Class_4_890BC79DA352586D* a2)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::Class_4_890BC79DA352586D*))((::PBYTE)hIl2Cpp + CLASS_4_890BC79DA352586D_METHOD_4_657D584BE35E89A2_OFFSET))(a1, a2);
	}
};
