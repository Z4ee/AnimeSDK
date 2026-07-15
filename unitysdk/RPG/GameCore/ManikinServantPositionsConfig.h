#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ManikinCustomConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MANIKINSERVANTPOSITIONSCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BCDDEC0)
#define RPG_GAMECORE_MANIKINSERVANTPOSITIONSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCDE100)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ManikinServantPositionsConfig_TypeDefinitionIndex = 16778;

	class ManikinServantPositionsConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::MVector3>* Small; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::MVector3>* Middle; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::MVector3>* Large; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::ManikinCustomConfig*>* Custom; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MANIKINSERVANTPOSITIONSCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ManikinServantPositionsConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ManikinServantPositionsConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MANIKINSERVANTPOSITIONSCONFIG_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
