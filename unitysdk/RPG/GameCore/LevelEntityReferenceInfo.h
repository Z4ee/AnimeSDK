#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELENTITYREFERENCEINFO_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1D1D0040)
#define RPG_GAMECORE_LEVELENTITYREFERENCEINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D1CFF10)
#define RPG_GAMECORE_LEVELENTITYREFERENCEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1D0030)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEntityReferenceInfo_TypeDefinitionIndex = 17043;

	class LevelEntityReferenceInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean IsOwnerGroup; // 0x10
		::System::UInt32 GroupID; // 0x14
		::System::UInt32 EntityID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYREFERENCEINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelEntityReferenceInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelEntityReferenceInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYREFERENCEINFO_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelEntityReferenceInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelEntityReferenceInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYREFERENCEINFO_FROMBINARYIMPL_OFFSET))(a1, a2);
		}
	};
}
