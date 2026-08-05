#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_AB4261DB06E3A6BD.h"

namespace System { class Action; }

#define CLASS_3_7629698E0909DC74_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x18B1EAE0)
#define CLASS_3_7629698E0909DC74_METHOD_3_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0x18B1EB60)
#define CLASS_3_7629698E0909DC74_METHOD_3_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x18B1EA20)
#define CLASS_3_7629698E0909DC74__CTOR_OFFSET UNITYSDK_OFFSET(0x18B1E930)

inline static constexpr unsigned int Class_3_7629698E0909DC74_TypeDefinitionIndex = 86944;

class Class_3_7629698E0909DC74 : public ::Class_2_AB4261DB06E3A6BD
{
public:
	::System::Action* Field_3_0; // 0x40
	::System::Single Field_3_1; // 0x48

	::System::Void _ctor(::System::Single a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_3_7629698E0909DC74__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_7629698E0909DC74_METHOD_3_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Void Method_3_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7629698E0909DC74_METHOD_3_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_3_C561FF611C07A44C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7629698E0909DC74_METHOD_3_C561FF611C07A44C_OFFSET))(this);
	}
};
