#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_DISABLEMAZELOCKTARGET_METHOD_3_A8F197A596744DDB_OFFSET UNITYSDK_OFFSET(0x17172B10)
#define RPG_GAMECORE_DISABLEMAZELOCKTARGET_METHOD_3_C5F557868227D07F_OFFSET UNITYSDK_OFFSET(0x17172B90)
#define RPG_GAMECORE_DISABLEMAZELOCKTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x17172B60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DisableMazeLockTarget_TypeDefinitionIndex = 18441;

	class DisableMazeLockTarget : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x18
		::System::Boolean Disable; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISABLEMAZELOCKTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A8F197A596744DDB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DisableMazeLockTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DisableMazeLockTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISABLEMAZELOCKTARGET_METHOD_3_A8F197A596744DDB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C5F557868227D07F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DisableMazeLockTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DisableMazeLockTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISABLEMAZELOCKTARGET_METHOD_3_C5F557868227D07F_OFFSET))(a1, a2);
		}
	};
}
