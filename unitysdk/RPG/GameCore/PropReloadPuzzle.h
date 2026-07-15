#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PROPRELOADPUZZLE_METHOD_3_0D96D846EE06921F_OFFSET UNITYSDK_OFFSET(0x1BA27AD0)
#define RPG_GAMECORE_PROPRELOADPUZZLE_METHOD_3_934A493D1DBB6B62_OFFSET UNITYSDK_OFFSET(0x1BA27A00)
#define RPG_GAMECORE_PROPRELOADPUZZLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA27AC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropReloadPuzzle_TypeDefinitionIndex = 19585;

	class PropReloadPuzzle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPRELOADPUZZLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_934A493D1DBB6B62(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropReloadPuzzle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropReloadPuzzle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPRELOADPUZZLE_METHOD_3_934A493D1DBB6B62_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0D96D846EE06921F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropReloadPuzzle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropReloadPuzzle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPRELOADPUZZLE_METHOD_3_0D96D846EE06921F_OFFSET))(a1, a2);
		}
	};
}
