#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class OptionTriggerInfo; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_CURVEOBJECTLOADTRIGGER_METHOD_1_B1476C314B32BFD8_OFFSET UNITYSDK_OFFSET(0x18040100)
#define RPG_CLIENT_CURVEOBJECTLOADTRIGGER_METHOD_1_B24D6784786E080C_OFFSET UNITYSDK_OFFSET(0x18040220)
#define RPG_CLIENT_CURVEOBJECTLOADTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x180402F0)

namespace RPG::Client
{
	inline static constexpr unsigned int CurveObjectLoadTrigger_TypeDefinitionIndex = 65513;

	class CurveObjectLoadTrigger : public ::System::Object
	{
	public:
		::RPG::GameCore::OptionTriggerInfo* loadTriggerInfo; // 0x10
		::RPG::GameCore::OptionTriggerInfo* unloadTriggerInfo; // 0x18
		::System::Int32 initOrnamentIndex; // 0x20
		::Il2CppArray<::UnityEngine::GameObject*>* ornaments; // 0x28
		::System::Int32 _index; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEOBJECTLOADTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_B1476C314B32BFD8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEOBJECTLOADTRIGGER_METHOD_1_B1476C314B32BFD8_OFFSET))(this);
		}

		::System::Void Method_1_B24D6784786E080C(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEOBJECTLOADTRIGGER_METHOD_1_B24D6784786E080C_OFFSET))(this, a1);
		}
	};
}
