#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1F80ACDC6C476D82;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_3_18643BAA5616465D_CLASS_1_1D151E6FC803C20E_METHOD_1_BF742DFD6980BC70_OFFSET UNITYSDK_OFFSET(0x145B7000)
#define CLASS_3_18643BAA5616465D_CLASS_1_1D151E6FC803C20E_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x145B7020)
#define CLASS_3_18643BAA5616465D_CLASS_1_1D151E6FC803C20E__CTOR_OFFSET UNITYSDK_OFFSET(0x145B6FF0)

inline static constexpr unsigned int Class_3_18643BAA5616465D_Class_1_1D151E6FC803C20E_TypeDefinitionIndex = 44676;

class Class_3_18643BAA5616465D_Class_1_1D151E6FC803C20E : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::System::Action_1<::Class_1_1F80ACDC6C476D82*>* Field_1_7; // 0x18
	::System::Int32 Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_18643BAA5616465D_CLASS_1_1D151E6FC803C20E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_BF742DFD6980BC70(::Class_1_1F80ACDC6C476D82* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1F80ACDC6C476D82*))((::PBYTE)hIl2Cpp + CLASS_3_18643BAA5616465D_CLASS_1_1D151E6FC803C20E_METHOD_1_BF742DFD6980BC70_OFFSET))(this, a1);
	}

	::System::Void Method_1_F8C7231308CD2C82()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_18643BAA5616465D_CLASS_1_1D151E6FC803C20E_METHOD_1_F8C7231308CD2C82_OFFSET))(this);
	}
};
