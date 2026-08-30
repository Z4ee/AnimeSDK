#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define CLASS_1_1517BED0F78AA37A_GET_MATERIALS_OFFSET UNITYSDK_OFFSET(0x179F1310)
#define CLASS_1_1517BED0F78AA37A_METHOD_1_03FA5E4304FE71D4_1_OFFSET UNITYSDK_OFFSET(0x179F0710)
#define CLASS_1_1517BED0F78AA37A_METHOD_1_03FA5E4304FE71D4_OFFSET UNITYSDK_OFFSET(0x179F0620)
#define CLASS_1_1517BED0F78AA37A_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x179F1680)
#define CLASS_1_1517BED0F78AA37A_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x179F0500)
#define CLASS_1_1517BED0F78AA37A_METHOD_1_3DDAEA3DE5989862_OFFSET UNITYSDK_OFFSET(0x179F0B90)
#define CLASS_1_1517BED0F78AA37A_METHOD_1_5BF231913C0566B0_OFFSET UNITYSDK_OFFSET(0x179F1110)
#define CLASS_1_1517BED0F78AA37A_METHOD_1_80C22100EDC18845_OFFSET UNITYSDK_OFFSET(0x179F0810)
#define CLASS_1_1517BED0F78AA37A_METHOD_1_84EAB34EABC7F508_1_OFFSET UNITYSDK_OFFSET(0x179F0ED0)
#define CLASS_1_1517BED0F78AA37A_METHOD_1_84EAB34EABC7F508_2_OFFSET UNITYSDK_OFFSET(0x179F16F0)
#define CLASS_1_1517BED0F78AA37A_METHOD_1_84EAB34EABC7F508_OFFSET UNITYSDK_OFFSET(0x179F0C90)
#define CLASS_1_1517BED0F78AA37A_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x179F0560)
#define CLASS_1_1517BED0F78AA37A_METHOD_1_C4CECF3CAEE6CDC9_OFFSET UNITYSDK_OFFSET(0x179F1560)
#define CLASS_1_1517BED0F78AA37A_METHOD_1_D4E4C187F2359C4A_OFFSET UNITYSDK_OFFSET(0x179F1210)
#define CLASS_1_1517BED0F78AA37A_METHOD_1_D65D6257FB73E1EC_OFFSET UNITYSDK_OFFSET(0x179F05B0)
#define CLASS_1_1517BED0F78AA37A_SET_MATERIALS_OFFSET UNITYSDK_OFFSET(0x179F1320)
#define CLASS_1_1517BED0F78AA37A__CTOR_OFFSET UNITYSDK_OFFSET(0x179F1330)

inline static constexpr unsigned int Class_1_1517BED0F78AA37A_TypeDefinitionIndex = 48230;

class Class_1_1517BED0F78AA37A : public ::System::Object
{
public:
	static ::UnityEngine::Material** StaticGet_ONLCKOKNOBD()
	{
		return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1517BED0F78AA37A_TypeDefinitionIndex)->GetStaticField(0x2B40);
	}
	::Il2CppArray<::UnityEngine::Vector4>* NNENIMEGHMH; // 0x10
	::Il2CppArray<::UnityEngine::Vector3>* BGCIECHFCAN; // 0x18
	::Il2CppArray<::UnityEngine::Color32>* ACPCFKLMHGL; // 0x20
	::UnityEngine::Mesh* BBBBPICMJMN; // 0x28
	::Il2CppArray<::System::Int32>* KMEFELKKHLH; // 0x30
	::Il2CppArray<::UnityEngine::Vector2>* FCPBNGFPGAN; // 0x38
	::Il2CppArray<::UnityEngine::Material*>* _Materials_k__BackingField; // 0x40
	::Il2CppArray<::UnityEngine::Vector3>* GCPIKOFOCDD; // 0x48
	::Il2CppArray<::UnityEngine::Vector3>* LJLEHEGLILM; // 0x50

	::System::Void _ctor(::UnityEngine::Mesh* a1, ::Il2CppArray<::UnityEngine::Material*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + CLASS_1_1517BED0F78AA37A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1517BED0F78AA37A_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1517BED0F78AA37A_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* Method_1_D65D6257FB73E1EC()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1517BED0F78AA37A_METHOD_1_D65D6257FB73E1EC_OFFSET))(this);
	}

	::Il2CppArray<::UnityEngine::Vector3>* Method_1_03FA5E4304FE71D4()
	{
		return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1517BED0F78AA37A_METHOD_1_03FA5E4304FE71D4_OFFSET))(this);
	}

	::Il2CppArray<::UnityEngine::Vector3>* Method_1_03FA5E4304FE71D4_1()
	{
		return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1517BED0F78AA37A_METHOD_1_03FA5E4304FE71D4_1_OFFSET))(this);
	}

	::Il2CppArray<::UnityEngine::Vector3>* Method_1_80C22100EDC18845()
	{
		return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1517BED0F78AA37A_METHOD_1_80C22100EDC18845_OFFSET))(this);
	}

	::Il2CppArray<::UnityEngine::Vector4>* Method_1_3DDAEA3DE5989862()
	{
		return ((::Il2CppArray<::UnityEngine::Vector4>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1517BED0F78AA37A_METHOD_1_3DDAEA3DE5989862_OFFSET))(this);
	}

	::Il2CppArray<::UnityEngine::Color32>* Method_1_5BF231913C0566B0()
	{
		return ((::Il2CppArray<::UnityEngine::Color32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1517BED0F78AA37A_METHOD_1_5BF231913C0566B0_OFFSET))(this);
	}

	::Il2CppArray<::UnityEngine::Vector2>* Method_1_D4E4C187F2359C4A()
	{
		return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1517BED0F78AA37A_METHOD_1_D4E4C187F2359C4A_OFFSET))(this);
	}

	::Il2CppArray<::UnityEngine::Material*>* get_Materials()
	{
		return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1517BED0F78AA37A_GET_MATERIALS_OFFSET))(this);
	}

	::System::Void set_Materials(::Il2CppArray<::UnityEngine::Material*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + CLASS_1_1517BED0F78AA37A_SET_MATERIALS_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_84EAB34EABC7F508()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1517BED0F78AA37A_METHOD_1_84EAB34EABC7F508_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1517BED0F78AA37A_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Boolean Method_1_84EAB34EABC7F508_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1517BED0F78AA37A_METHOD_1_84EAB34EABC7F508_1_OFFSET))(this);
	}

	::System::Boolean Method_1_84EAB34EABC7F508_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1517BED0F78AA37A_METHOD_1_84EAB34EABC7F508_2_OFFSET))(this);
	}

	static ::UnityEngine::Material* Method_1_C4CECF3CAEE6CDC9()
	{
		return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + CLASS_1_1517BED0F78AA37A_METHOD_1_C4CECF3CAEE6CDC9_OFFSET))();
	}
};
