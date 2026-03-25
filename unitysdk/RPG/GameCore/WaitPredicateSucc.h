#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITPREDICATESUCC_METHOD_3_69022AAB0E332A77_OFFSET UNITYSDK_OFFSET(0x179007C0)
#define RPG_GAMECORE_WAITPREDICATESUCC_METHOD_3_A22805024C2A7E40_OFFSET UNITYSDK_OFFSET(0x17900750)
#define RPG_GAMECORE_WAITPREDICATESUCC__CTOR_OFFSET UNITYSDK_OFFSET(0x17900790)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitPredicateSucc_TypeDefinitionIndex = 20264;

	class WaitPredicateSucc : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPREDICATESUCC__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A22805024C2A7E40(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitPredicateSucc*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitPredicateSucc*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPREDICATESUCC_METHOD_3_A22805024C2A7E40_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_69022AAB0E332A77(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitPredicateSucc* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitPredicateSucc*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPREDICATESUCC_METHOD_3_69022AAB0E332A77_OFFSET))(a1, a2);
		}
	};
}
