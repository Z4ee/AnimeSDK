#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMEFFECTITEM_METHOD_2_85C8FED0123D1481_OFFSET UNITYSDK_OFFSET(0x1D85AE30)
#define RPG_GAMECORE_FIVEDIMEFFECTITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D85AF40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimEffectItem_TypeDefinitionIndex = 16487;

	class FiveDimEffectItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* AttachPoint; // 0x10
		::System::String* EffectPath; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMEFFECTITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_85C8FED0123D1481(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimEffectItem*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimEffectItem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMEFFECTITEM_METHOD_2_85C8FED0123D1481_OFFSET))(a1, a2);
		}
	};
}
