#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GotoType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_GOTOBYTYPEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x192F0CF0)

namespace RPG::Client
{
	inline static constexpr unsigned int GotoByTypeParam_TypeDefinitionIndex = 62605;

	class GotoByTypeParam : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Object*>* Args; // 0x10
		::RPG::GameCore::GotoType GotoType; // 0x18

		::System::Void _ctor(::RPG::GameCore::GotoType a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GotoType, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GOTOBYTYPEPARAM__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
