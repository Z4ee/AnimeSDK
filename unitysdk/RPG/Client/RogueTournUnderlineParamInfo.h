#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_963;
namespace RPG::Client { class IRogueTournUnderlineParam; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNUNDERLINEPARAMINFO_CREATE_OFFSET UNITYSDK_OFFSET(0x169FB8F0)
#define RPG_CLIENT_ROGUETOURNUNDERLINEPARAMINFO_GET_ISAVAILABLE_OFFSET UNITYSDK_OFFSET(0x169FB890)
#define RPG_CLIENT_ROGUETOURNUNDERLINEPARAMINFO_GET_PARAMS_OFFSET UNITYSDK_OFFSET(0x169FB790)
#define RPG_CLIENT_ROGUETOURNUNDERLINEPARAMINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x169FB9A0)
#define RPG_CLIENT_ROGUETOURNUNDERLINEPARAMINFO__INIT_OFFSET UNITYSDK_OFFSET(0x169FB9E0)
#define RPG_CLIENT_ROGUETOURNUNDERLINEPARAMINFO__PARSEHYPERPARAMS_OFFSET UNITYSDK_OFFSET(0x169FBA30)
#define RPG_CLIENT_ROGUETOURNUNDERLINEPARAMINFO__PARSEHYPERPARAM_OFFSET UNITYSDK_OFFSET(0x169FC430)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournUnderlineParamInfo_TypeDefinitionIndex = 67875;

	class RogueTournUnderlineParamInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::IRogueTournUnderlineParam*>* _Params; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUNDERLINEPARAMINFO__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::IRogueTournUnderlineParam*>* get_Params()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::IRogueTournUnderlineParam*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUNDERLINEPARAMINFO_GET_PARAMS_OFFSET))(this);
		}

		::System::Boolean get_IsAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUNDERLINEPARAMINFO_GET_ISAVAILABLE_OFFSET))(this);
		}

		static ::RPG::Client::RogueTournUnderlineParamInfo* Create(::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_963*>* a1)
		{
			return ((::RPG::Client::RogueTournUnderlineParamInfo*(*)(::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_963*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUNDERLINEPARAMINFO_CREATE_OFFSET))(a1);
		}

		::System::Void _Init(::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_963*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_963*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUNDERLINEPARAMINFO__INIT_OFFSET))(this, a1);
		}

		::System::Void _ParseHyperParams(::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_963*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_963*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUNDERLINEPARAMINFO__PARSEHYPERPARAMS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::IRogueTournUnderlineParam*>* _ParseHyperParam(::Class_0_16E4307DCC419505_963* a1)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::IRogueTournUnderlineParam*>*(*)(::PVOID, ::Class_0_16E4307DCC419505_963*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUNDERLINEPARAMINFO__PARSEHYPERPARAM_OFFSET))(this, a1);
		}
	};
}
