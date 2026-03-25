#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelNavNodeConditionInfos; }

#define RPG_GAMECORE_LEVELNAVNODEINNERTRANSITINFO_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x17340C00)
#define RPG_GAMECORE_LEVELNAVNODEINNERTRANSITINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17340AC0)
#define RPG_GAMECORE_LEVELNAVNODEINNERTRANSITINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x17340AB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelNavNodeInnerTransitInfo_TypeDefinitionIndex = 15746;

	class LevelNavNodeInnerTransitInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 FromID; // 0x10
		::System::UInt32 ToID; // 0x14
		::RPG::GameCore::LevelNavNodeConditionInfos* ConditionInfos; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERTRANSITINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelNavNodeInnerTransitInfo*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelNavNodeInnerTransitInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERTRANSITINFO_FROMBINARY_OFFSET))(array, val);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelNavNodeInnerTransitInfo* val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelNavNodeInnerTransitInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERTRANSITINFO_FROMBINARYIMPL_OFFSET))(array, val);
		}
	};
}
