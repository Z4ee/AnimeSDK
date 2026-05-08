#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A1E89FB9F8D4C62E.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_3E2902AE141B8B89;
namespace MoleMole { class MonoPhotoWallEdge; }
namespace MoleMole::Config { class ConfigPhotoWall; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Rendering::Universal::Internal { class OutlineObjectRenderer; }

#define CLASS_1_3031E0A4B54925F5_METHOD_1_12FB0597AE1B0499_OFFSET UNITYSDK_OFFSET(0x181965F0)
#define CLASS_1_3031E0A4B54925F5_METHOD_1_413F493333BF3391_OFFSET UNITYSDK_OFFSET(0x18196280)
#define CLASS_1_3031E0A4B54925F5_METHOD_1_50053D22E27ADF0A_OFFSET UNITYSDK_OFFSET(0x18194B60)
#define CLASS_1_3031E0A4B54925F5_METHOD_1_5B0743536553688C_OFFSET UNITYSDK_OFFSET(0x18197470)
#define CLASS_1_3031E0A4B54925F5_METHOD_1_7180B5C0E49CA230_OFFSET UNITYSDK_OFFSET(0x18197480)
#define CLASS_1_3031E0A4B54925F5_METHOD_1_80BA09849CC429FF_OFFSET UNITYSDK_OFFSET(0x181967E0)
#define CLASS_1_3031E0A4B54925F5_METHOD_1_9CA5A80F6B5B9E01_OFFSET UNITYSDK_OFFSET(0x18194B50)
#define CLASS_1_3031E0A4B54925F5_METHOD_1_A588A8C7AF75E1E9_OFFSET UNITYSDK_OFFSET(0x18195B20)
#define CLASS_1_3031E0A4B54925F5_METHOD_1_A8EBB58952AD6E9F_OFFSET UNITYSDK_OFFSET(0x18195610)
#define CLASS_1_3031E0A4B54925F5_METHOD_1_AC6A5C5C2E0664AA_OFFSET UNITYSDK_OFFSET(0x18196EC0)
#define CLASS_1_3031E0A4B54925F5_METHOD_1_AC762F67FADB2CA3_OFFSET UNITYSDK_OFFSET(0x18196290)
#define CLASS_1_3031E0A4B54925F5_METHOD_1_C1C9EE385E1C1A7B_OFFSET UNITYSDK_OFFSET(0x18197110)
#define CLASS_1_3031E0A4B54925F5_METHOD_1_C2A469681D7A3EF2_OFFSET UNITYSDK_OFFSET(0x181957F0)
#define CLASS_1_3031E0A4B54925F5_METHOD_1_C32CC33BF0371575_OFFSET UNITYSDK_OFFSET(0x18196200)
#define CLASS_1_3031E0A4B54925F5_METHOD_1_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x181965D0)
#define CLASS_1_3031E0A4B54925F5_METHOD_1_DFE8217DFAECE9D2_OFFSET UNITYSDK_OFFSET(0x18196C30)
#define CLASS_1_3031E0A4B54925F5_METHOD_1_E4B4A3F40157A79A_OFFSET UNITYSDK_OFFSET(0x181962A0)
#define CLASS_1_3031E0A4B54925F5_METHOD_1_EEF137BB8EB16EEC_OFFSET UNITYSDK_OFFSET(0x181963D0)
#define CLASS_1_3031E0A4B54925F5_METHOD_1_FFD65E4FEAD3C019_OFFSET UNITYSDK_OFFSET(0x18194FC0)
#define CLASS_1_3031E0A4B54925F5__CTOR_OFFSET UNITYSDK_OFFSET(0x18194B40)

inline static constexpr unsigned int Class_1_3031E0A4B54925F5_TypeDefinitionIndex = 39473;

class Class_1_3031E0A4B54925F5 : public ::System::Object
{
public:
	// static const ::System::Boolean Field_1_0; // 0x0
	::System::Action_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>* Field_1_4; // 0x10
	::Foundation::AssetPath Field_1_3; // 0x18
	::UnityEngine::GameObject* Field_1_6; // 0x28
	::Foundation::AssetPath Field_1_2; // 0x30
	::UnityEngine::Rendering::Universal::Internal::OutlineObjectRenderer* Field_1_7; // 0x40
	::MoleMole::MonoPhotoWallEdge* Field_1_8; // 0x48
	::Foundation::AssetPath Field_1_1; // 0x50
	::UnityEngine::Vector3 Field_1_5; // 0x60
	::UnityEngine::Quaternion Field_1_9; // 0x6C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3031E0A4B54925F5__CTOR_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_1_9CA5A80F6B5B9E01()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3031E0A4B54925F5_METHOD_1_9CA5A80F6B5B9E01_OFFSET))(this);
	}

