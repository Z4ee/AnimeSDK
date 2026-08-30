#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_1_1342B57709FD7AC5;
namespace RPG::Client { class RendererMaterialCache; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define CLASS_1_1342B57709FD7AC5_STRUCT_2_F9CB0E6EA0953A42_1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15C330)
#define CLASS_1_1342B57709FD7AC5_STRUCT_2_F9CB0E6EA0953A42_1_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15C2F0)
#define CLASS_1_1342B57709FD7AC5_STRUCT_2_F9CB0E6EA0953A42_1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x15C380)
#define CLASS_1_1342B57709FD7AC5_STRUCT_2_F9CB0E6EA0953A42_1_RESET_OFFSET UNITYSDK_OFFSET(0x15C390)
#define CLASS_1_1342B57709FD7AC5_STRUCT_2_F9CB0E6EA0953A42_1_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15C2F0)
#define CLASS_1_1342B57709FD7AC5_STRUCT_2_F9CB0E6EA0953A42_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15C300)

inline static constexpr unsigned int Class_1_1342B57709FD7AC5_Struct_2_F9CB0E6EA0953A42_1_TypeDefinitionIndex = 69775;

struct alignas(8) Class_1_1342B57709FD7AC5_Struct_2_F9CB0E6EA0953A42_1
{
	::System::Collections::Generic::List_1<::RPG::Client::RendererMaterialCache*>* MGMGMOGJLJC; // 0x10
	::System::Int32 ALMAPGOEFCM; // 0x18
	::System::Int32 NGHAKDBIPKO; // 0x1C

	::System::Void _ctor(::Class_1_1342B57709FD7AC5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1342B57709FD7AC5*))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_STRUCT_2_F9CB0E6EA0953A42_1__CTOR_OFFSET))(this, a1);
	}

	::UnityEngine::Material* get_Current()
	{
		return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_STRUCT_2_F9CB0E6EA0953A42_1_GET_CURRENT_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_STRUCT_2_F9CB0E6EA0953A42_1_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_STRUCT_2_F9CB0E6EA0953A42_1_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_STRUCT_2_F9CB0E6EA0953A42_1_MOVENEXT_OFFSET))(this);
	}

	::System::Void Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1342B57709FD7AC5_STRUCT_2_F9CB0E6EA0953A42_1_RESET_OFFSET))(this);
	}
};
