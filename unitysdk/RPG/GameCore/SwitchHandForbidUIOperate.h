#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SWITCHHANDFORBIDUIOPERATE_METHOD_3_063F2B448F31F24C_OFFSET UNITYSDK_OFFSET(0x19CDAE20)
#define RPG_GAMECORE_SWITCHHANDFORBIDUIOPERATE_METHOD_3_9E5E06D843C7DBDD_OFFSET UNITYSDK_OFFSET(0x19CDAEA0)
#define RPG_GAMECORE_SWITCHHANDFORBIDUIOPERATE__CTOR_OFFSET UNITYSDK_OFFSET(0x19CDAE70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchHandForbidUIOperate_TypeDefinitionIndex = 19815;

	class SwitchHandForbidUIOperate : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Forbid; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHHANDFORBIDUIOPERATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_063F2B448F31F24C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchHandForbidUIOperate*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchHandForbidUIOperate*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHHANDFORBIDUIOPERATE_METHOD_3_063F2B448F31F24C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9E5E06D843C7DBDD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchHandForbidUIOperate* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchHandForbidUIOperate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHHANDFORBIDUIOPERATE_METHOD_3_9E5E06D843C7DBDD_OFFSET))(a1, a2);
		}
	};
}
