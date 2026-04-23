#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixVec2.h"
#include "unitysdk/System/Object.h"

class Class_1_827373C1CEDFE355;
class Class_1_96B2FC181D86CC4A_Class_1_768DEC24E4490E33;
class Class_2_718A51E22CB71EC4;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class RtDefenceStageBornPointInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_96B2FC181D86CC4A_METHOD_1_3353DAED910268C6_OFFSET UNITYSDK_OFFSET(0x12398AC0)
#define CLASS_1_96B2FC181D86CC4A_METHOD_1_479A50DDB6E24D44_OFFSET UNITYSDK_OFFSET(0x123980B0)
#define CLASS_1_96B2FC181D86CC4A_METHOD_1_791318DD9FAFC4FD_OFFSET UNITYSDK_OFFSET(0x12398F40)
#define CLASS_1_96B2FC181D86CC4A_METHOD_1_80D2C0D03D6982F5_OFFSET UNITYSDK_OFFSET(0x12398DF0)
#define CLASS_1_96B2FC181D86CC4A_METHOD_1_9243EB9733069E69_OFFSET UNITYSDK_OFFSET(0x12398810)
#define CLASS_1_96B2FC181D86CC4A_METHOD_1_B88EAB5296D0ED93_OFFSET UNITYSDK_OFFSET(0x12398C10)
#define CLASS_1_96B2FC181D86CC4A_METHOD_1_D4B4B55F3BED347C_OFFSET UNITYSDK_OFFSET(0x12398970)
#define CLASS_1_96B2FC181D86CC4A_METHOD_1_E2CB20B78D34D155_OFFSET UNITYSDK_OFFSET(0x123987A0)
#define CLASS_1_96B2FC181D86CC4A_ONPLUGININIT_OFFSET UNITYSDK_OFFSET(0x12397F50)
#define CLASS_1_96B2FC181D86CC4A_ONPLUGINUNINIT_OFFSET UNITYSDK_OFFSET(0x123986C0)
#define CLASS_1_96B2FC181D86CC4A__CTOR_OFFSET UNITYSDK_OFFSET(0x12399050)

inline static constexpr unsigned int Class_1_96B2FC181D86CC4A_TypeDefinitionIndex = 50083;

class Class_1_96B2FC181D86CC4A : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_96B2FC181D86CC4A_Class_1_768DEC24E4490E33*>* Field_1_2; // 0x10
	::Class_2_718A51E22CB71EC4* Field_1_1; // 0x18
	::RPG::GameCore::GameWorld* Field_1_0; // 0x20
	::System::Collections::Generic::List_1<::RPG::GameCore::FixVec2>* Field_1_3; // 0x28
	::System::Collections::Generic::List_1<::RPG::GameCore::FixVec2>* Field_1_4; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96B2FC181D86CC4A__CTOR_OFFSET))(this);
	}

	::System::Void OnPluginInit(::RPG::GameCore::GameWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + CLASS_1_96B2FC181D86CC4A_ONPLUGININIT_OFFSET))(this, a1);
	}

	::System::Void OnPluginUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96B2FC181D86CC4A_ONPLUGINUNINIT_OFFSET))(this);
	}

	::System::Void Method_1_E2CB20B78D34D155(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_96B2FC181D86CC4A_METHOD_1_E2CB20B78D34D155_OFFSET))(this, a1);
	}

	::System::Void Method_1_9243EB9733069E69(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_96B2FC181D86CC4A_METHOD_1_9243EB9733069E69_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_D4B4B55F3BED347C()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96B2FC181D86CC4A_METHOD_1_D4B4B55F3BED347C_OFFSET))(this);
	}

	::Class_1_96B2FC181D86CC4A_Class_1_768DEC24E4490E33* Method_1_3353DAED910268C6()
	{
		return ((::Class_1_96B2FC181D86CC4A_Class_1_768DEC24E4490E33*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96B2FC181D86CC4A_METHOD_1_3353DAED910268C6_OFFSET))(this);
	}

	::Class_1_96B2FC181D86CC4A_Class_1_768DEC24E4490E33* Method_1_B88EAB5296D0ED93(::Class_1_827373C1CEDFE355* a1)
	{
		return ((::Class_1_96B2FC181D86CC4A_Class_1_768DEC24E4490E33*(*)(::PVOID, ::Class_1_827373C1CEDFE355*))((::PBYTE)hIl2Cpp + CLASS_1_96B2FC181D86CC4A_METHOD_1_B88EAB5296D0ED93_OFFSET))(this, a1);
	}

	::Class_1_96B2FC181D86CC4A_Class_1_768DEC24E4490E33* Method_1_80D2C0D03D6982F5(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_1_96B2FC181D86CC4A_Class_1_768DEC24E4490E33*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_96B2FC181D86CC4A_METHOD_1_80D2C0D03D6982F5_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixVec2 Method_1_791318DD9FAFC4FD()
	{
		return ((::RPG::GameCore::FixVec2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96B2FC181D86CC4A_METHOD_1_791318DD9FAFC4FD_OFFSET))(this);
	}

	::System::Void Method_1_479A50DDB6E24D44(::Il2CppArray<::RPG::GameCore::RtDefenceStageBornPointInfo*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::RtDefenceStageBornPointInfo*>*))((::PBYTE)hIl2Cpp + CLASS_1_96B2FC181D86CC4A_METHOD_1_479A50DDB6E24D44_OFFSET))(this, a1);
	}
};
