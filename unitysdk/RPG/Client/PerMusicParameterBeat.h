#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PerStateParamBeat; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PERMUSICPARAMETERBEAT__CTOR_OFFSET UNITYSDK_OFFSET(0x17F38450)

namespace RPG::Client
{
	inline static constexpr unsigned int PerMusicParameterBeat_TypeDefinitionIndex = 67640;

	class PerMusicParameterBeat : public ::System::Object
	{
	public:
		::System::Single PerMusicValue0; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::PerStateParamBeat*>* StateParamsList; // 0x18
		::RPG::Client::PerStateParamBeat* OldStateParam; // 0x20
		::RPG::Client::PerStateParamBeat* NewStateParam; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERMUSICPARAMETERBEAT__CTOR_OFFSET))(this);
		}
	};
}
