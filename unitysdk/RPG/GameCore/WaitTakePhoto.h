#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITTAKEPHOTO_METHOD_3_3A2A324479B82B67_OFFSET UNITYSDK_OFFSET(0x19109F60)
#define RPG_GAMECORE_WAITTAKEPHOTO_METHOD_3_5E3CC14D917CBD89_OFFSET UNITYSDK_OFFSET(0x19109EE0)
#define RPG_GAMECORE_WAITTAKEPHOTO__CTOR_OFFSET UNITYSDK_OFFSET(0x19109F30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitTakePhoto_TypeDefinitionIndex = 21038;

	class WaitTakePhoto : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnShot; // 0x18
		::System::Boolean IsLoop; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITTAKEPHOTO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5E3CC14D917CBD89(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitTakePhoto*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitTakePhoto*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITTAKEPHOTO_METHOD_3_5E3CC14D917CBD89_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3A2A324479B82B67(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitTakePhoto* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitTakePhoto*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITTAKEPHOTO_METHOD_3_3A2A324479B82B67_OFFSET))(a1, a2);
		}
	};
}
