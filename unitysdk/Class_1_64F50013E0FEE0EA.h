#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournBuildRefDataItem; }
namespace RPG::Client { class IRogueTournBuildRefTeamMemberData; }
namespace RPG::Client { class RogueFormulaData; }
namespace RPG::Client { class RogueTournBuildRefTeamAvatarMemberData; }
namespace RPG::Client { class RogueTournBuildRefTeamData; }
namespace RPG::Client { class RogueTournBuildRefTeamPathMemberData; }
namespace RPG::Client { class RogueTournHexData; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_1_64F50013E0FEE0EA_CLEAR_OFFSET UNITYSDK_OFFSET(0x15637DE0)
#define CLASS_1_64F50013E0FEE0EA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15637E20)
#define CLASS_1_64F50013E0FEE0EA_METHOD_1_2C9A202A2EA76ADF_OFFSET UNITYSDK_OFFSET(0x1563A0A0)
#define CLASS_1_64F50013E0FEE0EA_METHOD_1_4A58B57CE6AF343C_OFFSET UNITYSDK_OFFSET(0x15638FA0)
#define CLASS_1_64F50013E0FEE0EA_METHOD_1_644708AFA6751462_OFFSET UNITYSDK_OFFSET(0x15639570)
#define CLASS_1_64F50013E0FEE0EA_METHOD_1_80D266CA6414D25C_OFFSET UNITYSDK_OFFSET(0x156389B0)
#define CLASS_1_64F50013E0FEE0EA_METHOD_1_885495EB8E8CDBAD_OFFSET UNITYSDK_OFFSET(0x15639CE0)
#define CLASS_1_64F50013E0FEE0EA_METHOD_1_C4B22CED049E81B8_OFFSET UNITYSDK_OFFSET(0x1563A180)
#define CLASS_1_64F50013E0FEE0EA_METHOD_1_DB8CFACC790831D3_OFFSET UNITYSDK_OFFSET(0x156383C0)
#define CLASS_1_64F50013E0FEE0EA_METHOD_1_E0A19741303D7DF0_OFFSET UNITYSDK_OFFSET(0x15637E90)
#define CLASS_1_64F50013E0FEE0EA_METHOD_1_E14B285D0B7520C8_OFFSET UNITYSDK_OFFSET(0x15639710)
#define CLASS_1_64F50013E0FEE0EA__CTOR_OFFSET UNITYSDK_OFFSET(0x1563A300)

inline static constexpr unsigned int Class_1_64F50013E0FEE0EA_TypeDefinitionIndex = 64518;

class Class_1_64F50013E0FEE0EA : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64F50013E0FEE0EA__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64F50013E0FEE0EA_CLEAR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64F50013E0FEE0EA_DISPOSE_OFFSET))(this);
	}

	::System::Int32 Method_1_E0A19741303D7DF0(::RPG::Client::IRogueTournBuildRefDataItem* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::IRogueTournBuildRefDataItem*))((::PBYTE)hIl2Cpp + CLASS_1_64F50013E0FEE0EA_METHOD_1_E0A19741303D7DF0_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_DB8CFACC790831D3(::System::Collections::Generic::IList_1<::RPG::Client::RogueFormulaData*>* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::IList_1<::RPG::Client::RogueFormulaData*>*))((::PBYTE)hIl2Cpp + CLASS_1_64F50013E0FEE0EA_METHOD_1_DB8CFACC790831D3_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_80D266CA6414D25C(::System::Collections::Generic::IList_1<::RPG::Client::RogueTournHexData*>* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::IList_1<::RPG::Client::RogueTournHexData*>*))((::PBYTE)hIl2Cpp + CLASS_1_64F50013E0FEE0EA_METHOD_1_80D266CA6414D25C_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_4A58B57CE6AF343C(::System::Collections::Generic::IList_1<::RPG::Client::RogueTournBuildRefTeamData*>* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::IList_1<::RPG::Client::RogueTournBuildRefTeamData*>*))((::PBYTE)hIl2Cpp + CLASS_1_64F50013E0FEE0EA_METHOD_1_4A58B57CE6AF343C_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_644708AFA6751462(::RPG::Client::RogueTournBuildRefTeamData* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueTournBuildRefTeamData*))((::PBYTE)hIl2Cpp + CLASS_1_64F50013E0FEE0EA_METHOD_1_644708AFA6751462_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_E14B285D0B7520C8(::System::Collections::Generic::IList_1<::RPG::Client::IRogueTournBuildRefTeamMemberData*>* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::IList_1<::RPG::Client::IRogueTournBuildRefTeamMemberData*>*))((::PBYTE)hIl2Cpp + CLASS_1_64F50013E0FEE0EA_METHOD_1_E14B285D0B7520C8_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_885495EB8E8CDBAD(::RPG::Client::IRogueTournBuildRefTeamMemberData* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::IRogueTournBuildRefTeamMemberData*))((::PBYTE)hIl2Cpp + CLASS_1_64F50013E0FEE0EA_METHOD_1_885495EB8E8CDBAD_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_2C9A202A2EA76ADF(::RPG::Client::RogueTournBuildRefTeamAvatarMemberData* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueTournBuildRefTeamAvatarMemberData*))((::PBYTE)hIl2Cpp + CLASS_1_64F50013E0FEE0EA_METHOD_1_2C9A202A2EA76ADF_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C4B22CED049E81B8(::RPG::Client::RogueTournBuildRefTeamPathMemberData* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueTournBuildRefTeamPathMemberData*))((::PBYTE)hIl2Cpp + CLASS_1_64F50013E0FEE0EA_METHOD_1_C4B22CED049E81B8_OFFSET))(this, a1);
	}
};
