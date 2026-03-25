#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9DB6F6BB628BF86A;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C45D2D98B931925E_METHOD_1_025C22BCD847C217_OFFSET UNITYSDK_OFFSET(0x167C2430)
#define CLASS_1_C45D2D98B931925E_METHOD_1_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0x167C2500)
#define CLASS_1_C45D2D98B931925E_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x167C2630)
#define CLASS_1_C45D2D98B931925E__CTOR_OFFSET UNITYSDK_OFFSET(0x167C26A0)

inline static constexpr unsigned int Class_1_C45D2D98B931925E_TypeDefinitionIndex = 33123;

class Class_1_C45D2D98B931925E : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_9DB6F6BB628BF86A*>* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C45D2D98B931925E__CTOR_OFFSET))(this);
	}

	::Class_1_9DB6F6BB628BF86A* Method_1_025C22BCD847C217()
	{
		return ((::Class_1_9DB6F6BB628BF86A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C45D2D98B931925E_METHOD_1_025C22BCD847C217_OFFSET))(this);
	}

	::System::Void Method_1_56CE4AFC5339F746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C45D2D98B931925E_METHOD_1_56CE4AFC5339F746_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C45D2D98B931925E_METHOD_1_9681042564541CD6_OFFSET))(this);
	}
};
