#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITTAKEPHOTO_METHOD_3_13D20FCE71E8D16B_OFFSET UNITYSDK_OFFSET(0x19E626A0)
#define RPG_GAMECORE_WAITTAKEPHOTO_METHOD_3_67B3EB7F1BB7E8C5_OFFSET UNITYSDK_OFFSET(0x19E62720)
#define RPG_GAMECORE_WAITTAKEPHOTO__CTOR_OFFSET UNITYSDK_OFFSET(0x19E626F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitTakePhoto_TypeDefinitionIndex = 20947;

	class WaitTakePhoto : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnShot; // 0x18
		::System::Boolean IsLoop; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITTAKEPHOTO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_13D20FCE71E8D16B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitTakePhoto*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitTakePhoto*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITTAKEPHOTO_METHOD_3_13D20FCE71E8D16B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_67B3EB7F1BB7E8C5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitTakePhoto* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitTakePhoto*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITTAKEPHOTO_METHOD_3_67B3EB7F1BB7E8C5_OFFSET))(a1, a2);
		}
	};
}
