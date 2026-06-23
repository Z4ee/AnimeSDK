#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

class Class_2_F7625BCF52484303;
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas::Nodes { class SwitchProbability; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_F7625BCF52484303_CLASS_1_D493E8C7202A2601_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x11DCEED0)
#define CLASS_2_F7625BCF52484303_CLASS_1_D493E8C7202A2601_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x11DCF170)
#define CLASS_2_F7625BCF52484303_CLASS_1_D493E8C7202A2601_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x11DCF1D0)
#define CLASS_2_F7625BCF52484303_CLASS_1_D493E8C7202A2601_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x11DCF180)
#define CLASS_2_F7625BCF52484303_CLASS_1_D493E8C7202A2601_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11DCEEC0)
#define CLASS_2_F7625BCF52484303_CLASS_1_D493E8C7202A2601__CTOR_OFFSET UNITYSDK_OFFSET(0x11DCEEB0)

inline static constexpr unsigned int Class_2_F7625BCF52484303_Class_1_D493E8C7202A2601_TypeDefinitionIndex = 60249;

class Class_2_F7625BCF52484303_Class_1_D493E8C7202A2601 : public ::System::Object
{
public:
	::FlowCanvas::Nodes::SwitchProbability* Field_1_3; // 0x10
	::System::Object* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::FlowCanvas::FlowOutput*>* Field_1_4; // 0x20
	::FlowCanvas::Flow Field_1_5; // 0x28
	::Class_2_F7625BCF52484303* Field_1_2; // 0x50
	::System::Int32 Field_1_0; // 0x58
	::System::Boolean Field_1_6; // 0x5C

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303_CLASS_1_D493E8C7202A2601__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303_CLASS_1_D493E8C7202A2601_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303_CLASS_1_D493E8C7202A2601_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303_CLASS_1_D493E8C7202A2601_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303_CLASS_1_D493E8C7202A2601_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F7625BCF52484303_CLASS_1_D493E8C7202A2601_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
