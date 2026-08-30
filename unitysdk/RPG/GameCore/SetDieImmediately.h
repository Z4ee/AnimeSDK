#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETDIEIMMEDIATELY_METHOD_3_6D05A1713E5DE5E5_OFFSET UNITYSDK_OFFSET(0x1D4EA9C0)
#define RPG_GAMECORE_SETDIEIMMEDIATELY_METHOD_3_F97150D44763BC60_OFFSET UNITYSDK_OFFSET(0x1D4EA970)
#define RPG_GAMECORE_SETDIEIMMEDIATELY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4EA9B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDieImmediately_TypeDefinitionIndex = 22415;

	class SetDieImmediately : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean Enable; // 0x20
		::System::Boolean MakeDyingEntityDeadImmediately; // 0x21

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDIEIMMEDIATELY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F97150D44763BC60(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDieImmediately*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDieImmediately*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDIEIMMEDIATELY_METHOD_3_F97150D44763BC60_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6D05A1713E5DE5E5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDieImmediately* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDieImmediately*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDIEIMMEDIATELY_METHOD_3_6D05A1713E5DE5E5_OFFSET))(a1, a2);
		}
	};
}
