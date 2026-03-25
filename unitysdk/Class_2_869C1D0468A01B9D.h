#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6D4F0531FDCA6C43.h"
#include "unitysdk/RPG/GameCore/FiveDimOrthoDirection.h"

#define CLASS_2_869C1D0468A01B9D_CLEAR_OFFSET UNITYSDK_OFFSET(0x167ED1F0)
#define CLASS_2_869C1D0468A01B9D__CTOR_OFFSET UNITYSDK_OFFSET(0x167ED290)
#define CLASS_2_869C1D0468A01B9D___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0x167ED2A0)

inline static constexpr unsigned int Class_2_869C1D0468A01B9D_TypeDefinitionIndex = 33547;

class Class_2_869C1D0468A01B9D : public ::Class_1_6D4F0531FDCA6C43
{
public:
	::System::Boolean Field_2_1; // 0xF0
	::RPG::GameCore::FiveDimOrthoDirection Field_2_0; // 0xF4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_869C1D0468A01B9D__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_869C1D0468A01B9D_CLEAR_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_869C1D0468A01B9D___IFIXBASEPROXY_CLEAR_OFFSET))(this);
	}
};
