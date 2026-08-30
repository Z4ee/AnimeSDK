#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHANGEDYNAMICOPTIONALBLOCK_METHOD_3_75545A9A2AB4D2D4_OFFSET UNITYSDK_OFFSET(0x1CF8CB50)
#define RPG_GAMECORE_CHANGEDYNAMICOPTIONALBLOCK_METHOD_3_B733F26B138390D3_OFFSET UNITYSDK_OFFSET(0x1CF8CB00)
#define RPG_GAMECORE_CHANGEDYNAMICOPTIONALBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF8CB40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChangeDynamicOptionalBlock_TypeDefinitionIndex = 21453;

	class ChangeDynamicOptionalBlock : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* BlockKey; // 0x18
		::System::Boolean IsRemoveExist; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEDYNAMICOPTIONALBLOCK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B733F26B138390D3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChangeDynamicOptionalBlock*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChangeDynamicOptionalBlock*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEDYNAMICOPTIONALBLOCK_METHOD_3_B733F26B138390D3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_75545A9A2AB4D2D4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChangeDynamicOptionalBlock* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChangeDynamicOptionalBlock*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEDYNAMICOPTIONALBLOCK_METHOD_3_75545A9A2AB4D2D4_OFFSET))(a1, a2);
		}
	};
}
