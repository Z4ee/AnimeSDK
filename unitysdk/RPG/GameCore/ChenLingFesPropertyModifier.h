#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingFesProperty.h"
#include "unitysdk/RPG/GameCore/ChenLingFesPropertyOperation.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChenLingFesToastConfig; }
namespace System { class String; }

#define RPG_GAMECORE_CHENLINGFESPROPERTYMODIFIER_METHOD_2_3432DB050A2EA3B4_OFFSET UNITYSDK_OFFSET(0x1CFB4A70)
#define RPG_GAMECORE_CHENLINGFESPROPERTYMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFB4C70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingFesPropertyModifier_TypeDefinitionIndex = 18236;

	class ChenLingFesPropertyModifier : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ChenLingFesProperty Property; // 0x10
		::RPG::GameCore::ChenLingFesPropertyOperation Operation; // 0x14
		::System::String* Value; // 0x18
		::System::Single Multiplier; // 0x20
		::RPG::GameCore::ChenLingFesToastConfig* ToastConfig; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESPROPERTYMODIFIER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_3432DB050A2EA3B4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingFesPropertyModifier*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingFesPropertyModifier*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESPROPERTYMODIFIER_METHOD_2_3432DB050A2EA3B4_OFFSET))(a1, a2);
		}
	};
}
