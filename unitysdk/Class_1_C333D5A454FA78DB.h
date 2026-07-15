#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimChestState.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_162;
class Class_1_EBB304FBF0D71A99;
namespace RPG::GameCore { class FiveDimChestConfig; }
namespace System { class String; }

#define CLASS_1_C333D5A454FA78DB_METHOD_1_0E1785B6B61973CD_OFFSET UNITYSDK_OFFSET(0x187DF790)
#define CLASS_1_C333D5A454FA78DB_METHOD_1_5C6E8524D640F440_OFFSET UNITYSDK_OFFSET(0x187DFC20)
#define CLASS_1_C333D5A454FA78DB_METHOD_1_A9F84C7ABB963EA4_OFFSET UNITYSDK_OFFSET(0x187DF980)
#define CLASS_1_C333D5A454FA78DB_METHOD_1_ACC6B73F43B34F98_OFFSET UNITYSDK_OFFSET(0x187DF850)
#define CLASS_1_C333D5A454FA78DB_METHOD_1_B16D9898D32BE2B3_OFFSET UNITYSDK_OFFSET(0x187DFAD0)

inline static constexpr unsigned int Class_1_C333D5A454FA78DB_TypeDefinitionIndex = 39701;

class Class_1_C333D5A454FA78DB : public ::System::Object
{
public:
	static ::Class_1_EBB304FBF0D71A99* Method_1_0E1785B6B61973CD(::Class_0_16E4307DCC419505_162* a1)
	{
		return ((::Class_1_EBB304FBF0D71A99*(*)(::Class_0_16E4307DCC419505_162*))((::PBYTE)hIl2Cpp + CLASS_1_C333D5A454FA78DB_METHOD_1_0E1785B6B61973CD_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_ACC6B73F43B34F98(::Class_0_16E4307DCC419505_162* a1)
	{
		return ((::System::Boolean(*)(::Class_0_16E4307DCC419505_162*))((::PBYTE)hIl2Cpp + CLASS_1_C333D5A454FA78DB_METHOD_1_ACC6B73F43B34F98_OFFSET))(a1);
	}

	static ::System::Void Method_1_A9F84C7ABB963EA4(::Class_0_16E4307DCC419505_162* a1, ::RPG::GameCore::FiveDimChestConfig* a2, ::System::Boolean a3, ::System::Int32 a4, ::RPG::GameCore::FiveDimChestState a5, ::System::String* a6)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_162*, ::RPG::GameCore::FiveDimChestConfig*, ::System::Boolean, ::System::Int32, ::RPG::GameCore::FiveDimChestState, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C333D5A454FA78DB_METHOD_1_A9F84C7ABB963EA4_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_1_B16D9898D32BE2B3(::Class_0_16E4307DCC419505_162* a1, ::RPG::GameCore::FiveDimChestConfig* a2, ::System::Boolean a3, ::System::Int32 a4, ::RPG::GameCore::FiveDimChestState a5, ::System::String* a6)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_162*, ::RPG::GameCore::FiveDimChestConfig*, ::System::Boolean, ::System::Int32, ::RPG::GameCore::FiveDimChestState, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C333D5A454FA78DB_METHOD_1_B16D9898D32BE2B3_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_1_5C6E8524D640F440(::Class_0_16E4307DCC419505_162* a1)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_162*))((::PBYTE)hIl2Cpp + CLASS_1_C333D5A454FA78DB_METHOD_1_5C6E8524D640F440_OFFSET))(a1);
	}
};
