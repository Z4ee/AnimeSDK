#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B823313B2CC4BC8E;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define RPG_CLIENT_GAMEFLOWHELPER_CHECKCANGOTOGAMEFLOW_OFFSET UNITYSDK_OFFSET(0xA41C2A0)
#define RPG_CLIENT_GAMEFLOWHELPER_TRYGOTOGAMEFLOW_OFFSET UNITYSDK_OFFSET(0xA41B420)
#define RPG_CLIENT_GAMEFLOWHELPER__CHECKPARAMVALID_OFFSET UNITYSDK_OFFSET(0xA41B820)
#define RPG_CLIENT_GAMEFLOWHELPER__CREATEGOTOPARAMS_OFFSET UNITYSDK_OFFSET(0xA41B930)

namespace RPG::Client
{
	inline static constexpr unsigned int GameFlowHelper_TypeDefinitionIndex = 59207;

	class GameFlowHelper : public ::System::Object
	{
	public:
		static ::System::Boolean TryGotoGameFlow(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* paramIntList, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>* paramStringList)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEFLOWHELPER_TRYGOTOGAMEFLOW_OFFSET))(paramIntList, paramStringList);
		}

		static ::System::Boolean CheckCanGotoGameFlow(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* paramIntList, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>* paramStringList)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEFLOWHELPER_CHECKCANGOTOGAMEFLOW_OFFSET))(paramIntList, paramStringList);
		}

		static ::Class_1_B823313B2CC4BC8E* _CreateGotoParams(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* paramIntList, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>* paramStringList)
		{
			return ((::Class_1_B823313B2CC4BC8E*(*)(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEFLOWHELPER__CREATEGOTOPARAMS_OFFSET))(paramIntList, paramStringList);
		}

		static ::System::Boolean _CheckParamValid(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* paramIntList, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>* paramStringList)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEFLOWHELPER__CHECKPARAMVALID_OFFSET))(paramIntList, paramStringList);
		}
	};
}
