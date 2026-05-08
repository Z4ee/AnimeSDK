#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_822E0D21FB08B42F_METHOD_1_B37C805F1A4DBCFB_OFFSET UNITYSDK_OFFSET(0x175C2440)
#define CLASS_1_822E0D21FB08B42F_METHOD_1_CE18697B63E52504_OFFSET UNITYSDK_OFFSET(0x175C23B0)
#define CLASS_1_822E0D21FB08B42F__CCTOR_OFFSET UNITYSDK_OFFSET(0x175C2370)
#define CLASS_1_822E0D21FB08B42F__CTOR_OFFSET UNITYSDK_OFFSET(0x175C2360)

inline static constexpr unsigned int Class_1_822E0D21FB08B42F_TypeDefinitionIndex = 44091;

class Class_1_822E0D21FB08B42F : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_822E0D21FB08B42F_TypeDefinitionIndex)->GetStaticField(0xF810);
	}
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_822E0D21FB08B42F_TypeDefinitionIndex)->GetStaticField(0xF814);
	}
	// static const ::System::String* Field_1_1; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_822E0D21FB08B42F__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_822E0D21FB08B42F__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_CE18697B63E52504()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_822E0D21FB08B42F_METHOD_1_CE18697B63E52504_OFFSET))();
	}

	static ::System::Void Method_1_B37C805F1A4DBCFB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_822E0D21FB08B42F_METHOD_1_B37C805F1A4DBCFB_OFFSET))(a1);
	}
};
