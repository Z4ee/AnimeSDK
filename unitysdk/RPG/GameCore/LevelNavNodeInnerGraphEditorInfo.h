#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELNAVNODEINNERGRAPHEDITORINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17340750)
#define RPG_GAMECORE_LEVELNAVNODEINNERGRAPHEDITORINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x17340790)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelNavNodeInnerGraphEditorInfo_TypeDefinitionIndex = 15973;

	class LevelNavNodeInnerGraphEditorInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERGRAPHEDITORINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelNavNodeInnerGraphEditorInfo*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelNavNodeInnerGraphEditorInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERGRAPHEDITORINFO_FROMBINARY_OFFSET))(array, val);
		}
	};
}
