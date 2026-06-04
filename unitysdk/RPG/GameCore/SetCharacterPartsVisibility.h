#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETCHARACTERPARTSVISIBILITY_METHOD_3_27ECC5AEC07979B9_OFFSET UNITYSDK_OFFSET(0x19C2F890)
#define RPG_GAMECORE_SETCHARACTERPARTSVISIBILITY_METHOD_3_3062B4CA3F173456_OFFSET UNITYSDK_OFFSET(0x19C2F910)
#define RPG_GAMECORE_SETCHARACTERPARTSVISIBILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x19C2F8E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetCharacterPartsVisibility_TypeDefinitionIndex = 21180;

	class SetCharacterPartsVisibility : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* AttachPoint; // 0x20
		::System::Boolean HideParts; // 0x28
		::Il2CppArray<::System::Int32>* ShowPartList; // 0x30
		::System::Boolean IsNpc; // 0x38
		::System::Boolean SyncEffect; // 0x39
		::System::Boolean RefreshOutline; // 0x3A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERPARTSVISIBILITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_27ECC5AEC07979B9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetCharacterPartsVisibility*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetCharacterPartsVisibility*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERPARTSVISIBILITY_METHOD_3_27ECC5AEC07979B9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3062B4CA3F173456(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetCharacterPartsVisibility* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetCharacterPartsVisibility*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERPARTSVISIBILITY_METHOD_3_3062B4CA3F173456_OFFSET))(a1, a2);
		}
	};
}
