#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_955;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_AC4FF21662D4EBB2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x129B67A0)
#define CLASS_1_AC4FF21662D4EBB2_METHOD_1_5AD578FCE9CF19D4_OFFSET UNITYSDK_OFFSET(0x129B6AC0)
#define CLASS_1_AC4FF21662D4EBB2_METHOD_1_7AEDC3D73D7F7515_OFFSET UNITYSDK_OFFSET(0x129B6FB0)
#define CLASS_1_AC4FF21662D4EBB2_METHOD_1_82E78E5C348471FD_OFFSET UNITYSDK_OFFSET(0x129B6A50)
#define CLASS_1_AC4FF21662D4EBB2_METHOD_1_895A7B65A2D8E176_OFFSET UNITYSDK_OFFSET(0x129B6B30)
#define CLASS_1_AC4FF21662D4EBB2_METHOD_1_8BC3E8625820880E_OFFSET UNITYSDK_OFFSET(0x129B6F50)
#define CLASS_1_AC4FF21662D4EBB2__CTOR_OFFSET UNITYSDK_OFFSET(0x129B7010)

inline static constexpr unsigned int Class_1_AC4FF21662D4EBB2_TypeDefinitionIndex = 66062;

class Class_1_AC4FF21662D4EBB2 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_0_16E4307DCC419505_955*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC4FF21662D4EBB2__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC4FF21662D4EBB2_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_5AD578FCE9CF19D4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC4FF21662D4EBB2_METHOD_1_5AD578FCE9CF19D4_OFFSET))(this);
	}

	::System::Void Method_1_82E78E5C348471FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC4FF21662D4EBB2_METHOD_1_82E78E5C348471FD_OFFSET))(this);
	}

	::System::Void Method_1_895A7B65A2D8E176(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_AC4FF21662D4EBB2_METHOD_1_895A7B65A2D8E176_OFFSET))(this, a1);
	}

	::System::Void Method_1_8BC3E8625820880E(::Class_0_16E4307DCC419505_955* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_955*))((::PBYTE)hIl2Cpp + CLASS_1_AC4FF21662D4EBB2_METHOD_1_8BC3E8625820880E_OFFSET))(this, a1);
	}

	::System::Void Method_1_7AEDC3D73D7F7515(::Class_0_16E4307DCC419505_955* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_955*))((::PBYTE)hIl2Cpp + CLASS_1_AC4FF21662D4EBB2_METHOD_1_7AEDC3D73D7F7515_OFFSET))(this, a1);
	}
};
