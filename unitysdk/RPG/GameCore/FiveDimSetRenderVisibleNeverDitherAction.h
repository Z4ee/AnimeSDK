#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMSETRENDERVISIBLENEVERDITHERACTION_METHOD_3_1D33F535CAFD6FCD_OFFSET UNITYSDK_OFFSET(0x19755EC0)
#define RPG_GAMECORE_FIVEDIMSETRENDERVISIBLENEVERDITHERACTION_METHOD_3_9E8EAF6F0465A8A3_OFFSET UNITYSDK_OFFSET(0x19755F30)
#define RPG_GAMECORE_FIVEDIMSETRENDERVISIBLENEVERDITHERACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x19755F10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetRenderVisibleNeverDitherAction_TypeDefinitionIndex = 17775;

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

		static ::System::Void Method_3_1D33F535CAFD6FCD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetRenderVisibleNeverDitherAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetRenderVisibleNeverDitherAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETRENDERVISIBLENEVERDITHERACTION_METHOD_3_1D33F535CAFD6FCD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9E8EAF6F0465A8A3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetRenderVisibleNeverDitherAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetRenderVisibleNeverDitherAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETRENDERVISIBLENEVERDITHERACTION_METHOD_3_9E8EAF6F0465A8A3_OFFSET))(a1, a2);
		}
	};
}
