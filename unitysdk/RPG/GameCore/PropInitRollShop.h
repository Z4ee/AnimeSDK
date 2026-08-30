#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PROPINITROLLSHOP_METHOD_3_4E49A34B87E196FB_OFFSET UNITYSDK_OFFSET(0x1D17CD40)
#define RPG_GAMECORE_PROPINITROLLSHOP_METHOD_3_975B9B7FDCBC2C17_OFFSET UNITYSDK_OFFSET(0x1D17CCF0)
#define RPG_GAMECORE_PROPINITROLLSHOP__CTOR_OFFSET UNITYSDK_OFFSET(0x1D17CD30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropInitRollShop_TypeDefinitionIndex = 20970;

	class PropInitRollShop : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINITROLLSHOP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_975B9B7FDCBC2C17(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropInitRollShop*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropInitRollShop*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINITROLLSHOP_METHOD_3_975B9B7FDCBC2C17_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4E49A34B87E196FB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropInitRollShop* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropInitRollShop*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINITROLLSHOP_METHOD_3_4E49A34B87E196FB_OFFSET))(a1, a2);
		}
	};
}
