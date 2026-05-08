#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_AE438EF9E05DB230.h"
#include "unitysdk/Enum_3_B971EC39BFB7701B.h"
#include "unitysdk/Foundation/GameManager_1.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/Struct_2_57B98928537D38DE.h"
#include "unitysdk/Struct_2_8658838487EB8905.h"

class Class_1_27CCD45BA8768483_1;
class Class_1_9264A7B1C422C4C2;
class Class_5_AF65C3A968E836D2;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_1E65D40EFFE16718_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1034E990)
#define CLASS_3_1E65D40EFFE16718_METHOD_3_0EC3817BBE1F6DA4_OFFSET UNITYSDK_OFFSET(0x1034F830)
#define CLASS_3_1E65D40EFFE16718_METHOD_3_1C23CF9DA4652C35_OFFSET UNITYSDK_OFFSET(0x1034EB50)
#define CLASS_3_1E65D40EFFE16718_METHOD_3_213460DF5F68CE80_OFFSET UNITYSDK_OFFSET(0x103513E0)
#define CLASS_3_1E65D40EFFE16718_METHOD_3_456A1E8CFFB1A24C_OFFSET UNITYSDK_OFFSET(0x10351070)
#define CLASS_3_1E65D40EFFE16718_METHOD_3_4B16404ED490414F_OFFSET UNITYSDK_OFFSET(0x103505F0)
#define CLASS_3_1E65D40EFFE16718_METHOD_3_57F14099EF61BD61_OFFSET UNITYSDK_OFFSET(0x103505B0)
#define CLASS_3_1E65D40EFFE16718_METHOD_3_5A124CAF1E48B74F_OFFSET UNITYSDK_OFFSET(0x103503B0)
#define CLASS_3_1E65D40EFFE16718_METHOD_3_5A2E00DE71E49F2E_OFFSET UNITYSDK_OFFSET(0x10350E90)
#define CLASS_3_1E65D40EFFE16718_METHOD_3_5C613AFCCA5E3124_OFFSET UNITYSDK_OFFSET(0x1034F660)
#define CLASS_3_1E65D40EFFE16718_METHOD_3_7BF865E675E51935_OFFSET UNITYSDK_OFFSET(0x10350E00)
#define CLASS_3_1E65D40EFFE16718_METHOD_3_837E0E6CC3826688_OFFSET UNITYSDK_OFFSET(0x10350B80)
#define CLASS_3_1E65D40EFFE16718_METHOD_3_9A433A8074D7736F_OFFSET UNITYSDK_OFFSET(0x1034F730)
#define CLASS_3_1E65D40EFFE16718_METHOD_3_DCC3C25C272660CD_OFFSET UNITYSDK_OFFSET(0x10350210)
#define CLASS_3_1E65D40EFFE16718_METHOD_3_EAA97D013566EE01_OFFSET UNITYSDK_OFFSET(0x103500D0)
#define CLASS_3_1E65D40EFFE16718_METHOD_3_EE70F944517FC510_OFFSET UNITYSDK_OFFSET(0x1034F2E0)
#define CLASS_3_1E65D40EFFE16718_ONCREATE_OFFSET UNITYSDK_OFFSET(0x1034E9D0)
#define CLASS_3_1E65D40EFFE16718_ONSTART_OFFSET UNITYSDK_OFFSET(0x1034EA10)
#define CLASS_3_1E65D40EFFE16718_UPDATE_OFFSET UNITYSDK_OFFSET(0x1034EAF0)
#define CLASS_3_1E65D40EFFE16718__CTOR_OFFSET UNITYSDK_OFFSET(0x1034F0A0)

inline static constexpr unsigned int Class_3_1E65D40EFFE16718_TypeDefinitionIndex = 49734;

