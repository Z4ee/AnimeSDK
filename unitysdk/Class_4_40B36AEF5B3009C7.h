#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_0693CD0AFBBF2A3B.h"

class Class_1_2CE61CB9B2E57F36;
class Class_1_C4FD36003027AC99;
class Class_1_F964FCD89F35B351;
class Class_2_144C2DF8ADB4E702;
class Class_2_49CAB3DE74280C58;
class Class_3_74E033A84A8D01A9;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_4_40B36AEF5B3009C7_METHOD_4_29B5EFE40A60A0E9_OFFSET UNITYSDK_OFFSET(0x12507F30)
#define CLASS_4_40B36AEF5B3009C7_METHOD_4_48A0C5FE11AAF711_OFFSET UNITYSDK_OFFSET(0x12507CF0)
#define CLASS_4_40B36AEF5B3009C7_METHOD_4_6021696F3DBA1254_OFFSET UNITYSDK_OFFSET(0x12507E20)
#define CLASS_4_40B36AEF5B3009C7_METHOD_4_CCDABDC05C4604C8_OFFSET UNITYSDK_OFFSET(0x12508070)
#define CLASS_4_40B36AEF5B3009C7__CTOR_OFFSET UNITYSDK_OFFSET(0x12507DA0)

inline static constexpr unsigned int Class_4_40B36AEF5B3009C7_TypeDefinitionIndex = 71202;

class Class_4_40B36AEF5B3009C7 : public ::Class_3_0693CD0AFBBF2A3B
{
public:
	::Class_1_F964FCD89F35B351* Field_4_2; // 0x30
	::Class_3_74E033A84A8D01A9* Field_4_0; // 0x38
	::Class_1_2CE61CB9B2E57F36* Field_4_1; // 0x40

	::System::Void _ctor(::Class_1_C4FD36003027AC99* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C4FD36003027AC99*))((::PBYTE)hIl2Cpp + CLASS_4_40B36AEF5B3009C7__CTOR_OFFSET))(this, a1);
	}

	::Class_2_144C2DF8ADB4E702* Method_4_48A0C5FE11AAF711()
	{
		return ((::Class_2_144C2DF8ADB4E702*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_40B36AEF5B3009C7_METHOD_4_48A0C5FE11AAF711_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>* Method_4_6021696F3DBA1254(::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>*(*)(::PVOID, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_4_40B36AEF5B3009C7_METHOD_4_6021696F3DBA1254_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>* Method_4_29B5EFE40A60A0E9(::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*>*))((::PBYTE)hIl2Cpp + CLASS_4_40B36AEF5B3009C7_METHOD_4_29B5EFE40A60A0E9_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>* Method_4_CCDABDC05C4604C8(::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>*(*)(::PVOID, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_4_40B36AEF5B3009C7_METHOD_4_CCDABDC05C4604C8_OFFSET))(this, a1);
	}
};
