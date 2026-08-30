#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6C555725EE740F88;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4D16E2B143085DAB_METHOD_1_CFE6FB160FFF5938_OFFSET UNITYSDK_OFFSET(0x160A94E0)
#define CLASS_1_4D16E2B143085DAB_METHOD_1_F026F9F94BAA5E1F_OFFSET UNITYSDK_OFFSET(0x160A9580)
#define CLASS_1_4D16E2B143085DAB__CTOR_OFFSET UNITYSDK_OFFSET(0x160A95E0)

inline static constexpr unsigned int Class_1_4D16E2B143085DAB_TypeDefinitionIndex = 72004;

class Class_1_4D16E2B143085DAB : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_6C555725EE740F88*>* HPAPACKPNJD; // 0x10
	::System::Collections::Generic::List_1<::Class_1_6C555725EE740F88*>* OHPGEHKFABM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D16E2B143085DAB__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CFE6FB160FFF5938()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D16E2B143085DAB_METHOD_1_CFE6FB160FFF5938_OFFSET))(this);
	}

	::System::Int32 Method_1_F026F9F94BAA5E1F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D16E2B143085DAB_METHOD_1_F026F9F94BAA5E1F_OFFSET))(this);
	}
};
