#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_51C724C3FB60D55B.h"
#include "unitysdk/Enum_3_6132C8F856090358.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_A8379E4182124966_METHOD_1_3C615A1C69EA3FC8_OFFSET UNITYSDK_OFFSET(0x10E95D20)
#define CLASS_1_A8379E4182124966_METHOD_1_43BA9B980EEF447E_OFFSET UNITYSDK_OFFSET(0x10E95800)
#define CLASS_1_A8379E4182124966_METHOD_1_83C62D2130E2E0BC_OFFSET UNITYSDK_OFFSET(0x10E95CE0)
#define CLASS_1_A8379E4182124966_METHOD_1_EDBC885B6838D667_OFFSET UNITYSDK_OFFSET(0x10E95930)
#define CLASS_1_A8379E4182124966__CCTOR_OFFSET UNITYSDK_OFFSET(0x10E95710)

inline static constexpr unsigned int Class_1_A8379E4182124966_TypeDefinitionIndex = 58770;

class Class_1_A8379E4182124966 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A8379E4182124966_TypeDefinitionIndex)->GetStaticField(0x421E0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A8379E4182124966__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_43BA9B980EEF447E(::Enum_3_51C724C3FB60D55B a1)
	{
		return ((::System::Void(*)(::Enum_3_51C724C3FB60D55B))((::PBYTE)hIl2Cpp + CLASS_1_A8379E4182124966_METHOD_1_43BA9B980EEF447E_OFFSET))(a1);
	}

	static ::System::Void Method_1_EDBC885B6838D667(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A8379E4182124966_METHOD_1_EDBC885B6838D667_OFFSET))(a1);
	}

	static ::Enum_3_51C724C3FB60D55B Method_1_83C62D2130E2E0BC(::Enum_3_6132C8F856090358 a1)
	{
		return ((::Enum_3_51C724C3FB60D55B(*)(::Enum_3_6132C8F856090358))((::PBYTE)hIl2Cpp + CLASS_1_A8379E4182124966_METHOD_1_83C62D2130E2E0BC_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_3C615A1C69EA3FC8(::System::String* a1, ::Enum_3_51C724C3FB60D55B& a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::Enum_3_51C724C3FB60D55B&))((::PBYTE)hIl2Cpp + CLASS_1_A8379E4182124966_METHOD_1_3C615A1C69EA3FC8_OFFSET))(a1, a2);
	}
};
