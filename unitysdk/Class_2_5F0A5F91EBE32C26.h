#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F49CA2983DD8D8E6.h"
#include "unitysdk/RPG/GameCore/AnimStateLogicType.h"
#include "unitysdk/RPG/GameCore/AnimStateLogicTypeExtra.h"

class Class_1_216AB6886C5F1D96;
class Class_1_CB986F8DD1655D73;
class Class_1_DB457F2E821DD51D;
class Class_2_2461A19B320A03F9;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_2_5F0A5F91EBE32C26_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB9C4D90)
#define CLASS_2_5F0A5F91EBE32C26_METHOD_2_1092C5537716905B_OFFSET UNITYSDK_OFFSET(0xB9C6660)
#define CLASS_2_5F0A5F91EBE32C26_METHOD_2_1B9BCD64F419AAE9_OFFSET UNITYSDK_OFFSET(0xB9C4DD0)
#define CLASS_2_5F0A5F91EBE32C26_METHOD_2_2EA38A17192687F2_OFFSET UNITYSDK_OFFSET(0xB9C5FC0)
#define CLASS_2_5F0A5F91EBE32C26_METHOD_2_3021F634E77C58A0_OFFSET UNITYSDK_OFFSET(0xB9C6510)
#define CLASS_2_5F0A5F91EBE32C26_METHOD_2_46DAEA38718C6D9D_OFFSET UNITYSDK_OFFSET(0xB9C4E20)
#define CLASS_2_5F0A5F91EBE32C26_METHOD_2_57DD93CAA180892C_OFFSET UNITYSDK_OFFSET(0xB9C6060)
#define CLASS_2_5F0A5F91EBE32C26_METHOD_2_76AAE40741F092B2_OFFSET UNITYSDK_OFFSET(0xB9C6780)
#define CLASS_2_5F0A5F91EBE32C26_METHOD_2_BBC18DB5C4EB0820_OFFSET UNITYSDK_OFFSET(0xB9C66F0)
#define CLASS_2_5F0A5F91EBE32C26__CTOR_OFFSET UNITYSDK_OFFSET(0xB9C4CF0)

inline static constexpr unsigned int Class_2_5F0A5F91EBE32C26_TypeDefinitionIndex = 56122;

class Class_2_5F0A5F91EBE32C26 : public ::Class_1_F49CA2983DD8D8E6
{
public:
	::Class_1_216AB6886C5F1D96* MMFHIFKCKEJ; // 0x30
	::Il2CppArray<::RPG::GameCore::AnimStateLogicTypeExtra>* BACFHFAMHIK; // 0x38
	::System::String* DHCHCMHGKKD; // 0x40
	::System::Single LNDOGMCALCN; // 0x48
	::System::Boolean IKHNLAIEIPG; // 0x4C

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::Class_2_2461A19B320A03F9* a2, ::Class_1_DB457F2E821DD51D* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_2_2461A19B320A03F9*, ::Class_1_DB457F2E821DD51D*))((::PBYTE)hIl2Cpp + CLASS_2_5F0A5F91EBE32C26__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F0A5F91EBE32C26_DISPOSE_OFFSET))(this);
	}

	::RPG::GameCore::AnimStateLogicType Method_2_1B9BCD64F419AAE9()
	{
		return ((::RPG::GameCore::AnimStateLogicType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F0A5F91EBE32C26_METHOD_2_1B9BCD64F419AAE9_OFFSET))(this);
	}

	::System::Void Method_2_46DAEA38718C6D9D(::RPG::GameCore::AnimStateLogicType a1, ::Class_1_CB986F8DD1655D73* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AnimStateLogicType, ::Class_1_CB986F8DD1655D73*))((::PBYTE)hIl2Cpp + CLASS_2_5F0A5F91EBE32C26_METHOD_2_46DAEA38718C6D9D_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_57DD93CAA180892C()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F0A5F91EBE32C26_METHOD_2_57DD93CAA180892C_OFFSET))(this);
	}

	::System::Void Method_2_3021F634E77C58A0(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5F0A5F91EBE32C26_METHOD_2_3021F634E77C58A0_OFFSET))(this, a1);
	}

	::System::Void Method_2_BBC18DB5C4EB0820(::RPG::GameCore::AnimStateLogicType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AnimStateLogicType))((::PBYTE)hIl2Cpp + CLASS_2_5F0A5F91EBE32C26_METHOD_2_BBC18DB5C4EB0820_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_2_2EA38A17192687F2(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_5F0A5F91EBE32C26_METHOD_2_2EA38A17192687F2_OFFSET))(a1);
	}

	::System::Boolean Method_2_76AAE40741F092B2(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_5F0A5F91EBE32C26_METHOD_2_76AAE40741F092B2_OFFSET))(this, a1);
	}

	::System::Void Method_2_1092C5537716905B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F0A5F91EBE32C26_METHOD_2_1092C5537716905B_OFFSET))(this);
	}
};
