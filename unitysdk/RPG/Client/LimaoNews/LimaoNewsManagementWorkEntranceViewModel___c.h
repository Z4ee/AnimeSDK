#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LimaoNews { class LimaoNewsEmployeeCheckData; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTWORKENTRANCEVIEWMODEL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C54DAD0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTWORKENTRANCEVIEWMODEL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C54DB10)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTWORKENTRANCEVIEWMODEL___C___GETFIRSTRECRUITABLEEMPLOYEE_B__7_0_OFFSET UNITYSDK_OFFSET(0x1C54DB20)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsManagementWorkEntranceViewModel___c_TypeDefinitionIndex = 79107;

	class LimaoNewsManagementWorkEntranceViewModel___c : public ::System::Object
	{
	public:
		static ::RPG::Client::LimaoNews::LimaoNewsManagementWorkEntranceViewModel___c** StaticGet___9()
		{
			return (::RPG::Client::LimaoNews::LimaoNewsManagementWorkEntranceViewModel___c**)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsManagementWorkEntranceViewModel___c_TypeDefinitionIndex)->GetStaticField(0x5C020);
		}
		static ::System::Comparison_1<::RPG::Client::LimaoNews::LimaoNewsEmployeeCheckData*>** StaticGet___9__7_0()
		{
			return (::System::Comparison_1<::RPG::Client::LimaoNews::LimaoNewsEmployeeCheckData*>**)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsManagementWorkEntranceViewModel___c_TypeDefinitionIndex)->GetStaticField(0x5C028);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTWORKENTRANCEVIEWMODEL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTWORKENTRANCEVIEWMODEL___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __GetFirstRecruitableEmployee_b__7_0(::RPG::Client::LimaoNews::LimaoNewsEmployeeCheckData* a1, ::RPG::Client::LimaoNews::LimaoNewsEmployeeCheckData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsEmployeeCheckData*, ::RPG::Client::LimaoNews::LimaoNewsEmployeeCheckData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMANAGEMENTWORKENTRANCEVIEWMODEL___C___GETFIRSTRECRUITABLEEMPLOYEE_B__7_0_OFFSET))(this, a1, a2);
		}
	};
}
