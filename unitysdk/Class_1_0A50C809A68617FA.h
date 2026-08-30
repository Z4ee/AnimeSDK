#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9E825E3D3A62B6E0;
class Class_1_CC76D1702CC17C09_8;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0A50C809A68617FA_METHOD_1_0EE0E75A50EA0EA8_OFFSET UNITYSDK_OFFSET(0xC0F7690)
#define CLASS_1_0A50C809A68617FA_METHOD_1_DCDF2FF319F7355F_OFFSET UNITYSDK_OFFSET(0xC0F7640)
#define CLASS_1_0A50C809A68617FA__CTOR_OFFSET UNITYSDK_OFFSET(0xC0F7790)

inline static constexpr unsigned int Class_1_0A50C809A68617FA_TypeDefinitionIndex = 78732;

class Class_1_0A50C809A68617FA : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_9E825E3D3A62B6E0*>* MCMKAOFNDMN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A50C809A68617FA__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_DCDF2FF319F7355F(::System::Collections::Generic::List_1<::Class_1_9E825E3D3A62B6E0*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_9E825E3D3A62B6E0*>*))((::PBYTE)hIl2Cpp + CLASS_1_0A50C809A68617FA_METHOD_1_DCDF2FF319F7355F_OFFSET))(this, a1);
	}

	::Class_1_CC76D1702CC17C09_8* Method_1_0EE0E75A50EA0EA8(::System::UInt32 a1)
	{
		return ((::Class_1_CC76D1702CC17C09_8*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0A50C809A68617FA_METHOD_1_0EE0E75A50EA0EA8_OFFSET))(this, a1);
	}
};
