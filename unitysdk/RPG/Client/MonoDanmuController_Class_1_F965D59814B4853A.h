#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonoDanmuItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONODANMUCONTROLLER_CLASS_1_F965D59814B4853A__CTOR_OFFSET UNITYSDK_OFFSET(0x10CC8520)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoDanmuController_Class_1_F965D59814B4853A_TypeDefinitionIndex = 65872;

	class MonoDanmuController_Class_1_F965D59814B4853A : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::Client::MonoDanmuItem*>* Field_1_0; // 0x10
		::System::Collections::Generic::List_1<::System::Single>* Field_1_1; // 0x18
		::System::Boolean Field_1_2; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUCONTROLLER_CLASS_1_F965D59814B4853A__CTOR_OFFSET))(this);
		}
	};
}
