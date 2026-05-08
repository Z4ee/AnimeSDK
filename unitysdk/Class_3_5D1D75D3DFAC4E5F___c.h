#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_12.h"
#include "unitysdk/System/Object.h"

#define CLASS_3_5D1D75D3DFAC4E5F___C_METHOD_1_4C706B6019B13D4A_OFFSET UNITYSDK_OFFSET(0x1723E760)
#define CLASS_3_5D1D75D3DFAC4E5F___C_METHOD_1_7439D2F0DCA77B50_OFFSET UNITYSDK_OFFSET(0x1723E770)
#define CLASS_3_5D1D75D3DFAC4E5F___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1723E710)
#define CLASS_3_5D1D75D3DFAC4E5F___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1723E750)

inline static constexpr unsigned int Class_3_5D1D75D3DFAC4E5F___c_TypeDefinitionIndex = 23269;

class Class_3_5D1D75D3DFAC4E5F___c : public ::System::Object
{
public:
	static ::Class_3_5D1D75D3DFAC4E5F___c** StaticGet___9()
	{
		return (::Class_3_5D1D75D3DFAC4E5F___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_5D1D75D3DFAC4E5F___c_TypeDefinitionIndex)->GetStaticField(0xD7F0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_5D1D75D3DFAC4E5F___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5D1D75D3DFAC4E5F___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_4C706B6019B13D4A(::Enum_3_0A3761FE34514D6C_12 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_12))((::PBYTE)hIl2Cpp + CLASS_3_5D1D75D3DFAC4E5F___C_METHOD_1_4C706B6019B13D4A_OFFSET))(this, a1);
	}

	::Enum_3_0A3761FE34514D6C_12 Method_1_7439D2F0DCA77B50(::System::Int32 a1)
	{
		return ((::Enum_3_0A3761FE34514D6C_12(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_5D1D75D3DFAC4E5F___C_METHOD_1_7439D2F0DCA77B50_OFFSET))(this, a1);
	}
};
