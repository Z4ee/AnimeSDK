#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DECALPUZZLEEND_METHOD_3_02397C5A004B294C_OFFSET UNITYSDK_OFFSET(0x1D5F90D0)
#define RPG_GAMECORE_DECALPUZZLEEND_METHOD_3_20F13A8F72ED8E89_OFFSET UNITYSDK_OFFSET(0x1D5F91A0)
#define RPG_GAMECORE_DECALPUZZLEEND__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5F9190)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DecalPuzzleEnd_TypeDefinitionIndex = 21209;

	class DecalPuzzleEnd : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECALPUZZLEEND__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_02397C5A004B294C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DecalPuzzleEnd*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DecalPuzzleEnd*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECALPUZZLEEND_METHOD_3_02397C5A004B294C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_20F13A8F72ED8E89(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DecalPuzzleEnd* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DecalPuzzleEnd*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECALPUZZLEEND_METHOD_3_20F13A8F72ED8E89_OFFSET))(a1, a2);
		}
	};
}
