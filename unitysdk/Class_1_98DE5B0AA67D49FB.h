#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_0CE66CE38B43D79F;
class Class_2_7648B48D6982C483_1;
class Class_2_E055DAB088B97B64;

#define CLASS_1_98DE5B0AA67D49FB__CTOR_1_OFFSET UNITYSDK_OFFSET(0x15FF4800)
#define CLASS_1_98DE5B0AA67D49FB__CTOR_OFFSET UNITYSDK_OFFSET(0x15FF47F0)

inline static constexpr unsigned int Class_1_98DE5B0AA67D49FB_TypeDefinitionIndex = 59974;

class Class_1_98DE5B0AA67D49FB : public ::System::Object
{
public:
	::Class_2_E055DAB088B97B64* Field_1_0; // 0x10
	::Class_2_0CE66CE38B43D79F* Field_1_2; // 0x18
	::Class_2_7648B48D6982C483_1* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98DE5B0AA67D49FB__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_2_0CE66CE38B43D79F* a1, ::Class_2_7648B48D6982C483_1* a2, ::Class_2_E055DAB088B97B64* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0CE66CE38B43D79F*, ::Class_2_7648B48D6982C483_1*, ::Class_2_E055DAB088B97B64*))((::PBYTE)hIl2Cpp + CLASS_1_98DE5B0AA67D49FB__CTOR_1_OFFSET))(this, a1, a2, a3);
	}
};
