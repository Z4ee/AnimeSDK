#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SwitchRefBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SWITCHREFGRAPHDYNAMICSTRING_METHOD_3_DB8429442197E274_OFFSET UNITYSDK_OFFSET(0x18EBFE60)
#define RPG_GAMECORE_SWITCHREFGRAPHDYNAMICSTRING_METHOD_3_E969C6D2344C5CBB_OFFSET UNITYSDK_OFFSET(0x18EBF6A0)
#define RPG_GAMECORE_SWITCHREFGRAPHDYNAMICSTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x18EBF690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchRefGraphDynamicString_TypeDefinitionIndex = 16631;

	class SwitchRefGraphDynamicString : public ::RPG::GameCore::SwitchRefBase
	{
	public:
		::System::String* Name; // 0x10
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHREFGRAPHDYNAMICSTRING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DB8429442197E274(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchRefGraphDynamicString*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchRefGraphDynamicString*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHREFGRAPHDYNAMICSTRING_METHOD_3_DB8429442197E274_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E969C6D2344C5CBB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchRefGraphDynamicString* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchRefGraphDynamicString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHREFGRAPHDYNAMICSTRING_METHOD_3_E969C6D2344C5CBB_OFFSET))(a1, a2);
		}
	};
}
