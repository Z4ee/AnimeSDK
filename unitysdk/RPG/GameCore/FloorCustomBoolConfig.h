#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FloorCustomValueConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_FLOORCUSTOMBOOLCONFIG_METHOD_3_11A85539676321E1_OFFSET UNITYSDK_OFFSET(0x1D10B9E0)
#define RPG_GAMECORE_FLOORCUSTOMBOOLCONFIG_METHOD_3_87574FA4538422F7_OFFSET UNITYSDK_OFFSET(0x1D10B840)
#define RPG_GAMECORE_FLOORCUSTOMBOOLCONFIG_METHOD_3_B60A945E0CFDBE76_OFFSET UNITYSDK_OFFSET(0x1D10BA10)
#define RPG_GAMECORE_FLOORCUSTOMBOOLCONFIG_METHOD_3_DC6F62D6D4E71DC8_OFFSET UNITYSDK_OFFSET(0x1D10B880)
#define RPG_GAMECORE_FLOORCUSTOMBOOLCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D10B870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FloorCustomBoolConfig_TypeDefinitionIndex = 18068;

	class FloorCustomBoolConfig : public ::RPG::GameCore::FloorCustomValueConfig
	{
	public:
		::System::Boolean DefaultValue; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORCUSTOMBOOLCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_87574FA4538422F7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FloorCustomBoolConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FloorCustomBoolConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORCUSTOMBOOLCONFIG_METHOD_3_87574FA4538422F7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DC6F62D6D4E71DC8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FloorCustomBoolConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FloorCustomBoolConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORCUSTOMBOOLCONFIG_METHOD_3_DC6F62D6D4E71DC8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_11A85539676321E1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FloorCustomBoolConfig*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FloorCustomBoolConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORCUSTOMBOOLCONFIG_METHOD_3_11A85539676321E1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B60A945E0CFDBE76(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FloorCustomBoolConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FloorCustomBoolConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORCUSTOMBOOLCONFIG_METHOD_3_B60A945E0CFDBE76_OFFSET))(a1, a2);
		}
	};
}
