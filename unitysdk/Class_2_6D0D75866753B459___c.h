#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_6D0D75866753B459___C_METHOD_1_EB974738829A6BF5_OFFSET UNITYSDK_OFFSET(0x11E73E00)
#define CLASS_2_6D0D75866753B459___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11E73DB0)
#define CLASS_2_6D0D75866753B459___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11E73DF0)

inline static constexpr unsigned int Class_2_6D0D75866753B459___c_TypeDefinitionIndex = 52901;

class Class_2_6D0D75866753B459___c : public ::System::Object
{
public:
	static ::Class_2_6D0D75866753B459___c** StaticGet___9()
	{
		return (::Class_2_6D0D75866753B459___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_6D0D75866753B459___c_TypeDefinitionIndex)->GetStaticField(0x38750);
	}
	static ::System::Comparison_1<::System::Boolean>** StaticGet___9__20_0()
	{
		return (::System::Comparison_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_6D0D75866753B459___c_TypeDefinitionIndex)->GetStaticField(0x38758);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_6D0D75866753B459___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D0D75866753B459___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_EB974738829A6BF5(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6D0D75866753B459___C_METHOD_1_EB974738829A6BF5_OFFSET))(this, a1, a2);
	}
};
