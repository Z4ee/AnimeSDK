#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicBool; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class SetFloorCustomValueExtraInfo; }

#define RPG_GAMECORE_SETFLOORCUSTOMBOOL_METHOD_3_B6C414C0FA66B6B4_OFFSET UNITYSDK_OFFSET(0x176CE590)
#define RPG_GAMECORE_SETFLOORCUSTOMBOOL_METHOD_3_DEED5FC6CA5C68FD_OFFSET UNITYSDK_OFFSET(0x176CE510)
#define RPG_GAMECORE_SETFLOORCUSTOMBOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x176CE560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetFloorCustomBool_TypeDefinitionIndex = 19009;

	class SetFloorCustomBool : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* Name; // 0x18
		::RPG::GameCore::DynamicBool* Value; // 0x20
		::System::Boolean UseExtraInfo; // 0x28
		::RPG::GameCore::SetFloorCustomValueExtraInfo* ExtraInfo; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFLOORCUSTOMBOOL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DEED5FC6CA5C68FD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetFloorCustomBool*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetFloorCustomBool*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFLOORCUSTOMBOOL_METHOD_3_DEED5FC6CA5C68FD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B6C414C0FA66B6B4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetFloorCustomBool* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetFloorCustomBool*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFLOORCUSTOMBOOL_METHOD_3_B6C414C0FA66B6B4_OFFSET))(a1, a2);
		}
	};
}
