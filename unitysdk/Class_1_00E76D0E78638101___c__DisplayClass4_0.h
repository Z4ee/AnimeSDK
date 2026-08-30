#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A0302E9AE0B8A2B9;
class Class_3_F784053AC1963631_1;
namespace RPG::Client { class OnPreloadOperationDelegate; }

#define CLASS_1_00E76D0E78638101___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBC563F0)
#define CLASS_1_00E76D0E78638101___C__DISPLAYCLASS4_0__PRELOADASYNC_B__0_OFFSET UNITYSDK_OFFSET(0xBC568C0)

inline static constexpr unsigned int Class_1_00E76D0E78638101___c__DisplayClass4_0_TypeDefinitionIndex = 59821;

class Class_1_00E76D0E78638101___c__DisplayClass4_0 : public ::System::Object
{
public:
	::RPG::Client::OnPreloadOperationDelegate* onComplete; // 0x10
	::Class_3_F784053AC1963631_1* __9__0; // 0x18
	::System::Int32 preloadedNum; // 0x20
	::System::Int32 preloadCount; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00E76D0E78638101___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
	}

	::System::Void _PreloadAsync_b__0(::Class_1_A0302E9AE0B8A2B9* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A0302E9AE0B8A2B9*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_00E76D0E78638101___C__DISPLAYCLASS4_0__PRELOADASYNC_B__0_OFFSET))(this, a1, a2);
	}
};
