#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CharacterSkillCustomStatisticConfig; }
namespace RPG::GameCore { class CharacterSkillStatisticConfig; }
namespace RPG::GameCore { class SkillMaxHitConfigList; }
namespace System { class String; }

#define CLASS_1_AC604BBB73B8F41B_METHOD_1_11310AC9D361756D_OFFSET UNITYSDK_OFFSET(0x112A1DB0)
#define CLASS_1_AC604BBB73B8F41B_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x112A1D60)
#define CLASS_1_AC604BBB73B8F41B_METHOD_1_5D45212808F4212D_OFFSET UNITYSDK_OFFSET(0x112A2000)
#define CLASS_1_AC604BBB73B8F41B_METHOD_1_97B231C192A52EEC_OFFSET UNITYSDK_OFFSET(0x112A2170)
#define CLASS_1_AC604BBB73B8F41B_METHOD_1_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0x112A1C60)

inline static constexpr unsigned int Class_1_AC604BBB73B8F41B_TypeDefinitionIndex = 52742;

class Class_1_AC604BBB73B8F41B : public ::System::Object
{
public:
	static ::RPG::GameCore::CharacterSkillCustomStatisticConfig** StaticGet_Field_1_0()
	{
		return (::RPG::GameCore::CharacterSkillCustomStatisticConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AC604BBB73B8F41B_TypeDefinitionIndex)->GetStaticField(0x15A30);
	}
	static ::RPG::GameCore::CharacterSkillStatisticConfig** StaticGet_Field_1_1()
	{
		return (::RPG::GameCore::CharacterSkillStatisticConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AC604BBB73B8F41B_TypeDefinitionIndex)->GetStaticField(0x15A38);
	}

	static ::System::Void Method_1_F730968E2645E14B()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AC604BBB73B8F41B_METHOD_1_F730968E2645E14B_OFFSET))();
	}

	static ::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AC604BBB73B8F41B_METHOD_1_5790A55946AA509D_OFFSET))();
	}

	static ::System::Int32 Method_1_11310AC9D361756D(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Int32(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_AC604BBB73B8F41B_METHOD_1_11310AC9D361756D_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_5D45212808F4212D(::RPG::GameCore::SkillMaxHitConfigList* a1, ::System::String* a2)
	{
		return ((::System::Int32(*)(::RPG::GameCore::SkillMaxHitConfigList*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_AC604BBB73B8F41B_METHOD_1_5D45212808F4212D_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::CharacterSkillCustomStatisticConfig* Method_1_97B231C192A52EEC()
	{
		return ((::RPG::GameCore::CharacterSkillCustomStatisticConfig*(*)())((::PBYTE)hIl2Cpp + CLASS_1_AC604BBB73B8F41B_METHOD_1_97B231C192A52EEC_OFFSET))();
	}
};
