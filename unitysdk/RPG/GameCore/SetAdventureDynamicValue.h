#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETADVENTUREDYNAMICVALUE_METHOD_3_47FFA5EA5A3446ED_OFFSET UNITYSDK_OFFSET(0x18E08A40)
#define RPG_GAMECORE_SETADVENTUREDYNAMICVALUE_METHOD_3_CF1DEA531996F262_OFFSET UNITYSDK_OFFSET(0x18E089D0)
#define RPG_GAMECORE_SETADVENTUREDYNAMICVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x18E08A10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetAdventureDynamicValue_TypeDefinitionIndex = 20651;

	class SetAdventureDynamicValue : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETADVENTUREDYNAMICVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CF1DEA531996F262(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetAdventureDynamicValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetAdventureDynamicValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETADVENTUREDYNAMICVALUE_METHOD_3_CF1DEA531996F262_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_47FFA5EA5A3446ED(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetAdventureDynamicValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetAdventureDynamicValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETADVENTUREDYNAMICVALUE_METHOD_3_47FFA5EA5A3446ED_OFFSET))(a1, a2);
		}
	};
}
