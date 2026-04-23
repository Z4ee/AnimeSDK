#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PhotoGraphResultContainer; }

#define RPG_GAMECORE_CHECKLASTPHOTOGRAPHRESULT_METHOD_3_92A1C58714E5D015_OFFSET UNITYSDK_OFFSET(0x187DAA60)
#define RPG_GAMECORE_CHECKLASTPHOTOGRAPHRESULT_METHOD_3_A0DE990EEC9E1A02_OFFSET UNITYSDK_OFFSET(0x187DA9E0)
#define RPG_GAMECORE_CHECKLASTPHOTOGRAPHRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x187DAA30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CheckLastPhotoGraphResult_TypeDefinitionIndex = 20466;

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

		static ::System::Void Method_3_A0DE990EEC9E1A02(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CheckLastPhotoGraphResult*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CheckLastPhotoGraphResult*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKLASTPHOTOGRAPHRESULT_METHOD_3_A0DE990EEC9E1A02_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_92A1C58714E5D015(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CheckLastPhotoGraphResult* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CheckLastPhotoGraphResult*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKLASTPHOTOGRAPHRESULT_METHOD_3_92A1C58714E5D015_OFFSET))(a1, a2);
		}
	};
}
