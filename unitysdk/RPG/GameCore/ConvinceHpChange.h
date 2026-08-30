#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CONVINCEHPCHANGE_METHOD_3_C05463C3D185F966_OFFSET UNITYSDK_OFFSET(0x1D002E60)
#define RPG_GAMECORE_CONVINCEHPCHANGE_METHOD_3_E67577D54C177CBD_OFFSET UNITYSDK_OFFSET(0x1D002EA0)
#define RPG_GAMECORE_CONVINCEHPCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D002E90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConvinceHpChange_TypeDefinitionIndex = 21587;

	class ConvinceHpChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Int32 ChangeNum; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEHPCHANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C05463C3D185F966(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConvinceHpChange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConvinceHpChange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEHPCHANGE_METHOD_3_C05463C3D185F966_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E67577D54C177CBD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConvinceHpChange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConvinceHpChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEHPCHANGE_METHOD_3_E67577D54C177CBD_OFFSET))(a1, a2);
		}
	};
}
