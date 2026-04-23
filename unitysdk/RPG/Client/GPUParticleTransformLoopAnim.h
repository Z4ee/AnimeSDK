#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_38055A527A761D34_LineType.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/Struct_2_B3CFB45E7E960210.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_38055A527A761D34_AdditionalTransformAnim;
class Class_3_58EF5C0FB9CE901D;
class Class_3_58EF5C0FB9CE901D_AnimatedInstance;
class Class_3_58EF5C0FB9CE901D_AnimatedItem;
namespace RPG::Client { class BezierCurve; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_GPUPARTICLETRANSFORMLOOPANIM_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xA40CD60)
#define RPG_CLIENT_GPUPARTICLETRANSFORMLOOPANIM_GET_ARTBOUNDFULL_OFFSET UNITYSDK_OFFSET(0xA40BE70)
#define RPG_CLIENT_GPUPARTICLETRANSFORMLOOPANIM_GET_ARTBOUND_OFFSET UNITYSDK_OFFSET(0xA40C7A0)
#define RPG_CLIENT_GPUPARTICLETRANSFORMLOOPANIM_GET_RENDERBUDGETDATA_OFFSET UNITYSDK_OFFSET(0xA40C850)
#define RPG_CLIENT_GPUPARTICLETRANSFORMLOOPANIM_METHOD_7_193B69F9A0A775CE_OFFSET UNITYSDK_OFFSET(0xA40B240)
#define RPG_CLIENT_GPUPARTICLETRANSFORMLOOPANIM__CTOR_OFFSET UNITYSDK_OFFSET(0xA40CDB0)
#define RPG_CLIENT_GPUPARTICLETRANSFORMLOOPANIM___IFIXBASEPROXY_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xA40CE00)

namespace RPG::Client
{
	inline static constexpr unsigned int GPUParticleTransformLoopAnim_TypeDefinitionIndex = 64817;

	class GPUParticleTransformLoopAnim : public ::RPG::Client::TAMonoPlugin_1<::Class_3_58EF5C0FB9CE901D*>
	{
	public:
		::System::Collections::Generic::List_1<::Class_3_58EF5C0FB9CE901D_AnimatedItem*>* AnimatedCrowd; // 0x30
		::Class_3_38055A527A761D34_LineType Mode; // 0x38
		::UnityEngine::Vector3 StartPos; // 0x3C
		::UnityEngine::Vector3 EndPos; // 0x48
		::RPG::Client::BezierCurve* Curve; // 0x58
		::System::Boolean FollowCurve; // 0x60
		::System::Single Speed; // 0x64
		::UnityEngine::Vector3 GlobalRelativeTranslation; // 0x68
		::UnityEngine::Vector3 GlobalRelativeRotation; // 0x74
		::UnityEngine::Vector3 GlobalRelativeScale; // 0x80
		::Class_3_38055A527A761D34_AdditionalTransformAnim* AdditionalTransformAnim; // 0x90
		::System::Boolean Inited; // 0x98
		::System::Single SpeedLog; // 0x9C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GPUPARTICLETRANSFORMLOOPANIM__CTOR_OFFSET))(this);
		}

		::Class_3_58EF5C0FB9CE901D_AnimatedInstance* Method_7_193B69F9A0A775CE(::UnityEngine::Transform* a1)
		{
			return ((::Class_3_58EF5C0FB9CE901D_AnimatedInstance*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GPUPARTICLETRANSFORMLOOPANIM_METHOD_7_193B69F9A0A775CE_OFFSET))(this, a1);
		}

		::UnityEngine::Bounds get_ArtBoundFull()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GPUPARTICLETRANSFORMLOOPANIM_GET_ARTBOUNDFULL_OFFSET))(this);
		}

		::System::Single get_ArtBound()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GPUPARTICLETRANSFORMLOOPANIM_GET_ARTBOUND_OFFSET))(this);
		}

		::Struct_2_B3CFB45E7E960210 get_RenderBudgetData()
		{
			return ((::Struct_2_B3CFB45E7E960210(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GPUPARTICLETRANSFORMLOOPANIM_GET_RENDERBUDGETDATA_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GPUPARTICLETRANSFORMLOOPANIM_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GPUPARTICLETRANSFORMLOOPANIM___IFIXBASEPROXY_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}
	};
}
