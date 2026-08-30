#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_7A22A3DBEEDD1F80_METHOD_1_0C88AB06D46E777A_OFFSET UNITYSDK_OFFSET(0x1D738AD0)
#define CLASS_1_7A22A3DBEEDD1F80_METHOD_1_3A5196E698670334_OFFSET UNITYSDK_OFFSET(0x1D7389F0)
#define CLASS_1_7A22A3DBEEDD1F80_METHOD_1_700CBBBA555FF981_OFFSET UNITYSDK_OFFSET(0x1D738C60)
#define CLASS_1_7A22A3DBEEDD1F80__CTOR_OFFSET UNITYSDK_OFFSET(0x1D738D20)

inline static constexpr unsigned int Class_1_7A22A3DBEEDD1F80_TypeDefinitionIndex = 6327;

class Class_1_7A22A3DBEEDD1F80 : public ::System::Object
{
public:
	::Il2CppArray<::System::Byte>* MGAKNNMFPFA; // 0x10
	::System::Int32 PECPBEOHOJC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7A22A3DBEEDD1F80__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_3A5196E698670334(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7A22A3DBEEDD1F80_METHOD_1_3A5196E698670334_OFFSET))(this, a1);
	}

	::System::Void Method_1_0C88AB06D46E777A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7A22A3DBEEDD1F80_METHOD_1_0C88AB06D46E777A_OFFSET))(this);
	}

	::System::Boolean Method_1_700CBBBA555FF981(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7A22A3DBEEDD1F80_METHOD_1_700CBBBA555FF981_OFFSET))(this, a1);
	}
};
