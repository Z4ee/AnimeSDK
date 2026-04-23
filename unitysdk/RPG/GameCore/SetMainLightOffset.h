#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SetMainLightOffsetType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SETMAINLIGHTOFFSET_METHOD_3_B1EC9FD9A7B2E713_OFFSET UNITYSDK_OFFSET(0x18E37D70)
#define RPG_GAMECORE_SETMAINLIGHTOFFSET_METHOD_3_BCD805938C37A604_OFFSET UNITYSDK_OFFSET(0x18E37DF0)
#define RPG_GAMECORE_SETMAINLIGHTOFFSET__CTOR_OFFSET UNITYSDK_OFFSET(0x18E37DC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetMainLightOffset_TypeDefinitionIndex = 22356;

	class SetMainLightOffset : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::SetMainLightOffsetType SetType; // 0x18
		::Il2CppArray<::System::Int32>* TargetVal; // 0x20
		::System::String* PresetName; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMAINLIGHTOFFSET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B1EC9FD9A7B2E713(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetMainLightOffset*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetMainLightOffset*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMAINLIGHTOFFSET_METHOD_3_B1EC9FD9A7B2E713_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BCD805938C37A604(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetMainLightOffset* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetMainLightOffset*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMAINLIGHTOFFSET_METHOD_3_BCD805938C37A604_OFFSET))(a1, a2);
		}
	};
}
