#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_349BE0BAA6D56377;
namespace RPG::Client { class RogueTournDifficultyCompData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ROGUETOURNDIFFICULTYCOMPDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19C20440)
#define RPG_CLIENT_ROGUETOURNDIFFICULTYCOMPDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19C20480)
#define RPG_CLIENT_ROGUETOURNDIFFICULTYCOMPDATA___C__GETALLDATABYTOURN_B__2_1_OFFSET UNITYSDK_OFFSET(0x19C20490)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournDifficultyCompData___c_TypeDefinitionIndex = 64585;

	class RogueTournDifficultyCompData___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_1_349BE0BAA6D56377*, ::RPG::Client::RogueTournDifficultyCompData*>** StaticGet___9__2_1()
		{
			return (::System::Func_2<::Class_1_349BE0BAA6D56377*, ::RPG::Client::RogueTournDifficultyCompData*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournDifficultyCompData___c_TypeDefinitionIndex)->GetStaticField(0x2A8C0);
		}
		static ::RPG::Client::RogueTournDifficultyCompData___c** StaticGet___9()
		{
			return (::RPG::Client::RogueTournDifficultyCompData___c**)Il2CppClass::FromTypeDefinitionIndex(RogueTournDifficultyCompData___c_TypeDefinitionIndex)->GetStaticField(0x2A8C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIFFICULTYCOMPDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIFFICULTYCOMPDATA___C__CTOR_OFFSET))(this);
		}

		::RPG::Client::RogueTournDifficultyCompData* _GetAllDataByTourn_b__2_1(::Class_1_349BE0BAA6D56377* a1)
		{
			return ((::RPG::Client::RogueTournDifficultyCompData*(*)(::PVOID, ::Class_1_349BE0BAA6D56377*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIFFICULTYCOMPDATA___C__GETALLDATABYTOURN_B__2_1_OFFSET))(this, a1);
		}
	};
}
