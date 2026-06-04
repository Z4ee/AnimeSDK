#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemDisplayData; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_EXPEDITIONHARVESTDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB95D9E0)
#define RPG_CLIENT_EXPEDITIONHARVESTDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB95DA10)
#define RPG_CLIENT_EXPEDITIONHARVESTDATA___C___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0xB95DA20)

namespace RPG::Client
{
	inline static constexpr unsigned int ExpeditionHarvestData___c_TypeDefinitionIndex = 59761;

	class ExpeditionHarvestData___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ExpeditionHarvestData___c** StaticGet___9()
		{
			return (::RPG::Client::ExpeditionHarvestData___c**)Il2CppClass::FromTypeDefinitionIndex(ExpeditionHarvestData___c_TypeDefinitionIndex)->GetStaticField(0x15F80);
		}
		static ::System::Comparison_1<::RPG::Client::ItemDisplayData*>** StaticGet___9__0_0()
		{
			return (::System::Comparison_1<::RPG::Client::ItemDisplayData*>**)Il2CppClass::FromTypeDefinitionIndex(ExpeditionHarvestData___c_TypeDefinitionIndex)->GetStaticField(0x15F88);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONHARVESTDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONHARVESTDATA___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __ctor_b__0_0(::RPG::Client::ItemDisplayData* a1, ::RPG::Client::ItemDisplayData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ItemDisplayData*, ::RPG::Client::ItemDisplayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONHARVESTDATA___C___CTOR_B__0_0_OFFSET))(this, a1, a2);
		}
	};
}
