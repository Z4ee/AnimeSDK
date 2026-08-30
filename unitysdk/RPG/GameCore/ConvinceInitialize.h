#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ConvinceTrickSkillType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CONVINCEINITIALIZE_METHOD_3_04E492E1A894BE44_OFFSET UNITYSDK_OFFSET(0x1D9B9BE0)
#define RPG_GAMECORE_CONVINCEINITIALIZE_METHOD_3_67245169F4C63460_OFFSET UNITYSDK_OFFSET(0x1D9B9CC0)
#define RPG_GAMECORE_CONVINCEINITIALIZE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9B9C60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConvinceInitialize_TypeDefinitionIndex = 21584;

	class ConvinceInitialize : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* BaseAnchor; // 0x18
		::System::String* LeftActorUniqueName; // 0x20
		::System::String* RightActorUniqueName; // 0x28
		::System::String* LeftAnchorDataKey; // 0x30
		::System::String* RightAnchorDataKey; // 0x38
		::System::String* LeftBgTexture; // 0x40
		::System::String* RightBgTexture; // 0x48
		::Il2CppArray<::RPG::Client::TextID>* LeftTextNameList; // 0x50
		::RPG::Client::TextID RightDefaultTextName; // 0x58
		::System::Int32 TurnNum; // 0x68
		::System::Int32 InitHP; // 0x6C
		::Il2CppArray<::RPG::GameCore::ConvinceTrickSkillType>* SkillTypes; // 0x70
		::System::Int32 SkillUseNum; // 0x78
		::System::UInt32 ConvinceGameplayNPCID; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEINITIALIZE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_04E492E1A894BE44(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConvinceInitialize*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConvinceInitialize*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEINITIALIZE_METHOD_3_04E492E1A894BE44_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_67245169F4C63460(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConvinceInitialize* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConvinceInitialize*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEINITIALIZE_METHOD_3_67245169F4C63460_OFFSET))(a1, a2);
		}
	};
}
