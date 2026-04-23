#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4393199F378B6118;
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedList_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_2EAB25208BF9561B_METHOD_1_1B22BAD441DCB63A_OFFSET UNITYSDK_OFFSET(0x124C42F0)
#define CLASS_1_2EAB25208BF9561B_METHOD_1_23B573F7FD360F67_OFFSET UNITYSDK_OFFSET(0x124C66C0)
#define CLASS_1_2EAB25208BF9561B_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x124C6720)
#define CLASS_1_2EAB25208BF9561B__CCTOR_OFFSET UNITYSDK_OFFSET(0x124C6790)
#define CLASS_1_2EAB25208BF9561B__CTOR_OFFSET UNITYSDK_OFFSET(0x124C66B0)

inline static constexpr unsigned int Class_1_2EAB25208BF9561B_TypeDefinitionIndex = 59088;

class Class_1_2EAB25208BF9561B : public ::System::Object
{
public:
	static ::System::UInt32* StaticGet_Field_1_1()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2EAB25208BF9561B_TypeDefinitionIndex)->GetStaticField(0x10440);
	}
	::System::Collections::Generic::List_1<::Class_1_4393199F378B6118*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2EAB25208BF9561B__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2EAB25208BF9561B__CCTOR_OFFSET))();
	}

	static ::Class_1_2EAB25208BF9561B* Method_1_1B22BAD441DCB63A(::System::Collections::Generic::SortedList_2<::System::UInt32, ::RPG::GameCore::RuntimeGroupInfo*>* a1)
	{
		return ((::Class_1_2EAB25208BF9561B*(*)(::System::Collections::Generic::SortedList_2<::System::UInt32, ::RPG::GameCore::RuntimeGroupInfo*>*))((::PBYTE)hIl2Cpp + CLASS_1_2EAB25208BF9561B_METHOD_1_1B22BAD441DCB63A_OFFSET))(a1);
	}

	static ::System::UInt32 Method_1_23B573F7FD360F67()
	{
		return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + CLASS_1_2EAB25208BF9561B_METHOD_1_23B573F7FD360F67_OFFSET))();
	}

	static ::System::Void Method_1_F8C7231308CD2C82()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2EAB25208BF9561B_METHOD_1_F8C7231308CD2C82_OFFSET))();
	}
};
