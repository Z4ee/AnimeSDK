#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_CEF07D2949A09D64___C__DISPLAYCLASS53_0__CTOR_OFFSET UNITYSDK_OFFSET(0xDD8E280)
#define CLASS_1_CEF07D2949A09D64___C__DISPLAYCLASS53_0__TRYPACKWITHSCALE_B__0_OFFSET UNITYSDK_OFFSET(0xDD8FBE0)
#define CLASS_1_CEF07D2949A09D64___C__DISPLAYCLASS53_0__TRYPACKWITHSCALE_B__1_OFFSET UNITYSDK_OFFSET(0xDD8FC30)

inline static constexpr unsigned int Class_1_CEF07D2949A09D64___c__DisplayClass53_0_TypeDefinitionIndex = 52056;

class Class_1_CEF07D2949A09D64___c__DisplayClass53_0 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* pixelSizes; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEF07D2949A09D64___C__DISPLAYCLASS53_0__CTOR_OFFSET))(this);
	}

	::System::Int32 _TryPackWithScale_b__0(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_CEF07D2949A09D64___C__DISPLAYCLASS53_0__TRYPACKWITHSCALE_B__0_OFFSET))(this, a1);
	}

	::System::Int32 _TryPackWithScale_b__1(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_CEF07D2949A09D64___C__DISPLAYCLASS53_0__TRYPACKWITHSCALE_B__1_OFFSET))(this, a1);
	}
};
