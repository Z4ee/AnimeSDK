#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C504EE57A5080FE1_Struct_2_E9C414FE9D4E0F07.h"
#include "unitysdk/Enum_3_45F17E7011968B0C.h"
#include "unitysdk/Enum_3_D6975E78EC694A05.h"
#include "unitysdk/Struct_2_D7552A7A8FE32848.h"
#include "unitysdk/System/Object.h"

class Class_1_0C791B68CB2A5BF5;
class Class_2_A48F3719AA1CF200_22;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class SpriteRenderer; }
namespace UnityEngine { class Texture2D; }

#define CLASS_1_C504EE57A5080FE1_METHOD_1_045D8D4032094B56_OFFSET UNITYSDK_OFFSET(0x1C2F44D0)
#define CLASS_1_C504EE57A5080FE1_METHOD_1_0580B0297447A70A_OFFSET UNITYSDK_OFFSET(0x1C2F45A0)
#define CLASS_1_C504EE57A5080FE1_METHOD_1_08DAF0B2967CFA69_OFFSET UNITYSDK_OFFSET(0x1C2F3CB0)
#define CLASS_1_C504EE57A5080FE1_METHOD_1_0C54CE2A4A881F06_OFFSET UNITYSDK_OFFSET(0x1C2F48D0)
#define CLASS_1_C504EE57A5080FE1_METHOD_1_286D0F6CBE978F4F_OFFSET UNITYSDK_OFFSET(0x1C2F46A0)
#define CLASS_1_C504EE57A5080FE1_METHOD_1_65A9D88EA452BA0A_OFFSET UNITYSDK_OFFSET(0x1C2F4180)
#define CLASS_1_C504EE57A5080FE1_METHOD_1_AEDD27C5E1F99995_OFFSET UNITYSDK_OFFSET(0x1C2F3F70)
#define CLASS_1_C504EE57A5080FE1_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1C2F4140)
#define CLASS_1_C504EE57A5080FE1_METHOD_1_F7BA13C72A6B3F58_OFFSET UNITYSDK_OFFSET(0x1C2F4A40)
#define CLASS_1_C504EE57A5080FE1__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2F3B80)

inline static constexpr unsigned int Class_1_C504EE57A5080FE1_TypeDefinitionIndex = 85469;

class Class_1_C504EE57A5080FE1 : public ::System::Object
{
public:
	::Class_1_0C791B68CB2A5BF5* Field_1_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::Enum_3_45F17E7011968B0C, ::System::Int32>* Field_1_3; // 0x18
	::UnityEngine::MaterialPropertyBlock* Field_1_2; // 0x20
	::System::Func_2<::System::String*, ::UnityEngine::Texture2D*>* Field_1_6; // 0x28
	::System::Collections::Generic::List_1<::Class_1_C504EE57A5080FE1_Struct_2_E9C414FE9D4E0F07>* Field_1_0; // 0x30
	::System::Int32 Field_1_5; // 0x38
	::System::Boolean Field_1_4; // 0x3C

	::System::Void _ctor(::System::Int32 a1, ::System::Func_2<::System::String*, ::UnityEngine::Texture2D*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Func_2<::System::String*, ::UnityEngine::Texture2D*>*))((::PBYTE)hIl2Cpp + CLASS_1_C504EE57A5080FE1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_08DAF0B2967CFA69(::Class_1_C504EE57A5080FE1_Struct_2_E9C414FE9D4E0F07 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C504EE57A5080FE1_Struct_2_E9C414FE9D4E0F07, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C504EE57A5080FE1_METHOD_1_08DAF0B2967CFA69_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_AEDD27C5E1F99995(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C504EE57A5080FE1_METHOD_1_AEDD27C5E1F99995_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C504EE57A5080FE1_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_65A9D88EA452BA0A(::Enum_3_D6975E78EC694A05 a1, ::Enum_3_45F17E7011968B0C a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_D6975E78EC694A05, ::Enum_3_45F17E7011968B0C))((::PBYTE)hIl2Cpp + CLASS_1_C504EE57A5080FE1_METHOD_1_65A9D88EA452BA0A_OFFSET))(this, a1, a2);
	}

	::Class_2_A48F3719AA1CF200_22* Method_1_045D8D4032094B56(::UnityEngine::SpriteRenderer* a1)
	{
		return ((::Class_2_A48F3719AA1CF200_22*(*)(::PVOID, ::UnityEngine::SpriteRenderer*))((::PBYTE)hIl2Cpp + CLASS_1_C504EE57A5080FE1_METHOD_1_045D8D4032094B56_OFFSET))(this, a1);
	}

	static ::Class_1_C504EE57A5080FE1* Method_1_0580B0297447A70A(::System::Func_2<::System::String*, ::UnityEngine::Texture2D*>* a1, ::Struct_2_D7552A7A8FE32848 a2, ::Struct_2_D7552A7A8FE32848 a3)
	{
		return ((::Class_1_C504EE57A5080FE1*(*)(::System::Func_2<::System::String*, ::UnityEngine::Texture2D*>*, ::Struct_2_D7552A7A8FE32848, ::Struct_2_D7552A7A8FE32848))((::PBYTE)hIl2Cpp + CLASS_1_C504EE57A5080FE1_METHOD_1_0580B0297447A70A_OFFSET))(a1, a2, a3);
	}

	static ::Class_1_C504EE57A5080FE1* Method_1_0C54CE2A4A881F06(::System::Func_2<::System::String*, ::UnityEngine::Texture2D*>* a1, ::Struct_2_D7552A7A8FE32848 a2, ::Struct_2_D7552A7A8FE32848 a3, ::Struct_2_D7552A7A8FE32848 a4, ::Struct_2_D7552A7A8FE32848 a5)
	{
		return ((::Class_1_C504EE57A5080FE1*(*)(::System::Func_2<::System::String*, ::UnityEngine::Texture2D*>*, ::Struct_2_D7552A7A8FE32848, ::Struct_2_D7552A7A8FE32848, ::Struct_2_D7552A7A8FE32848, ::Struct_2_D7552A7A8FE32848))((::PBYTE)hIl2Cpp + CLASS_1_C504EE57A5080FE1_METHOD_1_0C54CE2A4A881F06_OFFSET))(a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_F7BA13C72A6B3F58()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C504EE57A5080FE1_METHOD_1_F7BA13C72A6B3F58_OFFSET))(this);
	}

	::System::Void Method_1_286D0F6CBE978F4F(::Struct_2_D7552A7A8FE32848& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_D7552A7A8FE32848&))((::PBYTE)hIl2Cpp + CLASS_1_C504EE57A5080FE1_METHOD_1_286D0F6CBE978F4F_OFFSET))(this, a1);
	}
};
