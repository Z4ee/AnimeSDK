#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_48A3D3A34C52331D_54;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_33EA27A25F076E07_CLASS_1_1711EFA2CB81D618_METHOD_1_754748ACD747E361_OFFSET UNITYSDK_OFFSET(0x11C1BB90)
#define CLASS_2_33EA27A25F076E07_CLASS_1_1711EFA2CB81D618_METHOD_1_DFA777394FA7F30D_OFFSET UNITYSDK_OFFSET(0x11C1BDD0)
#define CLASS_2_33EA27A25F076E07_CLASS_1_1711EFA2CB81D618__CTOR_OFFSET UNITYSDK_OFFSET(0x11C1BB80)

inline static constexpr unsigned int Class_2_33EA27A25F076E07_Class_1_1711EFA2CB81D618_TypeDefinitionIndex = 81028;

class Class_2_33EA27A25F076E07_Class_1_1711EFA2CB81D618 : public ::System::Object
{
public:
	::System::Action* Field_1_2; // 0x10
	::System::Action_1<::Class_3_48A3D3A34C52331D_54*>* Field_1_0; // 0x18
	::System::Int32 Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_33EA27A25F076E07_CLASS_1_1711EFA2CB81D618__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_754748ACD747E361(::Class_3_48A3D3A34C52331D_54* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_48A3D3A34C52331D_54*))((::PBYTE)hIl2Cpp + CLASS_2_33EA27A25F076E07_CLASS_1_1711EFA2CB81D618_METHOD_1_754748ACD747E361_OFFSET))(this, a1);
	}

	::System::Void Method_1_DFA777394FA7F30D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_33EA27A25F076E07_CLASS_1_1711EFA2CB81D618_METHOD_1_DFA777394FA7F30D_OFFSET))(this);
	}
};
