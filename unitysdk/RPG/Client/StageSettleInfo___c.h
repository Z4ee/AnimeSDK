#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B9E3601D1336B415;
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_STAGESETTLEINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A4F83E0)
#define RPG_CLIENT_STAGESETTLEINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4F8420)
#define RPG_CLIENT_STAGESETTLEINFO___C___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0x1A4F8430)

namespace RPG::Client
{
	inline static constexpr unsigned int StageSettleInfo___c_TypeDefinitionIndex = 61537;

	class StageSettleInfo___c : public ::System::Object
	{
	public:
		static ::RPG::Client::StageSettleInfo___c** StaticGet___9()
		{
			return (::RPG::Client::StageSettleInfo___c**)Il2CppClass::FromTypeDefinitionIndex(StageSettleInfo___c_TypeDefinitionIndex)->GetStaticField(0x316F0);
		}
		static ::System::Func_2<::Class_1_B9E3601D1336B415*, ::System::UInt32>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::Class_1_B9E3601D1336B415*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(StageSettleInfo___c_TypeDefinitionIndex)->GetStaticField(0x316F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGESETTLEINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGESETTLEINFO___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 __ctor_b__0_0(::Class_1_B9E3601D1336B415* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::Class_1_B9E3601D1336B415*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGESETTLEINFO___C___CTOR_B__0_0_OFFSET))(this, a1);
		}
	};
}
