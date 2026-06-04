#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_FLOORCUSTOMVALUECONFIG_METHOD_2_29DBF2A6C3B63049_OFFSET UNITYSDK_OFFSET(0x19761A20)
#define RPG_GAMECORE_FLOORCUSTOMVALUECONFIG_METHOD_2_3EFC69FCD1845D7A_OFFSET UNITYSDK_OFFSET(0x19761770)
#define RPG_GAMECORE_FLOORCUSTOMVALUECONFIG_METHOD_2_A2B10018ABE3103A_OFFSET UNITYSDK_OFFSET(0x19761C90)
#define RPG_GAMECORE_FLOORCUSTOMVALUECONFIG_METHOD_2_B2AEC0CE9688E3D4_OFFSET UNITYSDK_OFFSET(0x19761530)
#define RPG_GAMECORE_FLOORCUSTOMVALUECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19760B70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FloorCustomValueConfig_TypeDefinitionIndex = 17375;

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

		static ::System::Void Method_2_29DBF2A6C3B63049(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FloorCustomValueConfig*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FloorCustomValueConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORCUSTOMVALUECONFIG_METHOD_2_29DBF2A6C3B63049_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_A2B10018ABE3103A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FloorCustomValueConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FloorCustomValueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORCUSTOMVALUECONFIG_METHOD_2_A2B10018ABE3103A_OFFSET))(a1, a2);
		}
	};
}
