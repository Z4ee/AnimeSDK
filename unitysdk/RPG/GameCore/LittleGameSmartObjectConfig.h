#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
#include "unitysdk/RPG/GameCore/LittleGameSmartObjectType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LittleGameSmartObjectSlotData; }

#define RPG_GAMECORE_LITTLEGAMESMARTOBJECTCONFIG_METHOD_3_1ED29ACF72CDB9A1_OFFSET UNITYSDK_OFFSET(0x1DD6DE50)
#define RPG_GAMECORE_LITTLEGAMESMARTOBJECTCONFIG_METHOD_3_E9C286C7BC8DEC27_OFFSET UNITYSDK_OFFSET(0x1DD6DEB0)
#define RPG_GAMECORE_LITTLEGAMESMARTOBJECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD6DEA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameSmartObjectConfig_TypeDefinitionIndex = 18651;

	class LittleGameSmartObjectConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::RPG::GameCore::LittleGameSmartObjectType Type; // 0x10
		::Il2CppArray<::RPG::GameCore::LittleGameSmartObjectSlotData*>* Slots; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMESMARTOBJECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1ED29ACF72CDB9A1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameSmartObjectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameSmartObjectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMESMARTOBJECTCONFIG_METHOD_3_1ED29ACF72CDB9A1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E9C286C7BC8DEC27(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameSmartObjectConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameSmartObjectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMESMARTOBJECTCONFIG_METHOD_3_E9C286C7BC8DEC27_OFFSET))(a1, a2);
		}
	};
}
