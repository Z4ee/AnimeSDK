#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelNavNodeInnerNodeInfo.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELNAVNODEINNERNODEEDITORINFO_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1987EE60)
#define RPG_GAMECORE_LEVELNAVNODEINNERNODEEDITORINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1987EE10)
#define RPG_GAMECORE_LEVELNAVNODEINNERNODEEDITORINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1987EE50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelNavNodeInnerNodeEditorInfo_TypeDefinitionIndex = 16527;

	class LevelNavNodeInnerNodeEditorInfo : public ::RPG::GameCore::LevelNavNodeInnerNodeInfo
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERNODEEDITORINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelNavNodeInnerNodeEditorInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelNavNodeInnerNodeEditorInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERNODEEDITORINFO_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelNavNodeInnerNodeEditorInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelNavNodeInnerNodeEditorInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERNODEEDITORINFO_FROMBINARYIMPL_OFFSET))(a1, a2);
		}
	};
}
