#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MANIKINPETPOSITIONSCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D21FCB0)
#define RPG_GAMECORE_MANIKINPETPOSITIONSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D21FEF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ManikinPetPositionsConfig_TypeDefinitionIndex = 17283;

	class ManikinPetPositionsConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::MVector3>* Common; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::MVector3>* SmallQuadruped; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::MVector3>* SmallBiped; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::MVector3>* Floating; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MANIKINPETPOSITIONSCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ManikinPetPositionsConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ManikinPetPositionsConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MANIKINPETPOSITIONSCONFIG_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
