#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicStringContextScope.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_DEFINEDYNAMICSTRING_METHOD_3_CCBC2FB8991EB751_OFFSET UNITYSDK_OFFSET(0x1C1016C0)
#define RPG_GAMECORE_DEFINEDYNAMICSTRING_METHOD_3_FFDE990D250EE4D4_OFFSET UNITYSDK_OFFSET(0x1C101700)
#define RPG_GAMECORE_DEFINEDYNAMICSTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1016F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DefineDynamicString_TypeDefinitionIndex = 22077;

	class DefineDynamicString : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* DynamicKey; // 0x18
		::RPG::GameCore::DynamicString* ResetValue; // 0x20
		::RPG::GameCore::DynamicStringContextScope ContextScope; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEFINEDYNAMICSTRING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CCBC2FB8991EB751(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DefineDynamicString*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DefineDynamicString*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEFINEDYNAMICSTRING_METHOD_3_CCBC2FB8991EB751_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FFDE990D250EE4D4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DefineDynamicString* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DefineDynamicString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEFINEDYNAMICSTRING_METHOD_3_FFDE990D250EE4D4_OFFSET))(a1, a2);
		}
	};
}
