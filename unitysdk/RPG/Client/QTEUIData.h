#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/QTEUIData_SwipeDirectionType.h"
#include "unitysdk/RPG/Client/QTEUIData_TriggerType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }

#define RPG_CLIENT_QTEUIDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xAF2CAA0)

namespace RPG::Client
{
	inline static constexpr unsigned int QTEUIData_TypeDefinitionIndex = 65597;

	class QTEUIData : public ::System::Object
	{
	public:
		::RPG::Client::QTEUIData_TriggerType UITriggerType; // 0x10
		::UnityEngine::Vector2 Position; // 0x14
		::System::String* SingleClickActionName; // 0x20
		::RPG::Client::QTEUIData_SwipeDirectionType SwipeDirection; // 0x28
		::System::Single SwipeDistanceInch; // 0x2C
		::System::Int32 ComboClickCount; // 0x30
		::System::Single ComboClickBackSpeed; // 0x34
		::System::Int32 ComboClickStartValue; // 0x38
		::System::Single Duration; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_QTEUIDATA__CTOR_OFFSET))(this);
		}
	};
}
