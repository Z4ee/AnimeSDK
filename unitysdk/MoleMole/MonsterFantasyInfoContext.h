#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Object; }

#define MOLEMOLE_MONSTERFANTASYINFOCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1177F1E0)

namespace MoleMole
{
	inline static constexpr unsigned int MonsterFantasyInfoContext_TypeDefinitionIndex = 48933;

	class MonsterFantasyInfoContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Il2CppArray<::System::Object*>* TextArgs; // 0x28
		::System::Int32 InfoConfigID; // 0x30
		::System::UInt32 EntityID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERFANTASYINFOCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
