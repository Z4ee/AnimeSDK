#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_LEVELPEDESTRIANV2MEMBEREXTENDFREESTYLE_METHOD_2_C7B875B26EAF786D_OFFSET UNITYSDK_OFFSET(0x1C12D8D0)
#define RPG_GAMECORE_LEVELPEDESTRIANV2MEMBEREXTENDFREESTYLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C12DA80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPedestrianV2MemberExtendFreeStyle_TypeDefinitionIndex = 17121;

	class LevelPedestrianV2MemberExtendFreeStyle : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* LayerName; // 0x10
		::System::UInt32 MotionID; // 0x18
		::Il2CppArray<::System::String*>* PossessionList; // 0x20
		::System::Single Weight; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2MEMBEREXTENDFREESTYLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_C7B875B26EAF786D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPedestrianV2MemberExtendFreeStyle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPedestrianV2MemberExtendFreeStyle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2MEMBEREXTENDFREESTYLE_METHOD_2_C7B875B26EAF786D_OFFSET))(a1, a2);
		}
	};
}
