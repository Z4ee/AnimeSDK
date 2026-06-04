#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::Prop { class AdvMoneyManager; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PROP_ADVMONEYMANAGER_CLASS_1_0A4F3555A68FE558_METHOD_1_0C06AC5853B1B876_OFFSET UNITYSDK_OFFSET(0xC4C66F0)
#define RPG_CLIENT_PROP_ADVMONEYMANAGER_CLASS_1_0A4F3555A68FE558_METHOD_1_75F73579000E1351_OFFSET UNITYSDK_OFFSET(0xC4C3FC0)
#define RPG_CLIENT_PROP_ADVMONEYMANAGER_CLASS_1_0A4F3555A68FE558_METHOD_1_B94C813EB8455101_OFFSET UNITYSDK_OFFSET(0xC4C2A90)
#define RPG_CLIENT_PROP_ADVMONEYMANAGER_CLASS_1_0A4F3555A68FE558__CTOR_OFFSET UNITYSDK_OFFSET(0xC4C23D0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int AdvMoneyManager_Class_1_0A4F3555A68FE558_TypeDefinitionIndex = 72710;

	class AdvMoneyManager_Class_1_0A4F3555A68FE558 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::Prop::AdvMoneyManager*>* Field_1_0; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADVMONEYMANAGER_CLASS_1_0A4F3555A68FE558__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_B94C813EB8455101(::RPG::Client::Prop::AdvMoneyManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::AdvMoneyManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADVMONEYMANAGER_CLASS_1_0A4F3555A68FE558_METHOD_1_B94C813EB8455101_OFFSET))(this, a1);
		}

		::System::Void Method_1_75F73579000E1351(::RPG::Client::Prop::AdvMoneyManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::AdvMoneyManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADVMONEYMANAGER_CLASS_1_0A4F3555A68FE558_METHOD_1_75F73579000E1351_OFFSET))(this, a1);
		}

		::System::Void Method_1_0C06AC5853B1B876(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADVMONEYMANAGER_CLASS_1_0A4F3555A68FE558_METHOD_1_0C06AC5853B1B876_OFFSET))(this, a1);
		}
	};
}
