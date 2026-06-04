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

#define CLASS_1_64F50013E0FEE0EA_CLEAR_OFFSET UNITYSDK_OFFSET(0xA379C50)
#define CLASS_1_64F50013E0FEE0EA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA379C90)
#define CLASS_1_64F50013E0FEE0EA_METHOD_1_2C9A202A2EA76ADF_OFFSET UNITYSDK_OFFSET(0xA37B480)
#define CLASS_1_64F50013E0FEE0EA_METHOD_1_43BDCEBE95790DB1_OFFSET UNITYSDK_OFFSET(0xA37A0A0)
#define CLASS_1_64F50013E0FEE0EA_METHOD_1_644708AFA6751462_OFFSET UNITYSDK_OFFSET(0xA37AC70)
#define CLASS_1_64F50013E0FEE0EA_METHOD_1_691BDEF0E8F0672A_OFFSET UNITYSDK_OFFSET(0xA37AE10)
#define CLASS_1_64F50013E0FEE0EA_METHOD_1_C03D9FBFC43500EE_OFFSET UNITYSDK_OFFSET(0xA37A880)
#define CLASS_1_64F50013E0FEE0EA_METHOD_1_C1380749696FE8E6_OFFSET UNITYSDK_OFFSET(0xA37B200)
#define CLASS_1_64F50013E0FEE0EA_METHOD_1_C21701A03164B3E2_OFFSET UNITYSDK_OFFSET(0xA37A490)
#define CLASS_1_64F50013E0FEE0EA_METHOD_1_C4B22CED049E81B8_OFFSET UNITYSDK_OFFSET(0xA37B560)
#define CLASS_1_64F50013E0FEE0EA_METHOD_1_E0A19741303D7DF0_OFFSET UNITYSDK_OFFSET(0xA379D00)
#define CLASS_1_64F50013E0FEE0EA__CTOR_OFFSET UNITYSDK_OFFSET(0xA37B6E0)

inline static constexpr unsigned int Class_1_64F50013E0FEE0EA_TypeDefinitionIndex = 63151;

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

	::System::Int32 Method_1_43BDCEBE95790DB1(::System::Collections::Generic::IList_1<::RPG::Client::RogueFormulaData*>* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::IList_1<::RPG::Client::RogueFormulaData*>*))((::PBYTE)hIl2Cpp + CLASS_1_64F50013E0FEE0EA_METHOD_1_43BDCEBE95790DB1_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C21701A03164B3E2(::System::Collections::Generic::IList_1<::RPG::Client::RogueTournHexData*>* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::IList_1<::RPG::Client::RogueTournHexData*>*))((::PBYTE)hIl2Cpp + CLASS_1_64F50013E0FEE0EA_METHOD_1_C21701A03164B3E2_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C03D9FBFC43500EE(::System::Collections::Generic::IList_1<::RPG::Client::RogueTournBuildRefTeamData*>* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::IList_1<::RPG::Client::RogueTournBuildRefTeamData*>*))((::PBYTE)hIl2Cpp + CLASS_1_64F50013E0FEE0EA_METHOD_1_C03D9FBFC43500EE_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_644708AFA6751462(::RPG::Client::RogueTournBuildRefTeamData* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueTournBuildRefTeamData*))((::PBYTE)hIl2Cpp + CLASS_1_64F50013E0FEE0EA_METHOD_1_644708AFA6751462_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_691BDEF0E8F0672A(::System::Collections::Generic::IList_1<::RPG::Client::IRogueTournBuildRefTeamMemberData*>* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::IList_1<::RPG::Client::IRogueTournBuildRefTeamMemberData*>*))((::PBYTE)hIl2Cpp + CLASS_1_64F50013E0FEE0EA_METHOD_1_691BDEF0E8F0672A_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C1380749696FE8E6(::RPG::Client::IRogueTournBuildRefTeamMemberData* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::IRogueTournBuildRefTeamMemberData*))((::PBYTE)hIl2Cpp + CLASS_1_64F50013E0FEE0EA_METHOD_1_C1380749696FE8E6_OFFSET))(this, a1);
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
