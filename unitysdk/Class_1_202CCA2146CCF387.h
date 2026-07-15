#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntityList; }

#define CLASS_1_202CCA2146CCF387_CLEAR_OFFSET UNITYSDK_OFFSET(0x157C3F30)
#define CLASS_1_202CCA2146CCF387__CTOR_OFFSET UNITYSDK_OFFSET(0x157C3F80)

inline static constexpr unsigned int Class_1_202CCA2146CCF387_TypeDefinitionIndex = 53892;

class Class_1_202CCA2146CCF387 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntityList* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_202CCA2146CCF387__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_202CCA2146CCF387_CLEAR_OFFSET))(this);
	}
};
