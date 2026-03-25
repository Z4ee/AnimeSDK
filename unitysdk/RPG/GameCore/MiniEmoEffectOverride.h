#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MiniEmoEffectNodeVisible; }
namespace System { class String; }

#define RPG_GAMECORE_MINIEMOEFFECTOVERRIDE_METHOD_2_5301E3BF8600DCBE_OFFSET UNITYSDK_OFFSET(0x1741B7A0)
#define RPG_GAMECORE_MINIEMOEFFECTOVERRIDE__CTOR_OFFSET UNITYSDK_OFFSET(0x1741BC70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MiniEmoEffectOverride_TypeDefinitionIndex = 20031;

	class MiniEmoEffectOverride : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean Override_OffsetPosition; // 0x10
		::RPG::MVector3 OffsetPosition; // 0x14
		::System::Boolean Override_OffsetRotation; // 0x20
		::RPG::MVector3 OffsetRotation; // 0x24
		::System::Boolean Override_AttachTarget; // 0x30
		::System::String* AttachPoint; // 0x38
		::System::Boolean Override_NodeVisible; // 0x40
		::Il2CppArray<::RPG::GameCore::MiniEmoEffectNodeVisible*>* NodeVisible; // 0x48
		::System::Boolean Override_Speed; // 0x50
		::System::Single Speed; // 0x54
		::System::Boolean Override_Scale; // 0x58
		::RPG::MVector3 Scale; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MINIEMOEFFECTOVERRIDE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_5301E3BF8600DCBE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MiniEmoEffectOverride*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MiniEmoEffectOverride*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MINIEMOEFFECTOVERRIDE_METHOD_2_5301E3BF8600DCBE_OFFSET))(a1, a2);
		}
	};
}
