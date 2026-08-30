#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CALLBACK_METHOD_3_5894C64E51D1FC82_OFFSET UNITYSDK_OFFSET(0x1CF7B4A0)
#define RPG_GAMECORE_CALLBACK_METHOD_3_95798EA89A492409_OFFSET UNITYSDK_OFFSET(0x1CF7B4E0)
#define RPG_GAMECORE_CALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF7B4D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CallBack_TypeDefinitionIndex = 21442;

	class CallBack : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnDispose; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CALLBACK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5894C64E51D1FC82(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CallBack*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CallBack*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CALLBACK_METHOD_3_5894C64E51D1FC82_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_95798EA89A492409(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CallBack* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CallBack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CALLBACK_METHOD_3_95798EA89A492409_OFFSET))(a1, a2);
		}
	};
}
