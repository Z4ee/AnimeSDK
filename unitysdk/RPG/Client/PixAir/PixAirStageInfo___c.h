#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::PixAir { class PixAirStageData; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_PIXAIR_PIXAIRSTAGEINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC3EB600)
#define RPG_CLIENT_PIXAIR_PIXAIRSTAGEINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC3EB640)
#define RPG_CLIENT_PIXAIR_PIXAIRSTAGEINFO___C__GETSORTEDNORMALSTAGELIST_B__33_0_OFFSET UNITYSDK_OFFSET(0xC3EB650)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirStageInfo___c_TypeDefinitionIndex = 73699;

	class PixAirStageInfo___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::PixAir::PixAirStageData*>** StaticGet___9__33_0()
		{
			return (::System::Comparison_1<::RPG::Client::PixAir::PixAirStageData*>**)Il2CppClass::FromTypeDefinitionIndex(PixAirStageInfo___c_TypeDefinitionIndex)->GetStaticField(0x8330);
		}
		static ::RPG::Client::PixAir::PixAirStageInfo___c** StaticGet___9()
		{
			return (::RPG::Client::PixAir::PixAirStageInfo___c**)Il2CppClass::FromTypeDefinitionIndex(PixAirStageInfo___c_TypeDefinitionIndex)->GetStaticField(0x8338);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSTAGEINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSTAGEINFO___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetSortedNormalStageList_b__33_0(::RPG::Client::PixAir::PixAirStageData* a1, ::RPG::Client::PixAir::PixAirStageData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PixAir::PixAirStageData*, ::RPG::Client::PixAir::PixAirStageData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSTAGEINFO___C__GETSORTEDNORMALSTAGELIST_B__33_0_OFFSET))(this, a1, a2);
		}
	};
}
