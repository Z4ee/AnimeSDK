#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/NPCBodySize.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_LEVELPEDESTRIANV2EXTENDFREESTYLE_METHOD_2_AF6EFCF9D0FC8689_OFFSET UNITYSDK_OFFSET(0x1C129D70)
#define RPG_GAMECORE_LEVELPEDESTRIANV2EXTENDFREESTYLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C129FE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPedestrianV2ExtendFreeStyle_TypeDefinitionIndex = 17123;

	class LevelPedestrianV2ExtendFreeStyle : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::NPCBodySize BodySize; // 0x10
		::System::String* FreeStyleConfigPath; // 0x18
		::Il2CppArray<::System::String*>* IncludeFeatures; // 0x20
		::Il2CppArray<::System::String*>* ExcludeFeatures; // 0x28
		::Il2CppArray<::System::String*>* IncludeIdentities; // 0x30
		::Il2CppArray<::System::String*>* ExcludeIdentities; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2EXTENDFREESTYLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_AF6EFCF9D0FC8689(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPedestrianV2ExtendFreeStyle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPedestrianV2ExtendFreeStyle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPEDESTRIANV2EXTENDFREESTYLE_METHOD_2_AF6EFCF9D0FC8689_OFFSET))(a1, a2);
		}
	};
}
