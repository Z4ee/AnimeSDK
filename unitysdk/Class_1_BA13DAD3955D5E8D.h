#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3611A22A79AF8057;
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_BA13DAD3955D5E8D_METHOD_1_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x143B6970)
#define CLASS_1_BA13DAD3955D5E8D__CCTOR_OFFSET UNITYSDK_OFFSET(0x143B68D0)

inline static constexpr unsigned int Class_1_BA13DAD3955D5E8D_TypeDefinitionIndex = 57969;

class Class_1_BA13DAD3955D5E8D : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_1_3611A22A79AF8057*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_1_3611A22A79AF8057*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BA13DAD3955D5E8D_TypeDefinitionIndex)->GetStaticField(0x463E0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BA13DAD3955D5E8D__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_AA169839CB93802A()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BA13DAD3955D5E8D_METHOD_1_AA169839CB93802A_OFFSET))();
	}
};
