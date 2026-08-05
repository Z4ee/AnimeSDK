#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C193F7C5EA6D5DB9;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_542AE7C017F23A38_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x155E0380)
#define CLASS_1_542AE7C017F23A38_METHOD_1_E83C86A203FAF2A6_OFFSET UNITYSDK_OFFSET(0x155E0260)
#define CLASS_1_542AE7C017F23A38_METHOD_1_EC61075536D10822_OFFSET UNITYSDK_OFFSET(0x155E02F0)
#define CLASS_1_542AE7C017F23A38_METHOD_1_F3A1873645E36E39_OFFSET UNITYSDK_OFFSET(0x155E03F0)
#define CLASS_1_542AE7C017F23A38__CTOR_OFFSET UNITYSDK_OFFSET(0x155E01E0)

inline static constexpr unsigned int Class_1_542AE7C017F23A38_TypeDefinitionIndex = 53903;

class Class_1_542AE7C017F23A38 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_C193F7C5EA6D5DB9*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_542AE7C017F23A38__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E83C86A203FAF2A6(::Class_1_C193F7C5EA6D5DB9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C193F7C5EA6D5DB9*))((::PBYTE)hIl2Cpp + CLASS_1_542AE7C017F23A38_METHOD_1_E83C86A203FAF2A6_OFFSET))(this, a1);
	}

	::System::Void Method_1_EC61075536D10822(::Class_1_C193F7C5EA6D5DB9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C193F7C5EA6D5DB9*))((::PBYTE)hIl2Cpp + CLASS_1_542AE7C017F23A38_METHOD_1_EC61075536D10822_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_542AE7C017F23A38_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Boolean Method_1_F3A1873645E36E39(::System::String* a1, ::Class_1_C193F7C5EA6D5DB9*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Class_1_C193F7C5EA6D5DB9*&))((::PBYTE)hIl2Cpp + CLASS_1_542AE7C017F23A38_METHOD_1_F3A1873645E36E39_OFFSET))(this, a1, a2);
	}
};
