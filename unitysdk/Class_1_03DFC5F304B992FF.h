#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_03DFC5F304B992FF_Class_1_5A9588B06DE4C619;
class Class_1_03DFC5F304B992FF_Class_1_8252B2A712AB36FF;
class Class_1_6FC4D75D938BC053_2;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_03DFC5F304B992FF_METHOD_1_3E0FD75EA94C8D74_OFFSET UNITYSDK_OFFSET(0x11E4BD50)
#define CLASS_1_03DFC5F304B992FF_METHOD_1_C58EA836B8C3CA1D_OFFSET UNITYSDK_OFFSET(0x11E4BCC0)
#define CLASS_1_03DFC5F304B992FF__CTOR_OFFSET UNITYSDK_OFFSET(0x11E4C9B0)

inline static constexpr unsigned int Class_1_03DFC5F304B992FF_TypeDefinitionIndex = 51676;

class Class_1_03DFC5F304B992FF : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_03DFC5F304B992FF_Class_1_5A9588B06DE4C619*>* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::Class_1_03DFC5F304B992FF_Class_1_8252B2A712AB36FF*>* Field_1_3; // 0x18
	::System::Int32 Field_1_2; // 0x20
	::System::UInt32 Field_1_0; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03DFC5F304B992FF__CTOR_OFFSET))(this);
	}

	::Class_1_03DFC5F304B992FF_Class_1_5A9588B06DE4C619* Method_1_C58EA836B8C3CA1D()
	{
		return ((::Class_1_03DFC5F304B992FF_Class_1_5A9588B06DE4C619*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03DFC5F304B992FF_METHOD_1_C58EA836B8C3CA1D_OFFSET))(this);
	}

	::Class_1_6FC4D75D938BC053_2* Method_1_3E0FD75EA94C8D74()
	{
		return ((::Class_1_6FC4D75D938BC053_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03DFC5F304B992FF_METHOD_1_3E0FD75EA94C8D74_OFFSET))(this);
	}
};
