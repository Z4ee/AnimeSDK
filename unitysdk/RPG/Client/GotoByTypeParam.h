#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GotoType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_GOTOBYTYPEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x97BFF00)

namespace RPG::Client
{
	inline static constexpr unsigned int GotoByTypeParam_TypeDefinitionIndex = 53201;

	class GotoByTypeParam : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Object*>* Args; // 0x10
		::RPG::GameCore::GotoType GotoType; // 0x18

		::System::Void _ctor(::RPG::GameCore::GotoType type, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GotoType, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GOTOBYTYPEPARAM__CTOR_OFFSET))(this, type, args);
		}
	};
}
