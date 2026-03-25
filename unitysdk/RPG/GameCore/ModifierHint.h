#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/ModifierHintType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_MODIFIERHINT_METHOD_2_E3137EF7A7D88B71_OFFSET UNITYSDK_OFFSET(0x17428070)
#define RPG_GAMECORE_MODIFIERHINT__CTOR_OFFSET UNITYSDK_OFFSET(0x17428230)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifierHint_TypeDefinitionIndex = 16741;

	class ModifierHint : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ModifierHintType HintType; // 0x10
		::RPG::Client::TextID Desc; // 0x18
		::Il2CppArray<::RPG::GameCore::DynamicFloat*>* ParamList; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERHINT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E3137EF7A7D88B71(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifierHint*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifierHint*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERHINT_METHOD_2_E3137EF7A7D88B71_OFFSET))(a1, a2);
		}
	};
}
