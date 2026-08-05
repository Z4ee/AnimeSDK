#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_2E40794F1F3D2434.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_3_E88D21DB40A31138_METHOD_3_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x18189B00)
#define CLASS_3_E88D21DB40A31138_METHOD_3_14938E70B30BB85F_OFFSET UNITYSDK_OFFSET(0x18189C90)
#define CLASS_3_E88D21DB40A31138_METHOD_3_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x18189B60)
#define CLASS_3_E88D21DB40A31138_METHOD_3_7D201B4343E63821_OFFSET UNITYSDK_OFFSET(0x18189B10)
#define CLASS_3_E88D21DB40A31138_METHOD_3_D0CD9A971CA3B1CF_OFFSET UNITYSDK_OFFSET(0x18189D90)
#define CLASS_3_E88D21DB40A31138__CTOR_OFFSET UNITYSDK_OFFSET(0x18189B20)

inline static constexpr unsigned int Class_3_E88D21DB40A31138_TypeDefinitionIndex = 82286;

class Class_3_E88D21DB40A31138 : public ::Class_2_2E40794F1F3D2434
{
public:
	::System::String* Field_3_1; // 0x30
	::System::Action_2<::System::Int32, ::System::String*>* Field_3_0; // 0x38

	::System::Void _ctor(::System::Action_2<::System::Int32, ::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Int32, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_3_E88D21DB40A31138__CTOR_OFFSET))(this, a1);
	}

	::System::String* Method_3_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E88D21DB40A31138_METHOD_3_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_3_7D201B4343E63821(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_E88D21DB40A31138_METHOD_3_7D201B4343E63821_OFFSET))(this, a1);
	}

	::System::Void Method_3_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E88D21DB40A31138_METHOD_3_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_3_14938E70B30BB85F(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_E88D21DB40A31138_METHOD_3_14938E70B30BB85F_OFFSET))(this, a1);
	}

	::System::Void Method_3_D0CD9A971CA3B1CF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E88D21DB40A31138_METHOD_3_D0CD9A971CA3B1CF_OFFSET))(this);
	}
};
