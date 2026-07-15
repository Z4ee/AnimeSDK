#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightPrayQuest; }

#define CLASS_1_2BC3CF016493EA36_METHOD_1_97BE07E876064FAC_OFFSET UNITYSDK_OFFSET(0x140C35E0)
#define CLASS_1_2BC3CF016493EA36_METHOD_1_A043B5CB7B5C886D_OFFSET UNITYSDK_OFFSET(0x140C37D0)
#define CLASS_1_2BC3CF016493EA36__CTOR_OFFSET UNITYSDK_OFFSET(0x140C35D0)

inline static constexpr unsigned int Class_1_2BC3CF016493EA36_TypeDefinitionIndex = 62171;

class Class_1_2BC3CF016493EA36 : public ::System::Object
{
public:
	::RPG::Client::GridFightPrayQuest* Field_1_0; // 0x10

	::System::Void _ctor(::RPG::Client::GridFightPrayQuest* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightPrayQuest*))((::PBYTE)hIl2Cpp + CLASS_1_2BC3CF016493EA36__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_97BE07E876064FAC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BC3CF016493EA36_METHOD_1_97BE07E876064FAC_OFFSET))(this);
	}

	::System::Boolean Method_1_A043B5CB7B5C886D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BC3CF016493EA36_METHOD_1_A043B5CB7B5C886D_OFFSET))(this);
	}
};
