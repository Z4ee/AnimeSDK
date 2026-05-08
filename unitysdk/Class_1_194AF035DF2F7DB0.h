#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Class_1_194AF035DF2F7DB0_Enum_3_7027F8F289F82CE3.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

namespace MoleMole { class CameraModuleAvatarDataConfigExt; }
namespace MoleMole::Cameras { class CameraDataAccessor; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_194AF035DF2F7DB0_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE16BD70)
#define CLASS_1_194AF035DF2F7DB0_METHOD_1_04DC58A6E3312864_OFFSET UNITYSDK_OFFSET(0xE16BD20)
#define CLASS_1_194AF035DF2F7DB0_METHOD_1_352A680199D8A836_OFFSET UNITYSDK_OFFSET(0xE16CB50)
#define CLASS_1_194AF035DF2F7DB0_METHOD_1_6C3B8F24B6FDE865_OFFSET UNITYSDK_OFFSET(0xE16CC70)
#define CLASS_1_194AF035DF2F7DB0_METHOD_1_97489C736090EF10_OFFSET UNITYSDK_OFFSET(0xE16C560)
#define CLASS_1_194AF035DF2F7DB0_METHOD_1_C6DC55296E6EB1F0_OFFSET UNITYSDK_OFFSET(0xE16C650)
#define CLASS_1_194AF035DF2F7DB0_METHOD_1_D821963366A8ED66_OFFSET UNITYSDK_OFFSET(0xE16BDB0)
#define CLASS_1_194AF035DF2F7DB0_METHOD_1_DDE751EF948C8CAF_OFFSET UNITYSDK_OFFSET(0xE16C4A0)
#define CLASS_1_194AF035DF2F7DB0__CTOR_OFFSET UNITYSDK_OFFSET(0xE16BD10)

inline static constexpr unsigned int Class_1_194AF035DF2F7DB0_TypeDefinitionIndex = 41590;

class Class_1_194AF035DF2F7DB0 : public ::System::Object
{
public:
	// static const ::System::Single Field_1_1; // 0x0
	::MoleMole::Cameras::CameraDataAccessor* Field_1_0; // 0x10

	::System::Void _ctor(::MoleMole::CameraModuleAvatarDataConfigExt* a1, ::MoleMole::Cameras::CameraDataAccessor* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CameraModuleAvatarDataConfigExt*, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + CLASS_1_194AF035DF2F7DB0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_04DC58A6E3312864(::MoleMole::CameraModuleAvatarDataConfigExt* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CameraModuleAvatarDataConfigExt*))((::PBYTE)hIl2Cpp + CLASS_1_194AF035DF2F7DB0_METHOD_1_04DC58A6E3312864_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_194AF035DF2F7DB0_DISPOSE_OFFSET))(this);
	}

	static ::Class_1_194AF035DF2F7DB0_Enum_3_7027F8F289F82CE3 Method_1_D821963366A8ED66(::UnityEngine::RaycastHit& a1, ::System::Int32 a2, ::Il2CppArray<::System::Int32>* a3, ::Il2CppArray<::System::Int32>* a4, ::System::Int32 a5, ::System::Func_3<::UnityEngine::Collider*, ::Class_1_194AF035DF2F7DB0_Enum_3_7027F8F289F82CE3, ::Class_1_194AF035DF2F7DB0_Enum_3_7027F8F289F82CE3>* a6)
	{
		return ((::Class_1_194AF035DF2F7DB0_Enum_3_7027F8F289F82CE3(*)(::UnityEngine::RaycastHit&, ::System::Int32, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*, ::System::Int32, ::System::Func_3<::UnityEngine::Collider*, ::Class_1_194AF035DF2F7DB0_Enum_3_7027F8F289F82CE3, ::Class_1_194AF035DF2F7DB0_Enum_3_7027F8F289F82CE3>*))((::PBYTE)hIl2Cpp + CLASS_1_194AF035DF2F7DB0_METHOD_1_D821963366A8ED66_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	::MoleMole::CameraModuleAvatarDataConfigExt* Method_1_DDE751EF948C8CAF()
	{
		return ((::MoleMole::CameraModuleAvatarDataConfigExt*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_194AF035DF2F7DB0_METHOD_1_DDE751EF948C8CAF_OFFSET))(this);
	}

	static ::System::Boolean Method_1_97489C736090EF10(::UnityEngine::GameObject* a1, ::Il2CppArray<::System::String*>* a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::GameObject*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_194AF035DF2F7DB0_METHOD_1_97489C736090EF10_OFFSET))(a1, a2);
	}

	static ::Class_1_194AF035DF2F7DB0_Enum_3_7027F8F289F82CE3 Method_1_C6DC55296E6EB1F0(::UnityEngine::Collider* a1, ::System::String* a2, ::Il2CppArray<::System::String*>* a3, ::Il2CppArray<::System::String*>* a4, ::System::Int32 a5, ::System::Func_3<::UnityEngine::Collider*, ::Class_1_194AF035DF2F7DB0_Enum_3_7027F8F289F82CE3, ::Class_1_194AF035DF2F7DB0_Enum_3_7027F8F289F82CE3>* a6)
	{
		return ((::Class_1_194AF035DF2F7DB0_Enum_3_7027F8F289F82CE3(*)(::UnityEngine::Collider*, ::System::String*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*, ::System::Int32, ::System::Func_3<::UnityEngine::Collider*, ::Class_1_194AF035DF2F7DB0_Enum_3_7027F8F289F82CE3, ::Class_1_194AF035DF2F7DB0_Enum_3_7027F8F289F82CE3>*))((::PBYTE)hIl2Cpp + CLASS_1_194AF035DF2F7DB0_METHOD_1_C6DC55296E6EB1F0_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_1_352A680199D8A836(::UnityEngine::Collider* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::UnityEngine::Collider*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_194AF035DF2F7DB0_METHOD_1_352A680199D8A836_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_6C3B8F24B6FDE865(::System::Int32 a1, ::Il2CppArray<::System::Int32>* a2)
	{
		return ((::System::Boolean(*)(::System::Int32, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_194AF035DF2F7DB0_METHOD_1_6C3B8F24B6FDE865_OFFSET))(a1, a2);
	}
};
