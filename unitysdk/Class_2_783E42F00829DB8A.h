#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FD611945730E269E.h"

class Class_0_16E4307DCC419505_1243;
class Class_2_1AFE97B819916E17;

#define CLASS_2_783E42F00829DB8A_METHOD_2_8FAD57395F26ACC4_OFFSET UNITYSDK_OFFSET(0x17C61CF0)
#define CLASS_2_783E42F00829DB8A_METHOD_2_9AB55F553C4AC6E8_OFFSET UNITYSDK_OFFSET(0x17C61310)
#define CLASS_2_783E42F00829DB8A__CTOR_OFFSET UNITYSDK_OFFSET(0x17C61300)
#define CLASS_2_783E42F00829DB8A__ONSTART_B__1_0_OFFSET UNITYSDK_OFFSET(0x17C61D70)

inline static constexpr unsigned int Class_2_783E42F00829DB8A_TypeDefinitionIndex = 74284;

class Class_2_783E42F00829DB8A : public ::Class_1_FD611945730E269E
{
public:
	::Class_2_1AFE97B819916E17* Field_2_0; // 0x18
	::Class_0_16E4307DCC419505_1243* Field_2_1; // 0x20
	::System::Int32 Field_2_2; // 0x28

	::System::Void _ctor(::Class_2_1AFE97B819916E17* a1, ::Class_0_16E4307DCC419505_1243* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1AFE97B819916E17*, ::Class_0_16E4307DCC419505_1243*))((::PBYTE)hIl2Cpp + CLASS_2_783E42F00829DB8A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9AB55F553C4AC6E8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_783E42F00829DB8A_METHOD_2_9AB55F553C4AC6E8_OFFSET))(this);
	}

	::System::Void Method_2_8FAD57395F26ACC4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_783E42F00829DB8A_METHOD_2_8FAD57395F26ACC4_OFFSET))(this, a1);
	}

	::System::Void _OnStart_b__1_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_783E42F00829DB8A__ONSTART_B__1_0_OFFSET))(this);
	}
};
