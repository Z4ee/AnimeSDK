#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarSkillTreeAnchorType.h"
#include "unitysdk/Struct_2_BC950E36747FB4C9.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_EFC68C140505275B_METHOD_1_1B87CDF9B47D68E9_OFFSET UNITYSDK_OFFSET(0x10B1C6F0)
#define CLASS_1_EFC68C140505275B_METHOD_1_99F2776D9050706A_OFFSET UNITYSDK_OFFSET(0x10B1C900)
#define CLASS_1_EFC68C140505275B_METHOD_1_9A0AE83FC6A1E9C1_OFFSET UNITYSDK_OFFSET(0x10B1CD70)
#define CLASS_1_EFC68C140505275B_METHOD_1_A713278935EAC498_OFFSET UNITYSDK_OFFSET(0x10B1C590)
#define CLASS_1_EFC68C140505275B__CTOR_OFFSET UNITYSDK_OFFSET(0x10B1CC90)

inline static constexpr unsigned int Class_1_EFC68C140505275B_TypeDefinitionIndex = 50914;

class Class_1_EFC68C140505275B : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarSkillTreeAnchorType, ::System::UInt32>*>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::AvatarSkillTreeAnchorType>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFC68C140505275B__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::AvatarSkillTreeAnchorType Method_1_A713278935EAC498(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::AvatarSkillTreeAnchorType(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EFC68C140505275B_METHOD_1_A713278935EAC498_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_1B87CDF9B47D68E9(::Struct_2_BC950E36747FB4C9& a1, ::RPG::GameCore::AvatarSkillTreeAnchorType a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::Struct_2_BC950E36747FB4C9&, ::RPG::GameCore::AvatarSkillTreeAnchorType))((::PBYTE)hIl2Cpp + CLASS_1_EFC68C140505275B_METHOD_1_1B87CDF9B47D68E9_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarSkillTreeAnchorType, ::System::UInt32>* Method_1_99F2776D9050706A(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarSkillTreeAnchorType, ::System::UInt32>*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EFC68C140505275B_METHOD_1_99F2776D9050706A_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_1_9A0AE83FC6A1E9C1(::Struct_2_BC950E36747FB4C9& a1, ::RPG::GameCore::AvatarSkillTreeAnchorType a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::Struct_2_BC950E36747FB4C9&, ::RPG::GameCore::AvatarSkillTreeAnchorType))((::PBYTE)hIl2Cpp + CLASS_1_EFC68C140505275B_METHOD_1_9A0AE83FC6A1E9C1_OFFSET))(this, a1, a2);
	}
};
