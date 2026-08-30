#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PhotoGraphResultContainer; }

#define RPG_GAMECORE_CHECKLASTPHOTOGRAPHRESULT_METHOD_3_27CF7028948930D3_OFFSET UNITYSDK_OFFSET(0x1E0034A0)
#define RPG_GAMECORE_CHECKLASTPHOTOGRAPHRESULT_METHOD_3_B89D8985FDF8EF1E_OFFSET UNITYSDK_OFFSET(0x1E003460)
#define RPG_GAMECORE_CHECKLASTPHOTOGRAPHRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E003490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CheckLastPhotoGraphResult_TypeDefinitionIndex = 21376;

	class CheckLastPhotoGraphResult : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::PhotoGraphResultContainer* LastResultContainer; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSuccess; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnFail; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKLASTPHOTOGRAPHRESULT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B89D8985FDF8EF1E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CheckLastPhotoGraphResult*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CheckLastPhotoGraphResult*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKLASTPHOTOGRAPHRESULT_METHOD_3_B89D8985FDF8EF1E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_27CF7028948930D3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CheckLastPhotoGraphResult* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CheckLastPhotoGraphResult*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKLASTPHOTOGRAPHRESULT_METHOD_3_27CF7028948930D3_OFFSET))(a1, a2);
		}
	};
}
