#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Variable_1.h"
#include "unitysdk/System/Object.h"

class Class_2_C1544133DAD8D017;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_995753E09A173E79_CLASS_1_2DF648D3073F63F2_METHOD_1_79D572573E1F9B29_OFFSET UNITYSDK_OFFSET(0x11DD4800)
#define STRUCT_2_995753E09A173E79_CLASS_1_2DF648D3073F63F2__CTOR_OFFSET UNITYSDK_OFFSET(0x11DD47F0)

inline static constexpr unsigned int Struct_2_995753E09A173E79_Class_1_2DF648D3073F63F2_TypeDefinitionIndex = 53503;

class Struct_2_995753E09A173E79_Class_1_2DF648D3073F63F2 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* Field_1_3; // 0x10
	::Foundation::Variable_1<::System::UInt32> Field_1_1; // 0x18
	::Class_2_C1544133DAD8D017* Field_1_0; // 0x30
	::System::UInt64 Field_1_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_995753E09A173E79_CLASS_1_2DF648D3073F63F2__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_79D572573E1F9B29(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + STRUCT_2_995753E09A173E79_CLASS_1_2DF648D3073F63F2_METHOD_1_79D572573E1F9B29_OFFSET))(this, a1);
	}
};
