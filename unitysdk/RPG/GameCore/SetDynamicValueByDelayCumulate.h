#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYDELAYCUMULATE_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1E81C2E0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYDELAYCUMULATE_METHOD_4_2DB9A5C7D0BE00BC_OFFSET UNITYSDK_OFFSET(0x1E81C130)
#define RPG_GAMECORE_SETDYNAMICVALUEBYDELAYCUMULATE_METHOD_4_3F8E1846BE673723_OFFSET UNITYSDK_OFFSET(0x1E81C170)
#define RPG_GAMECORE_SETDYNAMICVALUEBYDELAYCUMULATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E81C160)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByDelayCumulate_TypeDefinitionIndex = 23317;

	class SetDynamicValueByDelayCumulate : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYDELAYCUMULATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_2DB9A5C7D0BE00BC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByDelayCumulate*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByDelayCumulate*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYDELAYCUMULATE_METHOD_4_2DB9A5C7D0BE00BC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3F8E1846BE673723(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByDelayCumulate* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByDelayCumulate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYDELAYCUMULATE_METHOD_4_3F8E1846BE673723_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYDELAYCUMULATE_GETDYNAMICKEY_OFFSET))(this);
		}
	};
}
