#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class SetFloorCustomValueExtraInfo; }

#define RPG_GAMECORE_SETFLOORCUSTOMFLOAT_METHOD_3_B98A6F11CE70042F_OFFSET UNITYSDK_OFFSET(0x1D4FF8F0)
#define RPG_GAMECORE_SETFLOORCUSTOMFLOAT_METHOD_3_D7FDC0C14521E232_OFFSET UNITYSDK_OFFSET(0x1D4FF930)
#define RPG_GAMECORE_SETFLOORCUSTOMFLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4FF920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetFloorCustomFloat_TypeDefinitionIndex = 20451;

	class SetFloorCustomFloat : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* Name; // 0x18
		::RPG::GameCore::DynamicFloat* Value; // 0x20
		::System::Boolean UseExtraInfo; // 0x28
		::RPG::GameCore::SetFloorCustomValueExtraInfo* ExtraInfo; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFLOORCUSTOMFLOAT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B98A6F11CE70042F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetFloorCustomFloat*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetFloorCustomFloat*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFLOORCUSTOMFLOAT_METHOD_3_B98A6F11CE70042F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D7FDC0C14521E232(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetFloorCustomFloat* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetFloorCustomFloat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFLOORCUSTOMFLOAT_METHOD_3_D7FDC0C14521E232_OFFSET))(a1, a2);
		}
	};
}
