#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ATTACHENTITYUNSELECTABLE_METHOD_3_0BE328EF3FF73917_OFFSET UNITYSDK_OFFSET(0x1C57A6F0)
#define RPG_GAMECORE_ATTACHENTITYUNSELECTABLE_METHOD_3_EDEB6BCDC10052BA_OFFSET UNITYSDK_OFFSET(0x1C57A7C0)
#define RPG_GAMECORE_ATTACHENTITYUNSELECTABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C57A7B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AttachEntityUnselectable_TypeDefinitionIndex = 22466;

	class AttachEntityUnselectable : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ATTACHENTITYUNSELECTABLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0BE328EF3FF73917(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AttachEntityUnselectable*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AttachEntityUnselectable*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ATTACHENTITYUNSELECTABLE_METHOD_3_0BE328EF3FF73917_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EDEB6BCDC10052BA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AttachEntityUnselectable* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AttachEntityUnselectable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ATTACHENTITYUNSELECTABLE_METHOD_3_EDEB6BCDC10052BA_OFFSET))(a1, a2);
		}
	};
}
