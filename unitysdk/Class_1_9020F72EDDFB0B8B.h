#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_9020F72EDDFB0B8B_METHOD_1_1BF62643C808CAD8_OFFSET UNITYSDK_OFFSET(0x995DF00)
#define CLASS_1_9020F72EDDFB0B8B_METHOD_1_6FEC99AE7A90D834_OFFSET UNITYSDK_OFFSET(0x995DF60)
#define CLASS_1_9020F72EDDFB0B8B_METHOD_1_9CE320385E520597_OFFSET UNITYSDK_OFFSET(0x995E1B0)
#define CLASS_1_9020F72EDDFB0B8B__CCTOR_OFFSET UNITYSDK_OFFSET(0x995E390)
#define CLASS_1_9020F72EDDFB0B8B__CTOR_OFFSET UNITYSDK_OFFSET(0x995E2F0)

inline static constexpr unsigned int Class_1_9020F72EDDFB0B8B_TypeDefinitionIndex = 43954;

class Class_1_9020F72EDDFB0B8B : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_4()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9020F72EDDFB0B8B_TypeDefinitionIndex)->GetStaticField(0x6A00);
	}
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_3; // 0x10
	::Il2CppArray<::System::Single>* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_2; // 0x20
	::System::Int32 Field_1_0; // 0x28

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

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_6FEC99AE7A90D834(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9020F72EDDFB0B8B_METHOD_1_6FEC99AE7A90D834_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_9CE320385E520597(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9020F72EDDFB0B8B_METHOD_1_9CE320385E520597_OFFSET))(this, a1);
	}
};
