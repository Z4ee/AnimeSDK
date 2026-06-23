#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_2E40794F1F3D2434.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define CLASS_3_9F92921A2B8EBE2A_METHOD_3_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1591C950)
#define CLASS_3_9F92921A2B8EBE2A_METHOD_3_7D201B4343E63821_OFFSET UNITYSDK_OFFSET(0x1591C960)
#define CLASS_3_9F92921A2B8EBE2A_METHOD_3_A1C7122184516C18_OFFSET UNITYSDK_OFFSET(0x1591C9D0)
#define CLASS_3_9F92921A2B8EBE2A_METHOD_3_D0CD9A971CA3B1CF_OFFSET UNITYSDK_OFFSET(0x1591CF80)
#define CLASS_3_9F92921A2B8EBE2A__CTOR_OFFSET UNITYSDK_OFFSET(0x1591C970)

inline static constexpr unsigned int Class_3_9F92921A2B8EBE2A_TypeDefinitionIndex = 84459;

class Class_3_9F92921A2B8EBE2A : public ::Class_2_2E40794F1F3D2434
{
public:
	::System::String* Field_3_0; // 0x30
	::System::Action_3<::System::Int32, ::System::String*, ::System::String*>* Field_3_1; // 0x38
	::System::UInt64 Field_3_3; // 0x40
	::System::Int32 Field_3_2; // 0x48

	::System::Void _ctor(::System::Action_3<::System::Int32, ::System::String*, ::System::String*>* a1, ::System::Int32 a2, ::System::UInt64 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_3<::System::Int32, ::System::String*, ::System::String*>*, ::System::Int32, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_3_9F92921A2B8EBE2A__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::String* Method_3_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9F92921A2B8EBE2A_METHOD_3_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_3_7D201B4343E63821(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_9F92921A2B8EBE2A_METHOD_3_7D201B4343E63821_OFFSET))(this, a1);
	}

	::System::Void Method_3_A1C7122184516C18()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9F92921A2B8EBE2A_METHOD_3_A1C7122184516C18_OFFSET))(this);
	}

	::System::Void Method_3_D0CD9A971CA3B1CF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9F92921A2B8EBE2A_METHOD_3_D0CD9A971CA3B1CF_OFFSET))(this);
	}
};
