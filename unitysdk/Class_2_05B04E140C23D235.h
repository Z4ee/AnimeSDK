#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3713064DEE761936.h"

namespace System { class String; }

#define CLASS_2_05B04E140C23D235_CLEAR_OFFSET UNITYSDK_OFFSET(0x138F0EA0)
#define CLASS_2_05B04E140C23D235_METHOD_2_E9C0A4FCB77B6D02_OFFSET UNITYSDK_OFFSET(0x138F0E30)
#define CLASS_2_05B04E140C23D235_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x138F0F30)
#define CLASS_2_05B04E140C23D235__CTOR_OFFSET UNITYSDK_OFFSET(0x138F0F90)
#define CLASS_2_05B04E140C23D235___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0x138F0FA0)
#define CLASS_2_05B04E140C23D235___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x138F1020)

inline static constexpr unsigned int Class_2_05B04E140C23D235_TypeDefinitionIndex = 61594;

class Class_2_05B04E140C23D235 : public ::Class_1_3713064DEE761936
{
public:
	::System::String* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_05B04E140C23D235__CTOR_OFFSET))(this);
	}

	static ::Class_2_05B04E140C23D235* Method_2_E9C0A4FCB77B6D02()
	{
		return ((::Class_2_05B04E140C23D235*(*)())((::PBYTE)hIl2Cpp + CLASS_2_05B04E140C23D235_METHOD_2_E9C0A4FCB77B6D02_OFFSET))();
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_05B04E140C23D235_CLEAR_OFFSET))(this);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_05B04E140C23D235_ONEXECUTE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_05B04E140C23D235___IFIXBASEPROXY_CLEAR_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_05B04E140C23D235___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}
};
