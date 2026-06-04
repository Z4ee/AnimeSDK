#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_ENTERMAP_METHOD_3_2B7488304C0C859C_OFFSET UNITYSDK_OFFSET(0x196EA270)
#define RPG_GAMECORE_ENTERMAP_METHOD_3_99481595515AAD78_OFFSET UNITYSDK_OFFSET(0x196EA2F0)
#define RPG_GAMECORE_ENTERMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x196EA2C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnterMap_TypeDefinitionIndex = 20353;

	class EnterMap : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 EntranceID; // 0x18
		::System::UInt32 GroupID; // 0x1C
		::System::UInt32 AnchorID; // 0x20
		::RPG::GameCore::DynamicFloat* DynamicEntranceID; // 0x28
		::RPG::GameCore::DynamicFloat* DynamicGroupID; // 0x30
		::RPG::GameCore::DynamicFloat* DynamicAnchorID; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTERMAP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2B7488304C0C859C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnterMap*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnterMap*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTERMAP_METHOD_3_2B7488304C0C859C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_99481595515AAD78(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnterMap* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnterMap*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTERMAP_METHOD_3_99481595515AAD78_OFFSET))(a1, a2);
		}
	};
}
