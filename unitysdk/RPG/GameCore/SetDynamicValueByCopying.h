#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYCOPYING_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1D4EF330)
#define RPG_GAMECORE_SETDYNAMICVALUEBYCOPYING_METHOD_4_A4D914E93196F5C4_OFFSET UNITYSDK_OFFSET(0x1D4EF090)
#define RPG_GAMECORE_SETDYNAMICVALUEBYCOPYING_METHOD_4_B61700AE79374CCF_OFFSET UNITYSDK_OFFSET(0x1D4EF130)
#define RPG_GAMECORE_SETDYNAMICVALUEBYCOPYING__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4EF0F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByCopying_TypeDefinitionIndex = 23550;

	class SetDynamicValueByCopying : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::RPG::GameCore::TargetEvaluator* FromTargetType; // 0x18
		::RPG::GameCore::DynamicString* FromDynamicKey; // 0x20
		::RPG::GameCore::DynamicString* FromModifierName; // 0x28
		::RPG::GameCore::TargetEvaluator* ToTargetType; // 0x30
		::RPG::GameCore::DynamicString* ToDynamicKey; // 0x38
		::RPG::GameCore::DynamicValueContextScope TargetContextScope; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYCOPYING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_A4D914E93196F5C4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByCopying*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByCopying*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYCOPYING_METHOD_4_A4D914E93196F5C4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B61700AE79374CCF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByCopying* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByCopying*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYCOPYING_METHOD_4_B61700AE79374CCF_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYCOPYING_GETDYNAMICKEY_OFFSET))(this);
		}
	};
}
