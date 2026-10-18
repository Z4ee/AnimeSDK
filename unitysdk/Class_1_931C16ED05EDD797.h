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

#define CLASS_1_931C16ED05EDD797_METHOD_1_598059ED8CB3AE09_OFFSET UNITYSDK_OFFSET(0x1551CE50)
#define CLASS_1_931C16ED05EDD797_METHOD_1_6DF73CE773F2F30D_OFFSET UNITYSDK_OFFSET(0x1551CE00)
#define CLASS_1_931C16ED05EDD797_METHOD_1_726E0F1D38F6007C_OFFSET UNITYSDK_OFFSET(0x1551C6C0)
#define CLASS_1_931C16ED05EDD797_METHOD_1_80C4C7392FFB7743_OFFSET UNITYSDK_OFFSET(0x1551CEC0)
#define CLASS_1_931C16ED05EDD797_METHOD_1_8BE7873097C865FF_OFFSET UNITYSDK_OFFSET(0x1551C540)
#define CLASS_1_931C16ED05EDD797_METHOD_1_A12DA537E52C5F37_OFFSET UNITYSDK_OFFSET(0x1551C780)
#define CLASS_1_931C16ED05EDD797_METHOD_1_B894D9376F1B2CCE_OFFSET UNITYSDK_OFFSET(0x1551CD90)
#define CLASS_1_931C16ED05EDD797_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1551CF10)
#define CLASS_1_931C16ED05EDD797_METHOD_1_FAB41DA0E44E73C6_OFFSET UNITYSDK_OFFSET(0x1551CBD0)
#define CLASS_1_931C16ED05EDD797_METHOD_1_FD3B916300F77FDA_OFFSET UNITYSDK_OFFSET(0x1551C970)
#define CLASS_1_931C16ED05EDD797__CTOR_OFFSET UNITYSDK_OFFSET(0x1551CF50)

inline static constexpr unsigned int Class_1_931C16ED05EDD797_TypeDefinitionIndex = 48512;

class Class_1_931C16ED05EDD797 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPGTools::Timeline::ArchiveAsset*>* IDLPKIODJEJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_931C16ED05EDD797__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8BE7873097C865FF(::RPGTools::Timeline::ArchiveAsset* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::ArchiveAsset*))((::PBYTE)hIl2Cpp + CLASS_1_931C16ED05EDD797_METHOD_1_8BE7873097C865FF_OFFSET))(this, a1);
	}

	::UnityEngine::Object* Method_1_726E0F1D38F6007C(::RPGTools::Timeline::BindInfo a1)
	{
		return ((::UnityEngine::Object*(*)(::PVOID, ::RPGTools::Timeline::BindInfo))((::PBYTE)hIl2Cpp + CLASS_1_931C16ED05EDD797_METHOD_1_726E0F1D38F6007C_OFFSET))(this, a1);
	}

	::System::Void Method_1_FD3B916300F77FDA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_931C16ED05EDD797_METHOD_1_FD3B916300F77FDA_OFFSET))(this);
	}

	::UnityEngine::Object* Method_1_A12DA537E52C5F37(::RPGTools::Timeline::BindInfo a1, ::UnityEngine::GameObject* a2)
	{
		return ((::UnityEngine::Object*(*)(::PVOID, ::RPGTools::Timeline::BindInfo, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_931C16ED05EDD797_METHOD_1_A12DA537E52C5F37_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Object* Method_1_FAB41DA0E44E73C6(::UnityEngine::Transform* a1, ::System::String* a2)
	{
		return ((::UnityEngine::Object*(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_931C16ED05EDD797_METHOD_1_FAB41DA0E44E73C6_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Object* Method_1_B894D9376F1B2CCE(::UnityEngine::Transform* a1, ::System::String* a2)
	{
		return ((::UnityEngine::Object*(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_931C16ED05EDD797_METHOD_1_B894D9376F1B2CCE_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Object* Method_1_6DF73CE773F2F30D(::RPGTools::Timeline::ArchiveAsset* a1)
	{
		return ((::UnityEngine::Object*(*)(::PVOID, ::RPGTools::Timeline::ArchiveAsset*))((::PBYTE)hIl2Cpp + CLASS_1_931C16ED05EDD797_METHOD_1_6DF73CE773F2F30D_OFFSET))(this, a1);
	}

	::System::Void Method_1_598059ED8CB3AE09(::RPGTools::Timeline::BindInfo a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::BindInfo, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_931C16ED05EDD797_METHOD_1_598059ED8CB3AE09_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_80C4C7392FFB7743(::RPGTools::Timeline::ArchiveAsset* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::ArchiveAsset*))((::PBYTE)hIl2Cpp + CLASS_1_931C16ED05EDD797_METHOD_1_80C4C7392FFB7743_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_931C16ED05EDD797_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
