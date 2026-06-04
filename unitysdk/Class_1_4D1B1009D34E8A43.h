#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/FilterMode.h"
#include "unitysdk/UnityEngine/RenderTextureFormat.h"
#include "unitysdk/UnityEngine/RenderTextureReadWrite.h"
#include "unitysdk/UnityEngine/TextureWrapMode.h"

namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class RenderTexture; }

#define CLASS_1_4D1B1009D34E8A43_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13C9CA00)
#define CLASS_1_4D1B1009D34E8A43_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x13C9CFC0)
#define CLASS_1_4D1B1009D34E8A43_METHOD_1_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0x13C9CB80)
#define CLASS_1_4D1B1009D34E8A43_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x13C9CB20)
#define CLASS_1_4D1B1009D34E8A43_METHOD_1_65998464BF52223F_OFFSET UNITYSDK_OFFSET(0x13C9CFE0)
#define CLASS_1_4D1B1009D34E8A43_METHOD_1_70B372883342797F_OFFSET UNITYSDK_OFFSET(0x13C9CBD0)
#define CLASS_1_4D1B1009D34E8A43_METHOD_1_806372AC0634FFB8_OFFSET UNITYSDK_OFFSET(0x13C9CDE0)
#define CLASS_1_4D1B1009D34E8A43_METHOD_1_B35B7AE0266AB711_OFFSET UNITYSDK_OFFSET(0x13C9C470)
#define CLASS_1_4D1B1009D34E8A43_METHOD_1_F77BBFBC56288301_OFFSET UNITYSDK_OFFSET(0x13C9CEE0)
#define CLASS_1_4D1B1009D34E8A43_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x13C9CFD0)
#define CLASS_1_4D1B1009D34E8A43__CCTOR_OFFSET UNITYSDK_OFFSET(0x13C9D070)
#define CLASS_1_4D1B1009D34E8A43__CTOR_OFFSET UNITYSDK_OFFSET(0x13C9D030)

inline static constexpr unsigned int Class_1_4D1B1009D34E8A43_TypeDefinitionIndex = 65616;

class Class_1_4D1B1009D34E8A43 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::UnityEngine::RenderTextureFormat, ::Il2CppArray<::UnityEngine::RenderTextureFormat>*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::UnityEngine::RenderTextureFormat, ::Il2CppArray<::UnityEngine::RenderTextureFormat>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D1B1009D34E8A43_TypeDefinitionIndex)->GetStaticField(0x66730);
	}
	::UnityEngine::RenderTexture* _Value_k__BackingField; // 0x10
	::System::Action* Field_1_2; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::Camera*>* Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D1B1009D34E8A43__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4D1B1009D34E8A43__CCTOR_OFFSET))();
	}

	::System::Void Method_1_B35B7AE0266AB711(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::RenderTextureFormat a4, ::UnityEngine::RenderTextureReadWrite a5, ::System::Int32 a6, ::System::String* a7, ::UnityEngine::TextureWrapMode a8, ::UnityEngine::FilterMode a9)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::RenderTextureFormat, ::UnityEngine::RenderTextureReadWrite, ::System::Int32, ::System::String*, ::UnityEngine::TextureWrapMode, ::UnityEngine::FilterMode))((::PBYTE)hIl2Cpp + CLASS_1_4D1B1009D34E8A43_METHOD_1_B35B7AE0266AB711_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D1B1009D34E8A43_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D1B1009D34E8A43_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D1B1009D34E8A43_METHOD_1_1D4018D4200358D0_1_OFFSET))(this);
	}

	::System::Boolean Method_1_70B372883342797F(::UnityEngine::Camera* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + CLASS_1_4D1B1009D34E8A43_METHOD_1_70B372883342797F_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_806372AC0634FFB8(::UnityEngine::Camera* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + CLASS_1_4D1B1009D34E8A43_METHOD_1_806372AC0634FFB8_OFFSET))(this, a1);
	}

	::System::Void Method_1_F77BBFBC56288301()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D1B1009D34E8A43_METHOD_1_F77BBFBC56288301_OFFSET))(this);
	}

	::UnityEngine::RenderTexture* get_Value()
	{
		return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D1B1009D34E8A43_GET_VALUE_OFFSET))(this);
	}

	::System::Void set_Value(::UnityEngine::RenderTexture* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + CLASS_1_4D1B1009D34E8A43_SET_VALUE_OFFSET))(this, a1);
	}

	static ::UnityEngine::RenderTexture* Method_1_65998464BF52223F(::Class_1_4D1B1009D34E8A43* a1)
	{
		return ((::UnityEngine::RenderTexture*(*)(::Class_1_4D1B1009D34E8A43*))((::PBYTE)hIl2Cpp + CLASS_1_4D1B1009D34E8A43_METHOD_1_65998464BF52223F_OFFSET))(a1);
	}
};
