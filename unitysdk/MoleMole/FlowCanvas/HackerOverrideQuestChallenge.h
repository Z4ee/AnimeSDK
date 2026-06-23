#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode_4.h"

class Class_1_A047EA5169B6B30F;

#define MOLEMOLE_FLOWCANVAS_HACKEROVERRIDEQUESTCHALLENGE_HANDLEQUEST_OFFSET UNITYSDK_OFFSET(0x1A01CE00)
#define MOLEMOLE_FLOWCANVAS_HACKEROVERRIDEQUESTCHALLENGE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A01C8B0)
#define MOLEMOLE_FLOWCANVAS_HACKEROVERRIDEQUESTCHALLENGE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1A01D010)
#define MOLEMOLE_FLOWCANVAS_HACKEROVERRIDEQUESTCHALLENGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A01D1A0)
#define MOLEMOLE_FLOWCANVAS_HACKEROVERRIDEQUESTCHALLENGE___BASE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1A01D1C0)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackerOverrideQuestChallenge_TypeDefinitionIndex = 54829;

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

		::System::Void HandleQuest(::System::Int32 cur, ::Class_1_A047EA5169B6B30F* quest, ::System::Int32 level1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_1_A047EA5169B6B30F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKEROVERRIDEQUESTCHALLENGE_HANDLEQUEST_OFFSET))(this, cur, quest, level1);
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
