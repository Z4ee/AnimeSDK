#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_BYGAMEENTITYNOTCREATED_METHOD_4_B5108C4456E817FB_OFFSET UNITYSDK_OFFSET(0x17022240)
#define RPG_GAMECORE_BYGAMEENTITYNOTCREATED_METHOD_4_B6217744C594489D_OFFSET UNITYSDK_OFFSET(0x17022310)
#define RPG_GAMECORE_BYGAMEENTITYNOTCREATED__CTOR_OFFSET UNITYSDK_OFFSET(0x170222C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByGameEntityNotCreated_TypeDefinitionIndex = 18595;

	class ByGameEntityNotCreated : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::String* UniqueName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGAMEENTITYNOTCREATED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B5108C4456E817FB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByGameEntityNotCreated*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByGameEntityNotCreated*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGAMEENTITYNOTCREATED_METHOD_4_B5108C4456E817FB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B6217744C594489D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByGameEntityNotCreated* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByGameEntityNotCreated*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGAMEENTITYNOTCREATED_METHOD_4_B6217744C594489D_OFFSET))(a1, a2);
		}
	};
}
