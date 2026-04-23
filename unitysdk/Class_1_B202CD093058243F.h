#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueFormulaData; }
namespace RPG::Client { class RogueTournBuildRefTeamData; }
namespace RPG::Client { class RogueTournHexData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }

#define CLASS_1_B202CD093058243F_CLEAR_OFFSET UNITYSDK_OFFSET(0x1238DE60)
#define CLASS_1_B202CD093058243F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1238E0F0)
#define CLASS_1_B202CD093058243F_METHOD_1_084D68472B7EC95D_1_OFFSET UNITYSDK_OFFSET(0x1238E320)
#define CLASS_1_B202CD093058243F_METHOD_1_084D68472B7EC95D_OFFSET UNITYSDK_OFFSET(0x1238E2B0)
#define CLASS_1_B202CD093058243F_METHOD_1_50CC210EDFE9B04E_1_OFFSET UNITYSDK_OFFSET(0x1238E3B0)
#define CLASS_1_B202CD093058243F_METHOD_1_50CC210EDFE9B04E_OFFSET UNITYSDK_OFFSET(0x1238E3A0)
#define CLASS_1_B202CD093058243F_METHOD_1_7012F7834504FD43_1_OFFSET UNITYSDK_OFFSET(0x1238E3D0)
#define CLASS_1_B202CD093058243F_METHOD_1_7012F7834504FD43_OFFSET UNITYSDK_OFFSET(0x1238E3C0)
#define CLASS_1_B202CD093058243F_METHOD_1_84D819F0D7BEF378_1_OFFSET UNITYSDK_OFFSET(0x1238E240)
#define CLASS_1_B202CD093058243F_METHOD_1_84D819F0D7BEF378_OFFSET UNITYSDK_OFFSET(0x1238E1D0)
#define CLASS_1_B202CD093058243F_METHOD_1_C2F8771CBCB46B32_OFFSET UNITYSDK_OFFSET(0x1238E160)
#define CLASS_1_B202CD093058243F_METHOD_1_C76FF4CAC9BB09E4_OFFSET UNITYSDK_OFFSET(0x1238E390)
#define CLASS_1_B202CD093058243F_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1238D0F0)
#define CLASS_1_B202CD093058243F__CTOR_OFFSET UNITYSDK_OFFSET(0x1238CF90)
#define CLASS_1_B202CD093058243F___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1238E3E0)

inline static constexpr unsigned int Class_1_B202CD093058243F_TypeDefinitionIndex = 62221;

class Class_1_B202CD093058243F : public ::System::Object
{
public:
	::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::RogueTournHexData*>* Field_1_8; // 0x10
	::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::RogueTournBuildRefTeamData*>* Field_1_5; // 0x18
	::System::Collections::Generic::List_1<::RPG::Client::RogueTournHexData*>* Field_1_3; // 0x20
	::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::RogueFormulaData*>* Field_1_7; // 0x28
	::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaData*>* Field_1_1; // 0x30
	::System::Collections::Generic::List_1<::RPG::Client::RogueTournHexData*>* Field_1_4; // 0x38
	::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::RogueFormulaData*>* Field_1_6; // 0x40
	::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaData*>* Field_1_2; // 0x48
	::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::RogueTournHexData*>* Field_1_9; // 0x50
	::System::Collections::Generic::List_1<::RPG::Client::RogueTournBuildRefTeamData*>* Field_1_0; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B202CD093058243F__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B202CD093058243F_TOSTRING_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B202CD093058243F_CLEAR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B202CD093058243F_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_C2F8771CBCB46B32(::RPG::Client::RogueTournBuildRefTeamData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournBuildRefTeamData*))((::PBYTE)hIl2Cpp + CLASS_1_B202CD093058243F_METHOD_1_C2F8771CBCB46B32_OFFSET))(this, a1);
	}

	::System::Void Method_1_84D819F0D7BEF378(::RPG::Client::RogueFormulaData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueFormulaData*))((::PBYTE)hIl2Cpp + CLASS_1_B202CD093058243F_METHOD_1_84D819F0D7BEF378_OFFSET))(this, a1);
	}

	::System::Void Method_1_84D819F0D7BEF378_1(::RPG::Client::RogueFormulaData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueFormulaData*))((::PBYTE)hIl2Cpp + CLASS_1_B202CD093058243F_METHOD_1_84D819F0D7BEF378_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_084D68472B7EC95D(::RPG::Client::RogueTournHexData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournHexData*))((::PBYTE)hIl2Cpp + CLASS_1_B202CD093058243F_METHOD_1_084D68472B7EC95D_OFFSET))(this, a1);
	}

	::System::Void Method_1_084D68472B7EC95D_1(::RPG::Client::RogueTournHexData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournHexData*))((::PBYTE)hIl2Cpp + CLASS_1_B202CD093058243F_METHOD_1_084D68472B7EC95D_1_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IList_1<::RPG::Client::RogueTournBuildRefTeamData*>* Method_1_C76FF4CAC9BB09E4()
	{
		return ((::System::Collections::Generic::IList_1<::RPG::Client::RogueTournBuildRefTeamData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B202CD093058243F_METHOD_1_C76FF4CAC9BB09E4_OFFSET))(this);
	}

	::System::Collections::Generic::IList_1<::RPG::Client::RogueFormulaData*>* Method_1_50CC210EDFE9B04E()
	{
		return ((::System::Collections::Generic::IList_1<::RPG::Client::RogueFormulaData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B202CD093058243F_METHOD_1_50CC210EDFE9B04E_OFFSET))(this);
	}

	::System::Collections::Generic::IList_1<::RPG::Client::RogueFormulaData*>* Method_1_50CC210EDFE9B04E_1()
	{
		return ((::System::Collections::Generic::IList_1<::RPG::Client::RogueFormulaData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B202CD093058243F_METHOD_1_50CC210EDFE9B04E_1_OFFSET))(this);
	}

	::System::Collections::Generic::IList_1<::RPG::Client::RogueTournHexData*>* Method_1_7012F7834504FD43()
	{
		return ((::System::Collections::Generic::IList_1<::RPG::Client::RogueTournHexData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B202CD093058243F_METHOD_1_7012F7834504FD43_OFFSET))(this);
	}

	::System::Collections::Generic::IList_1<::RPG::Client::RogueTournHexData*>* Method_1_7012F7834504FD43_1()
	{
		return ((::System::Collections::Generic::IList_1<::RPG::Client::RogueTournHexData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B202CD093058243F_METHOD_1_7012F7834504FD43_1_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B202CD093058243F___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
