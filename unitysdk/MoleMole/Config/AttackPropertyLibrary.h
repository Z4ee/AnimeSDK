#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class AttackPropWrap; }
namespace MoleMole::Config { class HitGroundWrap; }
namespace MoleMole::Config { class ShakeWrap; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_ATTACKPROPERTYLIBRARY__CTOR_OFFSET UNITYSDK_OFFSET(0x12A4A330)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AttackPropertyLibrary_TypeDefinitionIndex = 54073;

	class AttackPropertyLibrary : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::AttackPropWrap*>* StandardLibrary; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::HitGroundWrap*>* HitGroundLibrary; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ShakeWrap*>* ShakeLibrary; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTACKPROPERTYLIBRARY__CTOR_OFFSET))(this);
		}
	};
}
