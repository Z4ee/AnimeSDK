#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SETCHARACTEREFFECTMATERIALBLOCK_METHOD_3_0DD6DFB7BBF3C0C4_OFFSET UNITYSDK_OFFSET(0x18E0FE30)
#define RPG_GAMECORE_SETCHARACTEREFFECTMATERIALBLOCK_METHOD_3_18935231A33196D3_OFFSET UNITYSDK_OFFSET(0x18E0FDB0)
#define RPG_GAMECORE_SETCHARACTEREFFECTMATERIALBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x18E0FE00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetCharacterEffectMaterialBlock_TypeDefinitionIndex = 22143;

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

		static ::System::Void Method_3_18935231A33196D3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetCharacterEffectMaterialBlock*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetCharacterEffectMaterialBlock*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTEREFFECTMATERIALBLOCK_METHOD_3_18935231A33196D3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0DD6DFB7BBF3C0C4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetCharacterEffectMaterialBlock* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetCharacterEffectMaterialBlock*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTEREFFECTMATERIALBLOCK_METHOD_3_0DD6DFB7BBF3C0C4_OFFSET))(a1, a2);
		}
	};
}
