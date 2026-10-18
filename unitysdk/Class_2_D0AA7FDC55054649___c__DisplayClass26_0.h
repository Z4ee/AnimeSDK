#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_5A70B04B36C288E4.h"
#include "unitysdk/System/Object.h"

class Class_1_5E2D533DC7C7E714;
class Class_2_BB7158A19169E7DC;
class Class_2_D0AA7FDC55054649;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_2_D0AA7FDC55054649___C__DISPLAYCLASS26_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C569780)
#define CLASS_2_D0AA7FDC55054649___C__DISPLAYCLASS26_0___REFRESHFULLLINEBUFFEFFECT_B__2_OFFSET UNITYSDK_OFFSET(0x1C569C60)

inline static constexpr unsigned int Class_2_D0AA7FDC55054649___c__DisplayClass26_0_TypeDefinitionIndex = 41757;

class Class_2_D0AA7FDC55054649___c__DisplayClass26_0 : public ::System::Object
{
public:
	::Class_2_D0AA7FDC55054649* __4__this; // 0x10
	::Class_1_5E2D533DC7C7E714* buffPiece; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D0AA7FDC55054649___C__DISPLAYCLASS26_0__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::Struct_2_5A70B04B36C288E4>* __RefreshFullLineBuffEffect_b__2(::Class_2_BB7158A19169E7DC* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Struct_2_5A70B04B36C288E4>*(*)(::PVOID, ::Class_2_BB7158A19169E7DC*))((::PBYTE)hIl2Cpp + CLASS_2_D0AA7FDC55054649___C__DISPLAYCLASS26_0___REFRESHFULLLINEBUFFEFFECT_B__2_OFFSET))(this, a1);
	}
};
