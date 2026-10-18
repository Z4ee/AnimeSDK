#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMSETRENDERVISIBLENEVERDITHERACTION_METHOD_4_779C2E9009A4F1C6_OFFSET UNITYSDK_OFFSET(0x1D6AD350)
#define RPG_GAMECORE_FIVEDIMSETRENDERVISIBLENEVERDITHERACTION_METHOD_4_907D4DE0C55229F1_OFFSET UNITYSDK_OFFSET(0x1D6AD310)
#define RPG_GAMECORE_FIVEDIMSETRENDERVISIBLENEVERDITHERACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6AD340)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetRenderVisibleNeverDitherAction_TypeDefinitionIndex = 18681;

	class FiveDimSetRenderVisibleNeverDitherAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean Visible; // 0x10
		::Il2CppArray<::System::String*>* RelativePaths; // 0x18
		::System::Boolean SetCollider; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETRENDERVISIBLENEVERDITHERACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_907D4DE0C55229F1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetRenderVisibleNeverDitherAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetRenderVisibleNeverDitherAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETRENDERVISIBLENEVERDITHERACTION_METHOD_4_907D4DE0C55229F1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_779C2E9009A4F1C6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetRenderVisibleNeverDitherAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetRenderVisibleNeverDitherAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETRENDERVISIBLENEVERDITHERACTION_METHOD_4_779C2E9009A4F1C6_OFFSET))(a1, a2);
		}
	};
}
