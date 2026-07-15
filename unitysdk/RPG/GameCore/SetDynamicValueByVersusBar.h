#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/RPG/GameCore/VersusBarPropertyType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYVERSUSBAR_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1C5F3570)
#define RPG_GAMECORE_SETDYNAMICVALUEBYVERSUSBAR_METHOD_4_441FD9EAA491E815_OFFSET UNITYSDK_OFFSET(0x1C5F3340)
#define RPG_GAMECORE_SETDYNAMICVALUEBYVERSUSBAR_METHOD_4_844C613DC2F01188_OFFSET UNITYSDK_OFFSET(0x1C5F3300)
#define RPG_GAMECORE_SETDYNAMICVALUEBYVERSUSBAR__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5F3330)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByVersusBar_TypeDefinitionIndex = 22317;

	class SetDynamicValueByVersusBar : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::RPG::GameCore::TeamType Team; // 0x24
		::RPG::GameCore::VersusBarPropertyType ValueType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYVERSUSBAR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_844C613DC2F01188(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByVersusBar*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByVersusBar*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYVERSUSBAR_METHOD_4_844C613DC2F01188_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_441FD9EAA491E815(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByVersusBar* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByVersusBar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYVERSUSBAR_METHOD_4_441FD9EAA491E815_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYVERSUSBAR_GETDYNAMICKEY_OFFSET))(this);
		}
	};
}
