#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_LEVELNAVNODEINNERCONNECTINFO_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x17340660)
#define RPG_GAMECORE_LEVELNAVNODEINNERCONNECTINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17340520)
#define RPG_GAMECORE_LEVELNAVNODEINNERCONNECTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x17340510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelNavNodeInnerConnectInfo_TypeDefinitionIndex = 15747;

	class LevelNavNodeInnerConnectInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 InnerNodeID; // 0x10
		::System::String* ConnectPointKey; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERCONNECTINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelNavNodeInnerConnectInfo*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelNavNodeInnerConnectInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERCONNECTINFO_FROMBINARY_OFFSET))(array, val);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelNavNodeInnerConnectInfo* val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelNavNodeInnerConnectInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERCONNECTINFO_FROMBINARYIMPL_OFFSET))(array, val);
		}
	};
}
