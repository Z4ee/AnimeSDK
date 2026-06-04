#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_LEVELPEDESTRIANV2MEMBERINFO_METHOD_2_967E368D40202FB1_OFFSET UNITYSDK_OFFSET(0x19885820)
#define RPG_GAMECORE_LEVELPEDESTRIANV2MEMBERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x19885970)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPedestrianV2MemberInfo_TypeDefinitionIndex = 16439;

	class LevelPedestrianV2MemberInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Identity; // 0x10
		::System::String* FeatureID; // 0x18
		::System::Single Weight; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2MEMBERINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_967E368D40202FB1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPedestrianV2MemberInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPedestrianV2MemberInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2MEMBERINFO_METHOD_2_967E368D40202FB1_OFFSET))(a1, a2);
		}
	};
}
