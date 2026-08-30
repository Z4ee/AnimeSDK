#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnumStatusType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MODIFIERSTATUSTYPELIST_METHOD_2_E8CD149276B99B02_OFFSET UNITYSDK_OFFSET(0x1D2AD740)
#define RPG_GAMECORE_MODIFIERSTATUSTYPELIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2AD800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifierStatusTypeList_TypeDefinitionIndex = 16913;

	class ModifierStatusTypeList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::EnumStatusType>* StatusTypes; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERSTATUSTYPELIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E8CD149276B99B02(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifierStatusTypeList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifierStatusTypeList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERSTATUSTYPELIST_METHOD_2_E8CD149276B99B02_OFFSET))(a1, a2);
		}
	};
}
