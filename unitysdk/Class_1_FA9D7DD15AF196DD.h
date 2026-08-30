#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EAnimSplitFrameEventType.h"
#include "unitysdk/System/Object.h"

class Class_1_5F51D4049EA87B7B;
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_FA9D7DD15AF196DD_METHOD_1_25D9A9B1BC993991_OFFSET UNITYSDK_OFFSET(0x18946670)
#define CLASS_1_FA9D7DD15AF196DD_METHOD_1_347482D8DFB5AE38_OFFSET UNITYSDK_OFFSET(0x189463F0)
#define CLASS_1_FA9D7DD15AF196DD_METHOD_1_5A14130134742A76_OFFSET UNITYSDK_OFFSET(0x18946040)
#define CLASS_1_FA9D7DD15AF196DD__CCTOR_OFFSET UNITYSDK_OFFSET(0x18946A50)
#define CLASS_1_FA9D7DD15AF196DD__CTOR_OFFSET UNITYSDK_OFFSET(0x189461F0)

inline static constexpr unsigned int Class_1_FA9D7DD15AF196DD_TypeDefinitionIndex = 56101;

class Class_1_FA9D7DD15AF196DD : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Type*>** StaticGet_PPFOICKAIKM()
	{
		return (::Il2CppArray<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FA9D7DD15AF196DD_TypeDefinitionIndex)->GetStaticField(0x134E0);
	}
	static ::Il2CppArray<::System::Type*>** StaticGet_EPDJCKDFDIH()
	{
		return (::Il2CppArray<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FA9D7DD15AF196DD_TypeDefinitionIndex)->GetStaticField(0x134E8);
	}
	static ::Il2CppArray<::System::Collections::Generic::HashSet_1<::System::Type*>*>** StaticGet_JBGOKIGOHGD()
	{
		return (::Il2CppArray<::System::Collections::Generic::HashSet_1<::System::Type*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FA9D7DD15AF196DD_TypeDefinitionIndex)->GetStaticField(0x134F0);
	}
	::Il2CppArray<::System::Collections::Generic::Queue_1<::Class_1_5F51D4049EA87B7B*>*>* MFGMNHOKADJ; // 0x10
	::System::Collections::Generic::HashSet_1<::Class_1_5F51D4049EA87B7B*>* CHIPJCHGJGC; // 0x18
	::System::Int32 BLGCIEBLPCD; // 0x20

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FA9D7DD15AF196DD__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FA9D7DD15AF196DD__CCTOR_OFFSET))();
	}

	static ::RPG::GameCore::EAnimSplitFrameEventType Method_1_5A14130134742A76(::Class_1_5F51D4049EA87B7B* a1)
	{
		return ((::RPG::GameCore::EAnimSplitFrameEventType(*)(::Class_1_5F51D4049EA87B7B*))((::PBYTE)hIl2Cpp + CLASS_1_FA9D7DD15AF196DD_METHOD_1_5A14130134742A76_OFFSET))(a1);
	}

	::System::Void Method_1_347482D8DFB5AE38(::System::Collections::Generic::List_1<::Class_1_5F51D4049EA87B7B*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_5F51D4049EA87B7B*>*))((::PBYTE)hIl2Cpp + CLASS_1_FA9D7DD15AF196DD_METHOD_1_347482D8DFB5AE38_OFFSET))(this, a1);
	}

	::System::Void Method_1_25D9A9B1BC993991(::System::Collections::Generic::List_1<::Class_1_5F51D4049EA87B7B*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_5F51D4049EA87B7B*>*))((::PBYTE)hIl2Cpp + CLASS_1_FA9D7DD15AF196DD_METHOD_1_25D9A9B1BC993991_OFFSET))(this, a1);
	}
};
