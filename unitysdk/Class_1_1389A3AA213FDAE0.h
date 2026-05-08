#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }

#define CLASS_1_1389A3AA213FDAE0_METHOD_1_262F3A7EADBD3DE2_OFFSET UNITYSDK_OFFSET(0x12581A90)
#define CLASS_1_1389A3AA213FDAE0_METHOD_1_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x125815A0)
#define CLASS_1_1389A3AA213FDAE0_METHOD_1_AC7CD4175E0A3EF8_OFFSET UNITYSDK_OFFSET(0x12581D80)
#define CLASS_1_1389A3AA213FDAE0_METHOD_1_B022A9F008C60D1A_OFFSET UNITYSDK_OFFSET(0x125812D0)
#define CLASS_1_1389A3AA213FDAE0_METHOD_1_B80A0C41DE490B33_OFFSET UNITYSDK_OFFSET(0x125816E0)
#define CLASS_1_1389A3AA213FDAE0_METHOD_1_CC99BBFAC9417CA7_OFFSET UNITYSDK_OFFSET(0x12582010)
#define CLASS_1_1389A3AA213FDAE0_METHOD_1_FDEA3D33C50336D6_OFFSET UNITYSDK_OFFSET(0x12581B70)
#define CLASS_1_1389A3AA213FDAE0__CCTOR_OFFSET UNITYSDK_OFFSET(0x125812C0)
#define CLASS_1_1389A3AA213FDAE0__CTOR_OFFSET UNITYSDK_OFFSET(0x12581230)

inline static constexpr unsigned int Class_1_1389A3AA213FDAE0_TypeDefinitionIndex = 52218;

class Class_1_1389A3AA213FDAE0 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_7()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1389A3AA213FDAE0_TypeDefinitionIndex)->GetStaticField(0xA320);
	}
	// static const ::System::String* Field_1_0; // 0x0
	::System::Action* Field_1_6; // 0x10
	::System::Action* Field_1_5; // 0x18
	::System::Int32 Field_1_2; // 0x20
	::System::Int32 Field_1_3; // 0x24
	::System::Boolean Field_1_9; // 0x28
	::System::Boolean Field_1_4; // 0x29
	::System::Single Field_1_1; // 0x2C
	::System::Int32 Field_1_8; // 0x30

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3, ::System::Action* a4, ::System::Action* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_1389A3AA213FDAE0__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1389A3AA213FDAE0__CCTOR_OFFSET))();
	}

	::System::Void Method_1_B022A9F008C60D1A(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_1389A3AA213FDAE0_METHOD_1_B022A9F008C60D1A_OFFSET))(this, a1);
	}

	::System::Void Method_1_B80A0C41DE490B33(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_1389A3AA213FDAE0_METHOD_1_B80A0C41DE490B33_OFFSET))(this, a1);
	}

	::System::Void Method_1_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1389A3AA213FDAE0_METHOD_1_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_1_FDEA3D33C50336D6(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_1389A3AA213FDAE0_METHOD_1_FDEA3D33C50336D6_OFFSET))(this, a1);
	}

	::System::Void Method_1_AC7CD4175E0A3EF8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1389A3AA213FDAE0_METHOD_1_AC7CD4175E0A3EF8_OFFSET))(this);
	}

	::System::Void Method_1_CC99BBFAC9417CA7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1389A3AA213FDAE0_METHOD_1_CC99BBFAC9417CA7_OFFSET))(this);
	}

	::System::String* Method_1_262F3A7EADBD3DE2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1389A3AA213FDAE0_METHOD_1_262F3A7EADBD3DE2_OFFSET))(this);
	}
};
