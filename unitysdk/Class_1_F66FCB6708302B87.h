#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace System::Buffers { template <typename T> class ArrayPool_1; }

#define CLASS_1_F66FCB6708302B87_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CF838A0)
#define CLASS_1_F66FCB6708302B87_METHOD_1_540036B1BE5579E4_OFFSET UNITYSDK_OFFSET(0x1CF7EF90)
#define CLASS_1_F66FCB6708302B87_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1CF68A50)
#define CLASS_1_F66FCB6708302B87_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x1CF691A0)
#define CLASS_1_F66FCB6708302B87_METHOD_1_BD14096A484E5D11_OFFSET UNITYSDK_OFFSET(0x1CF7EFF0)
#define CLASS_1_F66FCB6708302B87_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1CF68A00)
#define CLASS_1_F66FCB6708302B87_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1CF68D20)
#define CLASS_1_F66FCB6708302B87__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CF838F0)
#define CLASS_1_F66FCB6708302B87__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF83820)

inline static constexpr unsigned int Class_1_F66FCB6708302B87_TypeDefinitionIndex = 33902;

class Class_1_F66FCB6708302B87 : public ::System::Object
{
public:
	static ::System::Buffers::ArrayPool_1<::System::Byte>** StaticGet_Field_1_5()
	{
		return (::System::Buffers::ArrayPool_1<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F66FCB6708302B87_TypeDefinitionIndex)->GetStaticField(0x27650);
	}
	::Il2CppArray<::System::Byte>* Field_1_0; // 0x10
	::System::Action_1<::Il2CppArray<::System::Byte>*>* Field_1_3; // 0x18
	::System::Boolean Field_1_1; // 0x20
	::System::Int32 Field_1_4; // 0x24
	::System::Int32 Field_1_2; // 0x28

	::System::Void _ctor(::Il2CppArray<::System::Byte>* a1, ::System::Action_1<::Il2CppArray<::System::Byte>*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Action_1<::Il2CppArray<::System::Byte>*>*))((::PBYTE)hIl2Cpp + CLASS_1_F66FCB6708302B87__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F66FCB6708302B87__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F66FCB6708302B87_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F66FCB6708302B87_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F66FCB6708302B87_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F66FCB6708302B87_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	static ::System::Buffers::ArrayPool_1<::System::Byte>* Method_1_540036B1BE5579E4()
	{
		return ((::System::Buffers::ArrayPool_1<::System::Byte>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F66FCB6708302B87_METHOD_1_540036B1BE5579E4_OFFSET))();
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F66FCB6708302B87_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	static ::Class_1_F66FCB6708302B87* Method_1_BD14096A484E5D11(::System::Int32 a1, ::System::Buffers::ArrayPool_1<::System::Byte>* a2)
	{
		return ((::Class_1_F66FCB6708302B87*(*)(::System::Int32, ::System::Buffers::ArrayPool_1<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_F66FCB6708302B87_METHOD_1_BD14096A484E5D11_OFFSET))(a1, a2);
	}
};
