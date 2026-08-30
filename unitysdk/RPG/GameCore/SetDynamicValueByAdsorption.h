#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/ParamRoundingType.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PropertyAdsorptionConfig; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYADSORPTION_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1E819600)
#define RPG_GAMECORE_SETDYNAMICVALUEBYADSORPTION_METHOD_4_D2ECB7F547235812_OFFSET UNITYSDK_OFFSET(0x1E8193C0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYADSORPTION_METHOD_4_FEB84096FF7BE1A3_OFFSET UNITYSDK_OFFSET(0x1E819400)
#define RPG_GAMECORE_SETDYNAMICVALUEBYADSORPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8193F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByAdsorption_TypeDefinitionIndex = 23562;

	class SetDynamicValueByAdsorption : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::RPG::GameCore::ParamRoundingType RoundingType; // 0x24
		::RPG::GameCore::PropertyAdsorptionConfig* AdsorptionConfig; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYADSORPTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D2ECB7F547235812(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByAdsorption*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByAdsorption*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYADSORPTION_METHOD_4_D2ECB7F547235812_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FEB84096FF7BE1A3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByAdsorption* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByAdsorption*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYADSORPTION_METHOD_4_FEB84096FF7BE1A3_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYADSORPTION_GETDYNAMICKEY_OFFSET))(this);
		}
	};
}
