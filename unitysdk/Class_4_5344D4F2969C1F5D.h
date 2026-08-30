#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_A2BC57CDDA246645.h"
#include "unitysdk/Struct_2_A7EFF121F1A9ACBF.h"

class Class_2_28DDC520D8AB45BC;
namespace System { class Object; }
namespace System { class String; }

#define CLASS_4_5344D4F2969C1F5D_METHOD_4_3C5F8E3777877644_OFFSET UNITYSDK_OFFSET(0x19267E70)
#define CLASS_4_5344D4F2969C1F5D_METHOD_4_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x19267F50)
#define CLASS_4_5344D4F2969C1F5D_METHOD_4_E24C1DF237CC375E_OFFSET UNITYSDK_OFFSET(0x19267D40)
#define CLASS_4_5344D4F2969C1F5D__CTOR_OFFSET UNITYSDK_OFFSET(0x19268000)
#define CLASS_4_5344D4F2969C1F5D__ONBIND_OFFSET UNITYSDK_OFFSET(0x19267C90)

inline static constexpr unsigned int Class_4_5344D4F2969C1F5D_TypeDefinitionIndex = 72114;

class Class_4_5344D4F2969C1F5D : public ::Class_3_A2BC57CDDA246645
{
public:
	// static const ::System::String* DJCBDJMACFH; // 0x0
	::Class_2_28DDC520D8AB45BC* KONBDNNCNKL; // 0x168

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_5344D4F2969C1F5D__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_5344D4F2969C1F5D__ONBIND_OFFSET))(this);
	}

	::System::Void Method_4_E24C1DF237CC375E(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_4_5344D4F2969C1F5D_METHOD_4_E24C1DF237CC375E_OFFSET))(this, a1);
	}

	::System::Boolean Method_4_3C5F8E3777877644(::Struct_2_A7EFF121F1A9ACBF a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_A7EFF121F1A9ACBF))((::PBYTE)hIl2Cpp + CLASS_4_5344D4F2969C1F5D_METHOD_4_3C5F8E3777877644_OFFSET))(this, a1);
	}

	::System::Void Method_4_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_5344D4F2969C1F5D_METHOD_4_B1936CE4DA97AA45_OFFSET))(this);
	}
};
