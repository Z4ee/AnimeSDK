#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ElectricChain_DisplaceType.h"
#include "unitysdk/RPG/Client/ElectricChain_LineControlMode.h"
#include "unitysdk/RPG/Client/ElectricChain_LineType.h"
#include "unitysdk/RPG/Client/ElectricChain_RandomType.h"
#include "unitysdk/RPG/Client/ElectricChain_StartEndPos.h"
#include "unitysdk/RPG/Client/ElectricChain_UpdateType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::Client { class BezierCurve; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class LineRenderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_ELECTRICCHAIN_GET__LINELENGTH_OFFSET UNITYSDK_OFFSET(0xA2171A0)
#define RPG_CLIENT_ELECTRICCHAIN_METHOD_1_0987586229167119_OFFSET UNITYSDK_OFFSET(0xA217280)
#define RPG_CLIENT_ELECTRICCHAIN_METHOD_1_497833CF065C1894_OFFSET UNITYSDK_OFFSET(0xA2177A0)
#define RPG_CLIENT_ELECTRICCHAIN_METHOD_1_5CEF726AB76C1B8A_OFFSET UNITYSDK_OFFSET(0xA2185E0)
#define RPG_CLIENT_ELECTRICCHAIN_METHOD_1_5DFCD1875A1D33F8_OFFSET UNITYSDK_OFFSET(0xA217EF0)
#define RPG_CLIENT_ELECTRICCHAIN_METHOD_1_6AE1D0AAD08D1613_OFFSET UNITYSDK_OFFSET(0xA218270)
#define RPG_CLIENT_ELECTRICCHAIN_METHOD_1_81A66FB988DFA6AA_OFFSET UNITYSDK_OFFSET(0xA217A60)
#define RPG_CLIENT_ELECTRICCHAIN_METHOD_1_8C97CA3BAB7FB2D7_OFFSET UNITYSDK_OFFSET(0xA217050)
#define RPG_CLIENT_ELECTRICCHAIN__CTOR_OFFSET UNITYSDK_OFFSET(0xA2176D0)
#define RPG_CLIENT_ELECTRICCHAIN__GETRANDOMVALUE_B__45_0_OFFSET UNITYSDK_OFFSET(0xA218900)

namespace RPG::Client
{
	inline static constexpr unsigned int ElectricChain_TypeDefinitionIndex = 64957;

	class ElectricChain : public ::System::Object
	{
	public:
		::RPG::Client::ElectricChain_LineType lineType; // 0x10
		::UnityEngine::Transform* startPoint; // 0x18
		::UnityEngine::Transform* endPoint; // 0x20
		::RPG::Client::BezierCurve* curve; // 0x28
		::UnityEngine::LineRenderer* lineRenderer; // 0x30
		::System::Single detail; // 0x38
		::RPG::Client::ElectricChain_DisplaceType displaceType; // 0x3C
		::System::Single displacement; // 0x40
		::RPG::Client::ElectricChain_LineControlMode lineControlMode; // 0x44
		::System::Single lineControlConstant; // 0x48
		::UnityEngine::AnimationCurve* lineControlCurve; // 0x50
		::RPG::Client::ElectricChain_DisplaceType lineControlDistributionType; // 0x58
		::UnityEngine::Vector4 lineControlDistribution; // 0x5C
		::System::Boolean lineControlDistributionInverse; // 0x6C
		::System::Single updateInterval; // 0x70
		::RPG::Client::ElectricChain_UpdateType updateType; // 0x74
		::System::Boolean firstClear; // 0x78
		::System::Single _nextUpdateTime; // 0x7C
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* _linePosList; // 0x80
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* _randomGroup; // 0x88
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* _lastRandomGroup; // 0x90
		::UnityEngine::Vector3 _startPos; // 0x98
		::UnityEngine::Vector3 _endPos; // 0xA4
		::RPG::Client::ElectricChain_RandomType startRandomType; // 0xB0
		::UnityEngine::Vector3 randomInStart; // 0xB4
		::RPG::Client::ElectricChain_RandomType endRandomType; // 0xC0
		::UnityEngine::Vector3 randomInEnd; // 0xC4
		::System::Int32 _node; // 0xD0
		::Il2CppArray<::UnityEngine::Vector3>* _posLastOffSet; // 0xD8
		::Il2CppArray<::UnityEngine::Vector3>* _posOffSet; // 0xE0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAIN__CTOR_OFFSET))(this);
		}

		::System::Single Method_1_8C97CA3BAB7FB2D7(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAIN_METHOD_1_8C97CA3BAB7FB2D7_OFFSET))(this, a1);
		}

		::System::Single get__lineLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAIN_GET__LINELENGTH_OFFSET))(this);
		}

		::UnityEngine::Vector3 Method_1_0987586229167119(::UnityEngine::Transform* a1, ::UnityEngine::Vector3 a2, ::RPG::Client::ElectricChain_RandomType a3, ::RPG::Client::ElectricChain_StartEndPos a4)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::RPG::Client::ElectricChain_RandomType, ::RPG::Client::ElectricChain_StartEndPos))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAIN_METHOD_1_0987586229167119_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_1_497833CF065C1894()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAIN_METHOD_1_497833CF065C1894_OFFSET))(this);
		}

		::System::Void Method_1_81A66FB988DFA6AA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAIN_METHOD_1_81A66FB988DFA6AA_OFFSET))(this);
		}

		::System::Void Method_1_5DFCD1875A1D33F8(::System::Single a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAIN_METHOD_1_5DFCD1875A1D33F8_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Method_1_6AE1D0AAD08D1613(::System::Single a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAIN_METHOD_1_6AE1D0AAD08D1613_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::UnityEngine::Vector3 Method_1_5CEF726AB76C1B8A(::System::Int32 a1, ::RPG::Client::ElectricChain_UpdateType a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32, ::RPG::Client::ElectricChain_UpdateType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAIN_METHOD_1_5CEF726AB76C1B8A_OFFSET))(this, a1, a2);
		}

		::System::Void _GetRandomValue_b__45_0(::UnityEngine::Vector3 i)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAIN__GETRANDOMVALUE_B__45_0_OFFSET))(this, i);
		}
	};
}
