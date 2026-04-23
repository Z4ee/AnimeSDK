#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_RTOWNERENTITYADDABILITY_METHOD_3_1469F73ED87B0B98_OFFSET UNITYSDK_OFFSET(0x18DD5110)
#define RPG_GAMECORE_RTOWNERENTITYADDABILITY_METHOD_3_CD24AE5C67381FA1_OFFSET UNITYSDK_OFFSET(0x18DD5090)
#define RPG_GAMECORE_RTOWNERENTITYADDABILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x18DD50E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtOwnerEntityAddAbility_TypeDefinitionIndex = 23074;

	class RtOwnerEntityAddAbility : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* AbilityName; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicFloat*>* DynamicValues; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTOWNERENTITYADDABILITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CD24AE5C67381FA1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtOwnerEntityAddAbility*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtOwnerEntityAddAbility*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTOWNERENTITYADDABILITY_METHOD_3_CD24AE5C67381FA1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1469F73ED87B0B98(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtOwnerEntityAddAbility* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtOwnerEntityAddAbility*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTOWNERENTITYADDABILITY_METHOD_3_1469F73ED87B0B98_OFFSET))(a1, a2);
		}
	};
}
