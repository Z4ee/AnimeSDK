#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_1_9CBC71DC5240DC00;
namespace RPG::Client { class RendererMaterialCache; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define CLASS_1_9CBC71DC5240DC00_STRUCT_2_F9CB0E6EA0953A42_1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14EBB50)
#define CLASS_1_9CBC71DC5240DC00_STRUCT_2_F9CB0E6EA0953A42_1_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x14EBB10)
#define CLASS_1_9CBC71DC5240DC00_STRUCT_2_F9CB0E6EA0953A42_1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x14EBBA0)
#define CLASS_1_9CBC71DC5240DC00_STRUCT_2_F9CB0E6EA0953A42_1_RESET_OFFSET UNITYSDK_OFFSET(0x14EBBB0)
#define CLASS_1_9CBC71DC5240DC00_STRUCT_2_F9CB0E6EA0953A42_1_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x14EBB10)
#define CLASS_1_9CBC71DC5240DC00_STRUCT_2_F9CB0E6EA0953A42_1__CTOR_OFFSET UNITYSDK_OFFSET(0x14EBB20)

inline static constexpr unsigned int Class_1_9CBC71DC5240DC00_Struct_2_F9CB0E6EA0953A42_1_TypeDefinitionIndex = 57092;

struct alignas(8) Class_1_9CBC71DC5240DC00_Struct_2_F9CB0E6EA0953A42_1
{
	::System::Collections::Generic::List_1<::RPG::Client::RendererMaterialCache*>* Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x18
	::System::Int32 Field_2_2; // 0x1C

	::System::Void _ctor(::Class_1_9CBC71DC5240DC00* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9CBC71DC5240DC00*))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_STRUCT_2_F9CB0E6EA0953A42_1__CTOR_OFFSET))(this, a1);
	}

	::UnityEngine::Material* get_Current()
	{
		return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_STRUCT_2_F9CB0E6EA0953A42_1_GET_CURRENT_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_STRUCT_2_F9CB0E6EA0953A42_1_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_STRUCT_2_F9CB0E6EA0953A42_1_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_STRUCT_2_F9CB0E6EA0953A42_1_MOVENEXT_OFFSET))(this);
	}

	::System::Void Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CBC71DC5240DC00_STRUCT_2_F9CB0E6EA0953A42_1_RESET_OFFSET))(this);
	}
};
