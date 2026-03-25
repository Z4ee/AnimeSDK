#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PROPINITROLLSHOP_METHOD_3_4E49A34B87E196FB_OFFSET UNITYSDK_OFFSET(0x1751F7D0)
#define RPG_GAMECORE_PROPINITROLLSHOP_METHOD_3_665F9B9EAE23C02B_OFFSET UNITYSDK_OFFSET(0x1751F740)
#define RPG_GAMECORE_PROPINITROLLSHOP__CTOR_OFFSET UNITYSDK_OFFSET(0x1751F7A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropInitRollShop_TypeDefinitionIndex = 19514;

	class PropInitRollShop : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINITROLLSHOP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_665F9B9EAE23C02B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropInitRollShop*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropInitRollShop*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINITROLLSHOP_METHOD_3_665F9B9EAE23C02B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4E49A34B87E196FB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropInitRollShop* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropInitRollShop*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINITROLLSHOP_METHOD_3_4E49A34B87E196FB_OFFSET))(a1, a2);
		}
	};
}
