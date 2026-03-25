#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_DE4C6B309308A230;
class Class_1_ECBCF86CDE61CBCA;
namespace RPG::Client { class RuntimeRegionVolume; }
namespace RPG::GameCore { class StageRegionConnection; }
namespace RPG::GameCore { class StageVolumeConfigV2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_B8CEC01F5C43CB98_GET_TARGETREGION_OFFSET UNITYSDK_OFFSET(0x10C6D600)
#define CLASS_1_B8CEC01F5C43CB98_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x10C6D620)
#define CLASS_1_B8CEC01F5C43CB98_METHOD_1_4C27DE82B2DFE27A_OFFSET UNITYSDK_OFFSET(0x10C6D4E0)
#define CLASS_1_B8CEC01F5C43CB98_METHOD_1_6270D564028DED48_OFFSET UNITYSDK_OFFSET(0x10C6CC40)
#define CLASS_1_B8CEC01F5C43CB98_METHOD_1_6288DC7D79FB18A9_OFFSET UNITYSDK_OFFSET(0x10C6D680)
#define CLASS_1_B8CEC01F5C43CB98_METHOD_1_9C56B419ED8389BC_OFFSET UNITYSDK_OFFSET(0x10C6D020)
#define CLASS_1_B8CEC01F5C43CB98_METHOD_1_9CA5A80F6B5B9E01_OFFSET UNITYSDK_OFFSET(0x10C6D5D0)
#define CLASS_1_B8CEC01F5C43CB98_METHOD_1_A8CB5027BF8B913B_1_OFFSET UNITYSDK_OFFSET(0x10C6D260)
#define CLASS_1_B8CEC01F5C43CB98_METHOD_1_A8CB5027BF8B913B_OFFSET UNITYSDK_OFFSET(0x10C6CDA0)
#define CLASS_1_B8CEC01F5C43CB98_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x10C6D580)
#define CLASS_1_B8CEC01F5C43CB98_METHOD_1_BFA17A8366EA8C77_OFFSET UNITYSDK_OFFSET(0x10C6CA70)
#define CLASS_1_B8CEC01F5C43CB98_METHOD_1_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0x10C6D200)
#define CLASS_1_B8CEC01F5C43CB98_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x10C6D5E0)
#define CLASS_1_B8CEC01F5C43CB98_METHOD_1_F978A1D172468895_OFFSET UNITYSDK_OFFSET(0x10C6CAE0)
#define CLASS_1_B8CEC01F5C43CB98_METHOD_1_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0x10C6D690)
#define CLASS_1_B8CEC01F5C43CB98_SET_TARGETREGION_OFFSET UNITYSDK_OFFSET(0x10C6D610)
#define CLASS_1_B8CEC01F5C43CB98__CTOR_OFFSET UNITYSDK_OFFSET(0x10C6C5E0)

inline static constexpr unsigned int Class_1_B8CEC01F5C43CB98_TypeDefinitionIndex = 50478;

class Class_1_B8CEC01F5C43CB98 : public ::System::Object
{
public:
	::Class_1_ECBCF86CDE61CBCA* Field_1_1; // 0x10
	::RPG::GameCore::StageRegionConnection* Field_1_2; // 0x18
	::Class_1_ECBCF86CDE61CBCA* _TargetRegion_k__BackingField; // 0x20
	::UnityEngine::GameObject* Field_1_3; // 0x28
	::System::Collections::Generic::List_1<::RPG::Client::RuntimeRegionVolume*>* Field_1_4; // 0x30
	::System::Collections::Generic::List_1<::RPG::Client::RuntimeRegionVolume*>* Field_1_5; // 0x38

	::System::Void _ctor(::Class_1_ECBCF86CDE61CBCA* a1, ::Class_1_ECBCF86CDE61CBCA* a2, ::RPG::GameCore::StageRegionConnection* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ECBCF86CDE61CBCA*, ::Class_1_ECBCF86CDE61CBCA*, ::RPG::GameCore::StageRegionConnection*))((::PBYTE)hIl2Cpp + CLASS_1_B8CEC01F5C43CB98__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_F978A1D172468895()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8CEC01F5C43CB98_METHOD_1_F978A1D172468895_OFFSET))(this);
	}

	::System::Boolean Method_1_6270D564028DED48(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_B8CEC01F5C43CB98_METHOD_1_6270D564028DED48_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A8CB5027BF8B913B(::Class_1_DE4C6B309308A230* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_DE4C6B309308A230*))((::PBYTE)hIl2Cpp + CLASS_1_B8CEC01F5C43CB98_METHOD_1_A8CB5027BF8B913B_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_9C56B419ED8389BC(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_B8CEC01F5C43CB98_METHOD_1_9C56B419ED8389BC_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A8CB5027BF8B913B_1(::Class_1_DE4C6B309308A230* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_DE4C6B309308A230*))((::PBYTE)hIl2Cpp + CLASS_1_B8CEC01F5C43CB98_METHOD_1_A8CB5027BF8B913B_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_4C27DE82B2DFE27A(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_B8CEC01F5C43CB98_METHOD_1_4C27DE82B2DFE27A_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8CEC01F5C43CB98_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_1_9CA5A80F6B5B9E01()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8CEC01F5C43CB98_METHOD_1_9CA5A80F6B5B9E01_OFFSET))(this);
	}

	::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8CEC01F5C43CB98_METHOD_1_F0E307B84478A272_OFFSET))(this);
	}

	::Class_1_ECBCF86CDE61CBCA* get_TargetRegion()
	{
		return ((::Class_1_ECBCF86CDE61CBCA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8CEC01F5C43CB98_GET_TARGETREGION_OFFSET))(this);
	}

	::System::Void set_TargetRegion(::Class_1_ECBCF86CDE61CBCA* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ECBCF86CDE61CBCA*))((::PBYTE)hIl2Cpp + CLASS_1_B8CEC01F5C43CB98_SET_TARGETREGION_OFFSET))(this, value);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8CEC01F5C43CB98_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::RPG::GameCore::StageRegionConnection* Method_1_6288DC7D79FB18A9()
	{
		return ((::RPG::GameCore::StageRegionConnection*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8CEC01F5C43CB98_METHOD_1_6288DC7D79FB18A9_OFFSET))(this);
	}

	::System::Single Method_1_FB4BE762B6186C23()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8CEC01F5C43CB98_METHOD_1_FB4BE762B6186C23_OFFSET))(this);
	}

	::System::Single Method_1_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8CEC01F5C43CB98_METHOD_1_D64FD9A228A1C4E0_OFFSET))(this);
	}

	::Il2CppArray<::RPG::GameCore::StageVolumeConfigV2*>* Method_1_BFA17A8366EA8C77()
	{
		return ((::Il2CppArray<::RPG::GameCore::StageVolumeConfigV2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8CEC01F5C43CB98_METHOD_1_BFA17A8366EA8C77_OFFSET))(this);
	}
};
