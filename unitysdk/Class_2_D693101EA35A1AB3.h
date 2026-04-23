#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_952A7C560FC1CD4B.h"

class Class_1_EAF7984A8FAD6BE4;
namespace EnviromentSystemV2Space { class LLGKeyValuePairs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::Rendering { class CommandBuffer; }
template <typename T> class Class_4_77EB9B0502521934;

#define CLASS_2_D693101EA35A1AB3_METHOD_2_3AC94EEB348AAF2D_OFFSET UNITYSDK_OFFSET(0x12A539B0)
#define CLASS_2_D693101EA35A1AB3_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x12A53EC0)
#define CLASS_2_D693101EA35A1AB3_METHOD_2_676E4EF2BBA9B1C2_OFFSET UNITYSDK_OFFSET(0x12A53630)
#define CLASS_2_D693101EA35A1AB3_METHOD_2_6D3A4546382BD733_OFFSET UNITYSDK_OFFSET(0x12A53C20)
#define CLASS_2_D693101EA35A1AB3_METHOD_2_6E2356E48BB4B332_OFFSET UNITYSDK_OFFSET(0x12A53F20)
#define CLASS_2_D693101EA35A1AB3_METHOD_2_9E38127F40B34F1F_OFFSET UNITYSDK_OFFSET(0x12A53680)
#define CLASS_2_D693101EA35A1AB3_METHOD_2_C44632F2EE02FDA2_OFFSET UNITYSDK_OFFSET(0x12A53A90)
#define CLASS_2_D693101EA35A1AB3_METHOD_2_EC8BD148390A52E1_OFFSET UNITYSDK_OFFSET(0x12A53C30)
#define CLASS_2_D693101EA35A1AB3__CTOR_OFFSET UNITYSDK_OFFSET(0x12A53DD0)

inline static constexpr unsigned int Class_2_D693101EA35A1AB3_TypeDefinitionIndex = 45920;

class Class_2_D693101EA35A1AB3 : public ::Class_1_952A7C560FC1CD4B
{
public:
	::Class_4_77EB9B0502521934<::EnviromentSystemV2Space::LLGKeyValuePairs*>* Field_2_0; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* Field_2_1; // 0x30
	::System::Boolean Field_2_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D693101EA35A1AB3__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_676E4EF2BBA9B1C2(::Class_1_EAF7984A8FAD6BE4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EAF7984A8FAD6BE4*))((::PBYTE)hIl2Cpp + CLASS_2_D693101EA35A1AB3_METHOD_2_676E4EF2BBA9B1C2_OFFSET))(this, a1);
	}

	::System::Void Method_2_3AC94EEB348AAF2D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D693101EA35A1AB3_METHOD_2_3AC94EEB348AAF2D_OFFSET))(this);
	}

	::System::Void Method_2_C44632F2EE02FDA2(::UnityEngine::Rendering::CommandBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_D693101EA35A1AB3_METHOD_2_C44632F2EE02FDA2_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* Method_2_6D3A4546382BD733()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D693101EA35A1AB3_METHOD_2_6D3A4546382BD733_OFFSET))(this);
	}

	::System::Void Method_2_9E38127F40B34F1F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D693101EA35A1AB3_METHOD_2_9E38127F40B34F1F_OFFSET))(this);
	}

	::System::Single Method_2_EC8BD148390A52E1(::System::String* a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_D693101EA35A1AB3_METHOD_2_EC8BD148390A52E1_OFFSET))(this, a1);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D693101EA35A1AB3_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_6E2356E48BB4B332(::UnityEngine::Rendering::CommandBuffer* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_D693101EA35A1AB3_METHOD_2_6E2356E48BB4B332_OFFSET))(this, P0);
	}
};
