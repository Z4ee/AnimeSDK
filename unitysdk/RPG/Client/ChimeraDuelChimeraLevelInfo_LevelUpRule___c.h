#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DynamicValue; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_LEVELUPRULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9396050)
#define RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_LEVELUPRULE___C__CREATEWITHCONSTVALUES_B__7_0_OFFSET UNITYSDK_OFFSET(0x9396150)
#define RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_LEVELUPRULE___C__CREATEWITHCONSTVALUES_B__7_1_OFFSET UNITYSDK_OFFSET(0x93961B0)
#define RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_LEVELUPRULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9396080)
#define RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_LEVELUPRULE___C__READCONSTVALUEOFEXPBEFORELEVELUP_B__6_0_OFFSET UNITYSDK_OFFSET(0x9396090)
#define RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_LEVELUPRULE___C__READCONSTVALUEOFEXPBEFORELEVELUP_B__6_1_OFFSET UNITYSDK_OFFSET(0x93960F0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelChimeraLevelInfo_LevelUpRule___c_TypeDefinitionIndex = 51422;

	class ChimeraDuelChimeraLevelInfo_LevelUpRule___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*>, ::System::Int32>** StaticGet___9__6_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*>, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelChimeraLevelInfo_LevelUpRule___c_TypeDefinitionIndex)->GetStaticField(0x46D10);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*>, ::System::Int32>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*>, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelChimeraLevelInfo_LevelUpRule___c_TypeDefinitionIndex)->GetStaticField(0x46D18);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*>, ::System::Int32>** StaticGet___9__7_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*>, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelChimeraLevelInfo_LevelUpRule___c_TypeDefinitionIndex)->GetStaticField(0x46D20);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*>, ::System::Int32>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*>, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelChimeraLevelInfo_LevelUpRule___c_TypeDefinitionIndex)->GetStaticField(0x46D28);
		}
		static ::RPG::Client::ChimeraDuelChimeraLevelInfo_LevelUpRule___c** StaticGet___9()
		{
			return (::RPG::Client::ChimeraDuelChimeraLevelInfo_LevelUpRule___c**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelChimeraLevelInfo_LevelUpRule___c_TypeDefinitionIndex)->GetStaticField(0x46D30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_LEVELUPRULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_LEVELUPRULE___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _ReadConstValueOfExpBeforeLevelUp_b__6_0(::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*> p)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_LEVELUPRULE___C__READCONSTVALUEOFEXPBEFORELEVELUP_B__6_0_OFFSET))(this, p);
		}

		::System::Int32 _ReadConstValueOfExpBeforeLevelUp_b__6_1(::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*> p)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_LEVELUPRULE___C__READCONSTVALUEOFEXPBEFORELEVELUP_B__6_1_OFFSET))(this, p);
		}

		::System::Int32 _CreateWithConstValues_b__7_0(::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*> p)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_LEVELUPRULE___C__CREATEWITHCONSTVALUES_B__7_0_OFFSET))(this, p);
		}

		::System::Int32 _CreateWithConstValues_b__7_1(::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*> p)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_LEVELUPRULE___C__CREATEWITHCONSTVALUES_B__7_1_OFFSET))(this, p);
		}
	};
}
