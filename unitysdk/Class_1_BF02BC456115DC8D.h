#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_7C0C45934B7D5974.h"
#include "unitysdk/Struct_2_9E75F47F2670B678.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_BF02BC456115DC8D_METHOD_1_3D78D2E0F9F95F07_1_OFFSET UNITYSDK_OFFSET(0x10E51BB0)
#define CLASS_1_BF02BC456115DC8D_METHOD_1_3D78D2E0F9F95F07_2_OFFSET UNITYSDK_OFFSET(0x10E51BE0)
#define CLASS_1_BF02BC456115DC8D_METHOD_1_3D78D2E0F9F95F07_3_OFFSET UNITYSDK_OFFSET(0x10E51C10)
#define CLASS_1_BF02BC456115DC8D_METHOD_1_3D78D2E0F9F95F07_4_OFFSET UNITYSDK_OFFSET(0x10E51C40)
#define CLASS_1_BF02BC456115DC8D_METHOD_1_3D78D2E0F9F95F07_OFFSET UNITYSDK_OFFSET(0x10E51B80)
#define CLASS_1_BF02BC456115DC8D_METHOD_1_79C4157CD1A1F3E9_OFFSET UNITYSDK_OFFSET(0x10E51730)
#define CLASS_1_BF02BC456115DC8D_METHOD_1_82C8BA431D7B9EB5_OFFSET UNITYSDK_OFFSET(0x10E51A40)
#define CLASS_1_BF02BC456115DC8D__CCTOR_OFFSET UNITYSDK_OFFSET(0x10E51620)
#define CLASS_1_BF02BC456115DC8D__CTOR_OFFSET UNITYSDK_OFFSET(0x10E51610)

inline static constexpr unsigned int Class_1_BF02BC456115DC8D_TypeDefinitionIndex = 52519;

class Class_1_BF02BC456115DC8D : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::Class_1_BF02BC456115DC8D*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::List_1<::Class_1_BF02BC456115DC8D*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BF02BC456115DC8D_TypeDefinitionIndex)->GetStaticField(0x42110);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Object*, ::Class_1_BF02BC456115DC8D*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Object*, ::Class_1_BF02BC456115DC8D*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BF02BC456115DC8D_TypeDefinitionIndex)->GetStaticField(0x42118);
	}
	::Struct_2_7C0C45934B7D5974 Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF02BC456115DC8D__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BF02BC456115DC8D__CCTOR_OFFSET))();
	}

	static ::Class_1_BF02BC456115DC8D* Method_1_79C4157CD1A1F3E9(::System::Object* a1, ::Struct_2_7C0C45934B7D5974 a2)
	{
		return ((::Class_1_BF02BC456115DC8D*(*)(::System::Object*, ::Struct_2_7C0C45934B7D5974))((::PBYTE)hIl2Cpp + CLASS_1_BF02BC456115DC8D_METHOD_1_79C4157CD1A1F3E9_OFFSET))(a1, a2);
	}

	static ::Class_1_BF02BC456115DC8D* Method_1_82C8BA431D7B9EB5(::System::Object* a1)
	{
		return ((::Class_1_BF02BC456115DC8D*(*)(::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_BF02BC456115DC8D_METHOD_1_82C8BA431D7B9EB5_OFFSET))(a1);
	}

	::Struct_2_9E75F47F2670B678 Method_1_3D78D2E0F9F95F07()
	{
		return ((::Struct_2_9E75F47F2670B678(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF02BC456115DC8D_METHOD_1_3D78D2E0F9F95F07_OFFSET))(this);
	}

	::Struct_2_9E75F47F2670B678 Method_1_3D78D2E0F9F95F07_1()
	{
		return ((::Struct_2_9E75F47F2670B678(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF02BC456115DC8D_METHOD_1_3D78D2E0F9F95F07_1_OFFSET))(this);
	}

	::Struct_2_9E75F47F2670B678 Method_1_3D78D2E0F9F95F07_2()
	{
		return ((::Struct_2_9E75F47F2670B678(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF02BC456115DC8D_METHOD_1_3D78D2E0F9F95F07_2_OFFSET))(this);
	}

	::Struct_2_9E75F47F2670B678 Method_1_3D78D2E0F9F95F07_3()
	{
		return ((::Struct_2_9E75F47F2670B678(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF02BC456115DC8D_METHOD_1_3D78D2E0F9F95F07_3_OFFSET))(this);
	}

	::Struct_2_9E75F47F2670B678 Method_1_3D78D2E0F9F95F07_4()
	{
		return ((::Struct_2_9E75F47F2670B678(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF02BC456115DC8D_METHOD_1_3D78D2E0F9F95F07_4_OFFSET))(this);
	}
};
