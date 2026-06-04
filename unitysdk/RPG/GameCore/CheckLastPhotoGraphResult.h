#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PhotoGraphResultContainer; }

#define RPG_GAMECORE_CHECKLASTPHOTOGRAPHRESULT_METHOD_3_27CF7028948930D3_OFFSET UNITYSDK_OFFSET(0x196184D0)
#define RPG_GAMECORE_CHECKLASTPHOTOGRAPHRESULT_METHOD_3_5556A7C83CA726EC_OFFSET UNITYSDK_OFFSET(0x19618450)
#define RPG_GAMECORE_CHECKLASTPHOTOGRAPHRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x196184A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CheckLastPhotoGraphResult_TypeDefinitionIndex = 20405;

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

		static ::System::Void Method_3_5556A7C83CA726EC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CheckLastPhotoGraphResult*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CheckLastPhotoGraphResult*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKLASTPHOTOGRAPHRESULT_METHOD_3_5556A7C83CA726EC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_27CF7028948930D3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CheckLastPhotoGraphResult* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CheckLastPhotoGraphResult*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKLASTPHOTOGRAPHRESULT_METHOD_3_27CF7028948930D3_OFFSET))(a1, a2);
		}
	};
}
