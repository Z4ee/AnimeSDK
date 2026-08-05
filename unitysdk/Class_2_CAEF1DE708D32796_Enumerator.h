#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_CAEF1DE708D32796_Struct_2_86E2C9F91D6C0C5F.h"
#include "unitysdk/System/ValueType.h"

class Class_2_CAEF1DE708D32796;
namespace System { class Object; }

#define CLASS_2_CAEF1DE708D32796_ENUMERATOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA10990)
#define CLASS_2_CAEF1DE708D32796_ENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x4963E0)
#define CLASS_2_CAEF1DE708D32796_ENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA109D0)
#define CLASS_2_CAEF1DE708D32796_ENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA109E0)
#define CLASS_2_CAEF1DE708D32796_ENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xA10A60)
#define CLASS_2_CAEF1DE708D32796_ENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0xA10980)

inline static constexpr unsigned int Class_2_CAEF1DE708D32796_Enumerator_TypeDefinitionIndex = 93032;

struct alignas(8) Class_2_CAEF1DE708D32796_Enumerator
{
	::Class_2_CAEF1DE708D32796* mgr; // 0x10
	::System::Int32 version; // 0x18
	::Class_2_CAEF1DE708D32796_Struct_2_86E2C9F91D6C0C5F current; // 0x1C
	::System::Int32 minx; // 0x2C
	::System::Int32 miny; // 0x30
	::System::Int32 maxX; // 0x34
	::System::Int32 maxY; // 0x38
	::System::Int32 indexX; // 0x3C
	::System::Int32 indexY; // 0x40
	::System::Int32 indexCell; // 0x44

	::System::Void _ctor(::Class_2_CAEF1DE708D32796* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_CAEF1DE708D32796*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_CAEF1DE708D32796_ENUMERATOR__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CAEF1DE708D32796_ENUMERATOR_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CAEF1DE708D32796_ENUMERATOR_MOVENEXT_OFFSET))(this);
	}

	::Class_2_CAEF1DE708D32796_Struct_2_86E2C9F91D6C0C5F get_Current()
	{
		return ((::Class_2_CAEF1DE708D32796_Struct_2_86E2C9F91D6C0C5F(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CAEF1DE708D32796_ENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CAEF1DE708D32796_ENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CAEF1DE708D32796_ENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}
};
