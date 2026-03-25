#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PlayerDiaryItemData; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_PLAYERDIARYDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9FE5590)
#define RPG_CLIENT_PLAYERDIARYDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9FE55D0)
#define RPG_CLIENT_PLAYERDIARYDATA___C__SYNC_B__0_0_OFFSET UNITYSDK_OFFSET(0x9FE55E0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerDiaryData___c_TypeDefinitionIndex = 52191;

	class PlayerDiaryData___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::PlayerDiaryItemData*>** StaticGet___9__0_0()
		{
			return (::System::Comparison_1<::RPG::Client::PlayerDiaryItemData*>**)Il2CppClass::FromTypeDefinitionIndex(PlayerDiaryData___c_TypeDefinitionIndex)->GetStaticField(0x47210);
		}
		static ::RPG::Client::PlayerDiaryData___c** StaticGet___9()
		{
			return (::RPG::Client::PlayerDiaryData___c**)Il2CppClass::FromTypeDefinitionIndex(PlayerDiaryData___c_TypeDefinitionIndex)->GetStaticField(0x47218);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDIARYDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDIARYDATA___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _Sync_b__0_0(::RPG::Client::PlayerDiaryItemData* a, ::RPG::Client::PlayerDiaryItemData* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PlayerDiaryItemData*, ::RPG::Client::PlayerDiaryItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDIARYDATA___C__SYNC_B__0_0_OFFSET))(this, a, b);
		}
	};
}
