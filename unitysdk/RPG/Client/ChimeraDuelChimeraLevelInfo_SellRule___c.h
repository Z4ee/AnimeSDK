#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DynamicValue; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_SELLRULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA004320)
#define RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_SELLRULE___C__CREATEWITHCONSTVALUES_B__1_0_OFFSET UNITYSDK_OFFSET(0xA004360)
#define RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_SELLRULE___C__CREATEWITHCONSTVALUES_B__1_1_OFFSET UNITYSDK_OFFSET(0xA0043C0)
#define RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_SELLRULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA004350)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelChimeraLevelInfo_SellRule___c_TypeDefinitionIndex = 58362;

	class ChimeraDuelChimeraLevelInfo_SellRule___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ChimeraDuelChimeraLevelInfo_SellRule___c** StaticGet___9()
		{
			return (::RPG::Client::ChimeraDuelChimeraLevelInfo_SellRule___c**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelChimeraLevelInfo_SellRule___c_TypeDefinitionIndex)->GetStaticField(0x54EB0);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*>, ::System::Int32>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*>, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelChimeraLevelInfo_SellRule___c_TypeDefinitionIndex)->GetStaticField(0x54EB8);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*>, ::System::Int32>** StaticGet___9__1_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*>, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelChimeraLevelInfo_SellRule___c_TypeDefinitionIndex)->GetStaticField(0x54EC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_SELLRULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_SELLRULE___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _CreateWithConstValues_b__1_0(::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*> p)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_SELLRULE___C__CREATEWITHCONSTVALUES_B__1_0_OFFSET))(this, p);
		}

		::System::Int32 _CreateWithConstValues_b__1_1(::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*> p)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_SELLRULE___C__CREATEWITHCONSTVALUES_B__1_1_OFFSET))(this, p);
		}
	};
}
