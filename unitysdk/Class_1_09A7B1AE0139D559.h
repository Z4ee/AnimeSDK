#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_7C0C45934B7D5974.h"
#include "unitysdk/Struct_2_9E75F47F2670B678.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_09A7B1AE0139D559_METHOD_1_2B10CD3D852819A4_OFFSET UNITYSDK_OFFSET(0x1BB82A40)
#define CLASS_1_09A7B1AE0139D559_METHOD_1_3D78D2E0F9F95F07_1_OFFSET UNITYSDK_OFFSET(0x1BB82D80)
#define CLASS_1_09A7B1AE0139D559_METHOD_1_3D78D2E0F9F95F07_2_OFFSET UNITYSDK_OFFSET(0x1BB82DB0)
#define CLASS_1_09A7B1AE0139D559_METHOD_1_3D78D2E0F9F95F07_3_OFFSET UNITYSDK_OFFSET(0x1BB82DE0)
#define CLASS_1_09A7B1AE0139D559_METHOD_1_3D78D2E0F9F95F07_4_OFFSET UNITYSDK_OFFSET(0x1BB82E10)
#define CLASS_1_09A7B1AE0139D559_METHOD_1_3D78D2E0F9F95F07_OFFSET UNITYSDK_OFFSET(0x1BB82D50)
#define CLASS_1_09A7B1AE0139D559_METHOD_1_82C8BA431D7B9EB5_OFFSET UNITYSDK_OFFSET(0x1BB82E40)
#define CLASS_1_09A7B1AE0139D559__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BB82930)
#define CLASS_1_09A7B1AE0139D559__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB82920)

inline static constexpr unsigned int Class_1_09A7B1AE0139D559_TypeDefinitionIndex = 61743;

class Class_1_09A7B1AE0139D559 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Object*, ::Class_1_09A7B1AE0139D559*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Object*, ::Class_1_09A7B1AE0139D559*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_09A7B1AE0139D559_TypeDefinitionIndex)->GetStaticField(0x2D7C0);
	}
	static ::System::Collections::Generic::List_1<::Class_1_09A7B1AE0139D559*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::List_1<::Class_1_09A7B1AE0139D559*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_09A7B1AE0139D559_TypeDefinitionIndex)->GetStaticField(0x2D7C8);
	}
	::Struct_2_7C0C45934B7D5974 Field_1_2; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09A7B1AE0139D559__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_09A7B1AE0139D559__CCTOR_OFFSET))();
	}

	static ::Class_1_09A7B1AE0139D559* Method_1_2B10CD3D852819A4(::System::Object* a1, ::Struct_2_7C0C45934B7D5974 a2)
	{
		return ((::Class_1_09A7B1AE0139D559*(*)(::System::Object*, ::Struct_2_7C0C45934B7D5974))((::PBYTE)hIl2Cpp + CLASS_1_09A7B1AE0139D559_METHOD_1_2B10CD3D852819A4_OFFSET))(a1, a2);
	}

	::Struct_2_9E75F47F2670B678 Method_1_3D78D2E0F9F95F07()
	{
		return ((::Struct_2_9E75F47F2670B678(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09A7B1AE0139D559_METHOD_1_3D78D2E0F9F95F07_OFFSET))(this);
	}

	::Struct_2_9E75F47F2670B678 Method_1_3D78D2E0F9F95F07_1()
	{
		return ((::Struct_2_9E75F47F2670B678(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09A7B1AE0139D559_METHOD_1_3D78D2E0F9F95F07_1_OFFSET))(this);
	}

	::Struct_2_9E75F47F2670B678 Method_1_3D78D2E0F9F95F07_2()
	{
		return ((::Struct_2_9E75F47F2670B678(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09A7B1AE0139D559_METHOD_1_3D78D2E0F9F95F07_2_OFFSET))(this);
	}

	::Struct_2_9E75F47F2670B678 Method_1_3D78D2E0F9F95F07_3()
	{
		return ((::Struct_2_9E75F47F2670B678(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09A7B1AE0139D559_METHOD_1_3D78D2E0F9F95F07_3_OFFSET))(this);
	}

	::Struct_2_9E75F47F2670B678 Method_1_3D78D2E0F9F95F07_4()
	{
		return ((::Struct_2_9E75F47F2670B678(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09A7B1AE0139D559_METHOD_1_3D78D2E0F9F95F07_4_OFFSET))(this);
	}

	static ::Class_1_09A7B1AE0139D559* Method_1_82C8BA431D7B9EB5(::System::Object* a1)
	{
		return ((::Class_1_09A7B1AE0139D559*(*)(::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_09A7B1AE0139D559_METHOD_1_82C8BA431D7B9EB5_OFFSET))(a1);
	}
};
