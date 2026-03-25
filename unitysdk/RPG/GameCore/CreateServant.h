#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamLocationType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CREATESERVANT_METHOD_3_04581EF9C04F4BB6_OFFSET UNITYSDK_OFFSET(0x1713E210)
#define RPG_GAMECORE_CREATESERVANT_METHOD_3_11BB7A6D8E737672_OFFSET UNITYSDK_OFFSET(0x1713E290)
#define RPG_GAMECORE_CREATESERVANT__CTOR_OFFSET UNITYSDK_OFFSET(0x1713E260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CreateServant_TypeDefinitionIndex = 21187;

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

		static ::System::Void Method_3_04581EF9C04F4BB6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CreateServant*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CreateServant*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATESERVANT_METHOD_3_04581EF9C04F4BB6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_11BB7A6D8E737672(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CreateServant* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CreateServant*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATESERVANT_METHOD_3_11BB7A6D8E737672_OFFSET))(a1, a2);
		}
	};
}
