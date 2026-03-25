#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SetDynamicStringBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_SETDYNAMICSTRING_METHOD_4_300CB781E0783410_OFFSET UNITYSDK_OFFSET(0x176B33A0)
#define RPG_GAMECORE_SETDYNAMICSTRING_METHOD_4_6EB0A0B772EC6CE3_OFFSET UNITYSDK_OFFSET(0x176B3420)
#define RPG_GAMECORE_SETDYNAMICSTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x176B33F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicString_TypeDefinitionIndex = 22095;

	class SetDynamicString : public ::RPG::GameCore::SetDynamicStringBase
	{
	public:
		::RPG::GameCore::DynamicString* Value; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICSTRING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_300CB781E0783410(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicString*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicString*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICSTRING_METHOD_4_300CB781E0783410_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6EB0A0B772EC6CE3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicString* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICSTRING_METHOD_4_6EB0A0B772EC6CE3_OFFSET))(a1, a2);
		}
	};
}
