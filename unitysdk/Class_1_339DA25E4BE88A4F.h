#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueDialogueType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_964;
namespace RPG::GameCore { class RogueNPCConfig; }
namespace RPG::GameCore { class RogueNPCDialogueConfig; }

#define CLASS_1_339DA25E4BE88A4F_METHOD_1_30264B757B048CE6_OFFSET UNITYSDK_OFFSET(0xBEDD6C0)
#define CLASS_1_339DA25E4BE88A4F_METHOD_1_3F32B2FBAEE402A8_OFFSET UNITYSDK_OFFSET(0xBEDD850)
#define CLASS_1_339DA25E4BE88A4F_METHOD_1_80A751D930F59D01_OFFSET UNITYSDK_OFFSET(0xBEDD3B0)
#define CLASS_1_339DA25E4BE88A4F_METHOD_1_BA1CD130AF913E90_OFFSET UNITYSDK_OFFSET(0xBEDD5A0)
#define CLASS_1_339DA25E4BE88A4F_METHOD_1_F0E4FAC8E5EC9E93_OFFSET UNITYSDK_OFFSET(0xBEDD720)
#define CLASS_1_339DA25E4BE88A4F__CTOR_OFFSET UNITYSDK_OFFSET(0xBEDCFE0)

inline static constexpr unsigned int Class_1_339DA25E4BE88A4F_TypeDefinitionIndex = 67294;

class Class_1_339DA25E4BE88A4F : public ::System::Object
{
public:
	::RPG::GameCore::RogueNPCConfig* IGHAHBNLIJA; // 0x10
	::Class_0_16E4307DCC419505_964* IBPBJBOKKMF; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_964* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_964*))((::PBYTE)hIl2Cpp + CLASS_1_339DA25E4BE88A4F__CTOR_OFFSET))(this, a1);
	}

	static ::Class_1_339DA25E4BE88A4F* Method_1_80A751D930F59D01(::System::UInt32 a1)
	{
		return ((::Class_1_339DA25E4BE88A4F*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_339DA25E4BE88A4F_METHOD_1_80A751D930F59D01_OFFSET))(a1);
	}

	::RPG::GameCore::RogueNPCDialogueConfig* Method_1_BA1CD130AF913E90(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::RogueNPCDialogueConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_339DA25E4BE88A4F_METHOD_1_BA1CD130AF913E90_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_F0E4FAC8E5EC9E93()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_339DA25E4BE88A4F_METHOD_1_F0E4FAC8E5EC9E93_OFFSET))(this);
	}

	::RPG::GameCore::RogueDialogueType Method_1_3F32B2FBAEE402A8()
	{
		return ((::RPG::GameCore::RogueDialogueType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_339DA25E4BE88A4F_METHOD_1_3F32B2FBAEE402A8_OFFSET))(this);
	}

	::Il2CppArray<::RPG::GameCore::RogueNPCDialogueConfig*>* Method_1_30264B757B048CE6()
	{
		return ((::Il2CppArray<::RPG::GameCore::RogueNPCDialogueConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_339DA25E4BE88A4F_METHOD_1_30264B757B048CE6_OFFSET))(this);
	}
};
