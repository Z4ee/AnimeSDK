#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9CF9955F8B7A43EF;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_EBE2BDD5F8C33F00_METHOD_1_2DCC295D0BD316F5_OFFSET UNITYSDK_OFFSET(0x11C82810)
#define CLASS_1_EBE2BDD5F8C33F00_METHOD_1_71C9FD83B3C3BA8B_OFFSET UNITYSDK_OFFSET(0x11C82CF0)
#define CLASS_1_EBE2BDD5F8C33F00_METHOD_1_953C20CDD097FB37_OFFSET UNITYSDK_OFFSET(0x11C82BB0)
#define CLASS_1_EBE2BDD5F8C33F00__CTOR_OFFSET UNITYSDK_OFFSET(0x11C82800)

inline static constexpr unsigned int Class_1_EBE2BDD5F8C33F00_TypeDefinitionIndex = 49025;

class Class_1_EBE2BDD5F8C33F00 : public ::System::Object
{
public:
	::System::Boolean Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBE2BDD5F8C33F00__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_9CF9955F8B7A43EF*>* Method_1_2DCC295D0BD316F5()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_9CF9955F8B7A43EF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBE2BDD5F8C33F00_METHOD_1_2DCC295D0BD316F5_OFFSET))(this);
	}

	::System::Int32 Method_1_953C20CDD097FB37(::Class_1_9CF9955F8B7A43EF* a1, ::Class_1_9CF9955F8B7A43EF* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_9CF9955F8B7A43EF*, ::Class_1_9CF9955F8B7A43EF*))((::PBYTE)hIl2Cpp + CLASS_1_EBE2BDD5F8C33F00_METHOD_1_953C20CDD097FB37_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_71C9FD83B3C3BA8B(::System::Int32& a1, ::System::Int32& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_EBE2BDD5F8C33F00_METHOD_1_71C9FD83B3C3BA8B_OFFSET))(this, a1, a2);
	}
};
