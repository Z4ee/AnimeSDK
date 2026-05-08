#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_F79C1AA612159303_1_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x147553E0)
#define CLASS_1_F79C1AA612159303_1_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x14755460)
#define CLASS_1_F79C1AA612159303_1__CTOR_OFFSET UNITYSDK_OFFSET(0x147554D0)

inline static constexpr unsigned int Class_1_F79C1AA612159303_1_TypeDefinitionIndex = 81355;

class Class_1_F79C1AA612159303_1 : public ::System::Object
{
public:
	::System::Int32 Field_1_0; // 0x10
	::System::Nullable_1<::System::Single> Field_1_1; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F79C1AA612159303_1__CTOR_OFFSET))(this);
	}

	::System::Void BeforeRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F79C1AA612159303_1_BEFORERECYCLE_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F79C1AA612159303_1_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}
};
