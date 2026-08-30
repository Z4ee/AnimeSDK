#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELNAVNODEINNERNODEEDITORINFO_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1D1DEC30)
#define RPG_GAMECORE_LEVELNAVNODEINNERNODEEDITORINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D1DEBE0)
#define RPG_GAMECORE_LEVELNAVNODEINNERNODEEDITORINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1DEC20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelNavNodeInnerNodeEditorInfo_TypeDefinitionIndex = 17191;

	class LevelNavNodeInnerNodeEditorInfo : public ::RPG::GameCore::JsonConfig
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
