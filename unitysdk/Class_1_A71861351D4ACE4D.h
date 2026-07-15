#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_C1FC5F79840837FA;
class Class_1_DE4C6B309308A230;
namespace RPG::Client { class RuntimeRegionVolume; }
namespace RPG::GameCore { class StageRegionConnection; }
namespace RPG::GameCore { class StageVolumeConfigV2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_A71861351D4ACE4D_GET_TARGETREGION_OFFSET UNITYSDK_OFFSET(0x18F8FDA0)
#define CLASS_1_A71861351D4ACE4D_METHOD_1_1011839DF6D17ECE_1_OFFSET UNITYSDK_OFFSET(0x18F8F8C0)
#define CLASS_1_A71861351D4ACE4D_METHOD_1_1011839DF6D17ECE_OFFSET UNITYSDK_OFFSET(0x18F8F310)
#define CLASS_1_A71861351D4ACE4D_METHOD_1_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0x18F8FDC0)
#define CLASS_1_A71861351D4ACE4D_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x18F8FD40)
#define CLASS_1_A71861351D4ACE4D_METHOD_1_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0x18F8F000)
#define CLASS_1_A71861351D4ACE4D_METHOD_1_4C27DE82B2DFE27A_OFFSET UNITYSDK_OFFSET(0x18F8FC10)
#define CLASS_1_A71861351D4ACE4D_METHOD_1_66B9014342B21EEA_OFFSET UNITYSDK_OFFSET(0x18F8F660)
#define CLASS_1_A71861351D4ACE4D_METHOD_1_8A747610B3EB7225_OFFSET UNITYSDK_OFFSET(0x18F8FE20)
#define CLASS_1_A71861351D4ACE4D_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x18F8FCB0)
#define CLASS_1_A71861351D4ACE4D_METHOD_1_BC46FCF99873D9DD_OFFSET UNITYSDK_OFFSET(0x18F8FD00)
#define CLASS_1_A71861351D4ACE4D_METHOD_1_BFA17A8366EA8C77_OFFSET UNITYSDK_OFFSET(0x18F8EF90)
#define CLASS_1_A71861351D4ACE4D_METHOD_1_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0x18F8F860)
#define CLASS_1_A71861351D4ACE4D_METHOD_1_ED8899924488ADDA_OFFSET UNITYSDK_OFFSET(0x18F8F190)
#define CLASS_1_A71861351D4ACE4D_METHOD_1_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x18F8FE60)
#define CLASS_1_A71861351D4ACE4D_SET_TARGETREGION_OFFSET UNITYSDK_OFFSET(0x18F8FDB0)
#define CLASS_1_A71861351D4ACE4D__CTOR_OFFSET UNITYSDK_OFFSET(0x18F8EA20)

inline static constexpr unsigned int Class_1_A71861351D4ACE4D_TypeDefinitionIndex = 59399;

class Class_1_A71861351D4ACE4D : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::RuntimeRegionVolume*>* Field_1_0; // 0x10
	::UnityEngine::GameObject* Field_1_1; // 0x18
	::RPG::GameCore::StageRegionConnection* Field_1_2; // 0x20
	::Class_1_C1FC5F79840837FA* Field_1_3; // 0x28
	::Class_1_C1FC5F79840837FA* _TargetRegion_k__BackingField; // 0x30
	::System::Collections::Generic::List_1<::RPG::Client::RuntimeRegionVolume*>* Field_1_5; // 0x38

	::System::Void _ctor(::Class_1_C1FC5F79840837FA* a1, ::Class_1_C1FC5F79840837FA* a2, ::RPG::GameCore::StageRegionConnection* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C1FC5F79840837FA*, ::Class_1_C1FC5F79840837FA*, ::RPG::GameCore::StageRegionConnection*))((::PBYTE)hIl2Cpp + CLASS_1_A71861351D4ACE4D__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_28EB11670A8E5A86()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A71861351D4ACE4D_METHOD_1_28EB11670A8E5A86_OFFSET))(this);
	}

	::System::Boolean Method_1_ED8899924488ADDA(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_A71861351D4ACE4D_METHOD_1_ED8899924488ADDA_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1011839DF6D17ECE(::Class_1_DE4C6B309308A230* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_DE4C6B309308A230*))((::PBYTE)hIl2Cpp + CLASS_1_A71861351D4ACE4D_METHOD_1_1011839DF6D17ECE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_66B9014342B21EEA(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_A71861351D4ACE4D_METHOD_1_66B9014342B21EEA_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1011839DF6D17ECE_1(::Class_1_DE4C6B309308A230* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_DE4C6B309308A230*))((::PBYTE)hIl2Cpp + CLASS_1_A71861351D4ACE4D_METHOD_1_1011839DF6D17ECE_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_4C27DE82B2DFE27A(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_A71861351D4ACE4D_METHOD_1_4C27DE82B2DFE27A_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A71861351D4ACE4D_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_1_BC46FCF99873D9DD()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A71861351D4ACE4D_METHOD_1_BC46FCF99873D9DD_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A71861351D4ACE4D_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::Class_1_C1FC5F79840837FA* get_TargetRegion()
	{
		return ((::Class_1_C1FC5F79840837FA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A71861351D4ACE4D_GET_TARGETREGION_OFFSET))(this);
	}

	::System::Void set_TargetRegion(::Class_1_C1FC5F79840837FA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C1FC5F79840837FA*))((::PBYTE)hIl2Cpp + CLASS_1_A71861351D4ACE4D_SET_TARGETREGION_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A71861351D4ACE4D_METHOD_1_1D4018D4200358D0_1_OFFSET))(this);
	}

	::RPG::GameCore::StageRegionConnection* Method_1_8A747610B3EB7225()
	{
		return ((::RPG::GameCore::StageRegionConnection*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A71861351D4ACE4D_METHOD_1_8A747610B3EB7225_OFFSET))(this);
	}

	::System::Single Method_1_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A71861351D4ACE4D_METHOD_1_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::System::Single Method_1_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A71861351D4ACE4D_METHOD_1_D64FD9A228A1C4E0_OFFSET))(this);
	}

	::Il2CppArray<::RPG::GameCore::StageVolumeConfigV2*>* Method_1_BFA17A8366EA8C77()
	{
		return ((::Il2CppArray<::RPG::GameCore::StageVolumeConfigV2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A71861351D4ACE4D_METHOD_1_BFA17A8366EA8C77_OFFSET))(this);
	}
};
