#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_CA182B9B6890D069;
namespace MoleMole { class TextureSheetAnimCurveParam; }
namespace System { class Action; }

#define CLASS_2_CA182B9B6890D069_CLASS_1_AB39F088AFB1A782_METHOD_1_8FAD57395F26ACC4_OFFSET UNITYSDK_OFFSET(0x13CCBD90)
#define CLASS_2_CA182B9B6890D069_CLASS_1_AB39F088AFB1A782_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x13CCBE80)
#define CLASS_2_CA182B9B6890D069_CLASS_1_AB39F088AFB1A782__CTOR_OFFSET UNITYSDK_OFFSET(0x13CCBD80)

inline static constexpr unsigned int Class_2_CA182B9B6890D069_Class_1_AB39F088AFB1A782_TypeDefinitionIndex = 39956;

class Class_2_CA182B9B6890D069_Class_1_AB39F088AFB1A782 : public ::System::Object
{
public:
	::MoleMole::TextureSheetAnimCurveParam* Field_1_0; // 0x10
	::System::Action* Field_1_3; // 0x18
	::Class_2_CA182B9B6890D069* Field_1_1; // 0x20
	::System::Int32 Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA182B9B6890D069_CLASS_1_AB39F088AFB1A782__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8FAD57395F26ACC4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CA182B9B6890D069_CLASS_1_AB39F088AFB1A782_METHOD_1_8FAD57395F26ACC4_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA182B9B6890D069_CLASS_1_AB39F088AFB1A782_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}
};
