#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TypeCode.h"

namespace System { class EventHandler; }
namespace System { class Type; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }
namespace System::Reflection { class PropertyInfo; }

#define CLASS_1_A24231890A79242D_ADD_VALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1AC38B20)
#define CLASS_1_A24231890A79242D_ADD__VALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1AC38BB0)
#define CLASS_1_A24231890A79242D_METHOD_1_11A1C4DD280FAD83_OFFSET UNITYSDK_OFFSET(0x1AC38AB0)
#define CLASS_1_A24231890A79242D_METHOD_1_27378F13CCC86733_OFFSET UNITYSDK_OFFSET(0x1AC38D00)
#define CLASS_1_A24231890A79242D_METHOD_1_2ED6C3773AA1E488_OFFSET UNITYSDK_OFFSET(0x1AC38790)
#define CLASS_1_A24231890A79242D_METHOD_1_696069542463DCB7_OFFSET UNITYSDK_OFFSET(0x1AC389A0)
#define CLASS_1_A24231890A79242D_METHOD_1_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x1AC38A30)
#define CLASS_1_A24231890A79242D_METHOD_1_BC62B9FB87FD6A48_OFFSET UNITYSDK_OFFSET(0x1AC38A20)
#define CLASS_1_A24231890A79242D_METHOD_1_BDE09E9911BF904B_OFFSET UNITYSDK_OFFSET(0x1AC38940)
#define CLASS_1_A24231890A79242D_REMOVE_VALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1AC38C10)
#define CLASS_1_A24231890A79242D_REMOVE__VALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1AC38CA0)
#define CLASS_1_A24231890A79242D__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC31150)

inline static constexpr unsigned int Class_1_A24231890A79242D_TypeDefinitionIndex = 40607;

class Class_1_A24231890A79242D : public ::System::Object
{
public:
	::System::EventHandler* _ValueChanged; // 0x10
	::System::Object* Field_1_1; // 0x18
	::System::Reflection::PropertyInfo* Field_1_2; // 0x20

	::System::Void _ctor(::System::Object* a1, ::System::Reflection::PropertyInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Reflection::PropertyInfo*))((::PBYTE)hIl2Cpp + CLASS_1_A24231890A79242D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Type* Method_1_BDE09E9911BF904B()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A24231890A79242D_METHOD_1_BDE09E9911BF904B_OFFSET))(this);
	}

	::System::TypeCode Method_1_696069542463DCB7()
	{
		return ((::System::TypeCode(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A24231890A79242D_METHOD_1_696069542463DCB7_OFFSET))(this);
	}

	::System::Object* Method_1_BC62B9FB87FD6A48()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A24231890A79242D_METHOD_1_BC62B9FB87FD6A48_OFFSET))(this);
	}

	::System::Void Method_1_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A24231890A79242D_METHOD_1_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Object* Method_1_11A1C4DD280FAD83()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A24231890A79242D_METHOD_1_11A1C4DD280FAD83_OFFSET))(this);
	}

	::System::Void add_ValueChanged(::System::EventHandler* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + CLASS_1_A24231890A79242D_ADD_VALUECHANGED_OFFSET))(this, a1);
	}

	::System::Void remove_ValueChanged(::System::EventHandler* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + CLASS_1_A24231890A79242D_REMOVE_VALUECHANGED_OFFSET))(this, a1);
	}

	::System::Void Method_1_2ED6C3773AA1E488()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A24231890A79242D_METHOD_1_2ED6C3773AA1E488_OFFSET))(this);
	}

	::System::Void Method_1_27378F13CCC86733(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_A24231890A79242D_METHOD_1_27378F13CCC86733_OFFSET))(this, a1, a2);
	}

	::System::Void add__ValueChanged(::System::EventHandler* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + CLASS_1_A24231890A79242D_ADD__VALUECHANGED_OFFSET))(this, a1);
	}

	::System::Void remove__ValueChanged(::System::EventHandler* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + CLASS_1_A24231890A79242D_REMOVE__VALUECHANGED_OFFSET))(this, a1);
	}
};
