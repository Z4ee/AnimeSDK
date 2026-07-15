#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B823313B2CC4BC8E;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define RPG_CLIENT_GAMEFLOWHELPER_CHECKCANGOTOGAMEFLOW_OFFSET UNITYSDK_OFFSET(0x192D3B00)
#define RPG_CLIENT_GAMEFLOWHELPER_TRYGOTOGAMEFLOW_OFFSET UNITYSDK_OFFSET(0x192D2750)
#define RPG_CLIENT_GAMEFLOWHELPER__CHECKPARAMVALID_OFFSET UNITYSDK_OFFSET(0x192D2C10)
#define RPG_CLIENT_GAMEFLOWHELPER__CREATEGOTOPARAMS_OFFSET UNITYSDK_OFFSET(0x192D2D80)

namespace RPG::Client
{
	inline static constexpr unsigned int GameFlowHelper_TypeDefinitionIndex = 61428;

	class GameFlowHelper : public ::System::Object
	{
	public:
		static ::System::Boolean TryGotoGameFlow(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>* a2)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEFLOWHELPER_TRYGOTOGAMEFLOW_OFFSET))(a1, a2);
		}

		static ::System::Boolean CheckCanGotoGameFlow(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>* a2)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEFLOWHELPER_CHECKCANGOTOGAMEFLOW_OFFSET))(a1, a2);
		}

		static ::Class_1_B823313B2CC4BC8E* _CreateGotoParams(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>* a2)
		{
			return ((::Class_1_B823313B2CC4BC8E*(*)(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEFLOWHELPER__CREATEGOTOPARAMS_OFFSET))(a1, a2);
		}

		static ::System::Boolean _CheckParamValid(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>* a2)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEFLOWHELPER__CHECKPARAMVALID_OFFSET))(a1, a2);
		}
	};
}
