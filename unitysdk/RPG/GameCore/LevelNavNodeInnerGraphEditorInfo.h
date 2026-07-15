#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELNAVNODEINNERGRAPHEDITORINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B07A100)
#define RPG_GAMECORE_LEVELNAVNODEINNERGRAPHEDITORINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B07A140)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelNavNodeInnerGraphEditorInfo_TypeDefinitionIndex = 16692;

	class LevelNavNodeInnerGraphEditorInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERGRAPHEDITORINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelNavNodeInnerGraphEditorInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelNavNodeInnerGraphEditorInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERGRAPHEDITORINFO_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
