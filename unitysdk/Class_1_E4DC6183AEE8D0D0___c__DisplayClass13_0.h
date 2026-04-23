#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D39A50E5DCA95A6D;
class Class_1_E4DC6183AEE8D0D0;

#define CLASS_1_E4DC6183AEE8D0D0___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC70F760)
#define CLASS_1_E4DC6183AEE8D0D0___C__DISPLAYCLASS13_0__STARTDOWNLOADPATCH_B__0_OFFSET UNITYSDK_OFFSET(0xC7102A0)

inline static constexpr unsigned int Class_1_E4DC6183AEE8D0D0___c__DisplayClass13_0_TypeDefinitionIndex = 69682;

class Class_1_E4DC6183AEE8D0D0___c__DisplayClass13_0 : public ::System::Object
{
public:
	::Class_1_E4DC6183AEE8D0D0* __4__this; // 0x10
	::System::UInt32 revision; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4DC6183AEE8D0D0___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
	}

	::System::Void _StartDownloadPatch_b__0(::System::Boolean succeed, ::Class_1_D39A50E5DCA95A6D* patchInfo)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_1_D39A50E5DCA95A6D*))((::PBYTE)hIl2Cpp + CLASS_1_E4DC6183AEE8D0D0___C__DISPLAYCLASS13_0__STARTDOWNLOADPATCH_B__0_OFFSET))(this, succeed, patchInfo);
	}
};
