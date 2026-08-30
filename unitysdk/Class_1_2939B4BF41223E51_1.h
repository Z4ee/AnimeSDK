#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_955;
namespace System { class String; }

#define CLASS_1_2939B4BF41223E51_1_METHOD_1_90C6F9933F7B65E0_OFFSET UNITYSDK_OFFSET(0x1892EBE0)
#define CLASS_1_2939B4BF41223E51_1_METHOD_1_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x1892EB90)
#define CLASS_1_2939B4BF41223E51_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1892EF60)
#define CLASS_1_2939B4BF41223E51_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1892EB80)

inline static constexpr unsigned int Class_1_2939B4BF41223E51_1_TypeDefinitionIndex = 67183;

class Class_1_2939B4BF41223E51_1 : public ::System::Object
{
public:
	static ::Class_1_2939B4BF41223E51_1** StaticGet_FMJPMFEDIJL()
	{
		return (::Class_1_2939B4BF41223E51_1**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2939B4BF41223E51_1_TypeDefinitionIndex)->GetStaticField(0x11DB0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2939B4BF41223E51_1__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2939B4BF41223E51_1__CCTOR_OFFSET))();
	}

	::System::String* Method_1_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2939B4BF41223E51_1_METHOD_1_DA1BF2C227DC3D86_OFFSET))(this);
	}

	::System::Object* Method_1_90C6F9933F7B65E0(::System::String* a1, ::Class_0_16E4307DCC419505_955* a2)
	{
		return ((::System::Object*(*)(::PVOID, ::System::String*, ::Class_0_16E4307DCC419505_955*))((::PBYTE)hIl2Cpp + CLASS_1_2939B4BF41223E51_1_METHOD_1_90C6F9933F7B65E0_OFFSET))(this, a1, a2);
	}
};
