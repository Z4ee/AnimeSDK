#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A6B0B39A319DDDE2_3;
class Class_1_F487A56015EDF324_12;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class IRogueTournBuildRefTeamMemberData; }
namespace RPG::Client { class RogueFormulaData; }
namespace RPG::Client { class RogueTournBuildRefShareCodeDataItem; }
namespace RPG::Client { class RogueTournBuildRefTeamData; }
namespace RPG::Client { class RogueTournHexData; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_1_9C52959E8D8BC008_METHOD_1_212EC114D13980E3_OFFSET UNITYSDK_OFFSET(0xCA59AF0)
#define CLASS_1_9C52959E8D8BC008_METHOD_1_5ADBF613BAAAE7F4_OFFSET UNITYSDK_OFFSET(0xCA592C0)
#define CLASS_1_9C52959E8D8BC008_METHOD_1_5B91BCF32232B252_OFFSET UNITYSDK_OFFSET(0xCA5ABC0)
#define CLASS_1_9C52959E8D8BC008_METHOD_1_A83DF7315A34AD02_OFFSET UNITYSDK_OFFSET(0xCA59630)
#define CLASS_1_9C52959E8D8BC008_METHOD_1_BB13EFE3005ACADA_OFFSET UNITYSDK_OFFSET(0xCA59FB0)
#define CLASS_1_9C52959E8D8BC008__CTOR_OFFSET UNITYSDK_OFFSET(0xCA5ADD0)

inline static constexpr unsigned int Class_1_9C52959E8D8BC008_TypeDefinitionIndex = 67558;

class Class_1_9C52959E8D8BC008 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C52959E8D8BC008__CTOR_OFFSET))(this);
	}

	::Class_1_A6B0B39A319DDDE2_3* Method_1_5ADBF613BAAAE7F4(::RPG::Client::RogueTournBuildRefShareCodeDataItem* a1)
	{
		return ((::Class_1_A6B0B39A319DDDE2_3*(*)(::PVOID, ::RPG::Client::RogueTournBuildRefShareCodeDataItem*))((::PBYTE)hIl2Cpp + CLASS_1_9C52959E8D8BC008_METHOD_1_5ADBF613BAAAE7F4_OFFSET))(this, a1);
	}

	::System::Void Method_1_A83DF7315A34AD02(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a1, ::System::Collections::Generic::IList_1<::RPG::Client::RogueFormulaData*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*, ::System::Collections::Generic::IList_1<::RPG::Client::RogueFormulaData*>*))((::PBYTE)hIl2Cpp + CLASS_1_9C52959E8D8BC008_METHOD_1_A83DF7315A34AD02_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_212EC114D13980E3(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a1, ::System::Collections::Generic::IList_1<::RPG::Client::RogueTournHexData*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*, ::System::Collections::Generic::IList_1<::RPG::Client::RogueTournHexData*>*))((::PBYTE)hIl2Cpp + CLASS_1_9C52959E8D8BC008_METHOD_1_212EC114D13980E3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BB13EFE3005ACADA(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_F487A56015EDF324_12*>* a1, ::System::Collections::Generic::IList_1<::RPG::Client::RogueTournBuildRefTeamData*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_F487A56015EDF324_12*>*, ::System::Collections::Generic::IList_1<::RPG::Client::RogueTournBuildRefTeamData*>*))((::PBYTE)hIl2Cpp + CLASS_1_9C52959E8D8BC008_METHOD_1_BB13EFE3005ACADA_OFFSET))(this, a1, a2);
	}

	::Class_1_F487A56015EDF324_12* Method_1_5B91BCF32232B252(::RPG::Client::IRogueTournBuildRefTeamMemberData* a1)
	{
		return ((::Class_1_F487A56015EDF324_12*(*)(::PVOID, ::RPG::Client::IRogueTournBuildRefTeamMemberData*))((::PBYTE)hIl2Cpp + CLASS_1_9C52959E8D8BC008_METHOD_1_5B91BCF32232B252_OFFSET))(this, a1);
	}
};
