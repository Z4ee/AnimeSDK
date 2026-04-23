#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_823;
namespace RPG::Client { class IRogueTournUnderlineParam; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNUNDERLINEPARAMINFO_CREATE_OFFSET UNITYSDK_OFFSET(0xB0FF4D0)
#define RPG_CLIENT_ROGUETOURNUNDERLINEPARAMINFO_GET_ISAVAILABLE_OFFSET UNITYSDK_OFFSET(0xB115150)
#define RPG_CLIENT_ROGUETOURNUNDERLINEPARAMINFO_GET_PARAMS_OFFSET UNITYSDK_OFFSET(0xB1150D0)
#define RPG_CLIENT_ROGUETOURNUNDERLINEPARAMINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB1151B0)
#define RPG_CLIENT_ROGUETOURNUNDERLINEPARAMINFO__INIT_OFFSET UNITYSDK_OFFSET(0xB1151F0)
#define RPG_CLIENT_ROGUETOURNUNDERLINEPARAMINFO__PARSEHYPERPARAMS_OFFSET UNITYSDK_OFFSET(0xB115240)
#define RPG_CLIENT_ROGUETOURNUNDERLINEPARAMINFO__PARSEHYPERPARAM_OFFSET UNITYSDK_OFFSET(0xB1158C0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournUnderlineParamInfo_TypeDefinitionIndex = 62568;

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

		static ::RPG::Client::RogueTournUnderlineParamInfo* Create(::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_823*>* hyperParams)
		{
			return ((::RPG::Client::RogueTournUnderlineParamInfo*(*)(::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_823*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUNDERLINEPARAMINFO_CREATE_OFFSET))(hyperParams);
		}

		::System::Void _Init(::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_823*>* hyperParams)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_823*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUNDERLINEPARAMINFO__INIT_OFFSET))(this, hyperParams);
		}

		::System::Void _ParseHyperParams(::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_823*>* hyperParams)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_823*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUNDERLINEPARAMINFO__PARSEHYPERPARAMS_OFFSET))(this, hyperParams);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::IRogueTournUnderlineParam*>* _ParseHyperParam(::Class_0_16E4307DCC419505_823* hyperParam)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::IRogueTournUnderlineParam*>*(*)(::PVOID, ::Class_0_16E4307DCC419505_823*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUNDERLINEPARAMINFO__PARSEHYPERPARAM_OFFSET))(this, hyperParam);
		}
	};
}
