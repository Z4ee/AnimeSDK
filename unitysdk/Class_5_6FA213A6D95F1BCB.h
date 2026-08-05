#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_1311FFBCBC750412_1.h"
#include "unitysdk/MoleMole/ELocalPlayType.h"

class Class_2_75783E5AD8A0AC78_1;
class Class_3_67103607A6A39393_2;
namespace MoleMole { class AvatarInitData; }
namespace MoleMole { class InLevelBuddyDataItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_5_6FA213A6D95F1BCB_METHOD_5_09B38A1E91895764_OFFSET UNITYSDK_OFFSET(0x15DE4F50)
#define CLASS_5_6FA213A6D95F1BCB_METHOD_5_0DF420E95D6252BE_OFFSET UNITYSDK_OFFSET(0x15DE5640)
#define CLASS_5_6FA213A6D95F1BCB_METHOD_5_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x15DE4E00)
#define CLASS_5_6FA213A6D95F1BCB_METHOD_5_352BFDE950ED46F2_OFFSET UNITYSDK_OFFSET(0x15DE51C0)
#define CLASS_5_6FA213A6D95F1BCB_METHOD_5_4D61B144924EFCF9_OFFSET UNITYSDK_OFFSET(0x15DE4DA0)
#define CLASS_5_6FA213A6D95F1BCB_METHOD_5_4DECCD32A2859311_OFFSET UNITYSDK_OFFSET(0x15DE59C0)
#define CLASS_5_6FA213A6D95F1BCB_METHOD_5_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x15DE5720)
#define CLASS_5_6FA213A6D95F1BCB_METHOD_5_6A4896182DB906BF_OFFSET UNITYSDK_OFFSET(0x15DE5980)
#define CLASS_5_6FA213A6D95F1BCB_METHOD_5_7864370E119AFC1D_OFFSET UNITYSDK_OFFSET(0x15DE5140)
#define CLASS_5_6FA213A6D95F1BCB_METHOD_5_858CF2EC5EE423D3_OFFSET UNITYSDK_OFFSET(0x15DE5130)
#define CLASS_5_6FA213A6D95F1BCB_METHOD_5_936815BAF051F7E4_OFFSET UNITYSDK_OFFSET(0x15DE5990)
#define CLASS_5_6FA213A6D95F1BCB_METHOD_5_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x15DE50E0)
#define CLASS_5_6FA213A6D95F1BCB_METHOD_5_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x15DE4E70)
#define CLASS_5_6FA213A6D95F1BCB_METHOD_5_C860B930B334C9E8_OFFSET UNITYSDK_OFFSET(0x15DE59A0)
#define CLASS_5_6FA213A6D95F1BCB_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15DE58E0)
#define CLASS_5_6FA213A6D95F1BCB_METHOD_5_CFB4738C97EBA12E_OFFSET UNITYSDK_OFFSET(0x15DE59B0)
#define CLASS_5_6FA213A6D95F1BCB_METHOD_5_E61E6C70D5028651_OFFSET UNITYSDK_OFFSET(0x15DE59E0)
#define CLASS_5_6FA213A6D95F1BCB_METHOD_5_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x15DE58B0)
#define CLASS_5_6FA213A6D95F1BCB_METHOD_5_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0x15DE5970)
#define CLASS_5_6FA213A6D95F1BCB_METHOD_5_FE46CFDD5AFA32C9_OFFSET UNITYSDK_OFFSET(0x15DE4EF0)
#define CLASS_5_6FA213A6D95F1BCB__CTOR_OFFSET UNITYSDK_OFFSET(0x15DE58C0)

inline static constexpr unsigned int Class_5_6FA213A6D95F1BCB_TypeDefinitionIndex = 80129;

class Class_5_6FA213A6D95F1BCB : public ::Class_4_1311FFBCBC750412_1
{
public:
	::System::Int32 Field_5_7; // 0x2D0
	::System::Int32 Field_5_1; // 0x2D4
	::System::Int64 Field_5_0; // 0x2D8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_6FA213A6D95F1BCB__CTOR_OFFSET))(this);
	}

