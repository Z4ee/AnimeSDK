#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SyncCheckItemBase.h"

namespace System { class String; }

#define CLASS_2_F43A46CBB2011D31_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA78A410)
#define CLASS_2_F43A46CBB2011D31_1__CTOR_OFFSET UNITYSDK_OFFSET(0xA78A460)
#define CLASS_2_F43A46CBB2011D31_1___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA78A470)

inline static constexpr unsigned int Class_2_F43A46CBB2011D31_1_TypeDefinitionIndex = 55978;

class Class_2_F43A46CBB2011D31_1 : public ::RPG::Client::SyncCheckItemBase
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F43A46CBB2011D31_1__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F43A46CBB2011D31_1_TOSTRING_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F43A46CBB2011D31_1___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
