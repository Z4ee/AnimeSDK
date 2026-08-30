#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETSIGNEDANGLEBYTARGET_METHOD_3_D41B5305ABACFA18_OFFSET UNITYSDK_OFFSET(0x1E08CC70)
#define RPG_GAMECORE_SETSIGNEDANGLEBYTARGET_METHOD_3_EDF7BF93CB62158D_OFFSET UNITYSDK_OFFSET(0x1E08CCB0)
#define RPG_GAMECORE_SETSIGNEDANGLEBYTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1E08CCA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetSignedAngleByTarget_TypeDefinitionIndex = 22486;

	class SetSignedAngleByTarget : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* DynamicKey; // 0x20
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSIGNEDANGLEBYTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D41B5305ABACFA18(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetSignedAngleByTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetSignedAngleByTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSIGNEDANGLEBYTARGET_METHOD_3_D41B5305ABACFA18_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EDF7BF93CB62158D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetSignedAngleByTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetSignedAngleByTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSIGNEDANGLEBYTARGET_METHOD_3_EDF7BF93CB62158D_OFFSET))(a1, a2);
		}
	};
}
