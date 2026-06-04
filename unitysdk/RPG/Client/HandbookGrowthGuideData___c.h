#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBCE9570)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBCE95B0)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA___C___INITROGUETOURNRELICSETIDTOGUIDEDATAMAP_B__28_0_OFFSET UNITYSDK_OFFSET(0xBCE95C0)

namespace RPG::Client
{
	inline static constexpr unsigned int HandbookGrowthGuideData___c_TypeDefinitionIndex = 61349;

	class HandbookGrowthGuideData___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::System::UInt32>** StaticGet___9__28_0()
		{
			return (::System::Comparison_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(HandbookGrowthGuideData___c_TypeDefinitionIndex)->GetStaticField(0x3F0F0);
		}
		static ::RPG::Client::HandbookGrowthGuideData___c** StaticGet___9()
		{
			return (::RPG::Client::HandbookGrowthGuideData___c**)Il2CppClass::FromTypeDefinitionIndex(HandbookGrowthGuideData___c_TypeDefinitionIndex)->GetStaticField(0x3F0F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __InitRogueTournRelicSetIDToGuideDataMap_b__28_0(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA___C___INITROGUETOURNRELICSETIDTOGUIDEDATAMAP_B__28_0_OFFSET))(this, a1, a2);
		}
	};
}
