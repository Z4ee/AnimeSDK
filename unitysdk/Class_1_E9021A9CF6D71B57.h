#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TypeCode.h"

namespace System { class EventHandler; }
namespace System { class Type; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }
namespace System::Reflection { class PropertyInfo; }

#define CLASS_1_E9021A9CF6D71B57_ADD_VALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1E76DE40)
#define CLASS_1_E9021A9CF6D71B57_ADD__VALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1E76DED0)
#define CLASS_1_E9021A9CF6D71B57_METHOD_1_02E604F83E196B5E_OFFSET UNITYSDK_OFFSET(0x1E76DB00)
#define CLASS_1_E9021A9CF6D71B57_METHOD_1_47B047590A4850CC_OFFSET UNITYSDK_OFFSET(0x1E76DC40)
#define CLASS_1_E9021A9CF6D71B57_METHOD_1_5AE65BC66F5834C0_OFFSET UNITYSDK_OFFSET(0x1E76DC80)
#define CLASS_1_E9021A9CF6D71B57_METHOD_1_637DBA7901C3991A_OFFSET UNITYSDK_OFFSET(0x1E76D730)
#define CLASS_1_E9021A9CF6D71B57_METHOD_1_6F7C2263C5F02CBC_OFFSET UNITYSDK_OFFSET(0x1E76DD60)
#define CLASS_1_E9021A9CF6D71B57_METHOD_1_DAB8FA6A764B2239_OFFSET UNITYSDK_OFFSET(0x1E76DA40)
#define CLASS_1_E9021A9CF6D71B57_METHOD_1_E96457A239AB8EDB_OFFSET UNITYSDK_OFFSET(0x1E76E020)
#define CLASS_1_E9021A9CF6D71B57_REMOVE_VALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1E76DF30)
#define CLASS_1_E9021A9CF6D71B57_REMOVE__VALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1E76DFC0)
#define CLASS_1_E9021A9CF6D71B57__CTOR_OFFSET UNITYSDK_OFFSET(0x1E764750)

inline static constexpr unsigned int Class_1_E9021A9CF6D71B57_TypeDefinitionIndex = 42382;

class Class_1_E9021A9CF6D71B57 : public ::System::Object
{
public:
	::System::Reflection::PropertyInfo* MELADKPKCEE; // 0x10
	::System::Object* BPKKKMOCFIP; // 0x18
	::System::EventHandler* _ValueChanged; // 0x20

	::System::Void _ctor(::System::Object* a1, ::System::Reflection::PropertyInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Reflection::PropertyInfo*))((::PBYTE)hIl2Cpp + CLASS_1_E9021A9CF6D71B57__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Type* Method_1_DAB8FA6A764B2239()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E9021A9CF6D71B57_METHOD_1_DAB8FA6A764B2239_OFFSET))(this);
	}

	::System::TypeCode Method_1_02E604F83E196B5E()
	{
		return ((::System::TypeCode(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E9021A9CF6D71B57_METHOD_1_02E604F83E196B5E_OFFSET))(this);
	}

	::System::Object* Method_1_47B047590A4850CC()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E9021A9CF6D71B57_METHOD_1_47B047590A4850CC_OFFSET))(this);
	}

	::System::Void Method_1_5AE65BC66F5834C0(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E9021A9CF6D71B57_METHOD_1_5AE65BC66F5834C0_OFFSET))(this, a1);
	}

	::System::Object* Method_1_6F7C2263C5F02CBC()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E9021A9CF6D71B57_METHOD_1_6F7C2263C5F02CBC_OFFSET))(this);
	}

	::System::Void add_ValueChanged(::System::EventHandler* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + CLASS_1_E9021A9CF6D71B57_ADD_VALUECHANGED_OFFSET))(this, a1);
	}

	::System::Void remove_ValueChanged(::System::EventHandler* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + CLASS_1_E9021A9CF6D71B57_REMOVE_VALUECHANGED_OFFSET))(this, a1);
	}

	::System::Void Method_1_637DBA7901C3991A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E9021A9CF6D71B57_METHOD_1_637DBA7901C3991A_OFFSET))(this);
	}

	::System::Void Method_1_E96457A239AB8EDB(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_E9021A9CF6D71B57_METHOD_1_E96457A239AB8EDB_OFFSET))(this, a1, a2);
	}

	::System::Void add__ValueChanged(::System::EventHandler* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + CLASS_1_E9021A9CF6D71B57_ADD__VALUECHANGED_OFFSET))(this, a1);
	}

	::System::Void remove__ValueChanged(::System::EventHandler* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + CLASS_1_E9021A9CF6D71B57_REMOVE__VALUECHANGED_OFFSET))(this, a1);
	}
};
