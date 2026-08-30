#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PROPRESETPUZZLE_METHOD_3_B9642DF4FCC047EA_OFFSET UNITYSDK_OFFSET(0x1D36D690)
#define RPG_GAMECORE_PROPRESETPUZZLE_METHOD_3_D51B6A81FC1E9F87_OFFSET UNITYSDK_OFFSET(0x1D36D760)
#define RPG_GAMECORE_PROPRESETPUZZLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D36D750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropResetPuzzle_TypeDefinitionIndex = 21737;

	class PropResetPuzzle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPRESETPUZZLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B9642DF4FCC047EA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropResetPuzzle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropResetPuzzle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPRESETPUZZLE_METHOD_3_B9642DF4FCC047EA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D51B6A81FC1E9F87(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropResetPuzzle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropResetPuzzle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPRESETPUZZLE_METHOD_3_D51B6A81FC1E9F87_OFFSET))(a1, a2);
		}
	};
}
