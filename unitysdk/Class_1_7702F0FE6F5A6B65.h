#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CrowdAnimator/CrowdAssembly.h"
#include "unitysdk/RPG/Client/CrowdAnimator/CrowdLod.h"
#include "unitysdk/Struct_2_E610E027254D7CE4.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_E0231B607CD65186_7;
namespace RPG::Client::CrowdAnimator { class CrowdInstance; }
namespace RPG::Client::CrowdAnimator { class CrowdPrototype; }
namespace RPG::Client::CrowdAnimator { class CrowdVariant; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define CLASS_1_7702F0FE6F5A6B65_GET_CULLINGLODDATA_OFFSET UNITYSDK_OFFSET(0x9612990)
#define CLASS_1_7702F0FE6F5A6B65_GET_INSTANCEREFLIST_OFFSET UNITYSDK_OFFSET(0x9612A50)
#define CLASS_1_7702F0FE6F5A6B65_METHOD_1_154485A91B7076E2_OFFSET UNITYSDK_OFFSET(0x9613C40)
#define CLASS_1_7702F0FE6F5A6B65_METHOD_1_3D7151265E187431_OFFSET UNITYSDK_OFFSET(0x9613900)
#define CLASS_1_7702F0FE6F5A6B65_METHOD_1_AA7317C4F13BBE51_OFFSET UNITYSDK_OFFSET(0x9613780)
#define CLASS_1_7702F0FE6F5A6B65_METHOD_1_B2C0ADBFEA309440_OFFSET UNITYSDK_OFFSET(0x9612DB0)
#define CLASS_1_7702F0FE6F5A6B65_METHOD_1_CAF0136A51ABF051_OFFSET UNITYSDK_OFFSET(0x9613D10)
#define CLASS_1_7702F0FE6F5A6B65_METHOD_1_CFA8599694DE120C_OFFSET UNITYSDK_OFFSET(0x9612AC0)
#define CLASS_1_7702F0FE6F5A6B65_METHOD_1_EE04D9F7F45CB1AF_OFFSET UNITYSDK_OFFSET(0x9613840)
#define CLASS_1_7702F0FE6F5A6B65_METHOD_1_F04C04E6DB6D6224_OFFSET UNITYSDK_OFFSET(0x96131F0)
#define CLASS_1_7702F0FE6F5A6B65_METHOD_1_F1C870D01294DAF7_OFFSET UNITYSDK_OFFSET(0x9613990)
#define CLASS_1_7702F0FE6F5A6B65_SET_CULLINGLODDATA_OFFSET UNITYSDK_OFFSET(0x96129F0)
#define CLASS_1_7702F0FE6F5A6B65_SET_INSTANCEREFLIST_OFFSET UNITYSDK_OFFSET(0x9612A60)
#define CLASS_1_7702F0FE6F5A6B65__CTOR_OFFSET UNITYSDK_OFFSET(0x9612A70)

inline static constexpr unsigned int Class_1_7702F0FE6F5A6B65_TypeDefinitionIndex = 67857;

class Class_1_7702F0FE6F5A6B65 : public ::System::Object
{
public:
	::RPG::Client::CrowdAnimator::CrowdVariant* Field_1_9; // 0x10
	::RPG::Client::CrowdAnimator::CrowdPrototype* Field_1_8; // 0x18
	::Il2CppArray<::Class_1_E0231B607CD65186_7*>* Field_1_3; // 0x20
	::System::Collections::Generic::List_1<::RPG::Client::CrowdAnimator::CrowdInstance*>* _InstanceRefList_k__BackingField; // 0x28
	::UnityEngine::Vector4 Field_1_6; // 0x30
	::UnityEngine::Vector4 Field_1_7; // 0x40
	::UnityEngine::Bounds Field_1_4; // 0x50
	::Struct_2_E610E027254D7CE4 _CullingLODData_k__BackingField; // 0x68
	::System::Int32 Field_1_1; // 0xDC
	::UnityEngine::Vector4 Field_1_5; // 0xE0

