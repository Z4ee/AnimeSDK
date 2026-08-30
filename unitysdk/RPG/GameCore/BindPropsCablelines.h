#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_BINDPROPSCABLELINES_METHOD_3_06E45BCC8C5BBD73_OFFSET UNITYSDK_OFFSET(0x1B30AFC0)
#define RPG_GAMECORE_BINDPROPSCABLELINES_METHOD_3_3CF002D54AEC4335_OFFSET UNITYSDK_OFFSET(0x1B30B0A0)
#define RPG_GAMECORE_BINDPROPSCABLELINES__CTOR_OFFSET UNITYSDK_OFFSET(0x1B30B040)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BindPropsCablelines_TypeDefinitionIndex = 21023;

	class BindPropsCablelines : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 StartPropInstanceID; // 0x18
		::System::UInt32 EndPropInstanceID; // 0x1C
		::System::UInt32 LinePropInstanceID; // 0x20
		::RPG::GameCore::DynamicString* LineEffectPath; // 0x28
		::RPG::GameCore::DynamicString* MoveEffectPath; // 0x30
		::RPG::GameCore::DynamicFloat* MoveEffectSpeedOverride; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BINDPROPSCABLELINES__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_06E45BCC8C5BBD73(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BindPropsCablelines*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BindPropsCablelines*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BINDPROPSCABLELINES_METHOD_3_06E45BCC8C5BBD73_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3CF002D54AEC4335(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BindPropsCablelines* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BindPropsCablelines*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BINDPROPSCABLELINES_METHOD_3_3CF002D54AEC4335_OFFSET))(a1, a2);
		}
	};
}
