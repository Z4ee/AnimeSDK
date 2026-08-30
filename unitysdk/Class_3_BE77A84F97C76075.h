#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinCardPileType.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class String; }

#define CLASS_3_BE77A84F97C76075_METHOD_3_292B86D9FDC9A4F5_OFFSET UNITYSDK_OFFSET(0x1C75B600)
#define CLASS_3_BE77A84F97C76075_METHOD_3_E024E0080A08A9C9_OFFSET UNITYSDK_OFFSET(0x1C75B650)
#define CLASS_3_BE77A84F97C76075__CTOR_OFFSET UNITYSDK_OFFSET(0x1C75B640)

inline static constexpr unsigned int Class_3_BE77A84F97C76075_TypeDefinitionIndex = 19668;

class Class_3_BE77A84F97C76075 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* BBBAMBGCGPL; // 0x18
	::RPG::GameCore::DynamicFloat* AJHHCOHFIFA; // 0x20
	::RPG::GameCore::DynamicFloat* PHFMCACHFIJ; // 0x28
	::System::Boolean DKFAKDGFDGD; // 0x30
	::System::Boolean JHLNDMMBMJP; // 0x31
	::RPG::GameCore::FateRinCardPileType IANCHJFBKFC; // 0x32
	::RPG::GameCore::PropertyModifyFunction DNKFJMBHINL; // 0x34

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
