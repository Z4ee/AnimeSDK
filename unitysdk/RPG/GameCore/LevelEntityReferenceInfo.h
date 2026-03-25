#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELENTITYREFERENCEINFO_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x173342B0)
#define RPG_GAMECORE_LEVELENTITYREFERENCEINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17334180)
#define RPG_GAMECORE_LEVELENTITYREFERENCEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x173342A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEntityReferenceInfo_TypeDefinitionIndex = 15831;

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

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelEntityReferenceInfo*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelEntityReferenceInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYREFERENCEINFO_FROMBINARY_OFFSET))(array, val);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelEntityReferenceInfo* val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelEntityReferenceInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYREFERENCEINFO_FROMBINARYIMPL_OFFSET))(array, val);
		}
	};
}
