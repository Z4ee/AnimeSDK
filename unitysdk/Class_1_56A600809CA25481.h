#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5738DDFE3F32F812;
namespace MoleMole::Config { class ConfigCameraComposer; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_56A600809CA25481_METHOD_1_6BB86695870EFBD1_OFFSET UNITYSDK_OFFSET(0x15572EF0)
#define CLASS_1_56A600809CA25481_METHOD_1_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x15573040)
#define CLASS_1_56A600809CA25481__CTOR_OFFSET UNITYSDK_OFFSET(0x15572E40)

inline static constexpr unsigned int Class_1_56A600809CA25481_TypeDefinitionIndex = 79935;

class Class_1_56A600809CA25481 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_11 = 0x3; // 0x0
	::MoleMole::Config::ConfigCameraComposer* Field_1_7; // 0x10
	::System::Collections::Generic::List_1<::Class_1_5738DDFE3F32F812*>* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_0; // 0x20
	::System::Collections::Generic::List_1<::Class_1_5738DDFE3F32F812*>* Field_1_2; // 0x28
	::System::Int32 Field_1_5; // 0x30
	::System::Boolean Field_1_4; // 0x34
	::System::Boolean Field_1_6; // 0x35

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_56A600809CA25481__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6BB86695870EFBD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_56A600809CA25481_METHOD_1_6BB86695870EFBD1_OFFSET))(this);
	}

	::System::Void Method_1_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_56A600809CA25481_METHOD_1_EDFD49C942C75D6C_OFFSET))(this);
	}
};
