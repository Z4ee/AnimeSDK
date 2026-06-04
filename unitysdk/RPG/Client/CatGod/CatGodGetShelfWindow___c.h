#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_CATGOD_CATGODGETSHELFWINDOW___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB4BF030)
#define RPG_CLIENT_CATGOD_CATGODGETSHELFWINDOW___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB4BF070)

namespace RPG::Client::CatGod
{
	inline static constexpr unsigned int CatGodGetShelfWindow___c_TypeDefinitionIndex = 74305;

	class CatGodGetShelfWindow___c : public ::System::Object
	{
	public:
		static ::RPG::Client::CatGod::CatGodGetShelfWindow___c** StaticGet___9()
		{
			return (::RPG::Client::CatGod::CatGodGetShelfWindow___c**)Il2CppClass::FromTypeDefinitionIndex(CatGodGetShelfWindow___c_TypeDefinitionIndex)->GetStaticField(0x589A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CATGOD_CATGODGETSHELFWINDOW___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CATGOD_CATGODGETSHELFWINDOW___C__CTOR_OFFSET))(this);
		}
	};
}
