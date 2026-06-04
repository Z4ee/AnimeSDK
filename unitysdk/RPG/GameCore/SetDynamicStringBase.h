#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicStringContextScope.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICSTRINGBASE_METHOD_3_2A41027ACFBE4A46_OFFSET UNITYSDK_OFFSET(0x19C34C90)
#define RPG_GAMECORE_SETDYNAMICSTRINGBASE_METHOD_3_43A631F7294671C3_OFFSET UNITYSDK_OFFSET(0x19C34DE0)
#define RPG_GAMECORE_SETDYNAMICSTRINGBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x19C34C60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicStringBase_TypeDefinitionIndex = 22513;

	class SetDynamicStringBase : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicStringContextScope ContextScope; // 0x18
		::System::String* DynamicKey; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICSTRINGBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2A41027ACFBE4A46(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicStringBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicStringBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICSTRINGBASE_METHOD_3_2A41027ACFBE4A46_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_43A631F7294671C3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicStringBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicStringBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICSTRINGBASE_METHOD_3_43A631F7294671C3_OFFSET))(a1, a2);
		}
	};
}
