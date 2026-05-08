#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_F21834FAEFB228CB;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_5110B68789FADD82_METHOD_1_89DF73B4317F6190_OFFSET UNITYSDK_OFFSET(0x1BC27090)
#define CLASS_1_5110B68789FADD82_METHOD_1_9C06C768B25E4E13_OFFSET UNITYSDK_OFFSET(0x1BC27140)
#define CLASS_1_5110B68789FADD82__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BC26FE0)
#define CLASS_1_5110B68789FADD82__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC26FD0)

inline static constexpr unsigned int Class_1_5110B68789FADD82_TypeDefinitionIndex = 9257;

class Class_1_5110B68789FADD82 : public ::System::Object
{
public:
	static ::Class_1_5110B68789FADD82** StaticGet_Field_1_0()
	{
		return (::Class_1_5110B68789FADD82**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5110B68789FADD82_TypeDefinitionIndex)->GetStaticField(0x8220);
	}
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_2_F21834FAEFB228CB*>* Field_1_1; // 0x10

	::System::Void _ctor(::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_2_F21834FAEFB228CB*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_2_F21834FAEFB228CB*>*))((::PBYTE)hIl2Cpp + CLASS_1_5110B68789FADD82__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5110B68789FADD82__CCTOR_OFFSET))();
	}

	::Class_2_F21834FAEFB228CB* Method_1_89DF73B4317F6190(::System::String* a1)
	{
		return ((::Class_2_F21834FAEFB228CB*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5110B68789FADD82_METHOD_1_89DF73B4317F6190_OFFSET))(this, a1);
	}

	static ::Class_1_5110B68789FADD82* Method_1_9C06C768B25E4E13()
	{
		return ((::Class_1_5110B68789FADD82*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5110B68789FADD82_METHOD_1_9C06C768B25E4E13_OFFSET))();
	}
};
