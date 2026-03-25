#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::Client { class Effect_GPUCrowdAnimation; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_DF3A4AC612FC5859_METHOD_2_01544CE46301F75F_OFFSET UNITYSDK_OFFSET(0x1156E3A0)
#define CLASS_2_DF3A4AC612FC5859_METHOD_2_14AFBA2E8A242644_OFFSET UNITYSDK_OFFSET(0x1156DDE0)
#define CLASS_2_DF3A4AC612FC5859_METHOD_2_704FAC4600717444_OFFSET UNITYSDK_OFFSET(0x1156E620)
#define CLASS_2_DF3A4AC612FC5859_METHOD_2_90D019D81149A8BA_OFFSET UNITYSDK_OFFSET(0x1156F270)
#define CLASS_2_DF3A4AC612FC5859_METHOD_2_91F0343A93C5D356_OFFSET UNITYSDK_OFFSET(0x1156E330)
#define CLASS_2_DF3A4AC612FC5859_METHOD_2_AB7ED27CAB69BE58_OFFSET UNITYSDK_OFFSET(0x1156CC50)
#define CLASS_2_DF3A4AC612FC5859_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0x1156CB90)
#define CLASS_2_DF3A4AC612FC5859_METHOD_2_DFEC27F1F6CA5A80_OFFSET UNITYSDK_OFFSET(0x1156CC00)
#define CLASS_2_DF3A4AC612FC5859__CTOR_OFFSET UNITYSDK_OFFSET(0x1156F260)

inline static constexpr unsigned int Class_2_DF3A4AC612FC5859_TypeDefinitionIndex = 57603;

class Class_2_DF3A4AC612FC5859 : public ::RPG::Client::BehaviorBase
{
public:
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*>* Field_2_9; // 0x18
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*>* Field_2_10; // 0x20
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>* Field_2_12; // 0x28
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Single>*>* Field_2_11; // 0x30
	::System::Collections::Generic::List_1<::UnityEngine::MaterialPropertyBlock*>* Field_2_4; // 0x38
	::System::Collections::Generic::List_1<::UnityEngine::Mesh*>* Field_2_8; // 0x40
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*>* Field_2_15; // 0x48
	::UnityEngine::Vector2Int Field_2_5; // 0x50
	::System::Single Field_2_1; // 0x58
	::UnityEngine::Matrix4x4 Field_2_16; // 0x5C
	::System::Single Field_2_0; // 0x9C
	::System::Boolean Field_2_3; // 0xA0
	::System::Boolean Field_2_2; // 0xA1
	::System::Boolean Field_2_17; // 0xA2
	::UnityEngine::Matrix4x4 Field_2_14; // 0xA4
	::UnityEngine::Quaternion Field_2_13; // 0xE4
	::UnityEngine::Matrix4x4 Field_2_6; // 0xF4
	::UnityEngine::Vector3 Field_2_7; // 0x134

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DF3A4AC612FC5859__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B1EB734337965E73(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_DF3A4AC612FC5859_METHOD_2_B1EB734337965E73_OFFSET))(this, a1);
	}

	::System::Void Method_2_DFEC27F1F6CA5A80()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DF3A4AC612FC5859_METHOD_2_DFEC27F1F6CA5A80_OFFSET))(this);
	}

	::System::Void Method_2_AB7ED27CAB69BE58()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DF3A4AC612FC5859_METHOD_2_AB7ED27CAB69BE58_OFFSET))(this);
	}

	::System::Void Method_2_14AFBA2E8A242644()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DF3A4AC612FC5859_METHOD_2_14AFBA2E8A242644_OFFSET))(this);
	}

	::System::Void Method_2_704FAC4600717444()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DF3A4AC612FC5859_METHOD_2_704FAC4600717444_OFFSET))(this);
	}

	::System::Void Method_2_01544CE46301F75F(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_DF3A4AC612FC5859_METHOD_2_01544CE46301F75F_OFFSET))(this, a1, a2);
	}

	::RPG::Client::Effect_GPUCrowdAnimation* Method_2_91F0343A93C5D356()
	{
		return ((::RPG::Client::Effect_GPUCrowdAnimation*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DF3A4AC612FC5859_METHOD_2_91F0343A93C5D356_OFFSET))(this);
	}

	::System::Void Method_2_90D019D81149A8BA(::UnityEngine::MonoBehaviour* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_DF3A4AC612FC5859_METHOD_2_90D019D81149A8BA_OFFSET))(this, P0);
	}
};
