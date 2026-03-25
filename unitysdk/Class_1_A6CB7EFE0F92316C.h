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

#define CLASS_1_A6CB7EFE0F92316C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1132E200)
#define CLASS_1_A6CB7EFE0F92316C_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1132E6E0)
#define CLASS_1_A6CB7EFE0F92316C_METHOD_1_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0x1132E370)
#define CLASS_1_A6CB7EFE0F92316C_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1132E310)
#define CLASS_1_A6CB7EFE0F92316C_METHOD_1_3F3756F5D75761EB_OFFSET UNITYSDK_OFFSET(0x1132DB60)
#define CLASS_1_A6CB7EFE0F92316C_METHOD_1_65998464BF52223F_OFFSET UNITYSDK_OFFSET(0x1132E700)
#define CLASS_1_A6CB7EFE0F92316C_METHOD_1_806372AC0634FFB8_OFFSET UNITYSDK_OFFSET(0x1132E500)
#define CLASS_1_A6CB7EFE0F92316C_METHOD_1_9767C2C291F867EA_OFFSET UNITYSDK_OFFSET(0x1132E3C0)
#define CLASS_1_A6CB7EFE0F92316C_METHOD_1_98B7D142FBED6D85_OFFSET UNITYSDK_OFFSET(0x1132E600)
#define CLASS_1_A6CB7EFE0F92316C_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1132E6F0)
#define CLASS_1_A6CB7EFE0F92316C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1132E790)
#define CLASS_1_A6CB7EFE0F92316C__CTOR_OFFSET UNITYSDK_OFFSET(0x1132E750)

inline static constexpr unsigned int Class_1_A6CB7EFE0F92316C_TypeDefinitionIndex = 57434;

class Class_1_A6CB7EFE0F92316C : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::UnityEngine::RenderTextureFormat, ::Il2CppArray<::UnityEngine::RenderTextureFormat>*>** StaticGet_Field_1_3()
	{
		return (::System::Collections::Generic::Dictionary_2<::UnityEngine::RenderTextureFormat, ::Il2CppArray<::UnityEngine::RenderTextureFormat>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A6CB7EFE0F92316C_TypeDefinitionIndex)->GetStaticField(0x2F1C0);
	}
	::System::Collections::Generic::List_1<::UnityEngine::Camera*>* Field_1_2; // 0x10
	::System::Action* Field_1_1; // 0x18
	::UnityEngine::RenderTexture* _Value_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A6CB7EFE0F92316C__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A6CB7EFE0F92316C__CCTOR_OFFSET))();
	}

	::System::Void Method_1_3F3756F5D75761EB(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::RenderTextureFormat a4, ::UnityEngine::RenderTextureReadWrite a5, ::System::Int32 a6, ::System::String* a7, ::UnityEngine::TextureWrapMode a8, ::UnityEngine::FilterMode a9)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::RenderTextureFormat, ::UnityEngine::RenderTextureReadWrite, ::System::Int32, ::System::String*, ::UnityEngine::TextureWrapMode, ::UnityEngine::FilterMode))((::PBYTE)hIl2Cpp + CLASS_1_A6CB7EFE0F92316C_METHOD_1_3F3756F5D75761EB_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A6CB7EFE0F92316C_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A6CB7EFE0F92316C_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A6CB7EFE0F92316C_METHOD_1_1D4018D4200358D0_1_OFFSET))(this);
	}

	::System::Boolean Method_1_9767C2C291F867EA(::UnityEngine::Camera* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + CLASS_1_A6CB7EFE0F92316C_METHOD_1_9767C2C291F867EA_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_806372AC0634FFB8(::UnityEngine::Camera* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + CLASS_1_A6CB7EFE0F92316C_METHOD_1_806372AC0634FFB8_OFFSET))(this, a1);
	}

	::System::Void Method_1_98B7D142FBED6D85()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A6CB7EFE0F92316C_METHOD_1_98B7D142FBED6D85_OFFSET))(this);
	}

	::UnityEngine::RenderTexture* get_Value()
	{
		return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A6CB7EFE0F92316C_GET_VALUE_OFFSET))(this);
	}

	::System::Void set_Value(::UnityEngine::RenderTexture* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + CLASS_1_A6CB7EFE0F92316C_SET_VALUE_OFFSET))(this, value);
	}

	static ::UnityEngine::RenderTexture* Method_1_65998464BF52223F(::Class_1_A6CB7EFE0F92316C* a1)
	{
		return ((::UnityEngine::RenderTexture*(*)(::Class_1_A6CB7EFE0F92316C*))((::PBYTE)hIl2Cpp + CLASS_1_A6CB7EFE0F92316C_METHOD_1_65998464BF52223F_OFFSET))(a1);
	}
};
