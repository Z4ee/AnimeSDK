#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3FF51CE8B91EFA1B;
class Class_1_AB817CB39E494C61;
namespace RPG::Client { class PrefabLoadMeta; }

#define CLASS_2_DA1C3E81DF4E5765_CLASS_1_09FF9D1E46E8A688__CTOR_OFFSET UNITYSDK_OFFSET(0x173E44A0)

inline static constexpr unsigned int Class_2_DA1C3E81DF4E5765_Class_1_09FF9D1E46E8A688_TypeDefinitionIndex = 68111;

class Class_2_DA1C3E81DF4E5765_Class_1_09FF9D1E46E8A688 : public ::System::Object
{
public:
	::RPG::Client::PrefabLoadMeta* Field_1_0; // 0x10
	::Class_1_3FF51CE8B91EFA1B* Field_1_1; // 0x18
	::Class_1_AB817CB39E494C61* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DA1C3E81DF4E5765_CLASS_1_09FF9D1E46E8A688__CTOR_OFFSET))(this);
	}
};
