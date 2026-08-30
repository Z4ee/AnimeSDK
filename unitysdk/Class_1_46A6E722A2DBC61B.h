#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarSkillTreeAnchorType.h"
#include "unitysdk/Struct_2_BC950E36747FB4C9.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_46A6E722A2DBC61B_METHOD_1_28F5A9EB02018B43_OFFSET UNITYSDK_OFFSET(0xBD23E60)
#define CLASS_1_46A6E722A2DBC61B_METHOD_1_670FCB2B9E2FF6DE_OFFSET UNITYSDK_OFFSET(0xBD24030)
#define CLASS_1_46A6E722A2DBC61B_METHOD_1_7043D7C56BCA4898_OFFSET UNITYSDK_OFFSET(0xBD24620)
#define CLASS_1_46A6E722A2DBC61B_METHOD_1_C2EBF5998016ADC5_OFFSET UNITYSDK_OFFSET(0xBD241F0)
#define CLASS_1_46A6E722A2DBC61B__CTOR_OFFSET UNITYSDK_OFFSET(0xBD24540)

inline static constexpr unsigned int Class_1_46A6E722A2DBC61B_TypeDefinitionIndex = 62734;

class Class_1_46A6E722A2DBC61B : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::ValueTuple_2<::Struct_2_BC950E36747FB4C9, ::RPG::GameCore::AvatarSkillTreeAnchorType>>* LCIBIGFOMCA; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarSkillTreeAnchorType, ::System::UInt32>*>* FGKDDIMLIMC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46A6E722A2DBC61B__CTOR_OFFSET))(this);
	}

	::System::ValueTuple_2<::Struct_2_BC950E36747FB4C9, ::RPG::GameCore::AvatarSkillTreeAnchorType> Method_1_28F5A9EB02018B43(::System::UInt32 a1)
	{
		return ((::System::ValueTuple_2<::Struct_2_BC950E36747FB4C9, ::RPG::GameCore::AvatarSkillTreeAnchorType>(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_46A6E722A2DBC61B_METHOD_1_28F5A9EB02018B43_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_670FCB2B9E2FF6DE(::Struct_2_BC950E36747FB4C9& a1, ::RPG::GameCore::AvatarSkillTreeAnchorType a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::Struct_2_BC950E36747FB4C9&, ::RPG::GameCore::AvatarSkillTreeAnchorType))((::PBYTE)hIl2Cpp + CLASS_1_46A6E722A2DBC61B_METHOD_1_670FCB2B9E2FF6DE_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarSkillTreeAnchorType, ::System::UInt32>* Method_1_C2EBF5998016ADC5(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarSkillTreeAnchorType, ::System::UInt32>*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_46A6E722A2DBC61B_METHOD_1_C2EBF5998016ADC5_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_1_7043D7C56BCA4898(::Struct_2_BC950E36747FB4C9& a1, ::RPG::GameCore::AvatarSkillTreeAnchorType a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::Struct_2_BC950E36747FB4C9&, ::RPG::GameCore::AvatarSkillTreeAnchorType))((::PBYTE)hIl2Cpp + CLASS_1_46A6E722A2DBC61B_METHOD_1_7043D7C56BCA4898_OFFSET))(this, a1, a2);
	}
};
