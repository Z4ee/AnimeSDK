#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_FLOORCUSTOMVALUECONFIG_METHOD_2_3EFC69FCD1845D7A_OFFSET UNITYSDK_OFFSET(0x1DCADF50)
#define RPG_GAMECORE_FLOORCUSTOMVALUECONFIG_METHOD_2_75EA2AB08D969260_OFFSET UNITYSDK_OFFSET(0x1DCAE200)
#define RPG_GAMECORE_FLOORCUSTOMVALUECONFIG_METHOD_2_B2AEC0CE9688E3D4_OFFSET UNITYSDK_OFFSET(0x1DCADD10)
#define RPG_GAMECORE_FLOORCUSTOMVALUECONFIG_METHOD_2_BEBB414CC4EFA368_OFFSET UNITYSDK_OFFSET(0x1DCAE5B0)
#define RPG_GAMECORE_FLOORCUSTOMVALUECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCAD140)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FloorCustomValueConfig_TypeDefinitionIndex = 18066;

	class FloorCustomValueConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::String* Name; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORCUSTOMVALUECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_B2AEC0CE9688E3D4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FloorCustomValueConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FloorCustomValueConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORCUSTOMVALUECONFIG_METHOD_2_B2AEC0CE9688E3D4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_3EFC69FCD1845D7A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FloorCustomValueConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FloorCustomValueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORCUSTOMVALUECONFIG_METHOD_2_3EFC69FCD1845D7A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_75EA2AB08D969260(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FloorCustomValueConfig*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FloorCustomValueConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORCUSTOMVALUECONFIG_METHOD_2_75EA2AB08D969260_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_BEBB414CC4EFA368(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FloorCustomValueConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FloorCustomValueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORCUSTOMVALUECONFIG_METHOD_2_BEBB414CC4EFA368_OFFSET))(a1, a2);
		}
	};
}