	::System::Void Method_1_50053D22E27ADF0A(::Foundation::AssetPath a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::System::Action_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Action_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + CLASS_1_3031E0A4B54925F5_METHOD_1_50053D22E27ADF0A_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_C2A469681D7A3EF2(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Quaternion& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CLASS_1_3031E0A4B54925F5_METHOD_1_C2A469681D7A3EF2_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_A588A8C7AF75E1E9(::Enum_3_A1E89FB9F8D4C62E a1, ::MoleMole::Config::ConfigPhotoWall* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_A1E89FB9F8D4C62E, ::MoleMole::Config::ConfigPhotoWall*))((::PBYTE)hIl2Cpp + CLASS_1_3031E0A4B54925F5_METHOD_1_A588A8C7AF75E1E9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C32CC33BF0371575(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_3031E0A4B54925F5_METHOD_1_C32CC33BF0371575_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Quaternion Method_1_413F493333BF3391()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3031E0A4B54925F5_METHOD_1_413F493333BF3391_OFFSET))(this);
	}

	::System::Void Method_1_AC762F67FADB2CA3(::Foundation::AssetPath a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + CLASS_1_3031E0A4B54925F5_METHOD_1_AC762F67FADB2CA3_OFFSET))(this, a1);
	}

	::System::Void Method_1_E4B4A3F40157A79A(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_3031E0A4B54925F5_METHOD_1_E4B4A3F40157A79A_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_1_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3031E0A4B54925F5_METHOD_1_D37FAD0A6AA04B25_OFFSET))(this);
	}

	::System::Boolean Method_1_12FB0597AE1B0499(::UnityEngine::GameObject* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_3031E0A4B54925F5_METHOD_1_12FB0597AE1B0499_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_80BA09849CC429FF(::UnityEngine::Plane& a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Plane&, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3031E0A4B54925F5_METHOD_1_80BA09849CC429FF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DFE8217DFAECE9D2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3031E0A4B54925F5_METHOD_1_DFE8217DFAECE9D2_OFFSET))(this, a1);
	}

	::System::Void Method_1_FFD65E4FEAD3C019()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3031E0A4B54925F5_METHOD_1_FFD65E4FEAD3C019_OFFSET))(this);
	}

	::Class_1_3E2902AE141B8B89* Method_1_AC6A5C5C2E0664AA(::Class_1_3031E0A4B54925F5* a1)
	{
		return ((::Class_1_3E2902AE141B8B89*(*)(::PVOID, ::Class_1_3031E0A4B54925F5*))((::PBYTE)hIl2Cpp + CLASS_1_3031E0A4B54925F5_METHOD_1_AC6A5C5C2E0664AA_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_C1C9EE385E1C1A7B(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Quaternion& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CLASS_1_3031E0A4B54925F5_METHOD_1_C1C9EE385E1C1A7B_OFFSET))(this, a1, a2, a3, a4);
	}

	::Foundation::AssetPath Method_1_5B0743536553688C()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3031E0A4B54925F5_METHOD_1_5B0743536553688C_OFFSET))(this);
	}

	::System::Void Method_1_A8EBB58952AD6E9F(::Foundation::AssetPath a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_3031E0A4B54925F5_METHOD_1_A8EBB58952AD6E9F_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_7180B5C0E49CA230(::UnityEngine::Ray a1, ::Class_1_3031E0A4B54925F5* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Ray, ::Class_1_3031E0A4B54925F5*))((::PBYTE)hIl2Cpp + CLASS_1_3031E0A4B54925F5_METHOD_1_7180B5C0E49CA230_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_EEF137BB8EB16EEC(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_3031E0A4B54925F5_METHOD_1_EEF137BB8EB16EEC_OFFSET))(this, a1, a2);
	}
};
