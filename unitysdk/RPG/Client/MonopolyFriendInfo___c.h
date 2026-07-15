#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonopolyFriendRankingDisplayDataItem; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_MONOPOLYFRIENDINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1952A3B0)
#define RPG_CLIENT_MONOPOLYFRIENDINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1952A3F0)
#define RPG_CLIENT_MONOPOLYFRIENDINFO___C__SORTFRIENDRANKDATA_B__8_0_OFFSET UNITYSDK_OFFSET(0x1952A400)
#define RPG_CLIENT_MONOPOLYFRIENDINFO___C__SORTFRIENDRANKDATA_B__8_1_OFFSET UNITYSDK_OFFSET(0x1952A420)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyFriendInfo___c_TypeDefinitionIndex = 63312;

	class MonopolyFriendInfo___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::MonopolyFriendRankingDisplayDataItem*, ::System::UInt32>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::RPG::Client::MonopolyFriendRankingDisplayDataItem*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(MonopolyFriendInfo___c_TypeDefinitionIndex)->GetStaticField(0x59E50);
		}
		static ::RPG::Client::MonopolyFriendInfo___c** StaticGet___9()
		{
			return (::RPG::Client::MonopolyFriendInfo___c**)Il2CppClass::FromTypeDefinitionIndex(MonopolyFriendInfo___c_TypeDefinitionIndex)->GetStaticField(0x59E58);
		}
		static ::System::Func_2<::RPG::Client::MonopolyFriendRankingDisplayDataItem*, ::System::UInt32>** StaticGet___9__8_1()
		{
			return (::System::Func_2<::RPG::Client::MonopolyFriendRankingDisplayDataItem*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(MonopolyFriendInfo___c_TypeDefinitionIndex)->GetStaticField(0x59E60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYFRIENDINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYFRIENDINFO___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _SortFriendRankData_b__8_0(::RPG::Client::MonopolyFriendRankingDisplayDataItem* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::MonopolyFriendRankingDisplayDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYFRIENDINFO___C__SORTFRIENDRANKDATA_B__8_0_OFFSET))(this, a1);
		}

		::System::UInt32 _SortFriendRankData_b__8_1(::RPG::Client::MonopolyFriendRankingDisplayDataItem* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::MonopolyFriendRankingDisplayDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYFRIENDINFO___C__SORTFRIENDRANKDATA_B__8_1_OFFSET))(this, a1);
		}
	};
}
