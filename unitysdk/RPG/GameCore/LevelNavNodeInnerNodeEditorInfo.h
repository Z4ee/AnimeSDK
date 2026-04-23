#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelNavNodeInnerNodeInfo.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELNAVNODEINNERNODEEDITORINFO_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x18A4E1D0)
#define RPG_GAMECORE_LEVELNAVNODEINNERNODEEDITORINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A4E180)
#define RPG_GAMECORE_LEVELNAVNODEINNERNODEEDITORINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x18A4E1C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelNavNodeInnerNodeEditorInfo_TypeDefinitionIndex = 16496;

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
