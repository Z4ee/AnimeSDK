#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_CHESS_BYHASLOCKTARGET_METHOD_4_0AE146482DA4C523_OFFSET UNITYSDK_OFFSET(0x17695030)
#define RPG_GAMECORE_ST_CHESS_BYHASLOCKTARGET_METHOD_4_AAFF1623CB143EA9_OFFSET UNITYSDK_OFFSET(0x17695100)
#define RPG_GAMECORE_ST_CHESS_BYHASLOCKTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x176950B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Chess_ByHasLockTarget_TypeDefinitionIndex = 22001;

	class ST_Chess_ByHasLockTarget : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_CHESS_BYHASLOCKTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_0AE146482DA4C523(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Chess_ByHasLockTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Chess_ByHasLockTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_CHESS_BYHASLOCKTARGET_METHOD_4_0AE146482DA4C523_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_AAFF1623CB143EA9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Chess_ByHasLockTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Chess_ByHasLockTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_CHESS_BYHASLOCKTARGET_METHOD_4_AAFF1623CB143EA9_OFFSET))(a1, a2);
		}
	};
}
