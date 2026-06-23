#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_1A39E1B51756BF41;
class Class_2_B4378B46E0020E85;

#define CLASS_1_A07101AD914E0F66_METHOD_1_937F8473216A3162_OFFSET UNITYSDK_OFFSET(0x150AF5F0)
#define CLASS_1_A07101AD914E0F66_METHOD_1_A3E94568D5184024_OFFSET UNITYSDK_OFFSET(0x150AF8B0)
#define CLASS_1_A07101AD914E0F66_METHOD_1_A94BAB85685275CB_OFFSET UNITYSDK_OFFSET(0x150AF2F0)
#define CLASS_1_A07101AD914E0F66__CTOR_OFFSET UNITYSDK_OFFSET(0x150AF2E0)

inline static constexpr unsigned int Class_1_A07101AD914E0F66_TypeDefinitionIndex = 41458;

class Class_1_A07101AD914E0F66 : public ::System::Object
{
public:
	::Class_2_1A39E1B51756BF41* Field_1_0; // 0x10
	::Class_2_1A39E1B51756BF41* Field_1_2; // 0x18
	::Class_2_1A39E1B51756BF41* Field_1_1; // 0x20
	::Class_2_B4378B46E0020E85* Field_1_3; // 0x28
	::System::Boolean Field_1_4; // 0x30
	::System::Int32 Field_1_6; // 0x34
	::System::Int32 Field_1_5; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A07101AD914E0F66__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A94BAB85685275CB(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A07101AD914E0F66_METHOD_1_A94BAB85685275CB_OFFSET))(this, a1);
	}

	::System::Void Method_1_937F8473216A3162()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A07101AD914E0F66_METHOD_1_937F8473216A3162_OFFSET))(this);
	}

	::System::Void Method_1_A3E94568D5184024(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A07101AD914E0F66_METHOD_1_A3E94568D5184024_OFFSET))(this, a1, a2);
	}
};
