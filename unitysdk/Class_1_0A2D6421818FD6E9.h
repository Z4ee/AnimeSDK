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

#define CLASS_1_0A2D6421818FD6E9_CLEAR_OFFSET UNITYSDK_OFFSET(0xC364420)
#define CLASS_1_0A2D6421818FD6E9_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC3646B0)
#define CLASS_1_0A2D6421818FD6E9_METHOD_1_008200D36161F4A8_OFFSET UNITYSDK_OFFSET(0xC364A90)
#define CLASS_1_0A2D6421818FD6E9_METHOD_1_0EEF6B9E0BE3913F_1_OFFSET UNITYSDK_OFFSET(0xC364B90)
#define CLASS_1_0A2D6421818FD6E9_METHOD_1_0EEF6B9E0BE3913F_OFFSET UNITYSDK_OFFSET(0xC364B50)
#define CLASS_1_0A2D6421818FD6E9_METHOD_1_3D2E9FC7F8EAFB38_1_OFFSET UNITYSDK_OFFSET(0xC3649E0)
#define CLASS_1_0A2D6421818FD6E9_METHOD_1_3D2E9FC7F8EAFB38_OFFSET UNITYSDK_OFFSET(0xC364930)
#define CLASS_1_0A2D6421818FD6E9_METHOD_1_487460226534EC32_1_OFFSET UNITYSDK_OFFSET(0xC364B10)
#define CLASS_1_0A2D6421818FD6E9_METHOD_1_487460226534EC32_OFFSET UNITYSDK_OFFSET(0xC364AD0)
#define CLASS_1_0A2D6421818FD6E9_METHOD_1_BA4E741D5AD287DD_1_OFFSET UNITYSDK_OFFSET(0xC364880)
#define CLASS_1_0A2D6421818FD6E9_METHOD_1_BA4E741D5AD287DD_OFFSET UNITYSDK_OFFSET(0xC3647D0)
#define CLASS_1_0A2D6421818FD6E9_METHOD_1_F596E8B6F71E55BF_OFFSET UNITYSDK_OFFSET(0xC364720)
#define CLASS_1_0A2D6421818FD6E9_TOSTRING_OFFSET UNITYSDK_OFFSET(0xC363B10)
#define CLASS_1_0A2D6421818FD6E9__CTOR_OFFSET UNITYSDK_OFFSET(0xC363720)

inline static constexpr unsigned int Class_1_0A2D6421818FD6E9_TypeDefinitionIndex = 67517;

class Class_1_0A2D6421818FD6E9 : public ::System::Object
{
public:
	::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::RogueFormulaData*>* CILPDFCFFPB; // 0x10
	::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::RogueTournHexData*>* AKFKIIJKNEI; // 0x18
	::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaData*>* CBHKFBHONGN; // 0x20
	::System::Collections::Generic::List_1<::RPG::Client::RogueTournHexData*>* HGPANPDJBGF; // 0x28
	::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaData*>* EHNDJEFPGDB; // 0x30
	::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::RogueTournHexData*>* JNELDPOCPCJ; // 0x38
	::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::RogueTournBuildRefTeamData*>* HFDKPEFCDJP; // 0x40
	::System::Collections::Generic::List_1<::RPG::Client::RogueTournBuildRefTeamData*>* ABBHEIAHCKI; // 0x48
	::System::Collections::Generic::List_1<::RPG::Client::RogueTournHexData*>* FKGABOBPOGB; // 0x50
	::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::RogueFormulaData*>* MCCPANJOGJH; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A2D6421818FD6E9__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A2D6421818FD6E9_TOSTRING_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A2D6421818FD6E9_CLEAR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A2D6421818FD6E9_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_F596E8B6F71E55BF(::RPG::Client::RogueTournBuildRefTeamData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournBuildRefTeamData*))((::PBYTE)hIl2Cpp + CLASS_1_0A2D6421818FD6E9_METHOD_1_F596E8B6F71E55BF_OFFSET))(this, a1);
	}

	::System::Void Method_1_BA4E741D5AD287DD(::RPG::Client::RogueFormulaData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueFormulaData*))((::PBYTE)hIl2Cpp + CLASS_1_0A2D6421818FD6E9_METHOD_1_BA4E741D5AD287DD_OFFSET))(this, a1);
	}

	::System::Void Method_1_BA4E741D5AD287DD_1(::RPG::Client::RogueFormulaData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueFormulaData*))((::PBYTE)hIl2Cpp + CLASS_1_0A2D6421818FD6E9_METHOD_1_BA4E741D5AD287DD_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_3D2E9FC7F8EAFB38(::RPG::Client::RogueTournHexData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournHexData*))((::PBYTE)hIl2Cpp + CLASS_1_0A2D6421818FD6E9_METHOD_1_3D2E9FC7F8EAFB38_OFFSET))(this, a1);
	}

	::System::Void Method_1_3D2E9FC7F8EAFB38_1(::RPG::Client::RogueTournHexData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournHexData*))((::PBYTE)hIl2Cpp + CLASS_1_0A2D6421818FD6E9_METHOD_1_3D2E9FC7F8EAFB38_1_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IList_1<::RPG::Client::RogueTournBuildRefTeamData*>* Method_1_008200D36161F4A8()
	{
		return ((::System::Collections::Generic::IList_1<::RPG::Client::RogueTournBuildRefTeamData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A2D6421818FD6E9_METHOD_1_008200D36161F4A8_OFFSET))(this);
	}

	::System::Collections::Generic::IList_1<::RPG::Client::RogueFormulaData*>* Method_1_487460226534EC32()
	{
		return ((::System::Collections::Generic::IList_1<::RPG::Client::RogueFormulaData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A2D6421818FD6E9_METHOD_1_487460226534EC32_OFFSET))(this);
	}

	::System::Collections::Generic::IList_1<::RPG::Client::RogueFormulaData*>* Method_1_487460226534EC32_1()
	{
		return ((::System::Collections::Generic::IList_1<::RPG::Client::RogueFormulaData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A2D6421818FD6E9_METHOD_1_487460226534EC32_1_OFFSET))(this);
	}

	::System::Collections::Generic::IList_1<::RPG::Client::RogueTournHexData*>* Method_1_0EEF6B9E0BE3913F()
	{
		return ((::System::Collections::Generic::IList_1<::RPG::Client::RogueTournHexData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A2D6421818FD6E9_METHOD_1_0EEF6B9E0BE3913F_OFFSET))(this);
	}

	::System::Collections::Generic::IList_1<::RPG::Client::RogueTournHexData*>* Method_1_0EEF6B9E0BE3913F_1()
	{
		return ((::System::Collections::Generic::IList_1<::RPG::Client::RogueTournHexData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A2D6421818FD6E9_METHOD_1_0EEF6B9E0BE3913F_1_OFFSET))(this);
	}
};
