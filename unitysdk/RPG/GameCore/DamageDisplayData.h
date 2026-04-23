#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ElementDamageType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AdditionalDisplayData; }
namespace System { class String; }

#define RPG_GAMECORE_DAMAGEDISPLAYDATA_METHOD_2_56AE97AD92E6CF6E_OFFSET UNITYSDK_OFFSET(0x1884EAD0)
#define RPG_GAMECORE_DAMAGEDISPLAYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1884F080)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DamageDisplayData_TypeDefinitionIndex = 21462;

	class DamageDisplayData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single UIMessageHeight; // 0x10
		::System::Single HorizontalOffset; // 0x14
		::System::Single DitherRangeX; // 0x18
		::System::Single DitherRangeY; // 0x1C
		::System::String* AttachPoint; // 0x20
		::RPG::GameCore::AdditionalDisplayData* AdditionalDisplay; // 0x28
		::System::Single Duration; // 0x30
		::System::Single Scale; // 0x34
		::System::Boolean FixedPosition; // 0x38
		::System::Boolean ForceVisible; // 0x39
		::RPG::Client::TextID ExtraDesc; // 0x40
		::RPG::GameCore::ElementDamageType ElementDamageType; // 0x50
		::System::String* StatusIconPathHighSize; // 0x58
		::System::Boolean SkipAttachPointXZOffset; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGEDISPLAYDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_56AE97AD92E6CF6E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DamageDisplayData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DamageDisplayData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGEDISPLAYDATA_METHOD_2_56AE97AD92E6CF6E_OFFSET))(a1, a2);
		}
	};
}
