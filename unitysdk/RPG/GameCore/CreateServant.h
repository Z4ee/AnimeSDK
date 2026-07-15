#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamLocationType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CREATESERVANT_METHOD_3_72F755C00FC88400_OFFSET UNITYSDK_OFFSET(0x1BC3C950)
#define RPG_GAMECORE_CREATESERVANT_METHOD_3_D644100AEC0D4FC2_OFFSET UNITYSDK_OFFSET(0x1BC3C910)
#define RPG_GAMECORE_CREATESERVANT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC3C940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CreateServant_TypeDefinitionIndex = 22155;

	class CreateServant : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* ServantID; // 0x18
		::RPG::GameCore::TargetEvaluator* SpecifyCaster; // 0x20
		::RPG::GameCore::TeamLocationType LocationType; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicFloat*>* DynamicValues; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnServantCreate; // 0x38
		::System::Boolean IsDynamicPreload; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATESERVANT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D644100AEC0D4FC2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CreateServant*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CreateServant*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATESERVANT_METHOD_3_D644100AEC0D4FC2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_72F755C00FC88400(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CreateServant* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CreateServant*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATESERVANT_METHOD_3_72F755C00FC88400_OFFSET))(a1, a2);
		}
	};
}
