#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelNavNodeInnerConnectInfo.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELNAVNODEINNERCONNECTEDITORINFO_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x17340500)
#define RPG_GAMECORE_LEVELNAVNODEINNERCONNECTEDITORINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x173404B0)
#define RPG_GAMECORE_LEVELNAVNODEINNERCONNECTEDITORINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x173404F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelNavNodeInnerConnectEditorInfo_TypeDefinitionIndex = 15972;

	class LevelNavNodeInnerConnectEditorInfo : public ::RPG::GameCore::LevelNavNodeInnerConnectInfo
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERCONNECTEDITORINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelNavNodeInnerConnectEditorInfo*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelNavNodeInnerConnectEditorInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERCONNECTEDITORINFO_FROMBINARY_OFFSET))(array, val);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelNavNodeInnerConnectEditorInfo* val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelNavNodeInnerConnectEditorInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERCONNECTEDITORINFO_FROMBINARYIMPL_OFFSET))(array, val);
		}
	};
}
