#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVENABLEPROPDIALOGMODE_METHOD_3_4E199948EE87BCA7_OFFSET UNITYSDK_OFFSET(0x1D6B5920)
#define RPG_GAMECORE_ADVENABLEPROPDIALOGMODE_METHOD_3_876EB066C91DD853_OFFSET UNITYSDK_OFFSET(0x1D6B5880)
#define RPG_GAMECORE_ADVENABLEPROPDIALOGMODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B58E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvEnablePropDialogMode_TypeDefinitionIndex = 20102;

	class AdvEnablePropDialogMode : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18
		::System::Boolean PlayerFaceToProp; // 0x19
		::System::Boolean IsUseProgramRotate; // 0x1A
		::System::Single RotateSpeed; // 0x1C
		::System::Boolean EnablePropCamera; // 0x20
		::System::Boolean LockPlayerControl; // 0x21
		::System::Boolean IsImmediatelySucc; // 0x22
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENABLEPROPDIALOGMODE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_876EB066C91DD853(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvEnablePropDialogMode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvEnablePropDialogMode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENABLEPROPDIALOGMODE_METHOD_3_876EB066C91DD853_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4E199948EE87BCA7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvEnablePropDialogMode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvEnablePropDialogMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENABLEPROPDIALOGMODE_METHOD_3_4E199948EE87BCA7_OFFSET))(a1, a2);
		}
	};
}
