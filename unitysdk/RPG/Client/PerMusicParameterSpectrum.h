#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PerStateParamSpectrum; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PERMUSICPARAMETERSPECTRUM__CTOR_OFFSET UNITYSDK_OFFSET(0x9F24F70)

namespace RPG::Client
{
	inline static constexpr unsigned int PerMusicParameterSpectrum_TypeDefinitionIndex = 58024;

	class PerMusicParameterSpectrum : public ::System::Object
	{
	public:
		::System::Int32 PerMusicValue0; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::PerStateParamSpectrum*>* StateParamsList; // 0x18
		::RPG::Client::PerStateParamSpectrum* OldStateParam; // 0x20
		::RPG::Client::PerStateParamSpectrum* NewStateParam; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERMUSICPARAMETERSPECTRUM__CTOR_OFFSET))(this);
		}
	};
}
