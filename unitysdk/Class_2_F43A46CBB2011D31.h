#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SyncCheckItemBase.h"

namespace System { class String; }

#define CLASS_2_F43A46CBB2011D31_GET_ISTICKABLE_OFFSET UNITYSDK_OFFSET(0xCD3B750)
#define CLASS_2_F43A46CBB2011D31_TOSTRING_OFFSET UNITYSDK_OFFSET(0xCD3B7E0)
#define CLASS_2_F43A46CBB2011D31__CTOR_OFFSET UNITYSDK_OFFSET(0xCD3B850)
#define CLASS_2_F43A46CBB2011D31__DOCHECKIMPL_OFFSET UNITYSDK_OFFSET(0xCD3B760)
#define CLASS_2_F43A46CBB2011D31___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0xCD3B8D0)
#define CLASS_2_F43A46CBB2011D31___IFIXBASEPROXY__DOCHECKIMPL_OFFSET UNITYSDK_OFFSET(0xCD3B860)

inline static constexpr unsigned int Class_2_F43A46CBB2011D31_TypeDefinitionIndex = 55240;

class Class_2_F43A46CBB2011D31 : public ::RPG::Client::SyncCheckItemBase
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F43A46CBB2011D31__CTOR_OFFSET))(this);
	}

	::System::Boolean get_IsTickable()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F43A46CBB2011D31_GET_ISTICKABLE_OFFSET))(this);
	}

	::System::Boolean _DoCheckImpl()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F43A46CBB2011D31__DOCHECKIMPL_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F43A46CBB2011D31_TOSTRING_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy__DoCheckImpl()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F43A46CBB2011D31___IFIXBASEPROXY__DOCHECKIMPL_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F43A46CBB2011D31___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
