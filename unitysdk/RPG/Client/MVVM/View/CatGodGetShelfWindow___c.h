#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MVVM_VIEW_CATGODGETSHELFWINDOW___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA7423C0)
#define RPG_CLIENT_MVVM_VIEW_CATGODGETSHELFWINDOW___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA742400)

namespace RPG::Client::MVVM::View
{
	inline static constexpr unsigned int CatGodGetShelfWindow___c_TypeDefinitionIndex = 68423;

	class CatGodGetShelfWindow___c : public ::System::Object
	{
	public:
		static ::RPG::Client::MVVM::View::CatGodGetShelfWindow___c** StaticGet___9()
		{
			return (::RPG::Client::MVVM::View::CatGodGetShelfWindow___c**)Il2CppClass::FromTypeDefinitionIndex(CatGodGetShelfWindow___c_TypeDefinitionIndex)->GetStaticField(0x34BC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_CATGODGETSHELFWINDOW___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_CATGODGETSHELFWINDOW___C__CTOR_OFFSET))(this);
		}
	};
}
