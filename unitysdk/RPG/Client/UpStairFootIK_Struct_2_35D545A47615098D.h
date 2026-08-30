#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define RPG_CLIENT_UPSTAIRFOOTIK_STRUCT_2_35D545A47615098D_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x3C16ED0)
#define RPG_CLIENT_UPSTAIRFOOTIK_STRUCT_2_35D545A47615098D_METHOD_2_7DFB4B9C80198D98_1_OFFSET UNITYSDK_OFFSET(0x3C16EA0)
#define RPG_CLIENT_UPSTAIRFOOTIK_STRUCT_2_35D545A47615098D_METHOD_2_7DFB4B9C80198D98_OFFSET UNITYSDK_OFFSET(0x3C16E80)
#define RPG_CLIENT_UPSTAIRFOOTIK_STRUCT_2_35D545A47615098D__CTOR_OFFSET UNITYSDK_OFFSET(0x3C16EC0)

namespace RPG::Client
{
	inline static constexpr unsigned int UpStairFootIK_Struct_2_35D545A47615098D_TypeDefinitionIndex = 68467;

	struct alignas(8) UpStairFootIK_Struct_2_35D545A47615098D
	{
		::UnityEngine::Transform* DICDJJOJKGF; // 0x10
		::UnityEngine::Vector3 FDOGMFPPPHK; // 0x18
		::UnityEngine::Vector3 JABNFIOPCCB; // 0x24

		::System::Void _ctor(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UPSTAIRFOOTIK_STRUCT_2_35D545A47615098D__CTOR_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 Method_2_7DFB4B9C80198D98()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UPSTAIRFOOTIK_STRUCT_2_35D545A47615098D_METHOD_2_7DFB4B9C80198D98_OFFSET))(this);
		}

		::UnityEngine::Vector3 Method_2_7DFB4B9C80198D98_1()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UPSTAIRFOOTIK_STRUCT_2_35D545A47615098D_METHOD_2_7DFB4B9C80198D98_1_OFFSET))(this);
		}

		::System::Void Method_2_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UPSTAIRFOOTIK_STRUCT_2_35D545A47615098D_METHOD_2_4343F372F34C05BF_OFFSET))(this);
		}
	};
}
