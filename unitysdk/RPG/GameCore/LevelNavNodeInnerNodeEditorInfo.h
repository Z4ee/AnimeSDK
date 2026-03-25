#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelNavNodeInnerNodeInfo.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELNAVNODEINNERNODEEDITORINFO_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x17340800)
#define RPG_GAMECORE_LEVELNAVNODEINNERNODEEDITORINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x173407B0)
#define RPG_GAMECORE_LEVELNAVNODEINNERNODEEDITORINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x173407F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelNavNodeInnerNodeEditorInfo_TypeDefinitionIndex = 15970;

	class LevelNavNodeInnerNodeEditorInfo : public ::RPG::GameCore::LevelNavNodeInnerNodeInfo
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERNODEEDITORINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelNavNodeInnerNodeEditorInfo*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelNavNodeInnerNodeEditorInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERNODEEDITORINFO_FROMBINARY_OFFSET))(array, val);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelNavNodeInnerNodeEditorInfo* val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelNavNodeInnerNodeEditorInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERNODEEDITORINFO_FROMBINARYIMPL_OFFSET))(array, val);
		}
	};
}