	::System::UInt32 Method_5_4D61B144924EFCF9()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_6FA213A6D95F1BCB_METHOD_5_4D61B144924EFCF9_OFFSET))(this);
	}

	::System::Void Method_5_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_6FA213A6D95F1BCB_METHOD_5_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Int32 Method_5_FE46CFDD5AFA32C9()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_6FA213A6D95F1BCB_METHOD_5_FE46CFDD5AFA32C9_OFFSET))(this);
	}

	::System::Int32 Method_5_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_6FA213A6D95F1BCB_METHOD_5_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::MoleMole::ELocalPlayType Method_5_858CF2EC5EE423D3()
	{
		return ((::MoleMole::ELocalPlayType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_6FA213A6D95F1BCB_METHOD_5_858CF2EC5EE423D3_OFFSET))(this);
	}

	::System::Boolean Method_5_7864370E119AFC1D(::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>*& a1, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*& a2, ::System::Collections::Generic::List_1<::System::Int32>*& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>*&, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*&, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + CLASS_5_6FA213A6D95F1BCB_METHOD_5_7864370E119AFC1D_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_5_0DF420E95D6252BE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_6FA213A6D95F1BCB_METHOD_5_0DF420E95D6252BE_OFFSET))(this);
	}

	::System::Void Method_5_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_6FA213A6D95F1BCB_METHOD_5_508D4DD02D3DB74E_OFFSET))(this);
	}

	::System::Boolean Method_5_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_6FA213A6D95F1BCB_METHOD_5_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_5_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_6FA213A6D95F1BCB_METHOD_5_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_5_F5447CD65612575D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_6FA213A6D95F1BCB_METHOD_5_F5447CD65612575D_OFFSET))(this);
	}

	::System::Int32 Method_5_6A4896182DB906BF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_6FA213A6D95F1BCB_METHOD_5_6A4896182DB906BF_OFFSET))(this);
	}

	::System::Int32 Method_5_936815BAF051F7E4()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_6FA213A6D95F1BCB_METHOD_5_936815BAF051F7E4_OFFSET))(this);
	}

	::System::UInt32 Method_5_C860B930B334C9E8()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_6FA213A6D95F1BCB_METHOD_5_C860B930B334C9E8_OFFSET))(this);
	}

	::System::Void Method_5_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_6FA213A6D95F1BCB_METHOD_5_B1936CE4DA97AA45_OFFSET))(this);
	}

	static ::Class_2_75783E5AD8A0AC78_1* Method_5_09B38A1E91895764(::System::Int32 a1)
	{
		return ((::Class_2_75783E5AD8A0AC78_1*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_5_6FA213A6D95F1BCB_METHOD_5_09B38A1E91895764_OFFSET))(a1);
	}

	::System::Boolean Method_5_352BFDE950ED46F2(::System::Int32 a1, ::System::Int32& a2, ::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>*& a3, ::System::Collections::Generic::List_1<::System::Int32>*& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&, ::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>*&, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + CLASS_5_6FA213A6D95F1BCB_METHOD_5_352BFDE950ED46F2_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_5_CFB4738C97EBA12E(::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>*& a1, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*& a2, ::System::Collections::Generic::List_1<::System::Int32>*& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>*&, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*&, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + CLASS_5_6FA213A6D95F1BCB_METHOD_5_CFB4738C97EBA12E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_5_4DECCD32A2859311(::Class_3_67103607A6A39393_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_67103607A6A39393_2*))((::PBYTE)hIl2Cpp + CLASS_5_6FA213A6D95F1BCB_METHOD_5_4DECCD32A2859311_OFFSET))(this, a1);
	}

	::System::Boolean Method_5_E61E6C70D5028651()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_6FA213A6D95F1BCB_METHOD_5_E61E6C70D5028651_OFFSET))(this);
	}
};
