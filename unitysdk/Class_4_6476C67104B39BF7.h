#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_0118F59C6619CAEE.h"

class Class_4_6A0D46987C287112;
namespace RPG::GameCore { class ChimeraDuelBranchNode; }
namespace RPG::GameCore { class ChimeraDuelModifierContainerNode; }

#define CLASS_4_6476C67104B39BF7_METHOD_4_124142D82AD70FE2_OFFSET UNITYSDK_OFFSET(0xBF4B760)
#define CLASS_4_6476C67104B39BF7_METHOD_4_4A2F2968C3A06BC5_OFFSET UNITYSDK_OFFSET(0xBF4B680)
#define CLASS_4_6476C67104B39BF7_METHOD_4_B1DD4BB2C3755222_OFFSET UNITYSDK_OFFSET(0xBF4B750)
#define CLASS_4_6476C67104B39BF7_METHOD_4_B630A3DE91C4343E_OFFSET UNITYSDK_OFFSET(0xBF4B180)
#define CLASS_4_6476C67104B39BF7__CTOR_OFFSET UNITYSDK_OFFSET(0xBF4B170)

inline static constexpr unsigned int Class_4_6476C67104B39BF7_TypeDefinitionIndex = 72161;

class Class_4_6476C67104B39BF7 : public ::Class_3_0118F59C6619CAEE
{
public:
	::Class_4_6A0D46987C287112* Field_4_0; // 0x20

	::System::Void _ctor(::Class_4_6A0D46987C287112* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_6A0D46987C287112*))((::PBYTE)hIl2Cpp + CLASS_4_6476C67104B39BF7__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_4_B630A3DE91C4343E(::RPG::GameCore::ChimeraDuelModifierContainerNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelModifierContainerNode*))((::PBYTE)hIl2Cpp + CLASS_4_6476C67104B39BF7_METHOD_4_B630A3DE91C4343E_OFFSET))(this, a1);
	}

	::System::Boolean Method_4_4A2F2968C3A06BC5(::RPG::GameCore::ChimeraDuelBranchNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelBranchNode*))((::PBYTE)hIl2Cpp + CLASS_4_6476C67104B39BF7_METHOD_4_4A2F2968C3A06BC5_OFFSET))(this, a1);
	}

	::System::Boolean Method_4_B1DD4BB2C3755222(::RPG::GameCore::ChimeraDuelModifierContainerNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelModifierContainerNode*))((::PBYTE)hIl2Cpp + CLASS_4_6476C67104B39BF7_METHOD_4_B1DD4BB2C3755222_OFFSET))(this, a1);
	}

	::System::Boolean Method_4_124142D82AD70FE2(::RPG::GameCore::ChimeraDuelBranchNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelBranchNode*))((::PBYTE)hIl2Cpp + CLASS_4_6476C67104B39BF7_METHOD_4_124142D82AD70FE2_OFFSET))(this, a1);
	}
};