class Class_3_1E65D40EFFE16718 : public ::Foundation::GameManager_1<::Class_3_1E65D40EFFE16718*>
{
public:
	// static const ::System::String* Field_3_0; // 0x0
	// static const ::System::String* Field_3_1; // 0x0
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowChessboardUID>* Field_3_3; // 0x10
	::System::Collections::Generic::List_1<::Struct_2_8658838487EB8905>* Field_3_6; // 0x18
	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowChessboardUID, ::Class_1_9264A7B1C422C4C2*>* Field_3_8; // 0x20
	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowChessboardUID, ::Class_1_9264A7B1C422C4C2*>* Field_3_7; // 0x28
	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowChessboardUID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_9264A7B1C422C4C2*>*>* Field_3_5; // 0x30
	::Enum_3_B971EC39BFB7701B Field_3_4; // 0x38
	::System::Boolean Field_3_2; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1E65D40EFFE16718__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1E65D40EFFE16718_DISPOSE_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1E65D40EFFE16718_ONCREATE_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1E65D40EFFE16718_ONSTART_OFFSET))(this);
	}

	::System::Void Update(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_1E65D40EFFE16718_UPDATE_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_EE70F944517FC510(::Struct_2_57B98928537D38DE a1, ::System::Boolean a2, ::System::Collections::Generic::List_1<::Struct_2_8658838487EB8905>*& a3, ::MoleMole::HollowChessboard::HollowChessboardUID a4, ::System::Boolean a5, ::System::Action_1<::Struct_2_8658838487EB8905>* a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_57B98928537D38DE, ::System::Boolean, ::System::Collections::Generic::List_1<::Struct_2_8658838487EB8905>*&, ::MoleMole::HollowChessboard::HollowChessboardUID, ::System::Boolean, ::System::Action_1<::Struct_2_8658838487EB8905>*))((::PBYTE)hIl2Cpp + CLASS_3_1E65D40EFFE16718_METHOD_3_EE70F944517FC510_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_3_5A124CAF1E48B74F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1E65D40EFFE16718_METHOD_3_5A124CAF1E48B74F_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Struct_2_8658838487EB8905>* Method_3_57F14099EF61BD61()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Struct_2_8658838487EB8905>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1E65D40EFFE16718_METHOD_3_57F14099EF61BD61_OFFSET))(this);
	}

	::System::Void Method_3_9A433A8074D7736F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1E65D40EFFE16718_METHOD_3_9A433A8074D7736F_OFFSET))(this);
	}

	::System::Void Method_3_1C23CF9DA4652C35(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_1E65D40EFFE16718_METHOD_3_1C23CF9DA4652C35_OFFSET))(this, a1);
	}

	::System::Void Method_3_DCC3C25C272660CD(::MoleMole::HollowChessboard::HollowChessboardUID a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + CLASS_3_1E65D40EFFE16718_METHOD_3_DCC3C25C272660CD_OFFSET))(this, a1);
	}

	::System::Void Method_3_4B16404ED490414F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1E65D40EFFE16718_METHOD_3_4B16404ED490414F_OFFSET))(this);
	}

	::System::Void Method_3_7BF865E675E51935(::Struct_2_57B98928537D38DE a1, ::MoleMole::HollowChessboard::HollowChessboardUID a2, ::Class_5_AF65C3A968E836D2* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_57B98928537D38DE, ::MoleMole::HollowChessboard::HollowChessboardUID, ::Class_5_AF65C3A968E836D2*))((::PBYTE)hIl2Cpp + CLASS_3_1E65D40EFFE16718_METHOD_3_7BF865E675E51935_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_5A2E00DE71E49F2E(::Struct_2_57B98928537D38DE a1, ::System::Boolean a2, ::System::Collections::Generic::List_1<::Struct_2_8658838487EB8905>*& a3, ::MoleMole::HollowChessboard::HollowChessboardUID a4, ::System::Action_1<::Struct_2_8658838487EB8905>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_57B98928537D38DE, ::System::Boolean, ::System::Collections::Generic::List_1<::Struct_2_8658838487EB8905>*&, ::MoleMole::HollowChessboard::HollowChessboardUID, ::System::Action_1<::Struct_2_8658838487EB8905>*))((::PBYTE)hIl2Cpp + CLASS_3_1E65D40EFFE16718_METHOD_3_5A2E00DE71E49F2E_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_837E0E6CC3826688(::MoleMole::HollowChessboard::HollowChessboardUID a1, ::Enum_3_AE438EF9E05DB230 a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID, ::Enum_3_AE438EF9E05DB230))((::PBYTE)hIl2Cpp + CLASS_3_1E65D40EFFE16718_METHOD_3_837E0E6CC3826688_OFFSET))(this, a1, a2);
	}

	::Class_1_9264A7B1C422C4C2* Method_3_456A1E8CFFB1A24C(::Class_1_27CCD45BA8768483_1* a1, ::Struct_2_57B98928537D38DE a2, ::MoleMole::HollowChessboard::HollowChessboardUID a3)
	{
		return ((::Class_1_9264A7B1C422C4C2*(*)(::PVOID, ::Class_1_27CCD45BA8768483_1*, ::Struct_2_57B98928537D38DE, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + CLASS_3_1E65D40EFFE16718_METHOD_3_456A1E8CFFB1A24C_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_3_EAA97D013566EE01(::MoleMole::HollowChessboard::HollowChessboardUID a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + CLASS_3_1E65D40EFFE16718_METHOD_3_EAA97D013566EE01_OFFSET))(this, a1);
	}

	::Class_1_9264A7B1C422C4C2* Method_3_5C613AFCCA5E3124(::Struct_2_57B98928537D38DE a1, ::MoleMole::HollowChessboard::HollowChessboardUID a2)
	{
		return ((::Class_1_9264A7B1C422C4C2*(*)(::PVOID, ::Struct_2_57B98928537D38DE, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + CLASS_3_1E65D40EFFE16718_METHOD_3_5C613AFCCA5E3124_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Struct_2_8658838487EB8905>* Method_3_0EC3817BBE1F6DA4(::Class_1_9264A7B1C422C4C2* a1, ::Class_1_9264A7B1C422C4C2* a2, ::System::Boolean a3, ::System::Action_1<::Struct_2_8658838487EB8905>* a4)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_8658838487EB8905>*(*)(::PVOID, ::Class_1_9264A7B1C422C4C2*, ::Class_1_9264A7B1C422C4C2*, ::System::Boolean, ::System::Action_1<::Struct_2_8658838487EB8905>*))((::PBYTE)hIl2Cpp + CLASS_3_1E65D40EFFE16718_METHOD_3_0EC3817BBE1F6DA4_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Struct_2_8658838487EB8905>* Method_3_213460DF5F68CE80(::MoleMole::HollowChessboard::HollowChessboardUID a1)
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Struct_2_8658838487EB8905>*(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + CLASS_3_1E65D40EFFE16718_METHOD_3_213460DF5F68CE80_OFFSET))(this, a1);
	}
};
