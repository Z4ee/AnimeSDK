#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E7EDAB23D97798C5_2;
class Class_1_F487A56015EDF324_2;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class IRogueTournBuildRefTeamMemberData; }
namespace RPG::Client { class RogueFormulaData; }
namespace RPG::Client { class RogueTournBuildRefShareCodeDataItem; }
namespace RPG::Client { class RogueTournBuildRefTeamData; }
namespace RPG::Client { class RogueTournHexData; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_1_65C107EDE7EBB468_METHOD_1_02DEF32F54A66101_OFFSET UNITYSDK_OFFSET(0x1194EC20)
#define CLASS_1_65C107EDE7EBB468_METHOD_1_2F6C9BB7757F3AB6_OFFSET UNITYSDK_OFFSET(0x1194E9A0)
#define CLASS_1_65C107EDE7EBB468_METHOD_1_8D37F3FE9075F3BC_OFFSET UNITYSDK_OFFSET(0x1194EF40)
#define CLASS_1_65C107EDE7EBB468_METHOD_1_BB13EFE3005ACADA_OFFSET UNITYSDK_OFFSET(0x1194F260)
#define CLASS_1_65C107EDE7EBB468_METHOD_1_F7DA3E079EA22DF5_OFFSET UNITYSDK_OFFSET(0x1194FD50)
#define CLASS_1_65C107EDE7EBB468__CTOR_OFFSET UNITYSDK_OFFSET(0x1194FF80)

inline static constexpr unsigned int Class_1_65C107EDE7EBB468_TypeDefinitionIndex = 62262;

class Class_1_65C107EDE7EBB468 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65C107EDE7EBB468__CTOR_OFFSET))(this);
	}

	::Class_1_E7EDAB23D97798C5_2* Method_1_2F6C9BB7757F3AB6(::RPG::Client::RogueTournBuildRefShareCodeDataItem* a1)
	{
		return ((::Class_1_E7EDAB23D97798C5_2*(*)(::PVOID, ::RPG::Client::RogueTournBuildRefShareCodeDataItem*))((::PBYTE)hIl2Cpp + CLASS_1_65C107EDE7EBB468_METHOD_1_2F6C9BB7757F3AB6_OFFSET))(this, a1);
	}

	::System::Void Method_1_02DEF32F54A66101(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a1, ::System::Collections::Generic::IList_1<::RPG::Client::RogueFormulaData*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*, ::System::Collections::Generic::IList_1<::RPG::Client::RogueFormulaData*>*))((::PBYTE)hIl2Cpp + CLASS_1_65C107EDE7EBB468_METHOD_1_02DEF32F54A66101_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8D37F3FE9075F3BC(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a1, ::System::Collections::Generic::IList_1<::RPG::Client::RogueTournHexData*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*, ::System::Collections::Generic::IList_1<::RPG::Client::RogueTournHexData*>*))((::PBYTE)hIl2Cpp + CLASS_1_65C107EDE7EBB468_METHOD_1_8D37F3FE9075F3BC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BB13EFE3005ACADA(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_F487A56015EDF324_2*>* a1, ::System::Collections::Generic::IList_1<::RPG::Client::RogueTournBuildRefTeamData*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_F487A56015EDF324_2*>*, ::System::Collections::Generic::IList_1<::RPG::Client::RogueTournBuildRefTeamData*>*))((::PBYTE)hIl2Cpp + CLASS_1_65C107EDE7EBB468_METHOD_1_BB13EFE3005ACADA_OFFSET))(this, a1, a2);
	}

	::Class_1_F487A56015EDF324_2* Method_1_F7DA3E079EA22DF5(::RPG::Client::IRogueTournBuildRefTeamMemberData* a1)
	{
		return ((::Class_1_F487A56015EDF324_2*(*)(::PVOID, ::RPG::Client::IRogueTournBuildRefTeamMemberData*))((::PBYTE)hIl2Cpp + CLASS_1_65C107EDE7EBB468_METHOD_1_F7DA3E079EA22DF5_OFFSET))(this, a1);
	}
};
