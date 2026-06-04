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

#define CLASS_1_7A36E79DF579B3ED_GET_CULLINGLODDATA_OFFSET UNITYSDK_OFFSET(0xAB70A90)
#define CLASS_1_7A36E79DF579B3ED_GET_INSTANCEREFLIST_OFFSET UNITYSDK_OFFSET(0xAB70B60)
#define CLASS_1_7A36E79DF579B3ED_METHOD_1_0CA6C18F75683576_OFFSET UNITYSDK_OFFSET(0xAB71970)
#define CLASS_1_7A36E79DF579B3ED_METHOD_1_154485A91B7076E2_OFFSET UNITYSDK_OFFSET(0xAB71D00)
#define CLASS_1_7A36E79DF579B3ED_METHOD_1_3D7151265E187431_OFFSET UNITYSDK_OFFSET(0xAB71A90)
#define CLASS_1_7A36E79DF579B3ED_METHOD_1_93190E731E31C79A_OFFSET UNITYSDK_OFFSET(0xAB70E60)
#define CLASS_1_7A36E79DF579B3ED_METHOD_1_985766BFE89AA67A_OFFSET UNITYSDK_OFFSET(0xAB70BC0)
#define CLASS_1_7A36E79DF579B3ED_METHOD_1_AA7317C4F13BBE51_OFFSET UNITYSDK_OFFSET(0xAB718B0)
#define CLASS_1_7A36E79DF579B3ED_METHOD_1_B2C0ADBFEA309440_OFFSET UNITYSDK_OFFSET(0xAB71290)
#define CLASS_1_7A36E79DF579B3ED_METHOD_1_CB0B79AE090CD244_OFFSET UNITYSDK_OFFSET(0xAB71DC0)
#define CLASS_1_7A36E79DF579B3ED_METHOD_1_E824431C22EF9361_OFFSET UNITYSDK_OFFSET(0xAB71B20)
#define CLASS_1_7A36E79DF579B3ED_SET_CULLINGLODDATA_OFFSET UNITYSDK_OFFSET(0xAB70AF0)
#define CLASS_1_7A36E79DF579B3ED_SET_INSTANCEREFLIST_OFFSET UNITYSDK_OFFSET(0xAB70B70)
#define CLASS_1_7A36E79DF579B3ED__CTOR_OFFSET UNITYSDK_OFFSET(0xAB70B80)

inline static constexpr unsigned int Class_1_7A36E79DF579B3ED_TypeDefinitionIndex = 68815;

class Class_1_7A36E79DF579B3ED : public ::System::Object
{
public:
	::Il2CppArray<::Class_1_E0231B607CD65186_7*>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::RPG::Client::CrowdAnimator::CrowdInstance*>* _InstanceRefList_k__BackingField; // 0x18
	::RPG::Client::CrowdAnimator::CrowdVariant* Field_1_2; // 0x20
	::RPG::Client::CrowdAnimator::CrowdPrototype* Field_1_3; // 0x28
	::UnityEngine::Vector4 Field_1_4; // 0x30
	::UnityEngine::Bounds Field_1_5; // 0x40
	::UnityEngine::Vector4 Field_1_6; // 0x58
	::System::Int32 Field_1_7; // 0x68
	::UnityEngine::Vector4 Field_1_8; // 0x6C
	::Struct_2_E610E027254D7CE4 _CullingLODData_k__BackingField; // 0x7C

	::System::Void _ctor(::RPG::Client::CrowdAnimator::CrowdPrototype* a1, ::RPG::Client::CrowdAnimator::CrowdVariant* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CrowdAnimator::CrowdPrototype*, ::RPG::Client::CrowdAnimator::CrowdVariant*))((::PBYTE)hIl2Cpp + CLASS_1_7A36E79DF579B3ED__CTOR_OFFSET))(this, a1, a2);
	}

	::Struct_2_E610E027254D7CE4 get_CullingLODData()
	{
		return ((::Struct_2_E610E027254D7CE4(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7A36E79DF579B3ED_GET_CULLINGLODDATA_OFFSET))(this);
	}

	::System::Void set_CullingLODData(::Struct_2_E610E027254D7CE4 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_E610E027254D7CE4))((::PBYTE)hIl2Cpp + CLASS_1_7A36E79DF579B3ED_SET_CULLINGLODDATA_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::Client::CrowdAnimator::CrowdInstance*>* get_InstanceRefList()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::CrowdAnimator::CrowdInstance*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7A36E79DF579B3ED_GET_INSTANCEREFLIST_OFFSET))(this);
	}

	::System::Void set_InstanceRefList(::System::Collections::Generic::List_1<::RPG::Client::CrowdAnimator::CrowdInstance*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::CrowdAnimator::CrowdInstance*>*))((::PBYTE)hIl2Cpp + CLASS_1_7A36E79DF579B3ED_SET_INSTANCEREFLIST_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_AA7317C4F13BBE51(::RPG::Client::CrowdAnimator::CrowdPrototype* a1, ::RPG::Client::CrowdAnimator::CrowdVariant* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::CrowdAnimator::CrowdPrototype*, ::RPG::Client::CrowdAnimator::CrowdVariant*))((::PBYTE)hIl2Cpp + CLASS_1_7A36E79DF579B3ED_METHOD_1_AA7317C4F13BBE51_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0CA6C18F75683576(::RPG::Client::CrowdAnimator::CrowdInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CrowdAnimator::CrowdInstance*))((::PBYTE)hIl2Cpp + CLASS_1_7A36E79DF579B3ED_METHOD_1_0CA6C18F75683576_OFFSET))(this, a1);
	}

	::System::Void Method_1_3D7151265E187431(::RPG::Client::CrowdAnimator::CrowdInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CrowdAnimator::CrowdInstance*))((::PBYTE)hIl2Cpp + CLASS_1_7A36E79DF579B3ED_METHOD_1_3D7151265E187431_OFFSET))(this, a1);
	}

	::System::Void Method_1_E824431C22EF9361()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7A36E79DF579B3ED_METHOD_1_E824431C22EF9361_OFFSET))(this);
	}

	::System::Void Method_1_B2C0ADBFEA309440()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7A36E79DF579B3ED_METHOD_1_B2C0ADBFEA309440_OFFSET))(this);
	}

	::System::Void Method_1_93190E731E31C79A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7A36E79DF579B3ED_METHOD_1_93190E731E31C79A_OFFSET))(this);
	}

	::System::Void Method_1_985766BFE89AA67A(::Il2CppArray<::RPG::Client::CrowdAnimator::CrowdLod>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::CrowdAnimator::CrowdLod>*))((::PBYTE)hIl2Cpp + CLASS_1_7A36E79DF579B3ED_METHOD_1_985766BFE89AA67A_OFFSET))(this, a1);
	}

	::System::Void Method_1_154485A91B7076E2(::System::Int32 a1, ::Il2CppArray<::RPG::Client::CrowdAnimator::CrowdAssembly>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::RPG::Client::CrowdAnimator::CrowdAssembly>*))((::PBYTE)hIl2Cpp + CLASS_1_7A36E79DF579B3ED_METHOD_1_154485A91B7076E2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CB0B79AE090CD244(::System::Int32 a1, ::UnityEngine::Mesh* a2, ::System::Int32 a3, ::System::String* a4, ::UnityEngine::Material* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Mesh*, ::System::Int32, ::System::String*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CLASS_1_7A36E79DF579B3ED_METHOD_1_CB0B79AE090CD244_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};
