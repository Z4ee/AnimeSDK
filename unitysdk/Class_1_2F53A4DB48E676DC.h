#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_09BA741879A02AC6.h"
#include "unitysdk/System/Object.h"

namespace RPG { template <typename T> class PoolList_1; }

#define CLASS_1_2F53A4DB48E676DC_CLEAR_OFFSET UNITYSDK_OFFSET(0x1B17D4F0)
#define CLASS_1_2F53A4DB48E676DC__CTOR_OFFSET UNITYSDK_OFFSET(0x1B17D570)

inline static constexpr unsigned int Class_1_2F53A4DB48E676DC_TypeDefinitionIndex = 40003;

class Class_1_2F53A4DB48E676DC : public ::System::Object
{
public:
	::RPG::PoolList_1<::Struct_2_09BA741879A02AC6>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F53A4DB48E676DC__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F53A4DB48E676DC_CLEAR_OFFSET))(this);
	}
};
