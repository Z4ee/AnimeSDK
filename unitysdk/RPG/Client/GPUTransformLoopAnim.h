#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_38055A527A761D34_LineType.h"
#include "unitysdk/Class_3_64CAD3999A9F2A59_DrawModeType.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/Struct_2_B3CFB45E7E960210.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_38055A527A761D34_AdditionalTransformAnim;
class Class_3_64CAD3999A9F2A59;
class Class_3_64CAD3999A9F2A59_AnimatedInstance;
class Class_3_64CAD3999A9F2A59_AnimatedItem;
namespace RPG::Client { class BezierCurve; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Texture; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_GPUTRANSFORMLOOPANIM_BAKEBEZIERCURVEDRAWMODE_OFFSET UNITYSDK_OFFSET(0x974C040)
#define RPG_CLIENT_GPUTRANSFORMLOOPANIM_GET_ARTBOUNDFULL_OFFSET UNITYSDK_OFFSET(0x974CCB0)
#define RPG_CLIENT_GPUTRANSFORMLOOPANIM_GET_ARTBOUND_OFFSET UNITYSDK_OFFSET(0x974D5E0)
#define RPG_CLIENT_GPUTRANSFORMLOOPANIM_GET_RENDERBUDGETDATA_OFFSET UNITYSDK_OFFSET(0x974D690)
#define RPG_CLIENT_GPUTRANSFORMLOOPANIM_METHOD_7_193B69F9A0A775CE_OFFSET UNITYSDK_OFFSET(0x974C080)
#define RPG_CLIENT_GPUTRANSFORMLOOPANIM__CTOR_OFFSET UNITYSDK_OFFSET(0x974DBA0)

namespace RPG::Client
{
	inline static constexpr unsigned int GPUTransformLoopAnim_TypeDefinitionIndex = 57561;

	class GPUTransformLoopAnim : public ::RPG::Client::TAMonoPlugin_1<::Class_3_64CAD3999A9F2A59*>
	{
	public:
		::System::Collections::Generic::List_1<::Class_3_64CAD3999A9F2A59_AnimatedItem*>* AnimatedCrowd; // 0x30
		::Class_3_64CAD3999A9F2A59_DrawModeType DrawMode; // 0x38
		::Class_3_38055A527A761D34_LineType Mode; // 0x3C
		::UnityEngine::Vector3 StartPos; // 0x40
		::UnityEngine::Vector3 EndPos; // 0x4C
		::RPG::Client::BezierCurve* Curve; // 0x58
		::System::Boolean FollowCurve; // 0x60
		::UnityEngine::Texture* BakeTexture; // 0x68
		::System::Single Speed; // 0x70
		::UnityEngine::Vector3 GlobalRelativeTranslation; // 0x74
		::UnityEngine::Vector3 GlobalRelativeRotation; // 0x80
		::UnityEngine::Vector3 GlobalRelativeScale; // 0x8C
		::Class_3_38055A527A761D34_AdditionalTransformAnim* AdditionalTransformAnim; // 0x98
		::System::Boolean Inited; // 0xA0
		::System::Single SpeedLog; // 0xA4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GPUTRANSFORMLOOPANIM__CTOR_OFFSET))(this);
		}

		::System::Void BakeBezierCurveDrawMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GPUTRANSFORMLOOPANIM_BAKEBEZIERCURVEDRAWMODE_OFFSET))(this);
		}

		::Class_3_64CAD3999A9F2A59_AnimatedInstance* Method_7_193B69F9A0A775CE(::UnityEngine::Transform* a1)
		{
			return ((::Class_3_64CAD3999A9F2A59_AnimatedInstance*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GPUTRANSFORMLOOPANIM_METHOD_7_193B69F9A0A775CE_OFFSET))(this, a1);
		}

		::UnityEngine::Bounds get_ArtBoundFull()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GPUTRANSFORMLOOPANIM_GET_ARTBOUNDFULL_OFFSET))(this);
		}

		::System::Single get_ArtBound()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GPUTRANSFORMLOOPANIM_GET_ARTBOUND_OFFSET))(this);
		}

		::Struct_2_B3CFB45E7E960210 get_RenderBudgetData()
		{
			return ((::Struct_2_B3CFB45E7E960210(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GPUTRANSFORMLOOPANIM_GET_RENDERBUDGETDATA_OFFSET))(this);
		}
	};
}
