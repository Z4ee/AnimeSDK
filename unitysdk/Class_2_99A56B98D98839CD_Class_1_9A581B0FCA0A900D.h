#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

class Class_2_99A56B98D98839CD;
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas::Nodes { class SwitchBool; }

#define CLASS_2_99A56B98D98839CD_CLASS_1_9A581B0FCA0A900D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xF6333A0)
#define CLASS_2_99A56B98D98839CD_CLASS_1_9A581B0FCA0A900D_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xF6335C0)
#define CLASS_2_99A56B98D98839CD_CLASS_1_9A581B0FCA0A900D_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xF633620)
#define CLASS_2_99A56B98D98839CD_CLASS_1_9A581B0FCA0A900D_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xF6335D0)
#define CLASS_2_99A56B98D98839CD_CLASS_1_9A581B0FCA0A900D_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF633390)
#define CLASS_2_99A56B98D98839CD_CLASS_1_9A581B0FCA0A900D__CTOR_OFFSET UNITYSDK_OFFSET(0xF633380)

inline static constexpr unsigned int Class_2_99A56B98D98839CD_Class_1_9A581B0FCA0A900D_TypeDefinitionIndex = 67367;

class Class_2_99A56B98D98839CD_Class_1_9A581B0FCA0A900D : public ::System::Object
{
public:
	::FlowCanvas::FlowOutput* Field_1_5; // 0x10
	::FlowCanvas::Nodes::SwitchBool* Field_1_6; // 0x18
	::System::Object* Field_1_0; // 0x20
	::FlowCanvas::Flow Field_1_4; // 0x28
	::Class_2_99A56B98D98839CD* Field_1_7; // 0x50
	::System::Int32 Field_1_1; // 0x58
	::System::Boolean Field_1_11; // 0x5C

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_99A56B98D98839CD_CLASS_1_9A581B0FCA0A900D__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_99A56B98D98839CD_CLASS_1_9A581B0FCA0A900D_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_99A56B98D98839CD_CLASS_1_9A581B0FCA0A900D_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_99A56B98D98839CD_CLASS_1_9A581B0FCA0A900D_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_99A56B98D98839CD_CLASS_1_9A581B0FCA0A900D_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_99A56B98D98839CD_CLASS_1_9A581B0FCA0A900D_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
