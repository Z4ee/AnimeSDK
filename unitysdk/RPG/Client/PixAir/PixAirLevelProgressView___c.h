#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::PixAir { class PixAirStageData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_PIXAIR_PIXAIRLEVELPROGRESSVIEW___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A0CC950)
#define RPG_CLIENT_PIXAIR_PIXAIRLEVELPROGRESSVIEW___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0CC990)
#define RPG_CLIENT_PIXAIR_PIXAIRLEVELPROGRESSVIEW___C___GETSORTEDCOMMONSTAGEDATA_B__8_0_OFFSET UNITYSDK_OFFSET(0x1A0CC9A0)
#define RPG_CLIENT_PIXAIR_PIXAIRLEVELPROGRESSVIEW___C___GETSORTEDCOMMONSTAGEDATA_B__8_1_OFFSET UNITYSDK_OFFSET(0x1A0CCA70)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirLevelProgressView___c_TypeDefinitionIndex = 75361;

	class PixAirLevelProgressView___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::PixAir::PixAirStageData*, ::System::UInt32>** StaticGet___9__8_1()
		{
			return (::System::Func_2<::RPG::Client::PixAir::PixAirStageData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(PixAirLevelProgressView___c_TypeDefinitionIndex)->GetStaticField(0x67F30);
		}
		static ::System::Func_2<::RPG::Client::PixAir::PixAirStageData*, ::System::Boolean>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::RPG::Client::PixAir::PixAirStageData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(PixAirLevelProgressView___c_TypeDefinitionIndex)->GetStaticField(0x67F38);
		}
		static ::RPG::Client::PixAir::PixAirLevelProgressView___c** StaticGet___9()
		{
			return (::RPG::Client::PixAir::PixAirLevelProgressView___c**)Il2CppClass::FromTypeDefinitionIndex(PixAirLevelProgressView___c_TypeDefinitionIndex)->GetStaticField(0x67F40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRLEVELPROGRESSVIEW___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRLEVELPROGRESSVIEW___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __GetSortedCommonStageData_b__8_0(::RPG::Client::PixAir::PixAirStageData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PixAir::PixAirStageData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRLEVELPROGRESSVIEW___C___GETSORTEDCOMMONSTAGEDATA_B__8_0_OFFSET))(this, a1);
		}

		::System::UInt32 __GetSortedCommonStageData_b__8_1(::RPG::Client::PixAir::PixAirStageData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::PixAir::PixAirStageData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRLEVELPROGRESSVIEW___C___GETSORTEDCOMMONSTAGEDATA_B__8_1_OFFSET))(this, a1);
		}
	};
}
