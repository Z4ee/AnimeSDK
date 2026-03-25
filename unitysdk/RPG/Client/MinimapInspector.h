#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_5878A2422EE7CDFB;
namespace RPG::GameCore { class LevelMinimapVolume; }

#define RPG_CLIENT_MINIMAPINSPECTOR_GET_HANDLE_OFFSET UNITYSDK_OFFSET(0x9BB19A0)
#define RPG_CLIENT_MINIMAPINSPECTOR_SET_HANDLE_OFFSET UNITYSDK_OFFSET(0x9BB19B0)
#define RPG_CLIENT_MINIMAPINSPECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x9BB19C0)

namespace RPG::Client
{
	inline static constexpr unsigned int MinimapInspector_TypeDefinitionIndex = 55937;

	class MinimapInspector : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean DrawGizmos; // 0x18
		::RPG::GameCore::LevelMinimapVolume* Data; // 0x20
		::Class_1_5878A2422EE7CDFB* _Handle_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPINSPECTOR__CTOR_OFFSET))(this);
		}

		::Class_1_5878A2422EE7CDFB* get_Handle()
		{
			return ((::Class_1_5878A2422EE7CDFB*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPINSPECTOR_GET_HANDLE_OFFSET))(this);
		}

		::System::Void set_Handle(::Class_1_5878A2422EE7CDFB* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5878A2422EE7CDFB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MINIMAPINSPECTOR_SET_HANDLE_OFFSET))(this, value);
		}
	};
}
