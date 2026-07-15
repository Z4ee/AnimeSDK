#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DECALPUZZLECLEAR_METHOD_3_185FF65226AA34F7_OFFSET UNITYSDK_OFFSET(0x1C0FFDD0)
#define RPG_GAMECORE_DECALPUZZLECLEAR_METHOD_3_E1A360DAFB0BD97C_OFFSET UNITYSDK_OFFSET(0x1C0FFE10)
#define RPG_GAMECORE_DECALPUZZLECLEAR__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0FFE00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DecalPuzzleClear_TypeDefinitionIndex = 20412;

	class DecalPuzzleClear : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsClearOutOfRegionOnly; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECALPUZZLECLEAR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_185FF65226AA34F7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DecalPuzzleClear*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DecalPuzzleClear*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECALPUZZLECLEAR_METHOD_3_185FF65226AA34F7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E1A360DAFB0BD97C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DecalPuzzleClear* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DecalPuzzleClear*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECALPUZZLECLEAR_METHOD_3_E1A360DAFB0BD97C_OFFSET))(a1, a2);
		}
	};
}
