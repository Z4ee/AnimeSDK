#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREDAMAGECUSTOMNAME_METHOD_4_0115E19352855FC7_OFFSET UNITYSDK_OFFSET(0x1D4A6B00)
#define RPG_GAMECORE_BYCOMPAREDAMAGECUSTOMNAME_METHOD_4_85AD01CC3657E7E6_OFFSET UNITYSDK_OFFSET(0x1D4A6AC0)
#define RPG_GAMECORE_BYCOMPAREDAMAGECUSTOMNAME_METHOD_4_AE62534B37EFB25D_OFFSET UNITYSDK_OFFSET(0x1D4A6C60)
#define RPG_GAMECORE_BYCOMPAREDAMAGECUSTOMNAME_METHOD_4_FE0BBE57772E902A_OFFSET UNITYSDK_OFFSET(0x1D4A6C90)
#define RPG_GAMECORE_BYCOMPAREDAMAGECUSTOMNAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4A6AF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareDamageCustomName_TypeDefinitionIndex = 23571;

	class ByCompareDamageCustomName : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicString* CustomName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREDAMAGECUSTOMNAME__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_85AD01CC3657E7E6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareDamageCustomName*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareDamageCustomName*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREDAMAGECUSTOMNAME_METHOD_4_85AD01CC3657E7E6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0115E19352855FC7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareDamageCustomName* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareDamageCustomName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREDAMAGECUSTOMNAME_METHOD_4_0115E19352855FC7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_AE62534B37EFB25D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareDamageCustomName*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareDamageCustomName*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREDAMAGECUSTOMNAME_METHOD_4_AE62534B37EFB25D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FE0BBE57772E902A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareDamageCustomName* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareDamageCustomName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREDAMAGECUSTOMNAME_METHOD_4_FE0BBE57772E902A_OFFSET))(a1, a2);
		}
	};
}
