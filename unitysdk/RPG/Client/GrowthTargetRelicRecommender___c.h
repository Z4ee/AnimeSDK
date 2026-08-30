#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_GROWTHTARGETRELICRECOMMENDER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD38AB50)
#define RPG_CLIENT_GROWTHTARGETRELICRECOMMENDER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD38AB90)
#define RPG_CLIENT_GROWTHTARGETRELICRECOMMENDER___C__PREPAREDATA_B__7_0_OFFSET UNITYSDK_OFFSET(0xD38ABA0)

namespace RPG::Client
{
	inline static constexpr unsigned int GrowthTargetRelicRecommender___c_TypeDefinitionIndex = 65669;

	class GrowthTargetRelicRecommender___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Exception*>** StaticGet___9__7_0()
		{
			return (::System::Action_1<::System::Exception*>**)Il2CppClass::FromTypeDefinitionIndex(GrowthTargetRelicRecommender___c_TypeDefinitionIndex)->GetStaticField(0x56750);
		}
		static ::RPG::Client::GrowthTargetRelicRecommender___c** StaticGet___9()
		{
			return (::RPG::Client::GrowthTargetRelicRecommender___c**)Il2CppClass::FromTypeDefinitionIndex(GrowthTargetRelicRecommender___c_TypeDefinitionIndex)->GetStaticField(0x56758);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHTARGETRELICRECOMMENDER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHTARGETRELICRECOMMENDER___C__CTOR_OFFSET))(this);
		}

		::System::Void _PrepareData_b__7_0(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHTARGETRELICRECOMMENDER___C__PREPAREDATA_B__7_0_OFFSET))(this, a1);
		}
	};
}
