#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::Client { class InstanceArrayV2MonoPlugin; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define CLASS_1_DFBCA3F3CBEF1852_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x15581740)
#define CLASS_1_DFBCA3F3CBEF1852_METHOD_1_0B4988743165A406_OFFSET UNITYSDK_OFFSET(0x155819B0)
#define CLASS_1_DFBCA3F3CBEF1852_METHOD_1_717B99C253FA1010_OFFSET UNITYSDK_OFFSET(0x15581770)
#define CLASS_1_DFBCA3F3CBEF1852_METHOD_1_79D11FE8946BAB40_OFFSET UNITYSDK_OFFSET(0x15581860)
#define CLASS_1_DFBCA3F3CBEF1852_METHOD_1_8542E37E74FDE1B5_OFFSET UNITYSDK_OFFSET(0x15581A80)
#define CLASS_1_DFBCA3F3CBEF1852_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15581A40)
#define CLASS_1_DFBCA3F3CBEF1852_SET_OWNER_OFFSET UNITYSDK_OFFSET(0x15581750)
#define CLASS_1_DFBCA3F3CBEF1852__CTOR_OFFSET UNITYSDK_OFFSET(0x15581760)

inline static constexpr unsigned int Class_1_DFBCA3F3CBEF1852_TypeDefinitionIndex = 67464;

class Class_1_DFBCA3F3CBEF1852 : public ::System::Object
{
public:
	::Il2CppArray<::UnityEngine::MaterialPropertyBlock*>* Field_1_0; // 0x10
	::RPG::Client::InstanceArrayV2MonoPlugin* _Owner_k__BackingField; // 0x18
	::Il2CppArray<::Il2CppArray<::UnityEngine::Matrix4x4>*>* Field_1_2; // 0x20
	::Il2CppArray<::System::Collections::Generic::Dictionary_2<::System::Int32, ::Il2CppArray<::UnityEngine::Vector4>*>*>* Field_1_3; // 0x28
	::System::Boolean Field_1_4; // 0x30
	::System::Int32 Field_1_5; // 0x34

	::System::Void _ctor(::RPG::Client::InstanceArrayV2MonoPlugin* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::InstanceArrayV2MonoPlugin*))((::PBYTE)hIl2Cpp + CLASS_1_DFBCA3F3CBEF1852__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::InstanceArrayV2MonoPlugin* get_Owner()
	{
		return ((::RPG::Client::InstanceArrayV2MonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFBCA3F3CBEF1852_GET_OWNER_OFFSET))(this);
	}

	::System::Void set_Owner(::RPG::Client::InstanceArrayV2MonoPlugin* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::InstanceArrayV2MonoPlugin*))((::PBYTE)hIl2Cpp + CLASS_1_DFBCA3F3CBEF1852_SET_OWNER_OFFSET))(this, a1);
	}

	::System::Void Method_1_717B99C253FA1010(::System::Int32 a1, ::System::Int32 a2, ::Il2CppArray<::UnityEngine::Vector4>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + CLASS_1_DFBCA3F3CBEF1852_METHOD_1_717B99C253FA1010_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_79D11FE8946BAB40(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_DFBCA3F3CBEF1852_METHOD_1_79D11FE8946BAB40_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_1_0B4988743165A406(::System::Int32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_DFBCA3F3CBEF1852_METHOD_1_0B4988743165A406_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFBCA3F3CBEF1852_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_8542E37E74FDE1B5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFBCA3F3CBEF1852_METHOD_1_8542E37E74FDE1B5_OFFSET))(this);
	}
};
