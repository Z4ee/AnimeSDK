#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_7E850DDB8FBC5CC5;
namespace RPG::Client { class MissionModule; }
namespace RPG::GameCore { class CumulativeScoreBoardConfigData; }
namespace RPG::GameCore { class CumulativeScoreBoardConfigRow; }

#define CLASS_1_9126A20AB7E4E656_METHOD_1_3DC64182395C2CA3_OFFSET UNITYSDK_OFFSET(0x154345B0)
#define CLASS_1_9126A20AB7E4E656_METHOD_1_7EB1399966B33D71_OFFSET UNITYSDK_OFFSET(0x154348F0)
#define CLASS_1_9126A20AB7E4E656_METHOD_1_AA009612CA220737_OFFSET UNITYSDK_OFFSET(0x154343C0)
#define CLASS_1_9126A20AB7E4E656_METHOD_1_AF112CA73B68DB4B_OFFSET UNITYSDK_OFFSET(0x15434DC0)
#define CLASS_1_9126A20AB7E4E656_METHOD_1_F0F249DB4DFA6833_OFFSET UNITYSDK_OFFSET(0x15434C80)
#define CLASS_1_9126A20AB7E4E656__CTOR_OFFSET UNITYSDK_OFFSET(0x15434320)

inline static constexpr unsigned int Class_1_9126A20AB7E4E656_TypeDefinitionIndex = 52377;

class Class_1_9126A20AB7E4E656 : public ::System::Object
{
public:
	::RPG::Client::MissionModule* JOMIMCLABPL; // 0x10
	::RPG::GameCore::CumulativeScoreBoardConfigRow* NOPAMNLEDHK; // 0x18
	::RPG::GameCore::CumulativeScoreBoardConfigData* OPILIGEJFON; // 0x20

	::System::Void _ctor(::Class_3_7E850DDB8FBC5CC5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_7E850DDB8FBC5CC5*))((::PBYTE)hIl2Cpp + CLASS_1_9126A20AB7E4E656__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_AA009612CA220737(::Class_3_7E850DDB8FBC5CC5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_7E850DDB8FBC5CC5*))((::PBYTE)hIl2Cpp + CLASS_1_9126A20AB7E4E656_METHOD_1_AA009612CA220737_OFFSET))(this, a1);
	}

	::System::Void Method_1_3DC64182395C2CA3(::Class_3_7E850DDB8FBC5CC5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_7E850DDB8FBC5CC5*))((::PBYTE)hIl2Cpp + CLASS_1_9126A20AB7E4E656_METHOD_1_3DC64182395C2CA3_OFFSET))(this, a1);
	}

	::System::Void Method_1_7EB1399966B33D71(::Class_3_7E850DDB8FBC5CC5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_7E850DDB8FBC5CC5*))((::PBYTE)hIl2Cpp + CLASS_1_9126A20AB7E4E656_METHOD_1_7EB1399966B33D71_OFFSET))(this, a1);
	}

	::System::UInt64 Method_1_F0F249DB4DFA6833(::System::UInt32 a1)
	{
		return ((::System::UInt64(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9126A20AB7E4E656_METHOD_1_F0F249DB4DFA6833_OFFSET))(this, a1);
	}

	::RPG::GameCore::CumulativeScoreBoardConfigData* Method_1_AF112CA73B68DB4B()
	{
		return ((::RPG::GameCore::CumulativeScoreBoardConfigData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9126A20AB7E4E656_METHOD_1_AF112CA73B68DB4B_OFFSET))(this);
	}
};
