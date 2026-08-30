#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntityList; }

#define CLASS_1_202CCA2146CCF387_CLEAR_OFFSET UNITYSDK_OFFSET(0x15A26330)
#define CLASS_1_202CCA2146CCF387__CTOR_OFFSET UNITYSDK_OFFSET(0x15A26380)

inline static constexpr unsigned int Class_1_202CCA2146CCF387_TypeDefinitionIndex = 56612;

class Class_1_202CCA2146CCF387 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntityList* NECENEHPHIG; // 0x10
	::System::Int32 HCDEOKNIGKG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_202CCA2146CCF387__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_202CCA2146CCF387_CLEAR_OFFSET))(this);
	}
};
