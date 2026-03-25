#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_38055A527A761D34_LineType.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_38055A527A761D34;
class Class_3_38055A527A761D34_AdditionalTransformAnim;
class Class_3_38055A527A761D34_AnimatedItem;
namespace RPG::Client { class BezierCurve; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine::Rendering { template <typename T1, typename T2> class SerializedDictionary_2; }

#define RPG_CLIENT_TRANSFORMLOOPANIM_GET_ARTBOUNDFULL_OFFSET UNITYSDK_OFFSET(0xA618D50)
#define RPG_CLIENT_TRANSFORMLOOPANIM_GET_ARTBOUND_OFFSET UNITYSDK_OFFSET(0xA6193B0)
#define RPG_CLIENT_TRANSFORMLOOPANIM_GET_ITEMCOUNT_OFFSET UNITYSDK_OFFSET(0xA618D00)
#define RPG_CLIENT_TRANSFORMLOOPANIM__CTOR_OFFSET UNITYSDK_OFFSET(0xA619460)

namespace RPG::Client
{
	inline static constexpr unsigned int TransformLoopAnim_TypeDefinitionIndex = 57569;

	class TransformLoopAnim : public ::RPG::Client::TAMonoPlugin_1<::Class_3_38055A527A761D34*>
	{
	public:
		::System::Collections::Generic::List_1<::Class_3_38055A527A761D34_AnimatedItem*>* AnimatedCrowd; // 0x30
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
		::System::Boolean EnableCollider; // 0x98
		::System::Boolean Inited; // 0x99
		::System::Boolean Sorted; // 0x9A
		::System::Single SpeedLog; // 0x9C
		::System::Int32 TransformCount; // 0xA0
		::UnityEngine::Rendering::SerializedDictionary_2<::UnityEngine::Mesh*, ::System::Int32>* MeshCount; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFORMLOOPANIM__CTOR_OFFSET))(this);
		}

		::System::Int32 get_ItemCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFORMLOOPANIM_GET_ITEMCOUNT_OFFSET))(this);
		}

		::UnityEngine::Bounds get_ArtBoundFull()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFORMLOOPANIM_GET_ARTBOUNDFULL_OFFSET))(this);
		}

		::System::Single get_ArtBound()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRANSFORMLOOPANIM_GET_ARTBOUND_OFFSET))(this);
		}
	};
}
