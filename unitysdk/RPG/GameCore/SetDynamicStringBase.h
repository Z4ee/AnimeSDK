#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicStringContextScope.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICSTRINGBASE_METHOD_3_0008672B7EDA832F_OFFSET UNITYSDK_OFFSET(0x176B35E0)
#define RPG_GAMECORE_SETDYNAMICSTRINGBASE_METHOD_3_43A631F7294671C3_OFFSET UNITYSDK_OFFSET(0x176B3730)
#define RPG_GAMECORE_SETDYNAMICSTRINGBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x176B35B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicStringBase_TypeDefinitionIndex = 22094;

	class SetDynamicStringBase : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicStringContextScope ContextScope; // 0x18
		::System::String* DynamicKey; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICSTRINGBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0008672B7EDA832F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicStringBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicStringBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICSTRINGBASE_METHOD_3_0008672B7EDA832F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_43A631F7294671C3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicStringBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicStringBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICSTRINGBASE_METHOD_3_43A631F7294671C3_OFFSET))(a1, a2);
		}
	};
}
