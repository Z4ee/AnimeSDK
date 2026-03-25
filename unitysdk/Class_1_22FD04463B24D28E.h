#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_A0005A7419DEF7CE.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_715;
class Class_0_16E4307DCC419505_905;
class Class_1_1A781135C1474CFC;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_22FD04463B24D28E_METHOD_1_2A883DD032F22BF2_OFFSET UNITYSDK_OFFSET(0xA1BAD60)
#define CLASS_1_22FD04463B24D28E_METHOD_1_2FED925376FD83FF_OFFSET UNITYSDK_OFFSET(0xA1BADD0)
#define CLASS_1_22FD04463B24D28E_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xA1BAE60)
#define CLASS_1_22FD04463B24D28E_METHOD_1_DBAB8AD8158570DF_OFFSET UNITYSDK_OFFSET(0xA1BAED0)
#define CLASS_1_22FD04463B24D28E__CTOR_OFFSET UNITYSDK_OFFSET(0xA1BB170)

inline static constexpr unsigned int Class_1_22FD04463B24D28E_TypeDefinitionIndex = 60133;

class Class_1_22FD04463B24D28E : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_905*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_22FD04463B24D28E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2A883DD032F22BF2(::Class_0_16E4307DCC419505_905* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_905*))((::PBYTE)hIl2Cpp + CLASS_1_22FD04463B24D28E_METHOD_1_2A883DD032F22BF2_OFFSET))(this, a1);
	}

	::System::Void Method_1_2FED925376FD83FF(::Class_0_16E4307DCC419505_905* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_905*))((::PBYTE)hIl2Cpp + CLASS_1_22FD04463B24D28E_METHOD_1_2FED925376FD83FF_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_22FD04463B24D28E_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::String* Method_1_DBAB8AD8158570DF(::System::String* a1, ::Struct_2_A0005A7419DEF7CE a2, ::Class_0_16E4307DCC419505_715* a3, ::Class_1_1A781135C1474CFC* a4)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*, ::Struct_2_A0005A7419DEF7CE, ::Class_0_16E4307DCC419505_715*, ::Class_1_1A781135C1474CFC*))((::PBYTE)hIl2Cpp + CLASS_1_22FD04463B24D28E_METHOD_1_DBAB8AD8158570DF_OFFSET))(this, a1, a2, a3, a4);
	}
};
