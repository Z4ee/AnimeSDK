#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETCHARACTERSHADERSPEEDENABLE_METHOD_3_D5A02BBF1E8728DC_OFFSET UNITYSDK_OFFSET(0x176AE940)
#define RPG_GAMECORE_SETCHARACTERSHADERSPEEDENABLE_METHOD_3_E6D49E67FDC8DD6A_OFFSET UNITYSDK_OFFSET(0x176AE8C0)
#define RPG_GAMECORE_SETCHARACTERSHADERSPEEDENABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x176AE910)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetCharacterShaderSpeedEnable_TypeDefinitionIndex = 21158;

	class SetCharacterShaderSpeedEnable : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean IsEnable; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERSHADERSPEEDENABLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E6D49E67FDC8DD6A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetCharacterShaderSpeedEnable*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetCharacterShaderSpeedEnable*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERSHADERSPEEDENABLE_METHOD_3_E6D49E67FDC8DD6A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D5A02BBF1E8728DC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetCharacterShaderSpeedEnable* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetCharacterShaderSpeedEnable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERSHADERSPEEDENABLE_METHOD_3_D5A02BBF1E8728DC_OFFSET))(a1, a2);
		}
	};
}
