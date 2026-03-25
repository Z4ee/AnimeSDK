#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_LEVELPEDESTRIANV2BAKEDINFO_METHOD_2_3A05214E4CF61A9A_OFFSET UNITYSDK_OFFSET(0x17345B00)
#define RPG_GAMECORE_LEVELPEDESTRIANV2BAKEDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x17345C60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPedestrianV2BakedInfo_TypeDefinitionIndex = 15731;

	class LevelPedestrianV2BakedInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::String* NavMeshPath; // 0x18
		::Il2CppArray<::System::String*>* ExtraNavMeshPaths; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2BAKEDINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_3A05214E4CF61A9A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPedestrianV2BakedInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPedestrianV2BakedInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2BAKEDINFO_METHOD_2_3A05214E4CF61A9A_OFFSET))(a1, a2);
		}
	};
}
