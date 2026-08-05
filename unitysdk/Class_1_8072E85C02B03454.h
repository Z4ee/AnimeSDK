#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0CF26933E6D3CDE4.h"
#include "unitysdk/Enum_3_7E389F9682244DCB.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_8072E85C02B03454__CCTOR_OFFSET UNITYSDK_OFFSET(0x16D4E680)
#define CLASS_1_8072E85C02B03454__CTOR_OFFSET UNITYSDK_OFFSET(0x16D4E670)

inline static constexpr unsigned int Class_1_8072E85C02B03454_TypeDefinitionIndex = 93161;

class Class_1_8072E85C02B03454 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::Enum_3_0CF26933E6D3CDE4, ::Enum_3_7E389F9682244DCB>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::Enum_3_0CF26933E6D3CDE4, ::Enum_3_7E389F9682244DCB>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8072E85C02B03454_TypeDefinitionIndex)->GetStaticField(0x52040);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8072E85C02B03454__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8072E85C02B03454__CCTOR_OFFSET))();
	}
};
