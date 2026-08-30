#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_650;
class Class_1_68CF822132788D19_1;
class Class_1_8CA784D26D9A6CF7;
class Class_2_570C2CCF5D0BF6A1;
class Class_2_5D2387066E2BACFE;

#define CLASS_1_630CB84C93B59414___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x162EAAB0)
#define CLASS_1_630CB84C93B59414___C__DISPLAYCLASS13_0__STARTFORAUDIOPACKSIZE_B__0_OFFSET UNITYSDK_OFFSET(0x162FF890)

inline static constexpr unsigned int Class_1_630CB84C93B59414___c__DisplayClass13_0_TypeDefinitionIndex = 59648;

class Class_1_630CB84C93B59414___c__DisplayClass13_0 : public ::System::Object
{
public:
	::Class_1_8CA784D26D9A6CF7* queue; // 0x10
	::Class_2_5D2387066E2BACFE* audioData; // 0x18
	::Class_1_68CF822132788D19_1* resArchiveData; // 0x20
	::Class_2_570C2CCF5D0BF6A1* audioHPatch; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_630CB84C93B59414___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
	}

	::System::Void _StartForAudioPackSize_b__0(::Class_0_16E4307DCC419505_650* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_650*))((::PBYTE)hIl2Cpp + CLASS_1_630CB84C93B59414___C__DISPLAYCLASS13_0__STARTFORAUDIOPACKSIZE_B__0_OFFSET))(this, a1);
	}
};
