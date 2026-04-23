#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FateExpRewardLevelDataItem; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_FATEEXPREWARDINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA33A570)
#define RPG_CLIENT_FATEEXPREWARDINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA33A5A0)
#define RPG_CLIENT_FATEEXPREWARDINFO___C__INIT_B__1_0_OFFSET UNITYSDK_OFFSET(0xA33A5B0)

namespace RPG::Client
{
	inline static constexpr unsigned int FateExpRewardInfo___c_TypeDefinitionIndex = 58881;

	class FateExpRewardInfo___c : public ::System::Object
	{
	public:
		static ::RPG::Client::FateExpRewardInfo___c** StaticGet___9()
		{
			return (::RPG::Client::FateExpRewardInfo___c**)Il2CppClass::FromTypeDefinitionIndex(FateExpRewardInfo___c_TypeDefinitionIndex)->GetStaticField(0xB5C0);
		}
		static ::System::Comparison_1<::RPG::Client::FateExpRewardLevelDataItem*>** StaticGet___9__1_0()
		{
			return (::System::Comparison_1<::RPG::Client::FateExpRewardLevelDataItem*>**)Il2CppClass::FromTypeDefinitionIndex(FateExpRewardInfo___c_TypeDefinitionIndex)->GetStaticField(0xB5C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEEXPREWARDINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEEXPREWARDINFO___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _Init_b__1_0(::RPG::Client::FateExpRewardLevelDataItem* a, ::RPG::Client::FateExpRewardLevelDataItem* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::FateExpRewardLevelDataItem*, ::RPG::Client::FateExpRewardLevelDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEEXPREWARDINFO___C__INIT_B__1_0_OFFSET))(this, a, b);
		}
	};
}
