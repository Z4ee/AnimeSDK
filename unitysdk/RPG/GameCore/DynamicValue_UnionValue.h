#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValue_DynamicValueType.h"
#include "unitysdk/System/ValueType.h"

#define RPG_GAMECORE_DYNAMICVALUE_UNIONVALUE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18894C00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DynamicValue_UnionValue_TypeDefinitionIndex = 23557;

	struct alignas(8) DynamicValue_UnionValue
	{
		static ::RPG::GameCore::DynamicValue_UnionValue* StaticGet_Empty()
		{
			return (::RPG::GameCore::DynamicValue_UnionValue*)Il2CppClass::FromTypeDefinitionIndex(DynamicValue_UnionValue_TypeDefinitionIndex)->GetStaticField(0xCE70);
		}
		::System::Double doubleValue; // 0x10
		::System::Int64 longValue; // 0x10
		::RPG::GameCore::DynamicValue_DynamicValueType valueType; // 0x18

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE_UNIONVALUE__CCTOR_OFFSET))();
		}
	};
}
