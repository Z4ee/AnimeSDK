#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Utils { class MonsterCardUtils_CardGroup; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UTILS_MONSTERCARDUTILS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xEBD84F0)
#define MOLEMOLE_UTILS_MONSTERCARDUTILS___C__CTOR_OFFSET UNITYSDK_OFFSET(0xEBD8530)
#define MOLEMOLE_UTILS_MONSTERCARDUTILS___C__SORTMONSTERCARD_B__3_0_OFFSET UNITYSDK_OFFSET(0xEBD8540)

namespace MoleMole::Utils
{
	inline static constexpr unsigned int MonsterCardUtils___c_TypeDefinitionIndex = 76343;

	class MonsterCardUtils___c : public ::System::Object
	{
	public:
		static ::MoleMole::Utils::MonsterCardUtils___c** StaticGet___9()
		{
			return (::MoleMole::Utils::MonsterCardUtils___c**)Il2CppClass::FromTypeDefinitionIndex(MonsterCardUtils___c_TypeDefinitionIndex)->GetStaticField(0x3AD20);
		}
		static ::System::Comparison_1<::MoleMole::Utils::MonsterCardUtils_CardGroup*>** StaticGet___9__3_0()
		{
			return (::System::Comparison_1<::MoleMole::Utils::MonsterCardUtils_CardGroup*>**)Il2CppClass::FromTypeDefinitionIndex(MonsterCardUtils___c_TypeDefinitionIndex)->GetStaticField(0x3AD28);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_MONSTERCARDUTILS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_MONSTERCARDUTILS___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _SortMonsterCard_b__3_0(::MoleMole::Utils::MonsterCardUtils_CardGroup* a, ::MoleMole::Utils::MonsterCardUtils_CardGroup* b)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::Utils::MonsterCardUtils_CardGroup*, ::MoleMole::Utils::MonsterCardUtils_CardGroup*))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_MONSTERCARDUTILS___C__SORTMONSTERCARD_B__3_0_OFFSET))(this, a, b);
		}
	};
}
