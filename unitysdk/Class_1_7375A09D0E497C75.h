#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/FilterMode.h"
#include "unitysdk/UnityEngine/RenderTextureFormat.h"
#include "unitysdk/UnityEngine/RenderTextureReadWrite.h"
#include "unitysdk/UnityEngine/TextureWrapMode.h"

class Class_1_4D1B1009D34E8A43;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_7375A09D0E497C75_METHOD_1_36726F9E10ADB55F_OFFSET UNITYSDK_OFFSET(0x1238A7E0)
#define CLASS_1_7375A09D0E497C75_METHOD_1_369BB5E7FA6A1768_OFFSET UNITYSDK_OFFSET(0x1238A680)
#define CLASS_1_7375A09D0E497C75_METHOD_1_594F60052862009B_OFFSET UNITYSDK_OFFSET(0x1238A380)
#define CLASS_1_7375A09D0E497C75_METHOD_1_F17676F976AEF1D8_OFFSET UNITYSDK_OFFSET(0x1238AAC0)
#define CLASS_1_7375A09D0E497C75__CCTOR_OFFSET UNITYSDK_OFFSET(0x1238AD50)

inline static constexpr unsigned int Class_1_7375A09D0E497C75_TypeDefinitionIndex = 65615;

class Class_1_7375A09D0E497C75 : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::Class_1_4D1B1009D34E8A43*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::List_1<::Class_1_4D1B1009D34E8A43*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7375A09D0E497C75_TypeDefinitionIndex)->GetStaticField(0x1BC50);
	}
	static ::System::Collections::Generic::List_1<::Class_1_4D1B1009D34E8A43*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::List_1<::Class_1_4D1B1009D34E8A43*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7375A09D0E497C75_TypeDefinitionIndex)->GetStaticField(0x1BC58);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7375A09D0E497C75__CCTOR_OFFSET))();
	}

	static ::Class_1_4D1B1009D34E8A43* Method_1_594F60052862009B(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::RenderTextureFormat a4, ::UnityEngine::RenderTextureReadWrite a5, ::System::Int32 a6, ::System::String* a7, ::UnityEngine::TextureWrapMode a8, ::UnityEngine::FilterMode a9)
	{
		return ((::Class_1_4D1B1009D34E8A43*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::RenderTextureFormat, ::UnityEngine::RenderTextureReadWrite, ::System::Int32, ::System::String*, ::UnityEngine::TextureWrapMode, ::UnityEngine::FilterMode))((::PBYTE)hIl2Cpp + CLASS_1_7375A09D0E497C75_METHOD_1_594F60052862009B_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	static ::System::Void Method_1_369BB5E7FA6A1768(::Class_1_4D1B1009D34E8A43* a1)
	{
		return ((::System::Void(*)(::Class_1_4D1B1009D34E8A43*))((::PBYTE)hIl2Cpp + CLASS_1_7375A09D0E497C75_METHOD_1_369BB5E7FA6A1768_OFFSET))(a1);
	}

	static ::System::Void Method_1_36726F9E10ADB55F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7375A09D0E497C75_METHOD_1_36726F9E10ADB55F_OFFSET))();
	}

	static ::System::Void Method_1_F17676F976AEF1D8()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7375A09D0E497C75_METHOD_1_F17676F976AEF1D8_OFFSET))();
	}
};
