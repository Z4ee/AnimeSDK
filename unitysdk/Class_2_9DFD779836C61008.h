#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_ED6A06E6F11DAF49.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_0_16E4307DCC419505_773;
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightTrait; }
namespace RPG::GameCore { class AvatarPropertyValue; }

#define CLASS_2_9DFD779836C61008_METHOD_2_1E00B1F74EED64E4_OFFSET UNITYSDK_OFFSET(0xAB11CA0)
#define CLASS_2_9DFD779836C61008_METHOD_2_333CB8DB38F0A8BA_OFFSET UNITYSDK_OFFSET(0xAB11F70)
#define CLASS_2_9DFD779836C61008_METHOD_2_3E22B7B243B63827_OFFSET UNITYSDK_OFFSET(0xAB11B40)
#define CLASS_2_9DFD779836C61008_METHOD_2_A3C36642AA77866E_OFFSET UNITYSDK_OFFSET(0xAB116A0)
#define CLASS_2_9DFD779836C61008_METHOD_2_E906932410FB07A7_OFFSET UNITYSDK_OFFSET(0xAB11E90)
#define CLASS_2_9DFD779836C61008__CTOR_OFFSET UNITYSDK_OFFSET(0xAB11670)

inline static constexpr unsigned int Class_2_9DFD779836C61008_TypeDefinitionIndex = 60900;

class Class_2_9DFD779836C61008 : public ::Class_1_ED6A06E6F11DAF49
{
public:
	::RPG::Client::GridFightRole* Field_2_0; // 0x20
	::Class_0_16E4307DCC419505_773* Field_2_1; // 0x28

	::System::Void _ctor(::RPG::Client::GridFightRole* a1, ::Class_0_16E4307DCC419505_773* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*, ::Class_0_16E4307DCC419505_773*))((::PBYTE)hIl2Cpp + CLASS_2_9DFD779836C61008__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A3C36642AA77866E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9DFD779836C61008_METHOD_2_A3C36642AA77866E_OFFSET))(this);
	}

	::System::Void Method_2_3E22B7B243B63827(::RPG::Client::GridFightTrait* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + CLASS_2_9DFD779836C61008_METHOD_2_3E22B7B243B63827_OFFSET))(this, a1);
	}

	::System::Void Method_2_E906932410FB07A7(::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>* a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_9DFD779836C61008_METHOD_2_E906932410FB07A7_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_333CB8DB38F0A8BA(::RPG::Client::GridFightTrait* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + CLASS_2_9DFD779836C61008_METHOD_2_333CB8DB38F0A8BA_OFFSET))(this, a1);
	}

	::System::Void Method_2_1E00B1F74EED64E4(::RPG::Client::GridFightTrait* a1, ::RPG::GameCore::FixPoint& a2, ::RPG::GameCore::FixPoint& a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTrait*, ::RPG::GameCore::FixPoint&, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + CLASS_2_9DFD779836C61008_METHOD_2_1E00B1F74EED64E4_OFFSET))(this, a1, a2, a3);
	}
};
