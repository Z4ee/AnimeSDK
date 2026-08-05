#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_275515F210334D06.h"
#include "unitysdk/Struct_2_1862835F8661A21F_1410.h"

namespace FlatBuffers { class ByteBuffer; }
namespace MoleMole::Arcade::RabGame { class RABMapConfigTemplateExt; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_9EF8BB53DCF898D3_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x100CA900)
#define CLASS_2_9EF8BB53DCF898D3_METHOD_2_52F693593F7BBFE8_OFFSET UNITYSDK_OFFSET(0x100CADC0)
#define CLASS_2_9EF8BB53DCF898D3_METHOD_2_B2E5825CAD5E93F4_OFFSET UNITYSDK_OFFSET(0x100CA9B0)
#define CLASS_2_9EF8BB53DCF898D3_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x100CA4C0)
#define CLASS_2_9EF8BB53DCF898D3_METHOD_2_DB4B6D1970066BE6_OFFSET UNITYSDK_OFFSET(0x100CA590)
#define CLASS_2_9EF8BB53DCF898D3__CTOR_OFFSET UNITYSDK_OFFSET(0x100CA500)

inline static constexpr unsigned int Class_2_9EF8BB53DCF898D3_TypeDefinitionIndex = 92531;

class Class_2_9EF8BB53DCF898D3 : public ::Class_1_275515F210334D06
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Arcade::RabGame::RABMapConfigTemplateExt*>* Field_2_0; // 0x18
	::Struct_2_1862835F8661A21F_1410 Field_2_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9EF8BB53DCF898D3__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9EF8BB53DCF898D3_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_2_DB4B6D1970066BE6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9EF8BB53DCF898D3_METHOD_2_DB4B6D1970066BE6_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9EF8BB53DCF898D3_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::MoleMole::Arcade::RabGame::RABMapConfigTemplateExt* Method_2_B2E5825CAD5E93F4(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::MoleMole::Arcade::RabGame::RABMapConfigTemplateExt*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_9EF8BB53DCF898D3_METHOD_2_B2E5825CAD5E93F4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_52F693593F7BBFE8(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_9EF8BB53DCF898D3_METHOD_2_52F693593F7BBFE8_OFFSET))(this, a1);
	}
};
