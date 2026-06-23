#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class Class_2_17EF7F195EE14706;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_11ED91AA14CD390E_METHOD_1_C70E934F0B9D805B_1_OFFSET UNITYSDK_OFFSET(0x1A94F5D0)
#define CLASS_1_11ED91AA14CD390E_METHOD_1_C70E934F0B9D805B_OFFSET UNITYSDK_OFFSET(0x1A94F440)
#define CLASS_1_11ED91AA14CD390E_METHOD_1_EAAA3ECCBA258A7F_1_OFFSET UNITYSDK_OFFSET(0x1A94F680)
#define CLASS_1_11ED91AA14CD390E_METHOD_1_EAAA3ECCBA258A7F_OFFSET UNITYSDK_OFFSET(0x1A94F4F0)
#define CLASS_1_11ED91AA14CD390E__CTOR_OFFSET UNITYSDK_OFFSET(0x1A94F340)

inline static constexpr unsigned int Class_1_11ED91AA14CD390E_TypeDefinitionIndex = 13925;

class Class_1_11ED91AA14CD390E : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::Class_2_17EF7F195EE14706*>* Field_1_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::Class_2_17EF7F195EE14706*>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_11ED91AA14CD390E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C70E934F0B9D805B(::Foundation::AssetPath a1, ::Class_2_17EF7F195EE14706* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::Class_2_17EF7F195EE14706*))((::PBYTE)hIl2Cpp + CLASS_1_11ED91AA14CD390E_METHOD_1_C70E934F0B9D805B_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_EAAA3ECCBA258A7F(::Foundation::AssetPath a1, ::Class_2_17EF7F195EE14706*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::AssetPath, ::Class_2_17EF7F195EE14706*&))((::PBYTE)hIl2Cpp + CLASS_1_11ED91AA14CD390E_METHOD_1_EAAA3ECCBA258A7F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C70E934F0B9D805B_1(::Foundation::AssetPath a1, ::Class_2_17EF7F195EE14706* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::Class_2_17EF7F195EE14706*))((::PBYTE)hIl2Cpp + CLASS_1_11ED91AA14CD390E_METHOD_1_C70E934F0B9D805B_1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_EAAA3ECCBA258A7F_1(::Foundation::AssetPath a1, ::Class_2_17EF7F195EE14706*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::AssetPath, ::Class_2_17EF7F195EE14706*&))((::PBYTE)hIl2Cpp + CLASS_1_11ED91AA14CD390E_METHOD_1_EAAA3ECCBA258A7F_1_OFFSET))(this, a1, a2);
	}
};