	::System::Void _ctor(::RPG::Client::CrowdAnimator::CrowdPrototype* a1, ::RPG::Client::CrowdAnimator::CrowdVariant* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CrowdAnimator::CrowdPrototype*, ::RPG::Client::CrowdAnimator::CrowdVariant*))((::PBYTE)hIl2Cpp + CLASS_1_7702F0FE6F5A6B65__CTOR_OFFSET))(this, a1, a2);
	}

	::Struct_2_E610E027254D7CE4 get_CullingLODData()
	{
		return ((::Struct_2_E610E027254D7CE4(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7702F0FE6F5A6B65_GET_CULLINGLODDATA_OFFSET))(this);
	}

	::System::Void set_CullingLODData(::Struct_2_E610E027254D7CE4 value)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_E610E027254D7CE4))((::PBYTE)hIl2Cpp + CLASS_1_7702F0FE6F5A6B65_SET_CULLINGLODDATA_OFFSET))(this, value);
	}

	::System::Collections::Generic::List_1<::RPG::Client::CrowdAnimator::CrowdInstance*>* get_InstanceRefList()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::CrowdAnimator::CrowdInstance*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7702F0FE6F5A6B65_GET_INSTANCEREFLIST_OFFSET))(this);
	}

	::System::Void set_InstanceRefList(::System::Collections::Generic::List_1<::RPG::Client::CrowdAnimator::CrowdInstance*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::CrowdAnimator::CrowdInstance*>*))((::PBYTE)hIl2Cpp + CLASS_1_7702F0FE6F5A6B65_SET_INSTANCEREFLIST_OFFSET))(this, value);
	}

	::System::Boolean Method_1_AA7317C4F13BBE51(::RPG::Client::CrowdAnimator::CrowdPrototype* a1, ::RPG::Client::CrowdAnimator::CrowdVariant* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::CrowdAnimator::CrowdPrototype*, ::RPG::Client::CrowdAnimator::CrowdVariant*))((::PBYTE)hIl2Cpp + CLASS_1_7702F0FE6F5A6B65_METHOD_1_AA7317C4F13BBE51_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_EE04D9F7F45CB1AF(::RPG::Client::CrowdAnimator::CrowdInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CrowdAnimator::CrowdInstance*))((::PBYTE)hIl2Cpp + CLASS_1_7702F0FE6F5A6B65_METHOD_1_EE04D9F7F45CB1AF_OFFSET))(this, a1);
	}

	::System::Void Method_1_3D7151265E187431(::RPG::Client::CrowdAnimator::CrowdInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CrowdAnimator::CrowdInstance*))((::PBYTE)hIl2Cpp + CLASS_1_7702F0FE6F5A6B65_METHOD_1_3D7151265E187431_OFFSET))(this, a1);
	}

	::System::Void Method_1_F1C870D01294DAF7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7702F0FE6F5A6B65_METHOD_1_F1C870D01294DAF7_OFFSET))(this);
	}

	::System::Void Method_1_F04C04E6DB6D6224()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7702F0FE6F5A6B65_METHOD_1_F04C04E6DB6D6224_OFFSET))(this);
	}

	::System::Void Method_1_B2C0ADBFEA309440()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7702F0FE6F5A6B65_METHOD_1_B2C0ADBFEA309440_OFFSET))(this);
	}

	::System::Void Method_1_CFA8599694DE120C(::Il2CppArray<::RPG::Client::CrowdAnimator::CrowdLod>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::CrowdAnimator::CrowdLod>*))((::PBYTE)hIl2Cpp + CLASS_1_7702F0FE6F5A6B65_METHOD_1_CFA8599694DE120C_OFFSET))(this, a1);
	}

	::System::Void Method_1_154485A91B7076E2(::System::Int32 a1, ::Il2CppArray<::RPG::Client::CrowdAnimator::CrowdAssembly>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::RPG::Client::CrowdAnimator::CrowdAssembly>*))((::PBYTE)hIl2Cpp + CLASS_1_7702F0FE6F5A6B65_METHOD_1_154485A91B7076E2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CAF0136A51ABF051(::System::Int32 a1, ::UnityEngine::Mesh* a2, ::System::Int32 a3, ::System::String* a4, ::UnityEngine::Material* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Mesh*, ::System::Int32, ::System::String*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CLASS_1_7702F0FE6F5A6B65_METHOD_1_CAF0136A51ABF051_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};
