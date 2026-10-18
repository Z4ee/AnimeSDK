#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_2_6F0826F956303ADF_METHOD_2_90F0F958E33AD0AE_OFFSET UNITYSDK_OFFSET(0x1CDF43E0)
#define CLASS_2_6F0826F956303ADF_METHOD_2_95BA474848C12124_OFFSET UNITYSDK_OFFSET(0x1CDF4680)
#define CLASS_2_6F0826F956303ADF__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDF4960)

inline static constexpr unsigned int Class_2_6F0826F956303ADF_TypeDefinitionIndex = 23336;

class Class_2_6F0826F956303ADF : public ::RPG::GameCore::JsonConfig
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6F0826F956303ADF__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_2_90F0F958E33AD0AE(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_2_6F0826F956303ADF*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_2_6F0826F956303ADF*&))((::PBYTE)hIl2Cpp + CLASS_2_6F0826F956303ADF_METHOD_2_90F0F958E33AD0AE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_2_95BA474848C12124(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_2_6F0826F956303ADF* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_2_6F0826F956303ADF*))((::PBYTE)hIl2Cpp + CLASS_2_6F0826F956303ADF_METHOD_2_95BA474848C12124_OFFSET))(a1, a2);
	}
};
