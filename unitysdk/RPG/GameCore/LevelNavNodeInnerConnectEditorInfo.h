#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELNAVNODEINNERCONNECTEDITORINFO_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1C120DB0)
#define RPG_GAMECORE_LEVELNAVNODEINNERCONNECTEDITORINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C120D60)
#define RPG_GAMECORE_LEVELNAVNODEINNERCONNECTEDITORINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C120DA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelNavNodeInnerConnectEditorInfo_TypeDefinitionIndex = 17193;

	class LevelNavNodeInnerConnectEditorInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERCONNECTEDITORINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelNavNodeInnerConnectEditorInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelNavNodeInnerConnectEditorInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERCONNECTEDITORINFO_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelNavNodeInnerConnectEditorInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelNavNodeInnerConnectEditorInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERCONNECTEDITORINFO_FROMBINARYIMPL_OFFSET))(a1, a2);
		}
	};
}
