#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MColor.h"
#include "unitysdk/RPG/MQuaternion.h"
#include "unitysdk/RPG/MRect.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/Struct_2_331ACDD60B60D2E3.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define RPG_MATHTYPECONVERSION_GAMECOREQUATERNIONTOUNITY_OFFSET UNITYSDK_OFFSET(0x17A67B80)
#define RPG_MATHTYPECONVERSION_GAMECOREVECTOR2TOUNITY_OFFSET UNITYSDK_OFFSET(0x17A679B0)
#define RPG_MATHTYPECONVERSION_GAMECOREVECTOR3TOUNITY_OFFSET UNITYSDK_OFFSET(0x17A679E0)
#define RPG_MATHTYPECONVERSION_GAMECOREVECTOR4TOUNITY_OFFSET UNITYSDK_OFFSET(0x17A67B60)
#define RPG_MATHTYPECONVERSION_TO0Y0_OFFSET UNITYSDK_OFFSET(0x17A67AC0)
#define RPG_MATHTYPECONVERSION_TOGAMECOREREF_OFFSET UNITYSDK_OFFSET(0x17A67C00)
#define RPG_MATHTYPECONVERSION_TOGAMECOREV2X0Z_OFFSET UNITYSDK_OFFSET(0x17A67C80)
#define RPG_MATHTYPECONVERSION_TOGAMECORE_1_OFFSET UNITYSDK_OFFSET(0x17A67BC0)
#define RPG_MATHTYPECONVERSION_TOGAMECORE_2_OFFSET UNITYSDK_OFFSET(0x17A67C20)
#define RPG_MATHTYPECONVERSION_TOGAMECORE_3_OFFSET UNITYSDK_OFFSET(0x17A67C50)
#define RPG_MATHTYPECONVERSION_TOGAMECORE_OFFSET UNITYSDK_OFFSET(0x17A67BA0)
#define RPG_MATHTYPECONVERSION_TOUNITYX0Z_OFFSET UNITYSDK_OFFSET(0x17A67C60)
#define RPG_MATHTYPECONVERSION_TOUNITY_1_OFFSET UNITYSDK_OFFSET(0x17A679A0)
#define RPG_MATHTYPECONVERSION_TOUNITY_2_OFFSET UNITYSDK_OFFSET(0x17A679C0)
#define RPG_MATHTYPECONVERSION_TOUNITY_3_OFFSET UNITYSDK_OFFSET(0x17A67B50)
#define RPG_MATHTYPECONVERSION_TOUNITY_4_OFFSET UNITYSDK_OFFSET(0x17A67B70)
#define RPG_MATHTYPECONVERSION_TOUNITY_5_OFFSET UNITYSDK_OFFSET(0x17A67B90)
#define RPG_MATHTYPECONVERSION_TOUNITY_OFFSET UNITYSDK_OFFSET(0x17A67990)
#define RPG_MATHTYPECONVERSION_TOX0ZNORMALIZED_OFFSET UNITYSDK_OFFSET(0x17A67A20)
#define RPG_MATHTYPECONVERSION_TOX0Z_OFFSET UNITYSDK_OFFSET(0x17A67A00)
#define RPG_MATHTYPECONVERSION_TOXY0_OFFSET UNITYSDK_OFFSET(0x17A67AE0)
#define RPG_MATHTYPECONVERSION_UNITYQUATERNIONTOGAMECORE_OFFSET UNITYSDK_OFFSET(0x17A67C30)
#define RPG_MATHTYPECONVERSION_UNITYVECTOR2TOGAMECORE_OFFSET UNITYSDK_OFFSET(0x17A67BB0)
#define RPG_MATHTYPECONVERSION_UNITYVECTOR3TOGAMECORE_OFFSET UNITYSDK_OFFSET(0x17A67BE0)
#define RPG_MATHTYPECONVERSION_UNITYVECTOR4TOGAMECORE_OFFSET UNITYSDK_OFFSET(0x17A67C40)
#define RPG_MATHTYPECONVERSION_XZMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x17A67B20)
#define RPG_MATHTYPECONVERSION_XZSQRMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x17A67B00)

