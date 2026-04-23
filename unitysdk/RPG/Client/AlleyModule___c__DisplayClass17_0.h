#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MainMissionData; }
namespace RPG::Client::Promises { class Promise; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ALLEYMODULE___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9CFBCF0)
#define RPG_CLIENT_ALLEYMODULE___C__DISPLAYCLASS17_0__REFRESHALLMISSIONDATA_B__0_OFFSET UNITYSDK_OFFSET(0x9D16350)

namespace RPG::Client
{
	inline static constexpr unsigned int AlleyModule___c__DisplayClass17_0_TypeDefinitionIndex = 57420;

	class AlleyModule___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* promise; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYMODULE___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshAllMissionData_b__0(::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYMODULE___C__DISPLAYCLASS17_0__REFRESHALLMISSIONDATA_B__0_OFFSET))(this, _);
		}
	};
}
