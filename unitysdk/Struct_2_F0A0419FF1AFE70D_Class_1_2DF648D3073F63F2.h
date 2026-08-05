#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Variable_1.h"
#include "unitysdk/System/Object.h"

class Class_2_C1544133DAD8D017;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_F0A0419FF1AFE70D_CLASS_1_2DF648D3073F63F2_METHOD_1_79D572573E1F9B29_OFFSET UNITYSDK_OFFSET(0x133C2580)
#define STRUCT_2_F0A0419FF1AFE70D_CLASS_1_2DF648D3073F63F2__CTOR_OFFSET UNITYSDK_OFFSET(0x133C2570)

inline static constexpr unsigned int Struct_2_F0A0419FF1AFE70D_Class_1_2DF648D3073F63F2_TypeDefinitionIndex = 81667;

class Struct_2_F0A0419FF1AFE70D_Class_1_2DF648D3073F63F2 : public ::System::Object
{
public:
	::Foundation::Variable_1<::System::UInt32> Field_1_2; // 0x10
	::Class_2_C1544133DAD8D017* Field_1_3; // 0x28
	::System::Collections::Generic::List_1<::System::String*>* Field_1_0; // 0x30
	::System::UInt64 Field_1_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F0A0419FF1AFE70D_CLASS_1_2DF648D3073F63F2__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_79D572573E1F9B29(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + STRUCT_2_F0A0419FF1AFE70D_CLASS_1_2DF648D3073F63F2_METHOD_1_79D572573E1F9B29_OFFSET))(this, a1);
	}
};
