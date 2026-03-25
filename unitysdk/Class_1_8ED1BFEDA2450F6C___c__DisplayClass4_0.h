#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A0302E9AE0B8A2B9;
class Class_3_F784053AC1963631;
namespace RPG::Client { class OnPreloadOperationDelegate; }

#define CLASS_1_8ED1BFEDA2450F6C___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x10B50BD0)
#define CLASS_1_8ED1BFEDA2450F6C___C__DISPLAYCLASS4_0__PRELOADASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x10B510E0)

inline static constexpr unsigned int Class_1_8ED1BFEDA2450F6C___c__DisplayClass4_0_TypeDefinitionIndex = 48311;

class Class_1_8ED1BFEDA2450F6C___c__DisplayClass4_0 : public ::System::Object
{
public:
	::Class_3_F784053AC1963631* __9__0; // 0x10
	::RPG::Client::OnPreloadOperationDelegate* onComplete; // 0x18
	::System::Int32 preloadCount; // 0x20
	::System::Int32 preloadedNum; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8ED1BFEDA2450F6C___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
	}

	::System::Void _PreloadAsync_b__0(::Class_1_A0302E9AE0B8A2B9* pool2, ::System::Boolean result)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A0302E9AE0B8A2B9*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8ED1BFEDA2450F6C___C__DISPLAYCLASS4_0__PRELOADASYNC_B__0_OFFSET))(this, pool2, result);
	}
};
