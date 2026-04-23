#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class HipplenRequireGoodsConfig; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define RPG_GAMECORE_HIPPLENPICKINGGOODSNPCCONFIG_METHOD_2_7B5C471D8F0190AE_OFFSET UNITYSDK_OFFSET(0x18A055B0)
#define RPG_GAMECORE_HIPPLENPICKINGGOODSNPCCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18A05920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HipplenPickingGoodsNPCConfig_TypeDefinitionIndex = 15903;

	class HipplenPickingGoodsNPCConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean IsLocalPlayer; // 0x10
		::System::String* NPCID; // 0x18
		::Il2CppArray<::RPG::GameCore::HipplenRequireGoodsConfig*>* RequireGoods; // 0x20
		::System::Boolean OverrideBubbleOffset; // 0x28
		::RPG::MVector3 BubbleOffset; // 0x2C
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnLoaded; // 0x38
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSucc; // 0x40
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnFail; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENPICKINGGOODSNPCCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_7B5C471D8F0190AE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HipplenPickingGoodsNPCConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HipplenPickingGoodsNPCConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENPICKINGGOODSNPCCONFIG_METHOD_2_7B5C471D8F0190AE_OFFSET))(a1, a2);
		}
	};
}
