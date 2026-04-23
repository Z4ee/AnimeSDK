#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C411A3DD6A930CFA.h"
#include "unitysdk/Class_2_24DD992906F392EB_Struct_2_8D824B745BE0C372.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RtModifierBehaviorLifeBinding.h"
#include "unitysdk/RPG/GameCore/RtSkillPropertyType.h"

class Class_1_05E595DC72CB83CA;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_24DD992906F392EB_METHOD_2_06CBBB3CC85FFF5B_OFFSET UNITYSDK_OFFSET(0x12330A30)
#define CLASS_2_24DD992906F392EB_METHOD_2_1CDA0051FD244886_OFFSET UNITYSDK_OFFSET(0x12330B20)
#define CLASS_2_24DD992906F392EB_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x12330DD0)
#define CLASS_2_24DD992906F392EB_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x12330D70)
#define CLASS_2_24DD992906F392EB_METHOD_2_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0x12330AB0)
#define CLASS_2_24DD992906F392EB_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x12330A40)
#define CLASS_2_24DD992906F392EB_METHOD_2_D970FB180EC58CD8_OFFSET UNITYSDK_OFFSET(0x12330C20)
#define CLASS_2_24DD992906F392EB__CTOR_OFFSET UNITYSDK_OFFSET(0x12330CD0)

inline static constexpr unsigned int Class_2_24DD992906F392EB_TypeDefinitionIndex = 49546;

class Class_2_24DD992906F392EB : public ::Class_1_C411A3DD6A930CFA
{
public:
	::System::Collections::Generic::List_1<::Class_2_24DD992906F392EB_Struct_2_8D824B745BE0C372>* Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24DD992906F392EB__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::RtModifierBehaviorLifeBinding Method_2_06CBBB3CC85FFF5B()
	{
		return ((::RPG::GameCore::RtModifierBehaviorLifeBinding(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24DD992906F392EB_METHOD_2_06CBBB3CC85FFF5B_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24DD992906F392EB_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24DD992906F392EB_METHOD_2_9681042564541CD6_1_OFFSET))(this);
	}

	::System::Void Method_2_D970FB180EC58CD8(::Class_1_05E595DC72CB83CA* a1, ::RPG::GameCore::RtSkillPropertyType a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_05E595DC72CB83CA*, ::RPG::GameCore::RtSkillPropertyType, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_24DD992906F392EB_METHOD_2_D970FB180EC58CD8_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_1CDA0051FD244886()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24DD992906F392EB_METHOD_2_1CDA0051FD244886_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24DD992906F392EB_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24DD992906F392EB_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}
};
