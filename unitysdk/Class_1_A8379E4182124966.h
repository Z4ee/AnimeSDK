#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_519A64C3FB3A5470.h"
#include "unitysdk/Enum_3_612F88F8560660E1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_A8379E4182124966_METHOD_1_3C615A1C69EA3FC8_OFFSET UNITYSDK_OFFSET(0x1548D760)
#define CLASS_1_A8379E4182124966_METHOD_1_43BA9B980EEF447E_OFFSET UNITYSDK_OFFSET(0x1548DC20)
#define CLASS_1_A8379E4182124966_METHOD_1_83C62D2130E2E0BC_OFFSET UNITYSDK_OFFSET(0x1548D820)
#define CLASS_1_A8379E4182124966_METHOD_1_EDBC885B6838D667_OFFSET UNITYSDK_OFFSET(0x1548D860)
#define CLASS_1_A8379E4182124966__CCTOR_OFFSET UNITYSDK_OFFSET(0x1548D670)

inline static constexpr unsigned int Class_1_A8379E4182124966_TypeDefinitionIndex = 43920;

class Class_1_A8379E4182124966 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A8379E4182124966_TypeDefinitionIndex)->GetStaticField(0x41240);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A8379E4182124966__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_3C615A1C69EA3FC8(::System::String* a1, ::Enum_3_519A64C3FB3A5470& a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::Enum_3_519A64C3FB3A5470&))((::PBYTE)hIl2Cpp + CLASS_1_A8379E4182124966_METHOD_1_3C615A1C69EA3FC8_OFFSET))(a1, a2);
	}

	static ::Enum_3_519A64C3FB3A5470 Method_1_83C62D2130E2E0BC(::Enum_3_612F88F8560660E1 a1)
	{
		return ((::Enum_3_519A64C3FB3A5470(*)(::Enum_3_612F88F8560660E1))((::PBYTE)hIl2Cpp + CLASS_1_A8379E4182124966_METHOD_1_83C62D2130E2E0BC_OFFSET))(a1);
	}

	static ::System::Void Method_1_EDBC885B6838D667(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A8379E4182124966_METHOD_1_EDBC885B6838D667_OFFSET))(a1);
	}

	static ::System::Void Method_1_43BA9B980EEF447E(::Enum_3_519A64C3FB3A5470 a1)
	{
		return ((::System::Void(*)(::Enum_3_519A64C3FB3A5470))((::PBYTE)hIl2Cpp + CLASS_1_A8379E4182124966_METHOD_1_43BA9B980EEF447E_OFFSET))(a1);
	}
};
