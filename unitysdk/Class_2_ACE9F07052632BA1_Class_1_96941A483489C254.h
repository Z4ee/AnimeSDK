#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F00DC819D834EFD2.h"
#include "unitysdk/System/Object.h"

class Class_2_ACE9F07052632BA1;
class Class_2_FBF13766F1B90841;

#define CLASS_2_ACE9F07052632BA1_CLASS_1_96941A483489C254_METHOD_1_8A3D91A38AD395C0_OFFSET UNITYSDK_OFFSET(0x10DD5A70)
#define CLASS_2_ACE9F07052632BA1_CLASS_1_96941A483489C254__CTOR_OFFSET UNITYSDK_OFFSET(0x10DD31B0)

inline static constexpr unsigned int Class_2_ACE9F07052632BA1_Class_1_96941A483489C254_TypeDefinitionIndex = 53300;

class Class_2_ACE9F07052632BA1_Class_1_96941A483489C254 : public ::System::Object
{
public:
	::Class_2_ACE9F07052632BA1* Field_1_1; // 0x10
	::Class_2_FBF13766F1B90841* Field_1_2; // 0x18
	::Enum_3_F00DC819D834EFD2 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ACE9F07052632BA1_CLASS_1_96941A483489C254__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8A3D91A38AD395C0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_ACE9F07052632BA1_CLASS_1_96941A483489C254_METHOD_1_8A3D91A38AD395C0_OFFSET))(this, a1);
	}
};
