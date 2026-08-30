#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ELFTEXTPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0xCE7D150)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfTextParams_TypeDefinitionIndex = 63814;

	class ElfTextParams : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* Params; // 0x10
		::RPG::Client::TextID TextID; // 0x18

		::System::Void _ctor(::RPG::Client::TextID a1, ::Il2CppArray<::System::Single>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFTEXTPARAMS__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
