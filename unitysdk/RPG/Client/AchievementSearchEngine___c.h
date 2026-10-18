#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AchievementData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ACHIEVEMENTSEARCHENGINE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC3AC580)
#define RPG_CLIENT_ACHIEVEMENTSEARCHENGINE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC3AC5C0)
#define RPG_CLIENT_ACHIEVEMENTSEARCHENGINE___C__SEARCHBYNAME_B__5_0_OFFSET UNITYSDK_OFFSET(0xC3AC5D0)
#define RPG_CLIENT_ACHIEVEMENTSEARCHENGINE___C__SEARCHBYNAME_B__5_1_OFFSET UNITYSDK_OFFSET(0xC3AC5F0)

namespace RPG::Client
{
	inline static constexpr unsigned int AchievementSearchEngine___c_TypeDefinitionIndex = 61363;

	class AchievementSearchEngine___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::AchievementData*, ::System::UInt32>** StaticGet___9__5_1()
		{
			return (::System::Func_2<::RPG::Client::AchievementData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(AchievementSearchEngine___c_TypeDefinitionIndex)->GetStaticField(0x117C0);
		}
		static ::System::Func_2<::RPG::Client::AchievementData*, ::System::UInt32>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::RPG::Client::AchievementData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(AchievementSearchEngine___c_TypeDefinitionIndex)->GetStaticField(0x117C8);
		}
		static ::RPG::Client::AchievementSearchEngine___c** StaticGet___9()
		{
			return (::RPG::Client::AchievementSearchEngine___c**)Il2CppClass::FromTypeDefinitionIndex(AchievementSearchEngine___c_TypeDefinitionIndex)->GetStaticField(0x117D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTSEARCHENGINE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTSEARCHENGINE___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _SearchByName_b__5_0(::RPG::Client::AchievementData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::AchievementData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTSEARCHENGINE___C__SEARCHBYNAME_B__5_0_OFFSET))(this, a1);
		}

		::System::UInt32 _SearchByName_b__5_1(::RPG::Client::AchievementData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::AchievementData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTSEARCHENGINE___C__SEARCHBYNAME_B__5_1_OFFSET))(this, a1);
		}
	};
}
