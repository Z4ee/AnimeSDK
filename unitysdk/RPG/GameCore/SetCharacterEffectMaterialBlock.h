#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SETCHARACTEREFFECTMATERIALBLOCK_METHOD_3_0DD6DFB7BBF3C0C4_OFFSET UNITYSDK_OFFSET(0x1D4E63A0)
#define RPG_GAMECORE_SETCHARACTEREFFECTMATERIALBLOCK_METHOD_3_2320AC5561A7BB31_OFFSET UNITYSDK_OFFSET(0x1D4E6360)
#define RPG_GAMECORE_SETCHARACTEREFFECTMATERIALBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4E6390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetCharacterEffectMaterialBlock_TypeDefinitionIndex = 22927;

	class SetCharacterEffectMaterialBlock : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* UniqueName; // 0x18
		::System::String* PropertyName; // 0x20
		::System::Single FloatValue; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTEREFFECTMATERIALBLOCK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2320AC5561A7BB31(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetCharacterEffectMaterialBlock*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetCharacterEffectMaterialBlock*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTEREFFECTMATERIALBLOCK_METHOD_3_2320AC5561A7BB31_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0DD6DFB7BBF3C0C4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetCharacterEffectMaterialBlock* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetCharacterEffectMaterialBlock*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTEREFFECTMATERIALBLOCK_METHOD_3_0DD6DFB7BBF3C0C4_OFFSET))(a1, a2);
		}
	};
}
