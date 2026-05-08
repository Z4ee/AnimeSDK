#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_388;
class Class_2_CE905445948732C1_Class_1_A6660CA21D7C1066_Class_1_C277D6FBDA93149D;
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x14DDE050)

namespace MoleMole
{
	inline static constexpr unsigned int UIVHSStoreTagWidgetController_Data_TypeDefinitionIndex = 40455;

	class UIVHSStoreTagWidgetController_Data : public ::System::Object
	{
	public:
		::Class_2_208CC9941471731A_388* Template; // 0x10
		::System::Func_1<::System::Collections::Generic::IReadOnlyList_1<::Class_2_CE905445948732C1_Class_1_A6660CA21D7C1066_Class_1_C277D6FBDA93149D*>*>* currentSelectedCollections; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
