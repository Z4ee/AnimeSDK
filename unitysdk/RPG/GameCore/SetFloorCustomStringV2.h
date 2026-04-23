#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class SetFloorCustomValueExtraInfo; }

#define RPG_GAMECORE_SETFLOORCUSTOMSTRINGV2_METHOD_3_522FF3C6347D869A_OFFSET UNITYSDK_OFFSET(0x18E32750)
#define RPG_GAMECORE_SETFLOORCUSTOMSTRINGV2_METHOD_3_83E0998B92EA3D03_OFFSET UNITYSDK_OFFSET(0x18E327D0)
#define RPG_GAMECORE_SETFLOORCUSTOMSTRINGV2__CTOR_OFFSET UNITYSDK_OFFSET(0x18E327A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetFloorCustomStringV2_TypeDefinitionIndex = 19675;

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

		static ::System::Void Method_3_522FF3C6347D869A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetFloorCustomStringV2*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetFloorCustomStringV2*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFLOORCUSTOMSTRINGV2_METHOD_3_522FF3C6347D869A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_83E0998B92EA3D03(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetFloorCustomStringV2* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetFloorCustomStringV2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFLOORCUSTOMSTRINGV2_METHOD_3_83E0998B92EA3D03_OFFSET))(a1, a2);
		}
	};
}
