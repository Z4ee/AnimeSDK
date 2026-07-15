#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_E7D29F43FB80184D;
namespace RPG::Client::TeamTowers { class TeamTowersGameStageStarInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMESTARSVIEWMODEL_GETSTARVIEWMODELS_OFFSET UNITYSDK_OFFSET(0x1857AFA0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMESTARSVIEWMODEL_REFRESH_OFFSET UNITYSDK_OFFSET(0x1857AC70)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMESTARSVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1857AC60)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMESTARSVIEWMODEL__INITSTARVIEWMODELS_OFFSET UNITYSDK_OFFSET(0x1857B000)

namespace RPG::Client::TeamTowers
{
	inline static constexpr unsigned int TeamTowersGameStarsViewModel_TypeDefinitionIndex = 75092;

	class TeamTowersGameStarsViewModel : public ::System::Object
	{
	public:
		::Class_3_E7D29F43FB80184D* _OwnerGame; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::TeamTowers::TeamTowersGameStageStarInfo*>* _StarViewModels; // 0x18

		::System::Void _ctor(::Class_3_E7D29F43FB80184D* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_E7D29F43FB80184D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMESTARSVIEWMODEL__CTOR_OFFSET))(this, a1);
		}

		::System::Void Refresh(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMESTARSVIEWMODEL_REFRESH_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TeamTowers::TeamTowersGameStageStarInfo*>* GetStarViewModels()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TeamTowers::TeamTowersGameStageStarInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMESTARSVIEWMODEL_GETSTARVIEWMODELS_OFFSET))(this);
		}

		::System::Void _InitStarViewModels()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSGAMESTARSVIEWMODEL__INITSTARVIEWMODELS_OFFSET))(this);
		}
	};
}
