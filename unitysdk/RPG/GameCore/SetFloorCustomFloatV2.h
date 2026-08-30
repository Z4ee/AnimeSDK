#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class SetFloorCustomValueExtraInfo; }

#define RPG_GAMECORE_SETFLOORCUSTOMFLOATV2_METHOD_3_0C129CD1F9DF8C63_OFFSET UNITYSDK_OFFSET(0x1D4FFB20)
#define RPG_GAMECORE_SETFLOORCUSTOMFLOATV2_METHOD_3_BC4EB378196F434E_OFFSET UNITYSDK_OFFSET(0x1D4FFB60)
#define RPG_GAMECORE_SETFLOORCUSTOMFLOATV2__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4FFB50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetFloorCustomFloatV2_TypeDefinitionIndex = 20458;

	class SetFloorCustomFloatV2 : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* Name; // 0x18
		::RPG::GameCore::DynamicFloat* Value; // 0x20
		::System::Boolean UseExtraInfo; // 0x28
		::RPG::GameCore::SetFloorCustomValueExtraInfo* ExtraInfo; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFLOORCUSTOMFLOATV2__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0C129CD1F9DF8C63(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetFloorCustomFloatV2*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetFloorCustomFloatV2*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFLOORCUSTOMFLOATV2_METHOD_3_0C129CD1F9DF8C63_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BC4EB378196F434E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetFloorCustomFloatV2* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetFloorCustomFloatV2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFLOORCUSTOMFLOATV2_METHOD_3_BC4EB378196F434E_OFFSET))(a1, a2);
		}
	};
}
