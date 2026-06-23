#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_01A9580380D362EF;
class Class_3_025FF4981524A424_611;
namespace System { class Action; }

#define CLASS_2_01A9580380D362EF_CLASS_1_7066058C91A8E34D_METHOD_1_A8BCB11044E64D80_OFFSET UNITYSDK_OFFSET(0x10E6DA30)
#define CLASS_2_01A9580380D362EF_CLASS_1_7066058C91A8E34D__CTOR_OFFSET UNITYSDK_OFFSET(0x10E6DA20)

inline static constexpr unsigned int Class_2_01A9580380D362EF_Class_1_7066058C91A8E34D_TypeDefinitionIndex = 40028;

class Class_2_01A9580380D362EF_Class_1_7066058C91A8E34D : public ::System::Object
{
public:
	::Class_2_01A9580380D362EF* Field_1_0; // 0x10
	::System::Action* Field_1_3; // 0x18
	::Il2CppArray<::System::UInt32>* Field_1_2; // 0x20
	::System::UInt32 Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01A9580380D362EF_CLASS_1_7066058C91A8E34D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A8BCB11044E64D80(::Class_3_025FF4981524A424_611* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_025FF4981524A424_611*))((::PBYTE)hIl2Cpp + CLASS_2_01A9580380D362EF_CLASS_1_7066058C91A8E34D_METHOD_1_A8BCB11044E64D80_OFFSET))(this, a1);
	}
};
