#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_616F89B5F43D1E61;
class Class_1_DE4C6B309308A230;
namespace RPG::Client { class RuntimeRegionVolume; }
namespace RPG::GameCore { class StageRegionConnection; }
namespace RPG::GameCore { class StageVolumeConfigV2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_857661152BAA4A5A_GET_TARGETREGION_OFFSET UNITYSDK_OFFSET(0x112ABE70)
#define CLASS_1_857661152BAA4A5A_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x112ABE90)
#define CLASS_1_857661152BAA4A5A_METHOD_1_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0x112AB2C0)
#define CLASS_1_857661152BAA4A5A_METHOD_1_4C27DE82B2DFE27A_OFFSET UNITYSDK_OFFSET(0x112ABD50)
#define CLASS_1_857661152BAA4A5A_METHOD_1_6288DC7D79FB18A9_OFFSET UNITYSDK_OFFSET(0x112ABEF0)
#define CLASS_1_857661152BAA4A5A_METHOD_1_66B9014342B21EEA_OFFSET UNITYSDK_OFFSET(0x112AB860)
#define CLASS_1_857661152BAA4A5A_METHOD_1_9CA5A80F6B5B9E01_OFFSET UNITYSDK_OFFSET(0x112ABE40)
#define CLASS_1_857661152BAA4A5A_METHOD_1_A8CB5027BF8B913B_1_OFFSET UNITYSDK_OFFSET(0x112ABAC0)
#define CLASS_1_857661152BAA4A5A_METHOD_1_A8CB5027BF8B913B_OFFSET UNITYSDK_OFFSET(0x112AB5D0)
#define CLASS_1_857661152BAA4A5A_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x112ABDF0)
#define CLASS_1_857661152BAA4A5A_METHOD_1_BFA17A8366EA8C77_OFFSET UNITYSDK_OFFSET(0x112AB250)
#define CLASS_1_857661152BAA4A5A_METHOD_1_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0x112ABA60)
#define CLASS_1_857661152BAA4A5A_METHOD_1_ED8899924488ADDA_OFFSET UNITYSDK_OFFSET(0x112AB450)
#define CLASS_1_857661152BAA4A5A_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x112ABE50)
#define CLASS_1_857661152BAA4A5A_METHOD_1_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0x112ABF00)
#define CLASS_1_857661152BAA4A5A_SET_TARGETREGION_OFFSET UNITYSDK_OFFSET(0x112ABE80)
#define CLASS_1_857661152BAA4A5A__CTOR_OFFSET UNITYSDK_OFFSET(0x112AAD20)

inline static constexpr unsigned int Class_1_857661152BAA4A5A_TypeDefinitionIndex = 58134;

class Class_1_857661152BAA4A5A : public ::System::Object
{
public:
	::Class_1_616F89B5F43D1E61* Field_1_0; // 0x10
	::UnityEngine::GameObject* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::RPG::Client::RuntimeRegionVolume*>* Field_1_2; // 0x20
	::System::Collections::Generic::List_1<::RPG::Client::RuntimeRegionVolume*>* Field_1_3; // 0x28
	::RPG::GameCore::StageRegionConnection* Field_1_4; // 0x30
	::Class_1_616F89B5F43D1E61* _TargetRegion_k__BackingField; // 0x38

	::System::Void _ctor(::Class_1_616F89B5F43D1E61* a1, ::Class_1_616F89B5F43D1E61* a2, ::RPG::GameCore::StageRegionConnection* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_616F89B5F43D1E61*, ::Class_1_616F89B5F43D1E61*, ::RPG::GameCore::StageRegionConnection*))((::PBYTE)hIl2Cpp + CLASS_1_857661152BAA4A5A__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_28EB11670A8E5A86()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_857661152BAA4A5A_METHOD_1_28EB11670A8E5A86_OFFSET))(this);
	}

	::System::Boolean Method_1_ED8899924488ADDA(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_857661152BAA4A5A_METHOD_1_ED8899924488ADDA_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A8CB5027BF8B913B(::Class_1_DE4C6B309308A230* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_DE4C6B309308A230*))((::PBYTE)hIl2Cpp + CLASS_1_857661152BAA4A5A_METHOD_1_A8CB5027BF8B913B_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_66B9014342B21EEA(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_857661152BAA4A5A_METHOD_1_66B9014342B21EEA_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A8CB5027BF8B913B_1(::Class_1_DE4C6B309308A230* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_DE4C6B309308A230*))((::PBYTE)hIl2Cpp + CLASS_1_857661152BAA4A5A_METHOD_1_A8CB5027BF8B913B_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_4C27DE82B2DFE27A(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_857661152BAA4A5A_METHOD_1_4C27DE82B2DFE27A_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_857661152BAA4A5A_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_1_9CA5A80F6B5B9E01()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_857661152BAA4A5A_METHOD_1_9CA5A80F6B5B9E01_OFFSET))(this);
	}

	::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_857661152BAA4A5A_METHOD_1_F0E307B84478A272_OFFSET))(this);
	}

	::Class_1_616F89B5F43D1E61* get_TargetRegion()
	{
		return ((::Class_1_616F89B5F43D1E61*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_857661152BAA4A5A_GET_TARGETREGION_OFFSET))(this);
	}

	::System::Void set_TargetRegion(::Class_1_616F89B5F43D1E61* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_616F89B5F43D1E61*))((::PBYTE)hIl2Cpp + CLASS_1_857661152BAA4A5A_SET_TARGETREGION_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_857661152BAA4A5A_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::RPG::GameCore::StageRegionConnection* Method_1_6288DC7D79FB18A9()
	{
		return ((::RPG::GameCore::StageRegionConnection*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_857661152BAA4A5A_METHOD_1_6288DC7D79FB18A9_OFFSET))(this);
	}

	::System::Single Method_1_FB4BE762B6186C23()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_857661152BAA4A5A_METHOD_1_FB4BE762B6186C23_OFFSET))(this);
	}

	::System::Single Method_1_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_857661152BAA4A5A_METHOD_1_D64FD9A228A1C4E0_OFFSET))(this);
	}

	::Il2CppArray<::RPG::GameCore::StageVolumeConfigV2*>* Method_1_BFA17A8366EA8C77()
	{
		return ((::Il2CppArray<::RPG::GameCore::StageVolumeConfigV2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_857661152BAA4A5A_METHOD_1_BFA17A8366EA8C77_OFFSET))(this);
	}
};
