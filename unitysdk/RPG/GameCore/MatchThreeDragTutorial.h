#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector2.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCHTHREEDRAGTUTORIAL_METHOD_3_48814FEB1C1D5764_OFFSET UNITYSDK_OFFSET(0x1D2679B0)
#define RPG_GAMECORE_MATCHTHREEDRAGTUTORIAL_METHOD_3_4A943F056E562A4B_OFFSET UNITYSDK_OFFSET(0x1D2679F0)
#define RPG_GAMECORE_MATCHTHREEDRAGTUTORIAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2679E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MatchThreeDragTutorial_TypeDefinitionIndex = 20748;

	class MatchThreeDragTutorial : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18
		::System::Boolean EnableMatchHint; // 0x19
		::Il2CppArray<::RPG::MVector2>* MaskPos; // 0x20
		::Il2CppArray<::RPG::MVector2>* DragablePos; // 0x28
		::RPG::MVector2 DragStart; // 0x30
		::RPG::MVector2 DragEnd; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEDRAGTUTORIAL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_48814FEB1C1D5764(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MatchThreeDragTutorial*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MatchThreeDragTutorial*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEDRAGTUTORIAL_METHOD_3_48814FEB1C1D5764_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4A943F056E562A4B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MatchThreeDragTutorial* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MatchThreeDragTutorial*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEDRAGTUTORIAL_METHOD_3_4A943F056E562A4B_OFFSET))(a1, a2);
		}
	};
}
