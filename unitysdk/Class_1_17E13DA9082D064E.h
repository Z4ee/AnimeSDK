#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Cubemap; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define CLASS_1_17E13DA9082D064E_METHOD_1_350B498A44244BF3_OFFSET UNITYSDK_OFFSET(0x17A420F0)
#define CLASS_1_17E13DA9082D064E_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x17A42040)
#define CLASS_1_17E13DA9082D064E_METHOD_1_9CA5A80F6B5B9E01_1_OFFSET UNITYSDK_OFFSET(0x17A42030)
#define CLASS_1_17E13DA9082D064E_METHOD_1_9CA5A80F6B5B9E01_OFFSET UNITYSDK_OFFSET(0x17A41F80)
#define CLASS_1_17E13DA9082D064E_METHOD_1_9F8F6511E8EF1235_OFFSET UNITYSDK_OFFSET(0x17A40C90)
#define CLASS_1_17E13DA9082D064E_METHOD_1_CF8C253A17E70CB5_OFFSET UNITYSDK_OFFSET(0x17A411A0)
#define CLASS_1_17E13DA9082D064E_METHOD_1_E9A149F2E5FA5322_OFFSET UNITYSDK_OFFSET(0x17A41490)
#define CLASS_1_17E13DA9082D064E_METHOD_1_EC0E3C91F79E1953_1_OFFSET UNITYSDK_OFFSET(0x17A41F90)
#define CLASS_1_17E13DA9082D064E_METHOD_1_EC0E3C91F79E1953_OFFSET UNITYSDK_OFFSET(0x17A41100)
#define CLASS_1_17E13DA9082D064E__CTOR_OFFSET UNITYSDK_OFFSET(0x17A40BD0)

inline static constexpr unsigned int Class_1_17E13DA9082D064E_TypeDefinitionIndex = 49772;

class Class_1_17E13DA9082D064E : public ::System::Object
{
public:
	::Il2CppArray<::System::String*>* Field_1_13; // 0x10
	::UnityEngine::GameObject* Field_1_4; // 0x18
	::Foundation::AssetPath Field_1_2; // 0x20
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::Il2CppArray<::UnityEngine::Material*>*>* Field_1_15; // 0x30
	::UnityEngine::GameObject* Field_1_5; // 0x38
	::Foundation::AssetPath Field_1_3; // 0x40
	::System::Collections::Generic::List_1<::UnityEngine::Material*>* Field_1_14; // 0x50
	::MoleMole::Config::EntityType Field_1_6; // 0x58
	::System::Boolean Field_1_8; // 0x5C
	::System::Boolean Field_1_7; // 0x5D
	::System::UInt32 Field_1_19; // 0x60
	::System::Int32 Field_1_0; // 0x64
	::System::Int32 Field_1_1; // 0x68
	::System::Boolean Field_1_9; // 0x6C
	::System::Boolean Field_1_11; // 0x6D
	::System::Boolean Field_1_10; // 0x6E
	::System::UInt32 Field_1_12; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17E13DA9082D064E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9F8F6511E8EF1235()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17E13DA9082D064E_METHOD_1_9F8F6511E8EF1235_OFFSET))(this);
	}

	::System::Void Method_1_EC0E3C91F79E1953(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_17E13DA9082D064E_METHOD_1_EC0E3C91F79E1953_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_CF8C253A17E70CB5(::UnityEngine::Material* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CLASS_1_17E13DA9082D064E_METHOD_1_CF8C253A17E70CB5_OFFSET))(this, a1);
	}

	::System::Void Method_1_E9A149F2E5FA5322(::UnityEngine::Color a1, ::System::Single a2, ::UnityEngine::Quaternion a3, ::UnityEngine::Color a4, ::UnityEngine::Cubemap* a5, ::System::Single a6)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color, ::System::Single, ::UnityEngine::Quaternion, ::UnityEngine::Color, ::UnityEngine::Cubemap*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_17E13DA9082D064E_METHOD_1_E9A149F2E5FA5322_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::UnityEngine::GameObject* Method_1_9CA5A80F6B5B9E01()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17E13DA9082D064E_METHOD_1_9CA5A80F6B5B9E01_OFFSET))(this);
	}

	::System::Void Method_1_EC0E3C91F79E1953_1(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_17E13DA9082D064E_METHOD_1_EC0E3C91F79E1953_1_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_1_9CA5A80F6B5B9E01_1()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17E13DA9082D064E_METHOD_1_9CA5A80F6B5B9E01_1_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17E13DA9082D064E_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_350B498A44244BF3(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_17E13DA9082D064E_METHOD_1_350B498A44244BF3_OFFSET))(this, a1);
	}
};
