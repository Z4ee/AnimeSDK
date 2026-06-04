#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_D8354001CDC8D6DC_GET_ASYNCLATENCYWINDOWSIZE_OFFSET UNITYSDK_OFFSET(0x139B9400)
#define CLASS_1_D8354001CDC8D6DC_GET_DEFAULTTOPN_OFFSET UNITYSDK_OFFSET(0x139B9420)
#define CLASS_1_D8354001CDC8D6DC_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x139B93E0)
#define CLASS_1_D8354001CDC8D6DC_SET_ASYNCLATENCYWINDOWSIZE_OFFSET UNITYSDK_OFFSET(0x139B9410)
#define CLASS_1_D8354001CDC8D6DC_SET_DEFAULTTOPN_OFFSET UNITYSDK_OFFSET(0x139B9430)
#define CLASS_1_D8354001CDC8D6DC_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x139B93F0)
#define CLASS_1_D8354001CDC8D6DC__CTOR_OFFSET UNITYSDK_OFFSET(0x139B9440)

inline static constexpr unsigned int Class_1_D8354001CDC8D6DC_TypeDefinitionIndex = 72360;

class Class_1_D8354001CDC8D6DC : public ::System::Object
{
public:
	::System::Boolean _Enabled_k__BackingField; // 0x10
	::System::Int32 _AsyncLatencyWindowSize_k__BackingField; // 0x14
	::System::Int32 _DefaultTopN_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8354001CDC8D6DC__CTOR_OFFSET))(this);
	}

	::System::Boolean get_Enabled()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8354001CDC8D6DC_GET_ENABLED_OFFSET))(this);
	}

	::System::Void set_Enabled(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D8354001CDC8D6DC_SET_ENABLED_OFFSET))(this, a1);
	}

	::System::Int32 get_AsyncLatencyWindowSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8354001CDC8D6DC_GET_ASYNCLATENCYWINDOWSIZE_OFFSET))(this);
	}

	::System::Void set_AsyncLatencyWindowSize(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D8354001CDC8D6DC_SET_ASYNCLATENCYWINDOWSIZE_OFFSET))(this, a1);
	}

	::System::Int32 get_DefaultTopN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8354001CDC8D6DC_GET_DEFAULTTOPN_OFFSET))(this);
	}

	::System::Void set_DefaultTopN(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D8354001CDC8D6DC_SET_DEFAULTTOPN_OFFSET))(this, a1);
	}
};
