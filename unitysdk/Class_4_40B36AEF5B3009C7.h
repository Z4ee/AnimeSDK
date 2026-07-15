#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_8350EB57484CE308.h"

class Class_1_A92BC063ED2379EB;
class Class_1_B58468E7171EFB5E;
class Class_1_C8B2C21D7F9B1D13;
class Class_2_144C2DF8ADB4E702;
class Class_2_B66C1067C0468FBB;
class Class_3_5A62B20BB82BEBF5;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_4_40B36AEF5B3009C7_METHOD_4_29B5EFE40A60A0E9_OFFSET UNITYSDK_OFFSET(0x18F83460)
#define CLASS_4_40B36AEF5B3009C7_METHOD_4_57E9EA809B95083F_OFFSET UNITYSDK_OFFSET(0x18F83210)
#define CLASS_4_40B36AEF5B3009C7_METHOD_4_6021696F3DBA1254_OFFSET UNITYSDK_OFFSET(0x18F83350)
#define CLASS_4_40B36AEF5B3009C7_METHOD_4_CCDABDC05C4604C8_OFFSET UNITYSDK_OFFSET(0x18F835A0)
#define CLASS_4_40B36AEF5B3009C7__CTOR_OFFSET UNITYSDK_OFFSET(0x18F832D0)

inline static constexpr unsigned int Class_4_40B36AEF5B3009C7_TypeDefinitionIndex = 73665;

class Class_4_40B36AEF5B3009C7 : public ::Class_3_8350EB57484CE308
{
public:
	::Class_1_C8B2C21D7F9B1D13* Field_4_0; // 0x30
	::Class_3_5A62B20BB82BEBF5* Field_4_1; // 0x38
	::Class_1_B58468E7171EFB5E* Field_4_2; // 0x40

	::System::Void _ctor(::Class_1_A92BC063ED2379EB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A92BC063ED2379EB*))((::PBYTE)hIl2Cpp + CLASS_4_40B36AEF5B3009C7__CTOR_OFFSET))(this, a1);
	}

	::Class_2_144C2DF8ADB4E702* Method_4_57E9EA809B95083F()
	{
		return ((::Class_2_144C2DF8ADB4E702*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_40B36AEF5B3009C7_METHOD_4_57E9EA809B95083F_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>* Method_4_6021696F3DBA1254(::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>*(*)(::PVOID, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_4_40B36AEF5B3009C7_METHOD_4_6021696F3DBA1254_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>* Method_4_29B5EFE40A60A0E9(::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*>*))((::PBYTE)hIl2Cpp + CLASS_4_40B36AEF5B3009C7_METHOD_4_29B5EFE40A60A0E9_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>* Method_4_CCDABDC05C4604C8(::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>*(*)(::PVOID, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_4_40B36AEF5B3009C7_METHOD_4_CCDABDC05C4604C8_OFFSET))(this, a1);
	}
};
