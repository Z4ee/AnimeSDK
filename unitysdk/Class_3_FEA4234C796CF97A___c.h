#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define CLASS_3_FEA4234C796CF97A___C_METHOD_1_5B0743536553688C_OFFSET UNITYSDK_OFFSET(0x16814340)
#define CLASS_3_FEA4234C796CF97A___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x168142F0)
#define CLASS_3_FEA4234C796CF97A___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16814330)

inline static constexpr unsigned int Class_3_FEA4234C796CF97A___c_TypeDefinitionIndex = 43911;

class Class_3_FEA4234C796CF97A___c : public ::System::Object
{
public:
	static ::Class_3_FEA4234C796CF97A___c** StaticGet___9()
	{
		return (::Class_3_FEA4234C796CF97A___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_FEA4234C796CF97A___c_TypeDefinitionIndex)->GetStaticField(0x387B0);
	}
	static ::System::Func_1<::Foundation::AssetPath>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_FEA4234C796CF97A___c_TypeDefinitionIndex)->GetStaticField(0x387B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_FEA4234C796CF97A___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FEA4234C796CF97A___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetPath Method_1_5B0743536553688C()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FEA4234C796CF97A___C_METHOD_1_5B0743536553688C_OFFSET))(this);
	}
};
