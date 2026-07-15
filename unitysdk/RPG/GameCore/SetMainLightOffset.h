#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SetMainLightOffsetType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SETMAINLIGHTOFFSET_METHOD_3_D1C40FF49782BF5B_OFFSET UNITYSDK_OFFSET(0x1C5FF610)
#define RPG_GAMECORE_SETMAINLIGHTOFFSET_METHOD_3_DAA5938CDC14DC0A_OFFSET UNITYSDK_OFFSET(0x1C5FF5D0)
#define RPG_GAMECORE_SETMAINLIGHTOFFSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5FF600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetMainLightOffset_TypeDefinitionIndex = 22550;

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

		static ::System::Void Method_3_DAA5938CDC14DC0A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetMainLightOffset*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetMainLightOffset*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMAINLIGHTOFFSET_METHOD_3_DAA5938CDC14DC0A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D1C40FF49782BF5B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetMainLightOffset* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetMainLightOffset*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMAINLIGHTOFFSET_METHOD_3_D1C40FF49782BF5B_OFFSET))(a1, a2);
		}
	};
}
