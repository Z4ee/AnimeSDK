#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_HOYOGROUPSTREAMINGTEMPLATEITEM_METHOD_2_259C21D38A67E940_OFFSET UNITYSDK_OFFSET(0x1D195300)
#define RPG_GAMECORE_HOYOGROUPSTREAMINGTEMPLATEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D195470)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HoYoGroupStreamingTemplateItem_TypeDefinitionIndex = 17158;

	class HoYoGroupStreamingTemplateItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 FloorID; // 0x10
		::System::UInt32 GroupID; // 0x14
		::System::String* TemplateName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOGROUPSTREAMINGTEMPLATEITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_259C21D38A67E940(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HoYoGroupStreamingTemplateItem*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HoYoGroupStreamingTemplateItem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOGROUPSTREAMINGTEMPLATEITEM_METHOD_2_259C21D38A67E940_OFFSET))(a1, a2);
		}
	};
}
