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

#define CLASS_1_8AF8705F4B98F538_CLEAR_OFFSET UNITYSDK_OFFSET(0x10CA5220)
#define CLASS_1_8AF8705F4B98F538_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10CA5260)
#define CLASS_1_8AF8705F4B98F538_METHOD_1_0BC5DCB009F9D7A3_OFFSET UNITYSDK_OFFSET(0x10CA6230)
#define CLASS_1_8AF8705F4B98F538_METHOD_1_43BDCEBE95790DB1_OFFSET UNITYSDK_OFFSET(0x10CA5660)
#define CLASS_1_8AF8705F4B98F538_METHOD_1_476FF6396344B2CE_OFFSET UNITYSDK_OFFSET(0x10CA6B30)
#define CLASS_1_8AF8705F4B98F538_METHOD_1_B30391D33F39CDC1_OFFSET UNITYSDK_OFFSET(0x10CA63D0)
#define CLASS_1_8AF8705F4B98F538_METHOD_1_BDBE5140451AB153_OFFSET UNITYSDK_OFFSET(0x10CA6A40)
#define CLASS_1_8AF8705F4B98F538_METHOD_1_C1380749696FE8E6_OFFSET UNITYSDK_OFFSET(0x10CA67C0)
#define CLASS_1_8AF8705F4B98F538_METHOD_1_C21701A03164B3E2_OFFSET UNITYSDK_OFFSET(0x10CA5A50)
#define CLASS_1_8AF8705F4B98F538_METHOD_1_D8A58CAA5555FD5D_OFFSET UNITYSDK_OFFSET(0x10CA5E40)
#define CLASS_1_8AF8705F4B98F538_METHOD_1_E0A19741303D7DF0_OFFSET UNITYSDK_OFFSET(0x10CA52D0)
#define CLASS_1_8AF8705F4B98F538__CTOR_OFFSET UNITYSDK_OFFSET(0x10CA6CC0)

inline static constexpr unsigned int Class_1_8AF8705F4B98F538_TypeDefinitionIndex = 55030;

class Class_1_8AF8705F4B98F538 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AF8705F4B98F538__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AF8705F4B98F538_CLEAR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AF8705F4B98F538_DISPOSE_OFFSET))(this);
	}

	::System::Int32 Method_1_E0A19741303D7DF0(::RPG::Client::IRogueTournBuildRefDataItem* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::IRogueTournBuildRefDataItem*))((::PBYTE)hIl2Cpp + CLASS_1_8AF8705F4B98F538_METHOD_1_E0A19741303D7DF0_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_43BDCEBE95790DB1(::System::Collections::Generic::IList_1<::RPG::Client::RogueFormulaData*>* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::IList_1<::RPG::Client::RogueFormulaData*>*))((::PBYTE)hIl2Cpp + CLASS_1_8AF8705F4B98F538_METHOD_1_43BDCEBE95790DB1_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C21701A03164B3E2(::System::Collections::Generic::IList_1<::RPG::Client::RogueTournHexData*>* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::IList_1<::RPG::Client::RogueTournHexData*>*))((::PBYTE)hIl2Cpp + CLASS_1_8AF8705F4B98F538_METHOD_1_C21701A03164B3E2_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_D8A58CAA5555FD5D(::System::Collections::Generic::IList_1<::RPG::Client::RogueTournBuildRefTeamData*>* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::IList_1<::RPG::Client::RogueTournBuildRefTeamData*>*))((::PBYTE)hIl2Cpp + CLASS_1_8AF8705F4B98F538_METHOD_1_D8A58CAA5555FD5D_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_0BC5DCB009F9D7A3(::RPG::Client::RogueTournBuildRefTeamData* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueTournBuildRefTeamData*))((::PBYTE)hIl2Cpp + CLASS_1_8AF8705F4B98F538_METHOD_1_0BC5DCB009F9D7A3_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_B30391D33F39CDC1(::System::Collections::Generic::IList_1<::RPG::Client::IRogueTournBuildRefTeamMemberData*>* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::IList_1<::RPG::Client::IRogueTournBuildRefTeamMemberData*>*))((::PBYTE)hIl2Cpp + CLASS_1_8AF8705F4B98F538_METHOD_1_B30391D33F39CDC1_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C1380749696FE8E6(::RPG::Client::IRogueTournBuildRefTeamMemberData* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::IRogueTournBuildRefTeamMemberData*))((::PBYTE)hIl2Cpp + CLASS_1_8AF8705F4B98F538_METHOD_1_C1380749696FE8E6_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_BDBE5140451AB153(::RPG::Client::RogueTournBuildRefTeamAvatarMemberData* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueTournBuildRefTeamAvatarMemberData*))((::PBYTE)hIl2Cpp + CLASS_1_8AF8705F4B98F538_METHOD_1_BDBE5140451AB153_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_476FF6396344B2CE(::RPG::Client::RogueTournBuildRefTeamPathMemberData* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueTournBuildRefTeamPathMemberData*))((::PBYTE)hIl2Cpp + CLASS_1_8AF8705F4B98F538_METHOD_1_476FF6396344B2CE_OFFSET))(this, a1);
	}
};
