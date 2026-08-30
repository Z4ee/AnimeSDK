#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTELATIONPROPERTYEXTRAEFFECTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9667D0)
#define RPG_GAMECORE_GRIDFIGHTELATIONPROPERTYEXTRAEFFECTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D966900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightElationPropertyExtraEffectConfigRow_TypeDefinitionIndex = 13602;

	class GridFightElationPropertyExtraEffectConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 ExtraEffectID; // 0x10
		::RPG::GameCore::AvatarPropertyType PropertyType; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTELATIONPROPERTYEXTRAEFFECTCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightElationPropertyExtraEffectConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightElationPropertyExtraEffectConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTELATIONPROPERTYEXTRAEFFECTCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
