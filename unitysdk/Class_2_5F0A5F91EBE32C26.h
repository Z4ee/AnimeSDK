#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F49CA2983DD8D8E6.h"
#include "unitysdk/RPG/GameCore/AnimStateLogicType.h"
#include "unitysdk/RPG/GameCore/AnimStateLogicTypeExtra.h"

class Class_1_216AB6886C5F1D96;
class Class_1_8632A9A99C579E84;
class Class_1_DB457F2E821DD51D;
class Class_2_1DBE0E1023AFDBC5;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_2_5F0A5F91EBE32C26_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11A3D130)
#define CLASS_2_5F0A5F91EBE32C26_METHOD_2_1B9BCD64F419AAE9_OFFSET UNITYSDK_OFFSET(0x11A3D170)
#define CLASS_2_5F0A5F91EBE32C26_METHOD_2_2EA38A17192687F2_OFFSET UNITYSDK_OFFSET(0x11A3E330)
#define CLASS_2_5F0A5F91EBE32C26_METHOD_2_3021F634E77C58A0_OFFSET UNITYSDK_OFFSET(0x11A3E880)
#define CLASS_2_5F0A5F91EBE32C26_METHOD_2_57DD93CAA180892C_OFFSET UNITYSDK_OFFSET(0x11A3E3D0)
#define CLASS_2_5F0A5F91EBE32C26_METHOD_2_6A0EBEECA245A27C_OFFSET UNITYSDK_OFFSET(0x11A3E9D0)
#define CLASS_2_5F0A5F91EBE32C26_METHOD_2_76AAE40741F092B2_OFFSET UNITYSDK_OFFSET(0x11A3EAF0)
#define CLASS_2_5F0A5F91EBE32C26_METHOD_2_793FFA9A76FE6840_OFFSET UNITYSDK_OFFSET(0x11A3EBB0)
#define CLASS_2_5F0A5F91EBE32C26_METHOD_2_BBC18DB5C4EB0820_OFFSET UNITYSDK_OFFSET(0x11A3EA60)
#define CLASS_2_5F0A5F91EBE32C26_METHOD_2_EBE3766AADA23D29_OFFSET UNITYSDK_OFFSET(0x11A3D1C0)
#define CLASS_2_5F0A5F91EBE32C26__CTOR_OFFSET UNITYSDK_OFFSET(0x11A32D40)

inline static constexpr unsigned int Class_2_5F0A5F91EBE32C26_TypeDefinitionIndex = 51587;

class Class_2_5F0A5F91EBE32C26 : public ::Class_1_F49CA2983DD8D8E6
{
public:
	::Il2CppArray<::RPG::GameCore::AnimStateLogicTypeExtra>* Field_2_2; // 0x30
	::Class_1_216AB6886C5F1D96* Field_2_0; // 0x38
	::System::String* Field_2_4; // 0x40
	::System::Boolean Field_2_1; // 0x48
	::System::Single Field_2_3; // 0x4C

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::Class_2_1DBE0E1023AFDBC5* a2, ::Class_1_DB457F2E821DD51D* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_2_1DBE0E1023AFDBC5*, ::Class_1_DB457F2E821DD51D*))((::PBYTE)hIl2Cpp + CLASS_2_5F0A5F91EBE32C26__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F0A5F91EBE32C26_DISPOSE_OFFSET))(this);
	}

	::RPG::GameCore::AnimStateLogicType Method_2_1B9BCD64F419AAE9()
	{
		return ((::RPG::GameCore::AnimStateLogicType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F0A5F91EBE32C26_METHOD_2_1B9BCD64F419AAE9_OFFSET))(this);
	}

	::System::Void Method_2_EBE3766AADA23D29(::RPG::GameCore::AnimStateLogicType a1, ::Class_1_8632A9A99C579E84* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AnimStateLogicType, ::Class_1_8632A9A99C579E84*))((::PBYTE)hIl2Cpp + CLASS_2_5F0A5F91EBE32C26_METHOD_2_EBE3766AADA23D29_OFFSET))(this, a1, a2);
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

	::System::Void Method_2_6A0EBEECA245A27C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F0A5F91EBE32C26_METHOD_2_6A0EBEECA245A27C_OFFSET))(this);
	}

	::System::Void Method_2_793FFA9A76FE6840(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5F0A5F91EBE32C26_METHOD_2_793FFA9A76FE6840_OFFSET))(this, P0);
	}
};
