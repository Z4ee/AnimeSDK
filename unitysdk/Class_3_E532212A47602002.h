#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Class_3_E532212A47602002_Enum_3_51F524C52868AB7D_1.h"
#include "unitysdk/Class_3_E532212A47602002_Enum_3_C2C77892C147D8C5.h"
#include "unitysdk/MoleMole/GameplayTag.h"

class Class_3_E532212A47602002_Class_1_8DD8A1B19ED0F723;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_3_E532212A47602002_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x11106C50)
#define CLASS_3_E532212A47602002_METHOD_3_2A75C47DE3FD20C0_OFFSET UNITYSDK_OFFSET(0x11106E90)
#define CLASS_3_E532212A47602002_METHOD_3_325FFBD339D7C96B_OFFSET UNITYSDK_OFFSET(0x111072B0)
#define CLASS_3_E532212A47602002_METHOD_3_4CC43650BF40B6BA_OFFSET UNITYSDK_OFFSET(0x11106FE0)
#define CLASS_3_E532212A47602002_METHOD_3_5C2D9AB760BDC8AA_OFFSET UNITYSDK_OFFSET(0x11107060)
#define CLASS_3_E532212A47602002_METHOD_3_99D106384CBFBE10_OFFSET UNITYSDK_OFFSET(0x111074E0)
#define CLASS_3_E532212A47602002_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x11106E00)
#define CLASS_3_E532212A47602002_METHOD_3_B1458989740D4D07_OFFSET UNITYSDK_OFFSET(0x11107050)
#define CLASS_3_E532212A47602002_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x11107630)
#define CLASS_3_E532212A47602002_METHOD_3_D5680AD333DB96A5_OFFSET UNITYSDK_OFFSET(0x11107330)
#define CLASS_3_E532212A47602002_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x11106AE0)
#define CLASS_3_E532212A47602002__CCTOR_OFFSET UNITYSDK_OFFSET(0x11106CA0)
#define CLASS_3_E532212A47602002__CTOR_OFFSET UNITYSDK_OFFSET(0x11106D20)

inline static constexpr unsigned int Class_3_E532212A47602002_TypeDefinitionIndex = 77873;

class Class_3_E532212A47602002 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_6 = 0x5; // 0x0
	::System::Collections::Generic::Dictionary_2<::MoleMole::GameplayTag, ::Class_3_E532212A47602002_Class_1_8DD8A1B19ED0F723*>* Field_3_2; // 0x48
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_3_1; // 0x50
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_3_3; // 0x58
	::System::Boolean Field_3_0; // 0x60
	::System::Boolean Field_3_5; // 0x61
	::Class_3_E532212A47602002_Enum_3_51F524C52868AB7D_1 Field_3_4; // 0x64

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_E532212A47602002__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E532212A47602002__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E532212A47602002_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E532212A47602002_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E532212A47602002_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Boolean Method_3_2A75C47DE3FD20C0(::Class_3_E532212A47602002_Enum_3_C2C77892C147D8C5 a1, ::MoleMole::GameplayTag a2, ::Class_3_E532212A47602002_Class_1_8DD8A1B19ED0F723*& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_E532212A47602002_Enum_3_C2C77892C147D8C5, ::MoleMole::GameplayTag, ::Class_3_E532212A47602002_Class_1_8DD8A1B19ED0F723*&))((::PBYTE)hIl2Cpp + CLASS_3_E532212A47602002_METHOD_3_2A75C47DE3FD20C0_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_3_4CC43650BF40B6BA(::System::UInt32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_E532212A47602002_METHOD_3_4CC43650BF40B6BA_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::MoleMole::GameplayTag, ::Class_3_E532212A47602002_Class_1_8DD8A1B19ED0F723*>* Method_3_B1458989740D4D07()
	{
		return ((::System::Collections::Generic::Dictionary_2<::MoleMole::GameplayTag, ::Class_3_E532212A47602002_Class_1_8DD8A1B19ED0F723*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E532212A47602002_METHOD_3_B1458989740D4D07_OFFSET))(this);
	}

	::System::Void Method_3_5C2D9AB760BDC8AA(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_E532212A47602002_METHOD_3_5C2D9AB760BDC8AA_OFFSET))(this, a1);
	}

	::System::Void Method_3_325FFBD339D7C96B(::Class_3_E532212A47602002_Enum_3_C2C77892C147D8C5 a1, ::MoleMole::GameplayTag a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_E532212A47602002_Enum_3_C2C77892C147D8C5, ::MoleMole::GameplayTag))((::PBYTE)hIl2Cpp + CLASS_3_E532212A47602002_METHOD_3_325FFBD339D7C96B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_D5680AD333DB96A5(::Class_3_E532212A47602002_Enum_3_C2C77892C147D8C5 a1, ::MoleMole::GameplayTag a2, ::System::UInt32 a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_E532212A47602002_Enum_3_C2C77892C147D8C5, ::MoleMole::GameplayTag, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_E532212A47602002_METHOD_3_D5680AD333DB96A5_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Int32 Method_3_99D106384CBFBE10()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E532212A47602002_METHOD_3_99D106384CBFBE10_OFFSET))(this);
	}

	static ::Class_3_E532212A47602002* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_E532212A47602002*(*)())((::PBYTE)hIl2Cpp + CLASS_3_E532212A47602002_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}
};
