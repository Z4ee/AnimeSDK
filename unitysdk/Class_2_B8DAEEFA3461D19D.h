#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BB4BCB31282727A3.h"

namespace System { class String; }

#define CLASS_2_B8DAEEFA3461D19D_METHOD_2_611142A6ECF0D805_OFFSET UNITYSDK_OFFSET(0x16261910)
#define CLASS_2_B8DAEEFA3461D19D_METHOD_2_7D201B4343E63821_OFFSET UNITYSDK_OFFSET(0x16261C40)
#define CLASS_2_B8DAEEFA3461D19D_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x16261AC0)
#define CLASS_2_B8DAEEFA3461D19D_METHOD_2_9C844AB9164FA35A_OFFSET UNITYSDK_OFFSET(0x16261CB0)
#define CLASS_2_B8DAEEFA3461D19D_METHOD_2_9D7B81571ADA6EDE_OFFSET UNITYSDK_OFFSET(0x16261BC0)
#define CLASS_2_B8DAEEFA3461D19D_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x16261900)
#define CLASS_2_B8DAEEFA3461D19D_METHOD_2_F24A112B56A2E4B4_OFFSET UNITYSDK_OFFSET(0x16261C50)
#define CLASS_2_B8DAEEFA3461D19D__CCTOR_OFFSET UNITYSDK_OFFSET(0x16261A80)
#define CLASS_2_B8DAEEFA3461D19D__CTOR_OFFSET UNITYSDK_OFFSET(0x16261A20)

inline static constexpr unsigned int Class_2_B8DAEEFA3461D19D_TypeDefinitionIndex = 70269;

class Class_2_B8DAEEFA3461D19D : public ::Class_1_BB4BCB31282727A3
{
public:
	static ::System::String** StaticGet_Field_2_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B8DAEEFA3461D19D_TypeDefinitionIndex)->GetStaticField(0x40960);
	}
	::System::Boolean Field_2_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B8DAEEFA3461D19D__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_B8DAEEFA3461D19D__CCTOR_OFFSET))();
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B8DAEEFA3461D19D_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean Method_2_611142A6ECF0D805(::System::String*& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_2_B8DAEEFA3461D19D_METHOD_2_611142A6ECF0D805_OFFSET))(this, a1);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B8DAEEFA3461D19D_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	static ::System::Void Method_2_7D201B4343E63821(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_B8DAEEFA3461D19D_METHOD_2_7D201B4343E63821_OFFSET))(a1);
	}

	static ::System::String* Method_2_F24A112B56A2E4B4()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_2_B8DAEEFA3461D19D_METHOD_2_F24A112B56A2E4B4_OFFSET))();
	}

	::System::Void Method_2_9C844AB9164FA35A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B8DAEEFA3461D19D_METHOD_2_9C844AB9164FA35A_OFFSET))(this);
	}

	static ::System::Void Method_2_9D7B81571ADA6EDE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_B8DAEEFA3461D19D_METHOD_2_9D7B81571ADA6EDE_OFFSET))();
	}
};
