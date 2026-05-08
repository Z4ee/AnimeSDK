#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_275515F210334D06.h"
#include "unitysdk/Struct_2_1862835F8661A21F_518.h"

namespace FlatBuffers { class ByteBuffer; }
namespace MoleMole::Arcade::AbGame { class ABMapConfigTemplateExt; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_B0F768D7B0826D2B_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x19765EE0)
#define CLASS_2_B0F768D7B0826D2B_METHOD_2_52F693593F7BBFE8_OFFSET UNITYSDK_OFFSET(0x19765AB0)
#define CLASS_2_B0F768D7B0826D2B_METHOD_2_574B1656FF198BFE_OFFSET UNITYSDK_OFFSET(0x197661B0)
#define CLASS_2_B0F768D7B0826D2B_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x197659E0)
#define CLASS_2_B0F768D7B0826D2B_METHOD_2_DB4B6D1970066BE6_OFFSET UNITYSDK_OFFSET(0x19765F90)
#define CLASS_2_B0F768D7B0826D2B__CTOR_OFFSET UNITYSDK_OFFSET(0x19765A20)

inline static constexpr unsigned int Class_2_B0F768D7B0826D2B_TypeDefinitionIndex = 83167;

class Class_2_B0F768D7B0826D2B : public ::Class_1_275515F210334D06
{
public:
	::Struct_2_1862835F8661A21F_518 Field_2_0; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Arcade::AbGame::ABMapConfigTemplateExt*>* Field_2_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B0F768D7B0826D2B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B0F768D7B0826D2B_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_52F693593F7BBFE8(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_B0F768D7B0826D2B_METHOD_2_52F693593F7BBFE8_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_DB4B6D1970066BE6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B0F768D7B0826D2B_METHOD_2_DB4B6D1970066BE6_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B0F768D7B0826D2B_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::MoleMole::Arcade::AbGame::ABMapConfigTemplateExt* Method_2_574B1656FF198BFE(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::MoleMole::Arcade::AbGame::ABMapConfigTemplateExt*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B0F768D7B0826D2B_METHOD_2_574B1656FF198BFE_OFFSET))(this, a1, a2);
	}
};