namespace RPG
{
	inline static constexpr unsigned int MathTypeConversion_TypeDefinitionIndex = 8709;

	class MathTypeConversion : public ::System::Object
	{
	public:
		static ::UnityEngine::Color ToUnity(::RPG::MColor c)
		{
			return ((::UnityEngine::Color(*)(::RPG::MColor))((::PBYTE)hIl2Cpp + RPG_MATHTYPECONVERSION_TOUNITY_OFFSET))(c);
		}

		static ::UnityEngine::Vector2 ToUnity_1(::RPG::MVector2 v)
		{
			return ((::UnityEngine::Vector2(*)(::RPG::MVector2))((::PBYTE)hIl2Cpp + RPG_MATHTYPECONVERSION_TOUNITY_1_OFFSET))(v);
		}

		static ::UnityEngine::Vector3 ToUnity_2(::RPG::MVector3 v)
		{
			return ((::UnityEngine::Vector3(*)(::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_MATHTYPECONVERSION_TOUNITY_2_OFFSET))(v);
		}

		static ::UnityEngine::Vector3 ToX0Z(::UnityEngine::Vector3 v)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_MATHTYPECONVERSION_TOX0Z_OFFSET))(v);
		}

		static ::UnityEngine::Vector3 ToX0ZNormalized(::UnityEngine::Vector3 v)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_MATHTYPECONVERSION_TOX0ZNORMALIZED_OFFSET))(v);
		}

		static ::UnityEngine::Vector3 To0Y0(::UnityEngine::Vector3 v)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_MATHTYPECONVERSION_TO0Y0_OFFSET))(v);
		}

		static ::UnityEngine::Vector3 ToXY0(::UnityEngine::Vector3 v)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_MATHTYPECONVERSION_TOXY0_OFFSET))(v);
		}

		static ::System::Single XZSqrMagnitude(::UnityEngine::Vector3 v)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_MATHTYPECONVERSION_XZSQRMAGNITUDE_OFFSET))(v);
		}

		static ::System::Single XZMagnitude(::UnityEngine::Vector3 v)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_MATHTYPECONVERSION_XZMAGNITUDE_OFFSET))(v);
		}

		static ::UnityEngine::Vector4 ToUnity_3(::Struct_2_331ACDD60B60D2E3 v)
		{
			return ((::UnityEngine::Vector4(*)(::Struct_2_331ACDD60B60D2E3))((::PBYTE)hIl2Cpp + RPG_MATHTYPECONVERSION_TOUNITY_3_OFFSET))(v);
		}

		static ::UnityEngine::Quaternion ToUnity_4(::RPG::MQuaternion q)
		{
			return ((::UnityEngine::Quaternion(*)(::RPG::MQuaternion))((::PBYTE)hIl2Cpp + RPG_MATHTYPECONVERSION_TOUNITY_4_OFFSET))(q);
		}

		static ::UnityEngine::Rect ToUnity_5(::RPG::MRect rect)
		{
			return ((::UnityEngine::Rect(*)(::RPG::MRect))((::PBYTE)hIl2Cpp + RPG_MATHTYPECONVERSION_TOUNITY_5_OFFSET))(rect);
		}

		static ::RPG::MVector2 ToGameCore(::UnityEngine::Vector2 v)
		{
			return ((::RPG::MVector2(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_MATHTYPECONVERSION_TOGAMECORE_OFFSET))(v);
		}

		static ::RPG::MVector3 ToGameCore_1(::UnityEngine::Vector3 v)
		{
			return ((::RPG::MVector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_MATHTYPECONVERSION_TOGAMECORE_1_OFFSET))(v);
		}

		static ::System::Void ToGameCoreRef(::UnityEngine::Vector3 v, ::RPG::MVector3& vTarget)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::RPG::MVector3&))((::PBYTE)hIl2Cpp + RPG_MATHTYPECONVERSION_TOGAMECOREREF_OFFSET))(v, vTarget);
		}

		static ::RPG::MQuaternion ToGameCore_2(::UnityEngine::Quaternion q)
		{
			return ((::RPG::MQuaternion(*)(::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_MATHTYPECONVERSION_TOGAMECORE_2_OFFSET))(q);
		}

		static ::UnityEngine::Vector2 GameCoreVector2ToUnity(::RPG::MVector2 GameCoreVector2)
		{
			return ((::UnityEngine::Vector2(*)(::RPG::MVector2))((::PBYTE)hIl2Cpp + RPG_MATHTYPECONVERSION_GAMECOREVECTOR2TOUNITY_OFFSET))(GameCoreVector2);
		}

		static ::RPG::MVector2 UnityVector2ToGameCore(::UnityEngine::Vector2 UnityVector2)
		{
			return ((::RPG::MVector2(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_MATHTYPECONVERSION_UNITYVECTOR2TOGAMECORE_OFFSET))(UnityVector2);
		}

		static ::UnityEngine::Vector3 GameCoreVector3ToUnity(::RPG::MVector3 GameCoreVector3)
		{
			return ((::UnityEngine::Vector3(*)(::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_MATHTYPECONVERSION_GAMECOREVECTOR3TOUNITY_OFFSET))(GameCoreVector3);
		}

		static ::RPG::MVector3 UnityVector3ToGameCore(::UnityEngine::Vector3 UnityVector3)
		{
			return ((::RPG::MVector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_MATHTYPECONVERSION_UNITYVECTOR3TOGAMECORE_OFFSET))(UnityVector3);
		}

		static ::UnityEngine::Vector4 GameCoreVector4ToUnity(::Struct_2_331ACDD60B60D2E3 GameCoreVector4)
		{
			return ((::UnityEngine::Vector4(*)(::Struct_2_331ACDD60B60D2E3))((::PBYTE)hIl2Cpp + RPG_MATHTYPECONVERSION_GAMECOREVECTOR4TOUNITY_OFFSET))(GameCoreVector4);
		}

		static ::Struct_2_331ACDD60B60D2E3 UnityVector4ToGameCore(::UnityEngine::Vector4 UnityVector4)
		{
			return ((::Struct_2_331ACDD60B60D2E3(*)(::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + RPG_MATHTYPECONVERSION_UNITYVECTOR4TOGAMECORE_OFFSET))(UnityVector4);
		}

		static ::RPG::MQuaternion UnityQuaternionToGameCore(::UnityEngine::Quaternion UnityQuaternion)
		{
			return ((::RPG::MQuaternion(*)(::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_MATHTYPECONVERSION_UNITYQUATERNIONTOGAMECORE_OFFSET))(UnityQuaternion);
		}

		static ::UnityEngine::Quaternion GameCoreQuaternionToUnity(::RPG::MQuaternion GameCoreQuaternion)
		{
			return ((::UnityEngine::Quaternion(*)(::RPG::MQuaternion))((::PBYTE)hIl2Cpp + RPG_MATHTYPECONVERSION_GAMECOREQUATERNIONTOUNITY_OFFSET))(GameCoreQuaternion);
		}

		static ::RPG::MColor ToGameCore_3(::UnityEngine::Color color)
		{
			return ((::RPG::MColor(*)(::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_MATHTYPECONVERSION_TOGAMECORE_3_OFFSET))(color);
		}

		static ::UnityEngine::Vector3 ToUnityX0Z(::RPG::MVector2 vector2)
		{
			return ((::UnityEngine::Vector3(*)(::RPG::MVector2))((::PBYTE)hIl2Cpp + RPG_MATHTYPECONVERSION_TOUNITYX0Z_OFFSET))(vector2);
		}

		static ::RPG::MVector2 ToGameCoreV2X0Z(::UnityEngine::Vector3 vector3)
		{
			return ((::RPG::MVector2(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_MATHTYPECONVERSION_TOGAMECOREV2X0Z_OFFSET))(vector3);
		}
	};
}
