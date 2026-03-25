#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEINRANGE_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x176C89D0)
#define RPG_GAMECORE_SETDYNAMICVALUEINRANGE_METHOD_4_B664628F0FC75374_OFFSET UNITYSDK_OFFSET(0x176C8760)
#define RPG_GAMECORE_SETDYNAMICVALUEINRANGE_METHOD_4_BBDF26300A5493AC_OFFSET UNITYSDK_OFFSET(0x176C8640)
#define RPG_GAMECORE_SETDYNAMICVALUEINRANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x176C86E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueInRange_TypeDefinitionIndex = 21815;

	class SetDynamicValueInRange : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* DynamicKey; // 0x20
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x28
		::RPG::GameCore::DynamicFloat* Min; // 0x30
		::RPG::GameCore::DynamicFloat* Max; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEINRANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_BBDF26300A5493AC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueInRange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueInRange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEINRANGE_METHOD_4_BBDF26300A5493AC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B664628F0FC75374(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueInRange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueInRange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEINRANGE_METHOD_4_B664628F0FC75374_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEINRANGE_GETDYNAMICKEY_OFFSET))(this);
		}
	};
}
