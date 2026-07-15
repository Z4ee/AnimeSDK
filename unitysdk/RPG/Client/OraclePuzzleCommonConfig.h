#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace RPG::Client::Prop { class PolygonMesh; }
namespace System { class String; }

#define RPG_CLIENT_ORACLEPUZZLECOMMONCONFIG_GETPOLYGONMESH_OFFSET UNITYSDK_OFFSET(0x1829F680)
#define RPG_CLIENT_ORACLEPUZZLECOMMONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1829F710)

namespace RPG::Client
{
	inline static constexpr unsigned int OraclePuzzleCommonConfig_TypeDefinitionIndex = 57391;

	class OraclePuzzleCommonConfig : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Single HelperActiveTime; // 0x18
		::System::Single HelperUseCD; // 0x1C
		::System::String* MAZE_ORACLE_NOUSE_HELPER_TIP; // 0x20
		::System::Single HelperItemMoveToDuration; // 0x28
		::System::Single HelperItemStayDuration; // 0x2C
		::System::Single HelperItemFadeOutDuration; // 0x30
		::System::Single MoveEffectSpeed; // 0x34
		::System::String* ORACLE_ITEM_OUTLINE_PATH; // 0x38
		::System::String* ORACLE_ITEM_HOVER_MAT_PATH; // 0x40
		::Il2CppArray<::RPG::Client::Prop::PolygonMesh*>* OraclePolygons; // 0x48
		::Il2CppArray<::System::Int32>* TriangleIndexs; // 0x50
		::Il2CppArray<::System::Int32>* QuadIndexs; // 0x58
		::System::String* MeshOutPutPath; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ORACLEPUZZLECOMMONCONFIG__CTOR_OFFSET))(this);
		}

		::RPG::Client::Prop::PolygonMesh* GetPolygonMesh(::System::Int32 a1)
		{
			return ((::RPG::Client::Prop::PolygonMesh*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ORACLEPUZZLECOMMONCONFIG_GETPOLYGONMESH_OFFSET))(this, a1);
		}
	};
}
