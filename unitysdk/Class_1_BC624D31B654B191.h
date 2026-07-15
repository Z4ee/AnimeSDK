#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_15.h"
#include "unitysdk/RPG/GameCore/ActivityRank.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_BC624D31B654B191_METHOD_1_64F0C85A431FBD69_OFFSET UNITYSDK_OFFSET(0x14274CC0)
#define CLASS_1_BC624D31B654B191_METHOD_1_6B69D83E7B16D3CC_OFFSET UNITYSDK_OFFSET(0x142750F0)
#define CLASS_1_BC624D31B654B191_METHOD_1_93CC503B8A7E3EEE_OFFSET UNITYSDK_OFFSET(0x14274D80)
#define CLASS_1_BC624D31B654B191_METHOD_1_B81D1D7769661C60_OFFSET UNITYSDK_OFFSET(0x14275000)
#define CLASS_1_BC624D31B654B191__CCTOR_OFFSET UNITYSDK_OFFSET(0x14275250)

inline static constexpr unsigned int Class_1_BC624D31B654B191_TypeDefinitionIndex = 61277;

class Class_1_BC624D31B654B191 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::Enum_3_4608E37A1B3D374A_15, ::RPG::GameCore::ActivityRank>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::Enum_3_4608E37A1B3D374A_15, ::RPG::GameCore::ActivityRank>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BC624D31B654B191_TypeDefinitionIndex)->GetStaticField(0x2FF10);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BC624D31B654B191__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_64F0C85A431FBD69()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_BC624D31B654B191_METHOD_1_64F0C85A431FBD69_OFFSET))();
	}

	static ::System::Boolean Method_1_93CC503B8A7E3EEE()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_BC624D31B654B191_METHOD_1_93CC503B8A7E3EEE_OFFSET))();
	}

	static ::RPG::GameCore::ActivityRank Method_1_B81D1D7769661C60(::Enum_3_4608E37A1B3D374A_15 a1)
	{
		return ((::RPG::GameCore::ActivityRank(*)(::Enum_3_4608E37A1B3D374A_15))((::PBYTE)hIl2Cpp + CLASS_1_BC624D31B654B191_METHOD_1_B81D1D7769661C60_OFFSET))(a1);
	}

	static ::Enum_3_4608E37A1B3D374A_15 Method_1_6B69D83E7B16D3CC(::RPG::GameCore::ActivityRank a1)
	{
		return ((::Enum_3_4608E37A1B3D374A_15(*)(::RPG::GameCore::ActivityRank))((::PBYTE)hIl2Cpp + CLASS_1_BC624D31B654B191_METHOD_1_6B69D83E7B16D3CC_OFFSET))(a1);
	}
};
