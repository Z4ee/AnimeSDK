#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinCardPileType.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class String; }

#define CLASS_3_BE77A84F97C76075_METHOD_3_292B86D9FDC9A4F5_OFFSET UNITYSDK_OFFSET(0x1D8393E0)
#define CLASS_3_BE77A84F97C76075_METHOD_3_E024E0080A08A9C9_OFFSET UNITYSDK_OFFSET(0x1D839430)
#define CLASS_3_BE77A84F97C76075__CTOR_OFFSET UNITYSDK_OFFSET(0x1D839420)

inline static constexpr unsigned int Class_3_BE77A84F97C76075_TypeDefinitionIndex = 19668;

class Class_3_BE77A84F97C76075 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* PHFMCACHFIJ; // 0x18
	::RPG::GameCore::DynamicFloat* AJHHCOHFIFA; // 0x20
	::System::String* BBBAMBGCGPL; // 0x28
	::RPG::GameCore::PropertyModifyFunction DNKFJMBHINL; // 0x30
	::RPG::GameCore::FateRinCardPileType IANCHJFBKFC; // 0x34
	::System::Boolean JHLNDMMBMJP; // 0x36
	::System::Boolean DKFAKDGFDGD; // 0x37

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BE77A84F97C76075__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_292B86D9FDC9A4F5(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_BE77A84F97C76075*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_BE77A84F97C76075*&))((::PBYTE)hIl2Cpp + CLASS_3_BE77A84F97C76075_METHOD_3_292B86D9FDC9A4F5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_E024E0080A08A9C9(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_BE77A84F97C76075* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_BE77A84F97C76075*))((::PBYTE)hIl2Cpp + CLASS_3_BE77A84F97C76075_METHOD_3_E024E0080A08A9C9_OFFSET))(a1, a2);
	}
};
