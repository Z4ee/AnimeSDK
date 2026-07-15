#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FloorInstanceType.h"
#include "unitysdk/RPG/GameCore/LevelEntityReferenceInfo.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELENTITYTYPEDREFERENCEINFO_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1B033AB0)
#define RPG_GAMECORE_LEVELENTITYTYPEDREFERENCEINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B033F80)
#define RPG_GAMECORE_LEVELENTITYTYPEDREFERENCEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B033AA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEntityTypedReferenceInfo_TypeDefinitionIndex = 16552;

	class LevelEntityTypedReferenceInfo : public ::RPG::GameCore::LevelEntityReferenceInfo
	{
	public:
		::RPG::GameCore::FloorInstanceType Type; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYTYPEDREFERENCEINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelEntityTypedReferenceInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelEntityTypedReferenceInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYTYPEDREFERENCEINFO_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelEntityTypedReferenceInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelEntityTypedReferenceInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYTYPEDREFERENCEINFO_FROMBINARYIMPL_OFFSET))(a1, a2);
		}
	};
}
