#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_952A7C560FC1CD4B.h"

class Class_1_EAF7984A8FAD6BE4;
namespace EnviromentSystemV2Space { class LLGKeyValuePairs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::Rendering { class CommandBuffer; }
template <typename T> class Class_4_77EB9B0502521934;

#define CLASS_2_B165144F7623F691_METHOD_2_228A3065198ABD81_OFFSET UNITYSDK_OFFSET(0x110BDE40)
#define CLASS_2_B165144F7623F691_METHOD_2_3AC94EEB348AAF2D_OFFSET UNITYSDK_OFFSET(0x110BDBC0)
#define CLASS_2_B165144F7623F691_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x110BE100)
#define CLASS_2_B165144F7623F691_METHOD_2_676E4EF2BBA9B1C2_OFFSET UNITYSDK_OFFSET(0x110BD840)
#define CLASS_2_B165144F7623F691_METHOD_2_6D3A4546382BD733_OFFSET UNITYSDK_OFFSET(0x110BDE30)
#define CLASS_2_B165144F7623F691_METHOD_2_6E2356E48BB4B332_OFFSET UNITYSDK_OFFSET(0x110BE160)
#define CLASS_2_B165144F7623F691_METHOD_2_9E38127F40B34F1F_OFFSET UNITYSDK_OFFSET(0x110BD890)
#define CLASS_2_B165144F7623F691_METHOD_2_C44632F2EE02FDA2_OFFSET UNITYSDK_OFFSET(0x110BDCA0)
#define CLASS_2_B165144F7623F691__CTOR_OFFSET UNITYSDK_OFFSET(0x110BE010)

inline static constexpr unsigned int Class_2_B165144F7623F691_TypeDefinitionIndex = 40011;

class Class_2_B165144F7623F691 : public ::Class_1_952A7C560FC1CD4B
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* Field_2_1; // 0x28
	::Class_4_77EB9B0502521934<::EnviromentSystemV2Space::LLGKeyValuePairs*>* Field_2_0; // 0x30
	::System::Boolean Field_2_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B165144F7623F691__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_676E4EF2BBA9B1C2(::Class_1_EAF7984A8FAD6BE4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EAF7984A8FAD6BE4*))((::PBYTE)hIl2Cpp + CLASS_2_B165144F7623F691_METHOD_2_676E4EF2BBA9B1C2_OFFSET))(this, a1);
	}

	::System::Void Method_2_3AC94EEB348AAF2D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B165144F7623F691_METHOD_2_3AC94EEB348AAF2D_OFFSET))(this);
	}

	::System::Void Method_2_C44632F2EE02FDA2(::UnityEngine::Rendering::CommandBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_B165144F7623F691_METHOD_2_C44632F2EE02FDA2_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* Method_2_6D3A4546382BD733()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B165144F7623F691_METHOD_2_6D3A4546382BD733_OFFSET))(this);
	}

	::System::Void Method_2_9E38127F40B34F1F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B165144F7623F691_METHOD_2_9E38127F40B34F1F_OFFSET))(this);
	}

	::System::Single Method_2_228A3065198ABD81(::System::String* a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_B165144F7623F691_METHOD_2_228A3065198ABD81_OFFSET))(this, a1);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B165144F7623F691_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_6E2356E48BB4B332(::UnityEngine::Rendering::CommandBuffer* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_B165144F7623F691_METHOD_2_6E2356E48BB4B332_OFFSET))(this, P0);
	}
};
