#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelNavNodeInnerTransitInfo.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELNAVNODEINNERTRANSITEDITORINFO_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x18A4E470)
#define RPG_GAMECORE_LEVELNAVNODEINNERTRANSITEDITORINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A4E420)
#define RPG_GAMECORE_LEVELNAVNODEINNERTRANSITEDITORINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x18A4E460)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelNavNodeInnerTransitEditorInfo_TypeDefinitionIndex = 16497;

	class LevelNavNodeInnerTransitEditorInfo : public ::RPG::GameCore::LevelNavNodeInnerTransitInfo
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERTRANSITEDITORINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelNavNodeInnerTransitEditorInfo*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelNavNodeInnerTransitEditorInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERTRANSITEDITORINFO_FROMBINARY_OFFSET))(array, val);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelNavNodeInnerTransitEditorInfo* val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelNavNodeInnerTransitEditorInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERTRANSITEDITORINFO_FROMBINARYIMPL_OFFSET))(array, val);
		}
	};
}
