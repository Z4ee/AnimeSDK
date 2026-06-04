#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_9020F72EDDFB0B8B_METHOD_1_0C3DFBC2885BB875_OFFSET UNITYSDK_OFFSET(0x1351AE60)
#define CLASS_1_9020F72EDDFB0B8B_METHOD_1_1BF62643C808CAD8_OFFSET UNITYSDK_OFFSET(0x1351AAF0)
#define CLASS_1_9020F72EDDFB0B8B_METHOD_1_9FC94C65FC0FA27D_OFFSET UNITYSDK_OFFSET(0x1351AB50)
#define CLASS_1_9020F72EDDFB0B8B__CCTOR_OFFSET UNITYSDK_OFFSET(0x1351B110)
#define CLASS_1_9020F72EDDFB0B8B__CTOR_OFFSET UNITYSDK_OFFSET(0x1351B070)

inline static constexpr unsigned int Class_1_9020F72EDDFB0B8B_TypeDefinitionIndex = 44500;

class Class_1_9020F72EDDFB0B8B : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9020F72EDDFB0B8B_TypeDefinitionIndex)->GetStaticField(0xB730);
	}
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_2; // 0x18
	::Il2CppArray<::System::Single>* Field_1_3; // 0x20
	::System::Int32 Field_1_4; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9020F72EDDFB0B8B__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9020F72EDDFB0B8B__CCTOR_OFFSET))();
	}

	::System::Void Method_1_1BF62643C808CAD8(::Il2CppArray<::System::Single>* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9020F72EDDFB0B8B_METHOD_1_1BF62643C808CAD8_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_9FC94C65FC0FA27D(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9020F72EDDFB0B8B_METHOD_1_9FC94C65FC0FA27D_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_0C3DFBC2885BB875(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9020F72EDDFB0B8B_METHOD_1_0C3DFBC2885BB875_OFFSET))(this, a1);
	}
};
