#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class SetFloorCustomValueExtraInfo; }

#define RPG_GAMECORE_SETFLOORCUSTOMSTRINGV2_METHOD_3_04BB6D2A44F8D582_OFFSET UNITYSDK_OFFSET(0x1C5FA8C0)
#define RPG_GAMECORE_SETFLOORCUSTOMSTRINGV2_METHOD_3_83E0998B92EA3D03_OFFSET UNITYSDK_OFFSET(0x1C5FA900)
#define RPG_GAMECORE_SETFLOORCUSTOMSTRINGV2__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5FA8F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetFloorCustomStringV2_TypeDefinitionIndex = 19914;

	class SetFloorCustomStringV2 : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* Name; // 0x18
		::RPG::GameCore::DynamicString* Value; // 0x20
		::System::Boolean UseExtraInfo; // 0x28
		::RPG::GameCore::SetFloorCustomValueExtraInfo* ExtraInfo; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFLOORCUSTOMSTRINGV2__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_04BB6D2A44F8D582(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetFloorCustomStringV2*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetFloorCustomStringV2*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFLOORCUSTOMSTRINGV2_METHOD_3_04BB6D2A44F8D582_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_83E0998B92EA3D03(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetFloorCustomStringV2* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetFloorCustomStringV2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFLOORCUSTOMSTRINGV2_METHOD_3_83E0998B92EA3D03_OFFSET))(a1, a2);
		}
	};
}
