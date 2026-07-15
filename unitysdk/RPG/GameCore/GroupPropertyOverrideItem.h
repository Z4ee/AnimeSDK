#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_GROUPPROPERTYOVERRIDEITEM_METHOD_2_DDF1CCCD4360C2B1_OFFSET UNITYSDK_OFFSET(0x1D081AB0)
#define RPG_GAMECORE_GROUPPROPERTYOVERRIDEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D081C40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GroupPropertyOverrideItem_TypeDefinitionIndex = 18294;

	class GroupPropertyOverrideItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 GroupID; // 0x10
		::System::String* Key; // 0x18
		::System::Int32 Value; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPPROPERTYOVERRIDEITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_DDF1CCCD4360C2B1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GroupPropertyOverrideItem*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GroupPropertyOverrideItem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPPROPERTYOVERRIDEITEM_METHOD_2_DDF1CCCD4360C2B1_OFFSET))(a1, a2);
		}
	};
}
