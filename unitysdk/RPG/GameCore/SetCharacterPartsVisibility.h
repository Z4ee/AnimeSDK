#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETCHARACTERPARTSVISIBILITY_METHOD_3_A7CDFF333667CB41_OFFSET UNITYSDK_OFFSET(0x1DA6D7C0)
#define RPG_GAMECORE_SETCHARACTERPARTSVISIBILITY_METHOD_3_DD25A417CE0F1D3F_OFFSET UNITYSDK_OFFSET(0x1DA6D810)
#define RPG_GAMECORE_SETCHARACTERPARTSVISIBILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA6D800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetCharacterPartsVisibility_TypeDefinitionIndex = 22407;

	class SetCharacterPartsVisibility : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* AttachPoint; // 0x20
		::System::Boolean HideParts; // 0x28
		::Il2CppArray<::System::Int32>* ShowPartList; // 0x30
		::System::Int32 MatIndex; // 0x38
		::System::Boolean IsNpc; // 0x3C
		::System::Boolean SyncEffect; // 0x3D
		::System::Boolean RefreshOutline; // 0x3E

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERPARTSVISIBILITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A7CDFF333667CB41(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetCharacterPartsVisibility*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetCharacterPartsVisibility*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERPARTSVISIBILITY_METHOD_3_A7CDFF333667CB41_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DD25A417CE0F1D3F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetCharacterPartsVisibility* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetCharacterPartsVisibility*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERPARTSVISIBILITY_METHOD_3_DD25A417CE0F1D3F_OFFSET))(a1, a2);
		}
	};
}
