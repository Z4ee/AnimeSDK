#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::Client { class InstanceArrayV2MonoPlugin; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define CLASS_1_2199FC36CD2C2562_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x95C3130)
#define CLASS_1_2199FC36CD2C2562_METHOD_1_2BD6AADC2D336214_OFFSET UNITYSDK_OFFSET(0x95C3890)
#define CLASS_1_2199FC36CD2C2562_METHOD_1_58324D2C29736748_OFFSET UNITYSDK_OFFSET(0x95C36F0)
#define CLASS_1_2199FC36CD2C2562_METHOD_1_717B99C253FA1010_OFFSET UNITYSDK_OFFSET(0x95C35F0)
#define CLASS_1_2199FC36CD2C2562_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x95C3910)
#define CLASS_1_2199FC36CD2C2562_METHOD_1_DB67EEFB041425EC_OFFSET UNITYSDK_OFFSET(0x95C3950)
#define CLASS_1_2199FC36CD2C2562_SET_OWNER_OFFSET UNITYSDK_OFFSET(0x95C3140)
#define CLASS_1_2199FC36CD2C2562__CTOR_OFFSET UNITYSDK_OFFSET(0x95C3150)

inline static constexpr unsigned int Class_1_2199FC36CD2C2562_TypeDefinitionIndex = 65112;

class Class_1_2199FC36CD2C2562 : public ::System::Object
{
public:
	::RPG::Client::InstanceArrayV2MonoPlugin* _Owner_k__BackingField; // 0x10
	::Il2CppArray<::System::Collections::Generic::Dictionary_2<::System::Int32, ::Il2CppArray<::UnityEngine::Vector4>*>*>* Field_1_3; // 0x18
	::Il2CppArray<::UnityEngine::MaterialPropertyBlock*>* Field_1_2; // 0x20
	::Il2CppArray<::Il2CppArray<::UnityEngine::Matrix4x4>*>* Field_1_0; // 0x28
	::System::Boolean Field_1_4; // 0x30
	::System::Int32 Field_1_1; // 0x34

	::System::Void _ctor(::RPG::Client::InstanceArrayV2MonoPlugin* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::InstanceArrayV2MonoPlugin*))((::PBYTE)hIl2Cpp + CLASS_1_2199FC36CD2C2562__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::InstanceArrayV2MonoPlugin* get_Owner()
	{
		return ((::RPG::Client::InstanceArrayV2MonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2199FC36CD2C2562_GET_OWNER_OFFSET))(this);
	}

	::System::Void set_Owner(::RPG::Client::InstanceArrayV2MonoPlugin* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::InstanceArrayV2MonoPlugin*))((::PBYTE)hIl2Cpp + CLASS_1_2199FC36CD2C2562_SET_OWNER_OFFSET))(this, value);
	}

	::System::Void Method_1_717B99C253FA1010(::System::Int32 a1, ::System::Int32 a2, ::Il2CppArray<::UnityEngine::Vector4>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + CLASS_1_2199FC36CD2C2562_METHOD_1_717B99C253FA1010_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_58324D2C29736748(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2199FC36CD2C2562_METHOD_1_58324D2C29736748_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_1_2BD6AADC2D336214(::System::Int32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2199FC36CD2C2562_METHOD_1_2BD6AADC2D336214_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2199FC36CD2C2562_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_DB67EEFB041425EC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2199FC36CD2C2562_METHOD_1_DB67EEFB041425EC_OFFSET))(this);
	}
};
