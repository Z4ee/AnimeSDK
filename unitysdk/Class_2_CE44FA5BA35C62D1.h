#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_23.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class LittleGameEvent; }

#define CLASS_2_CE44FA5BA35C62D1_CLEAR_OFFSET UNITYSDK_OFFSET(0x17E3C3E0)
#define CLASS_2_CE44FA5BA35C62D1__CTOR_OFFSET UNITYSDK_OFFSET(0x17E3C460)
#define CLASS_2_CE44FA5BA35C62D1___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0x17E3C470)

inline static constexpr unsigned int Class_2_CE44FA5BA35C62D1_TypeDefinitionIndex = 39361;

class Class_2_CE44FA5BA35C62D1 : public ::Class_1_43BD383C98B4C0C5_23
{
public:
	::RPG::GameCore::LittleGameEvent* Field_2_4; // 0x10
	::System::Single Field_2_3; // 0x18
	::System::Single Field_2_1; // 0x1C
	::System::Boolean Field_2_8; // 0x20
	::UnityEngine::Vector3 Field_2_6; // 0x24
	::UnityEngine::Vector3 Field_2_7; // 0x30
	::System::UInt32 Field_2_5; // 0x3C
	::System::Single Field_2_0; // 0x40
	::System::Single Field_2_2; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE44FA5BA35C62D1__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE44FA5BA35C62D1_CLEAR_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE44FA5BA35C62D1___IFIXBASEPROXY_CLEAR_OFFSET))(this);
	}
};
