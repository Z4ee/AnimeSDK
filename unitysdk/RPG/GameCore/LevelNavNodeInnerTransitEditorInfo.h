#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELNAVNODEINNERTRANSITEDITORINFO_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1C122AC0)
#define RPG_GAMECORE_LEVELNAVNODEINNERTRANSITEDITORINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C122A70)
#define RPG_GAMECORE_LEVELNAVNODEINNERTRANSITEDITORINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C122AB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelNavNodeInnerTransitEditorInfo_TypeDefinitionIndex = 17192;

	class LevelNavNodeInnerTransitEditorInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERTRANSITEDITORINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelNavNodeInnerTransitEditorInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelNavNodeInnerTransitEditorInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERTRANSITEDITORINFO_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelNavNodeInnerTransitEditorInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelNavNodeInnerTransitEditorInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERTRANSITEDITORINFO_FROMBINARYIMPL_OFFSET))(a1, a2);
		}
	};
}
