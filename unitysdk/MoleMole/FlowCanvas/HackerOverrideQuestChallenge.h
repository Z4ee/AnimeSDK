#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode_4.h"

class Class_1_F24A790D52CF0024;

#define MOLEMOLE_FLOWCANVAS_HACKEROVERRIDEQUESTCHALLENGE_HANDLEQUEST_OFFSET UNITYSDK_OFFSET(0x1B82F240)
#define MOLEMOLE_FLOWCANVAS_HACKEROVERRIDEQUESTCHALLENGE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B82ECD0)
#define MOLEMOLE_FLOWCANVAS_HACKEROVERRIDEQUESTCHALLENGE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1B82F460)
#define MOLEMOLE_FLOWCANVAS_HACKEROVERRIDEQUESTCHALLENGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B82F5F0)
#define MOLEMOLE_FLOWCANVAS_HACKEROVERRIDEQUESTCHALLENGE___BASE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1B82F610)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackerOverrideQuestChallenge_TypeDefinitionIndex = 52252;

	class HackerOverrideQuestChallenge : public ::MoleMole::FlowCanvas::ChessboardCallableActionNode_4<::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKEROVERRIDEQUESTCHALLENGE__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Int32 cur, ::System::Int32 level1, ::System::Int32 level2, ::System::Int32 level3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKEROVERRIDEQUESTCHALLENGE_INVOKE_OFFSET))(this, cur, level1, level2, level3);
		}

		::System::Void HandleQuest(::System::Int32 cur, ::Class_1_F24A790D52CF0024* quest, ::System::Int32 level1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_1_F24A790D52CF0024*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKEROVERRIDEQUESTCHALLENGE_HANDLEQUEST_OFFSET))(this, cur, quest, level1);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKEROVERRIDEQUESTCHALLENGE_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void __base_OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKEROVERRIDEQUESTCHALLENGE___BASE_ONGRAPHSTOPED_OFFSET))(this);
		}
	};
}
