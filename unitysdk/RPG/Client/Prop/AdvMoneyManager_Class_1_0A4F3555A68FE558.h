#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::Prop { class AdvMoneyManager; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PROP_ADVMONEYMANAGER_CLASS_1_0A4F3555A68FE558_METHOD_1_0C06AC5853B1B876_OFFSET UNITYSDK_OFFSET(0x1AE30830)
#define RPG_CLIENT_PROP_ADVMONEYMANAGER_CLASS_1_0A4F3555A68FE558_METHOD_1_21F93EA5D1088349_OFFSET UNITYSDK_OFFSET(0x1AE2CCC0)
#define RPG_CLIENT_PROP_ADVMONEYMANAGER_CLASS_1_0A4F3555A68FE558_METHOD_1_8E225161CB9A434C_OFFSET UNITYSDK_OFFSET(0x1AE2E0C0)
#define RPG_CLIENT_PROP_ADVMONEYMANAGER_CLASS_1_0A4F3555A68FE558__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE2C5F0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int AdvMoneyManager_Class_1_0A4F3555A68FE558_TypeDefinitionIndex = 77719;

	class AdvMoneyManager_Class_1_0A4F3555A68FE558 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::Prop::AdvMoneyManager*>* AFDMPGPMMAB; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADVMONEYMANAGER_CLASS_1_0A4F3555A68FE558__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_21F93EA5D1088349(::RPG::Client::Prop::AdvMoneyManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::AdvMoneyManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADVMONEYMANAGER_CLASS_1_0A4F3555A68FE558_METHOD_1_21F93EA5D1088349_OFFSET))(this, a1);
		}

		::System::Void Method_1_8E225161CB9A434C(::RPG::Client::Prop::AdvMoneyManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::AdvMoneyManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADVMONEYMANAGER_CLASS_1_0A4F3555A68FE558_METHOD_1_8E225161CB9A434C_OFFSET))(this, a1);
		}

		::System::Void Method_1_0C06AC5853B1B876(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADVMONEYMANAGER_CLASS_1_0A4F3555A68FE558_METHOD_1_0C06AC5853B1B876_OFFSET))(this, a1);
		}
	};
}
