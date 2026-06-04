#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_ELFPAYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB8C6980)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfPayData_TypeDefinitionIndex = 59673;

	class ElfPayData : public ::System::Object
	{
	public:
		::System::Single LifeTime; // 0x10
		::UnityEngine::Vector3 TargetPosition; // 0x14
		::System::Int32 Value; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFPAYDATA__CTOR_OFFSET))(this);
		}
	};
}
