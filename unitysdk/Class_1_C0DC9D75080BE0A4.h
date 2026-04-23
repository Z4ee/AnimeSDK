#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EAnimSplitFrameEventType.h"
#include "unitysdk/System/Object.h"

class Class_1_5F51D4049EA87B7B;
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_C0DC9D75080BE0A4_METHOD_1_5A14130134742A76_OFFSET UNITYSDK_OFFSET(0xB7DE270)
#define CLASS_1_C0DC9D75080BE0A4_METHOD_1_5C8B80D3D5F605B1_OFFSET UNITYSDK_OFFSET(0xB7DE8D0)
#define CLASS_1_C0DC9D75080BE0A4_METHOD_1_C53E684655FC29AE_OFFSET UNITYSDK_OFFSET(0xB7DE630)
#define CLASS_1_C0DC9D75080BE0A4__CCTOR_OFFSET UNITYSDK_OFFSET(0xB7DEB40)
#define CLASS_1_C0DC9D75080BE0A4__CTOR_OFFSET UNITYSDK_OFFSET(0xB7DE420)

inline static constexpr unsigned int Class_1_C0DC9D75080BE0A4_TypeDefinitionIndex = 51566;

class Class_1_C0DC9D75080BE0A4 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Collections::Generic::HashSet_1<::System::Type*>*>** StaticGet_Field_1_2()
	{
		return (::Il2CppArray<::System::Collections::Generic::HashSet_1<::System::Type*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C0DC9D75080BE0A4_TypeDefinitionIndex)->GetStaticField(0x6A360);
	}
	static ::Il2CppArray<::System::Type*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C0DC9D75080BE0A4_TypeDefinitionIndex)->GetStaticField(0x6A368);
	}
	static ::Il2CppArray<::System::Type*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C0DC9D75080BE0A4_TypeDefinitionIndex)->GetStaticField(0x6A370);
	}
	::System::Collections::Generic::HashSet_1<::Class_1_5F51D4049EA87B7B*>* Field_1_5; // 0x10
	::Il2CppArray<::System::Collections::Generic::Queue_1<::Class_1_5F51D4049EA87B7B*>*>* Field_1_4; // 0x18
	::System::Int32 Field_1_3; // 0x20

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C0DC9D75080BE0A4__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C0DC9D75080BE0A4__CCTOR_OFFSET))();
	}

	static ::RPG::GameCore::EAnimSplitFrameEventType Method_1_5A14130134742A76(::Class_1_5F51D4049EA87B7B* a1)
	{
		return ((::RPG::GameCore::EAnimSplitFrameEventType(*)(::Class_1_5F51D4049EA87B7B*))((::PBYTE)hIl2Cpp + CLASS_1_C0DC9D75080BE0A4_METHOD_1_5A14130134742A76_OFFSET))(a1);
	}

	::System::Void Method_1_C53E684655FC29AE(::System::Collections::Generic::List_1<::Class_1_5F51D4049EA87B7B*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_5F51D4049EA87B7B*>*))((::PBYTE)hIl2Cpp + CLASS_1_C0DC9D75080BE0A4_METHOD_1_C53E684655FC29AE_OFFSET))(this, a1);
	}

	::System::Void Method_1_5C8B80D3D5F605B1(::System::Collections::Generic::List_1<::Class_1_5F51D4049EA87B7B*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_5F51D4049EA87B7B*>*))((::PBYTE)hIl2Cpp + CLASS_1_C0DC9D75080BE0A4_METHOD_1_5C8B80D3D5F605B1_OFFSET))(this, a1);
	}
};
