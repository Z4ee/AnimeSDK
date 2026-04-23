#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_14.h"
#include "unitysdk/RPG/GameCore/ActivityRank.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_BB48556AAEEB6364_METHOD_1_163BC896CFB0B295_OFFSET UNITYSDK_OFFSET(0x11950590)
#define CLASS_1_BB48556AAEEB6364_METHOD_1_568AE7A1499723FD_OFFSET UNITYSDK_OFFSET(0x119502A0)
#define CLASS_1_BB48556AAEEB6364_METHOD_1_64F0C85A431FBD69_OFFSET UNITYSDK_OFFSET(0x119501E0)
#define CLASS_1_BB48556AAEEB6364_METHOD_1_B81D1D7769661C60_OFFSET UNITYSDK_OFFSET(0x11950490)
#define CLASS_1_BB48556AAEEB6364__CCTOR_OFFSET UNITYSDK_OFFSET(0x11950720)

inline static constexpr unsigned int Class_1_BB48556AAEEB6364_TypeDefinitionIndex = 59062;

class Class_1_BB48556AAEEB6364 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::Enum_3_4608E37A1B3D374A_14, ::RPG::GameCore::ActivityRank>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::Enum_3_4608E37A1B3D374A_14, ::RPG::GameCore::ActivityRank>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BB48556AAEEB6364_TypeDefinitionIndex)->GetStaticField(0x28E40);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BB48556AAEEB6364__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_64F0C85A431FBD69()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_BB48556AAEEB6364_METHOD_1_64F0C85A431FBD69_OFFSET))();
	}

	static ::System::Boolean Method_1_568AE7A1499723FD()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_BB48556AAEEB6364_METHOD_1_568AE7A1499723FD_OFFSET))();
	}

	static ::RPG::GameCore::ActivityRank Method_1_B81D1D7769661C60(::Enum_3_4608E37A1B3D374A_14 a1)
	{
		return ((::RPG::GameCore::ActivityRank(*)(::Enum_3_4608E37A1B3D374A_14))((::PBYTE)hIl2Cpp + CLASS_1_BB48556AAEEB6364_METHOD_1_B81D1D7769661C60_OFFSET))(a1);
	}

	static ::Enum_3_4608E37A1B3D374A_14 Method_1_163BC896CFB0B295(::RPG::GameCore::ActivityRank a1)
	{
		return ((::Enum_3_4608E37A1B3D374A_14(*)(::RPG::GameCore::ActivityRank))((::PBYTE)hIl2Cpp + CLASS_1_BB48556AAEEB6364_METHOD_1_163BC896CFB0B295_OFFSET))(a1);
	}
};
