#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PhotoGraphModeType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PHOTOGRAPHSHOWIDENTIFYRESULT_METHOD_3_267BB3982C9C1610_OFFSET UNITYSDK_OFFSET(0x19A0A1D0)
#define RPG_GAMECORE_PHOTOGRAPHSHOWIDENTIFYRESULT_METHOD_3_AD222197BE71947D_OFFSET UNITYSDK_OFFSET(0x19A0A250)
#define RPG_GAMECORE_PHOTOGRAPHSHOWIDENTIFYRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x19A0A220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhotoGraphShowIdentifyResult_TypeDefinitionIndex = 20445;

	class PhotoGraphShowIdentifyResult : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsIdentifySuccess; // 0x18
		::System::Boolean IsShowToast; // 0x19
		::RPG::Client::TextID ToastText; // 0x20
		::System::Boolean IsShowAim; // 0x30
		::RPG::GameCore::PhotoGraphModeType PhotoGraphMode; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHSHOWIDENTIFYRESULT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_267BB3982C9C1610(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PhotoGraphShowIdentifyResult*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PhotoGraphShowIdentifyResult*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHSHOWIDENTIFYRESULT_METHOD_3_267BB3982C9C1610_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AD222197BE71947D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PhotoGraphShowIdentifyResult* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PhotoGraphShowIdentifyResult*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHSHOWIDENTIFYRESULT_METHOD_3_AD222197BE71947D_OFFSET))(a1, a2);
		}
	};
}
