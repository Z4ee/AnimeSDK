#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelPedestrianV2RoadEntryInfo; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELPEDESTRIANV2EMITINFO_METHOD_2_36BEE6176B87B11F_OFFSET UNITYSDK_OFFSET(0x1C129A50)
#define RPG_GAMECORE_LEVELPEDESTRIANV2EMITINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C129C00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPedestrianV2EmitInfo_TypeDefinitionIndex = 17119;

	class LevelPedestrianV2EmitInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::LevelPedestrianV2RoadEntryInfo* RoadEntry; // 0x10
		::System::Int32 EmitSpeed; // 0x18
		::System::String* DynamicEmitSpeedBindFSVName; // 0x20
		::Il2CppArray<::System::Int32>* ForbidToRoadIndexList; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2EMITINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_36BEE6176B87B11F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPedestrianV2EmitInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPedestrianV2EmitInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2EMITINFO_METHOD_2_36BEE6176B87B11F_OFFSET))(a1, a2);
		}
	};
}
