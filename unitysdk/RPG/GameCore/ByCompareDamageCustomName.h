#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_BYCOMPAREDAMAGECUSTOMNAME_METHOD_4_0080AFBAC3676109_OFFSET UNITYSDK_OFFSET(0x1872AC00)
#define RPG_GAMECORE_BYCOMPAREDAMAGECUSTOMNAME_METHOD_4_0115E19352855FC7_OFFSET UNITYSDK_OFFSET(0x1872ACD0)
#define RPG_GAMECORE_BYCOMPAREDAMAGECUSTOMNAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1872AC80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareDamageCustomName_TypeDefinitionIndex = 22546;

	class ByCompareDamageCustomName : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicString* CustomName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREDAMAGECUSTOMNAME__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_0080AFBAC3676109(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareDamageCustomName*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareDamageCustomName*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREDAMAGECUSTOMNAME_METHOD_4_0080AFBAC3676109_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0115E19352855FC7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareDamageCustomName* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareDamageCustomName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREDAMAGECUSTOMNAME_METHOD_4_0115E19352855FC7_OFFSET))(a1, a2);
		}
	};
}
