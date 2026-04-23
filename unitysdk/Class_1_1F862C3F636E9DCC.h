#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/BindInfo.h"
#include "unitysdk/System/Object.h"

namespace RPGTools::Timeline { class ArchiveAsset; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define CLASS_1_1F862C3F636E9DCC_METHOD_1_159CB55E631AFCB9_OFFSET UNITYSDK_OFFSET(0x96D1AB0)
#define CLASS_1_1F862C3F636E9DCC_METHOD_1_16916A6BD265ACDF_OFFSET UNITYSDK_OFFSET(0x96D1810)
#define CLASS_1_1F862C3F636E9DCC_METHOD_1_4599C0CF562CCA4F_OFFSET UNITYSDK_OFFSET(0x96D1C30)
#define CLASS_1_1F862C3F636E9DCC_METHOD_1_598059ED8CB3AE09_OFFSET UNITYSDK_OFFSET(0x96D1E40)
#define CLASS_1_1F862C3F636E9DCC_METHOD_1_6DF73CE773F2F30D_OFFSET UNITYSDK_OFFSET(0x96D1DF0)
#define CLASS_1_1F862C3F636E9DCC_METHOD_1_726E0F1D38F6007C_OFFSET UNITYSDK_OFFSET(0x96D18C0)
#define CLASS_1_1F862C3F636E9DCC_METHOD_1_80C4C7392FFB7743_OFFSET UNITYSDK_OFFSET(0x96D1EB0)
#define CLASS_1_1F862C3F636E9DCC_METHOD_1_ADF94FD4FE887AD0_OFFSET UNITYSDK_OFFSET(0x96D1980)
#define CLASS_1_1F862C3F636E9DCC_METHOD_1_B894D9376F1B2CCE_OFFSET UNITYSDK_OFFSET(0x96D1D80)
#define CLASS_1_1F862C3F636E9DCC_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x96D1F00)
#define CLASS_1_1F862C3F636E9DCC__CTOR_OFFSET UNITYSDK_OFFSET(0x96D1F40)

inline static constexpr unsigned int Class_1_1F862C3F636E9DCC_TypeDefinitionIndex = 45224;

class Class_1_1F862C3F636E9DCC : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPGTools::Timeline::ArchiveAsset*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F862C3F636E9DCC__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_16916A6BD265ACDF(::RPGTools::Timeline::ArchiveAsset* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::ArchiveAsset*))((::PBYTE)hIl2Cpp + CLASS_1_1F862C3F636E9DCC_METHOD_1_16916A6BD265ACDF_OFFSET))(this, a1);
	}

	::UnityEngine::Object* Method_1_726E0F1D38F6007C(::RPGTools::Timeline::BindInfo a1)
	{
		return ((::UnityEngine::Object*(*)(::PVOID, ::RPGTools::Timeline::BindInfo))((::PBYTE)hIl2Cpp + CLASS_1_1F862C3F636E9DCC_METHOD_1_726E0F1D38F6007C_OFFSET))(this, a1);
	}

	::System::Void Method_1_159CB55E631AFCB9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F862C3F636E9DCC_METHOD_1_159CB55E631AFCB9_OFFSET))(this);
	}

	::UnityEngine::Object* Method_1_ADF94FD4FE887AD0(::RPGTools::Timeline::BindInfo a1, ::UnityEngine::GameObject* a2)
	{
		return ((::UnityEngine::Object*(*)(::PVOID, ::RPGTools::Timeline::BindInfo, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_1F862C3F636E9DCC_METHOD_1_ADF94FD4FE887AD0_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Object* Method_1_4599C0CF562CCA4F(::UnityEngine::Transform* a1, ::System::String* a2)
	{
		return ((::UnityEngine::Object*(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1F862C3F636E9DCC_METHOD_1_4599C0CF562CCA4F_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Object* Method_1_B894D9376F1B2CCE(::UnityEngine::Transform* a1, ::System::String* a2)
	{
		return ((::UnityEngine::Object*(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1F862C3F636E9DCC_METHOD_1_B894D9376F1B2CCE_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Object* Method_1_6DF73CE773F2F30D(::RPGTools::Timeline::ArchiveAsset* a1)
	{
		return ((::UnityEngine::Object*(*)(::PVOID, ::RPGTools::Timeline::ArchiveAsset*))((::PBYTE)hIl2Cpp + CLASS_1_1F862C3F636E9DCC_METHOD_1_6DF73CE773F2F30D_OFFSET))(this, a1);
	}

	::System::Void Method_1_598059ED8CB3AE09(::RPGTools::Timeline::BindInfo a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::BindInfo, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_1F862C3F636E9DCC_METHOD_1_598059ED8CB3AE09_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_80C4C7392FFB7743(::RPGTools::Timeline::ArchiveAsset* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::ArchiveAsset*))((::PBYTE)hIl2Cpp + CLASS_1_1F862C3F636E9DCC_METHOD_1_80C4C7392FFB7743_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F862C3F636E9DCC_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
