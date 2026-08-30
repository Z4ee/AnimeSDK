#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RESETLOCALPLAYERLOOKATTARGETS_METHOD_3_9BFF259FC4212C56_OFFSET UNITYSDK_OFFSET(0x1D3A4C00)
#define RPG_GAMECORE_RESETLOCALPLAYERLOOKATTARGETS_METHOD_3_9CCBF530B4800993_OFFSET UNITYSDK_OFFSET(0x1D3A4B30)
#define RPG_GAMECORE_RESETLOCALPLAYERLOOKATTARGETS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3A4BF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ResetLocalPlayerLookAtTargets_TypeDefinitionIndex = 21667;

	class ResetLocalPlayerLookAtTargets : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETLOCALPLAYERLOOKATTARGETS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9CCBF530B4800993(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ResetLocalPlayerLookAtTargets*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ResetLocalPlayerLookAtTargets*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETLOCALPLAYERLOOKATTARGETS_METHOD_3_9CCBF530B4800993_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9BFF259FC4212C56(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ResetLocalPlayerLookAtTargets* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ResetLocalPlayerLookAtTargets*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETLOCALPLAYERLOOKATTARGETS_METHOD_3_9BFF259FC4212C56_OFFSET))(a1, a2);
		}
	};
}
