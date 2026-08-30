#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_PIXAIREFFECTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7906F0)
#define RPG_GAMECORE_PIXAIREFFECTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D790920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PixAirEffectRow_TypeDefinitionIndex = 12088;

	class PixAirEffectRow : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* ParamMap; // 0x10
		::Il2CppArray<::System::UInt32>* ParamList; // 0x18
		::RPG::Client::TextID Desc; // 0x20
		::System::UInt32 EffectID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIREFFECTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PixAirEffectRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PixAirEffectRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIREFFECTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
