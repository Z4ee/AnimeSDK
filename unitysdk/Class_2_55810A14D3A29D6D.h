#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_55810A14D3A29D6D_METHOD_2_5D9CF83CFC617CF9_OFFSET UNITYSDK_OFFSET(0xA6CD5B0)
#define CLASS_2_55810A14D3A29D6D_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0xA6CD4C0)
#define CLASS_2_55810A14D3A29D6D__CTOR_OFFSET UNITYSDK_OFFSET(0xA6CD520)
#define CLASS_2_55810A14D3A29D6D__ONBIND_OFFSET UNITYSDK_OFFSET(0xA6CD3E0)
#define CLASS_2_55810A14D3A29D6D___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xA6CD550)

inline static constexpr unsigned int Class_2_55810A14D3A29D6D_TypeDefinitionIndex = 66808;

class Class_2_55810A14D3A29D6D : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::RPG::GameCore::GameEntity* Field_2_0; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55810A14D3A29D6D__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55810A14D3A29D6D__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_55810A14D3A29D6D_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55810A14D3A29D6D___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5D9CF83CFC617CF9(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_55810A14D3A29D6D_METHOD_2_5D9CF83CFC617CF9_OFFSET))(this, a1);
	}
};
