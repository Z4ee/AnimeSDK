#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ST_SIDE_LISTENFINDTROTTERSTATE_METHOD_4_441A8CE2D37B8AA8_OFFSET UNITYSDK_OFFSET(0x1D4D1930)
#define RPG_GAMECORE_ST_SIDE_LISTENFINDTROTTERSTATE_METHOD_4_5E2DE80A0AB6546D_OFFSET UNITYSDK_OFFSET(0x1D4D1980)
#define RPG_GAMECORE_ST_SIDE_LISTENFINDTROTTERSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4D1970)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Side_ListenFindTrotterState_TypeDefinitionIndex = 19901;

	class ST_Side_ListenFindTrotterState : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::String* SetBoolVariableName; // 0x18
		::System::Boolean SetBoolVairableValue; // 0x20
		::System::Single SampleRadius; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_LISTENFINDTROTTERSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_441A8CE2D37B8AA8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_ListenFindTrotterState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_ListenFindTrotterState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_LISTENFINDTROTTERSTATE_METHOD_4_441A8CE2D37B8AA8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5E2DE80A0AB6546D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_ListenFindTrotterState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_ListenFindTrotterState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_LISTENFINDTROTTERSTATE_METHOD_4_5E2DE80A0AB6546D_OFFSET))(a1, a2);
		}
	};
}
