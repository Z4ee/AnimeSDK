#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowPieceBlendMode.h"
#include "unitysdk/System/Object.h"

class Class_1_5A6771CD0CA2718D;
class Class_4_DA19DD65175B97CF;
namespace UnityEngine::Events { class UnityAction; }

#define CLASS_4_DA19DD65175B97CF_CLASS_1_A159AC09539B9FDA_METHOD_1_49E17BD8252BC738_OFFSET UNITYSDK_OFFSET(0x778D6C0)
#define CLASS_4_DA19DD65175B97CF_CLASS_1_A159AC09539B9FDA__CTOR_OFFSET UNITYSDK_OFFSET(0x778D6B0)

inline static constexpr unsigned int Class_4_DA19DD65175B97CF_Class_1_A159AC09539B9FDA_TypeDefinitionIndex = 62526;

class Class_4_DA19DD65175B97CF_Class_1_A159AC09539B9FDA : public ::System::Object
{
public:
	::Class_4_DA19DD65175B97CF* Field_1_0; // 0x10
	::UnityEngine::Events::UnityAction* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_DA19DD65175B97CF_CLASS_1_A159AC09539B9FDA__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_49E17BD8252BC738(::Class_1_5A6771CD0CA2718D* a1, ::MoleMole::HollowPieceBlendMode a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5A6771CD0CA2718D*, ::MoleMole::HollowPieceBlendMode))((::PBYTE)hIl2Cpp + CLASS_4_DA19DD65175B97CF_CLASS_1_A159AC09539B9FDA_METHOD_1_49E17BD8252BC738_OFFSET))(this, a1, a2);
	}
};
