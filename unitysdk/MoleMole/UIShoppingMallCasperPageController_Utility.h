#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7E6400452836B7AD;
class Class_1_A959CE1F6FCD89E0;
namespace MoleMole { class UIShoppingMallCasperPageController; }
namespace System { class Action; }

#define MOLEMOLE_UISHOPPINGMALLCASPERPAGECONTROLLER_UTILITY_GET_SHOPTABGROUPMAP_OFFSET UNITYSDK_OFFSET(0x179C00F0)
#define MOLEMOLE_UISHOPPINGMALLCASPERPAGECONTROLLER_UTILITY_GET_SHOPTABMAP_OFFSET UNITYSDK_OFFSET(0x179C0030)
#define MOLEMOLE_UISHOPPINGMALLCASPERPAGECONTROLLER_UTILITY_OPENARCADESHOP_OFFSET UNITYSDK_OFFSET(0x179C0460)
#define MOLEMOLE_UISHOPPINGMALLCASPERPAGECONTROLLER_UTILITY_OPENMINDSCAPESHOP_OFFSET UNITYSDK_OFFSET(0x179C0850)
#define MOLEMOLE_UISHOPPINGMALLCASPERPAGECONTROLLER_UTILITY_OPENSOCIALSHOP_OFFSET UNITYSDK_OFFSET(0x179C0660)
#define MOLEMOLE_UISHOPPINGMALLCASPERPAGECONTROLLER_UTILITY_OPENZEROSHOP_OFFSET UNITYSDK_OFFSET(0x179C01B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIShoppingMallCasperPageController_Utility_TypeDefinitionIndex = 50597;

	class UIShoppingMallCasperPageController_Utility : public ::System::Object
	{
	public:
		static ::Class_1_A959CE1F6FCD89E0* get_ShopTabMap()
		{
			return ((::Class_1_A959CE1F6FCD89E0*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLCASPERPAGECONTROLLER_UTILITY_GET_SHOPTABMAP_OFFSET))();
		}

		static ::Class_1_7E6400452836B7AD* get_ShopTabGroupMap()
		{
			return ((::Class_1_7E6400452836B7AD*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLCASPERPAGECONTROLLER_UTILITY_GET_SHOPTABGROUPMAP_OFFSET))();
		}

		static ::MoleMole::UIShoppingMallCasperPageController* OpenZeroShop(::System::Int32 shopTabID, ::System::Boolean markJump)
		{
			return ((::MoleMole::UIShoppingMallCasperPageController*(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLCASPERPAGECONTROLLER_UTILITY_OPENZEROSHOP_OFFSET))(shopTabID, markJump);
		}

		static ::MoleMole::UIShoppingMallCasperPageController* OpenArcadeShop(::System::Action* storeCloseAction)
		{
			return ((::MoleMole::UIShoppingMallCasperPageController*(*)(::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLCASPERPAGECONTROLLER_UTILITY_OPENARCADESHOP_OFFSET))(storeCloseAction);
		}

		static ::MoleMole::UIShoppingMallCasperPageController* OpenSocialShop(::System::Int32 shopTabID)
		{
			return ((::MoleMole::UIShoppingMallCasperPageController*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLCASPERPAGECONTROLLER_UTILITY_OPENSOCIALSHOP_OFFSET))(shopTabID);
		}

		static ::MoleMole::UIShoppingMallCasperPageController* OpenMindScapeShop()
		{
			return ((::MoleMole::UIShoppingMallCasperPageController*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLCASPERPAGECONTROLLER_UTILITY_OPENMINDSCAPESHOP_OFFSET))();
		}
	};
}
