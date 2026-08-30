#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETLOCALWINFLAG_METHOD_3_1C5B1D6DE6B6E526_OFFSET UNITYSDK_OFFSET(0x1E0844E0)
#define RPG_GAMECORE_SETLOCALWINFLAG_METHOD_3_A0E2B63F93AFBC23_OFFSET UNITYSDK_OFFSET(0x1E084410)
#define RPG_GAMECORE_SETLOCALWINFLAG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0844D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetLocalWinFlag_TypeDefinitionIndex = 23141;

	class SetLocalWinFlag : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLOCALWINFLAG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A0E2B63F93AFBC23(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetLocalWinFlag*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetLocalWinFlag*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLOCALWINFLAG_METHOD_3_A0E2B63F93AFBC23_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1C5B1D6DE6B6E526(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetLocalWinFlag* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetLocalWinFlag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLOCALWINFLAG_METHOD_3_1C5B1D6DE6B6E526_OFFSET))(a1, a2);
		}
	};
}
