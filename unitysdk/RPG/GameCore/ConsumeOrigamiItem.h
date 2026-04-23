#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class SimpleTalkInfo; }

#define RPG_GAMECORE_CONSUMEORIGAMIITEM_METHOD_3_01F557D9C53AAE91_OFFSET UNITYSDK_OFFSET(0x1883AE40)
#define RPG_GAMECORE_CONSUMEORIGAMIITEM_METHOD_3_DE946FC641107ACA_OFFSET UNITYSDK_OFFSET(0x1883AEC0)
#define RPG_GAMECORE_CONSUMEORIGAMIITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1883AE90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConsumeOrigamiItem_TypeDefinitionIndex = 20716;

	class ConsumeOrigamiItem : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* ColonyID; // 0x18
		::RPG::Client::TextID Desc; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSubmitConfirm; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSubmitCancel; // 0x38
		::RPG::GameCore::SimpleTalkInfo* SimpleTalk; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSUMEORIGAMIITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_01F557D9C53AAE91(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConsumeOrigamiItem*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConsumeOrigamiItem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSUMEORIGAMIITEM_METHOD_3_01F557D9C53AAE91_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DE946FC641107ACA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConsumeOrigamiItem* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConsumeOrigamiItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSUMEORIGAMIITEM_METHOD_3_DE946FC641107ACA_OFFSET))(a1, a2);
		}
	};
}
