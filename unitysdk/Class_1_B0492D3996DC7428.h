#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B202CD093058243F;
namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client { class RogueFormulaData; }
namespace RPG::Client { class RogueTournBuildRefTeamAvatarMemberData; }
namespace RPG::Client { class RogueTournBuildRefTeamData; }
namespace RPG::Client { class RogueTournBuildRefTeamPathMemberData; }
namespace RPG::Client { class RogueTournHexData; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B0492D3996DC7428_CLEAR_OFFSET UNITYSDK_OFFSET(0xD393B20)
#define CLASS_1_B0492D3996DC7428_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD393C50)
#define CLASS_1_B0492D3996DC7428_METHOD_1_11737DE6A9C03437_OFFSET UNITYSDK_OFFSET(0xD3944A0)
#define CLASS_1_B0492D3996DC7428_METHOD_1_250D866A6E4DA280_OFFSET UNITYSDK_OFFSET(0xD394D80)
#define CLASS_1_B0492D3996DC7428_METHOD_1_3AFDD231B1F669C3_OFFSET UNITYSDK_OFFSET(0xD394590)
#define CLASS_1_B0492D3996DC7428_METHOD_1_3CD89FBACA5C1996_OFFSET UNITYSDK_OFFSET(0xD394C60)
#define CLASS_1_B0492D3996DC7428_METHOD_1_4379620BD229B3DC_1_OFFSET UNITYSDK_OFFSET(0xD393E20)
#define CLASS_1_B0492D3996DC7428_METHOD_1_4379620BD229B3DC_2_OFFSET UNITYSDK_OFFSET(0xD393E90)
#define CLASS_1_B0492D3996DC7428_METHOD_1_4379620BD229B3DC_3_OFFSET UNITYSDK_OFFSET(0xD394050)
#define CLASS_1_B0492D3996DC7428_METHOD_1_4379620BD229B3DC_OFFSET UNITYSDK_OFFSET(0xD393CA0)
#define CLASS_1_B0492D3996DC7428_METHOD_1_79CD70BEAE04F5EF_OFFSET UNITYSDK_OFFSET(0xD394B70)
#define CLASS_1_B0492D3996DC7428_METHOD_1_7C06B19B320755A2_OFFSET UNITYSDK_OFFSET(0xD394A50)
#define CLASS_1_B0492D3996DC7428_METHOD_1_970037B4AB36701F_OFFSET UNITYSDK_OFFSET(0xD3940C0)
#define CLASS_1_B0492D3996DC7428_METHOD_1_A96A5B40E9CDD58F_OFFSET UNITYSDK_OFFSET(0xD3941A0)
#define CLASS_1_B0492D3996DC7428_METHOD_1_BA369849EC8C227B_OFFSET UNITYSDK_OFFSET(0xD393F00)
#define CLASS_1_B0492D3996DC7428_METHOD_1_C98AB8376A9B4839_OFFSET UNITYSDK_OFFSET(0xD396350)
#define CLASS_1_B0492D3996DC7428_METHOD_1_F8623CB0C4B9815D_OFFSET UNITYSDK_OFFSET(0xD394330)
#define CLASS_1_B0492D3996DC7428_METHOD_1_FDE1F0E4D5468AAA_OFFSET UNITYSDK_OFFSET(0xD393D10)
#define CLASS_1_B0492D3996DC7428__CTOR_OFFSET UNITYSDK_OFFSET(0xD396480)

inline static constexpr unsigned int Class_1_B0492D3996DC7428_TypeDefinitionIndex = 62223;

class Class_1_B0492D3996DC7428 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaData*>* Field_1_2; // 0x10
	::System::Collections::Generic::List_1<::RPG::Client::RogueTournHexData*>* Field_1_4; // 0x18
	::System::Collections::Generic::List_1<::RPG::Client::RogueTournBuildRefTeamData*>* Field_1_0; // 0x20
	::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaData*>* Field_1_1; // 0x28
	::System::Collections::Generic::List_1<::RPG::Client::RogueTournHexData*>* Field_1_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B0492D3996DC7428__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B0492D3996DC7428_CLEAR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B0492D3996DC7428_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_4379620BD229B3DC(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B0492D3996DC7428_METHOD_1_4379620BD229B3DC_OFFSET))(this, a1);
	}

	::System::Void Method_1_4379620BD229B3DC_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B0492D3996DC7428_METHOD_1_4379620BD229B3DC_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_4379620BD229B3DC_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B0492D3996DC7428_METHOD_1_4379620BD229B3DC_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_4379620BD229B3DC_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B0492D3996DC7428_METHOD_1_4379620BD229B3DC_3_OFFSET))(this, a1);
	}

	::System::Void Method_1_970037B4AB36701F(::System::Int32 a1, ::System::Int32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B0492D3996DC7428_METHOD_1_970037B4AB36701F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_11737DE6A9C03437(::System::Int32 a1, ::System::Int32 a2, ::System::Collections::Generic::IList_1<::System::Int32>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Collections::Generic::IList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_B0492D3996DC7428_METHOD_1_11737DE6A9C03437_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_7C06B19B320755A2(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::UInt32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B0492D3996DC7428_METHOD_1_7C06B19B320755A2_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_3CD89FBACA5C1996(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Collections::Generic::IList_1<::System::Int32>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Collections::Generic::IList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_B0492D3996DC7428_METHOD_1_3CD89FBACA5C1996_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_1_B202CD093058243F* Method_1_250D866A6E4DA280()
	{
		return ((::Class_1_B202CD093058243F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B0492D3996DC7428_METHOD_1_250D866A6E4DA280_OFFSET))(this);
	}

	::RPG::Client::RogueFormulaData* Method_1_FDE1F0E4D5468AAA(::System::UInt32 a1)
	{
		return ((::RPG::Client::RogueFormulaData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B0492D3996DC7428_METHOD_1_FDE1F0E4D5468AAA_OFFSET))(this, a1);
	}

	::RPG::Client::RogueTournHexData* Method_1_BA369849EC8C227B(::System::UInt32 a1)
	{
		return ((::RPG::Client::RogueTournHexData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B0492D3996DC7428_METHOD_1_BA369849EC8C227B_OFFSET))(this, a1);
	}

	::RPG::Client::RogueTournBuildRefTeamAvatarMemberData* Method_1_F8623CB0C4B9815D(::System::UInt32 a1)
	{
		return ((::RPG::Client::RogueTournBuildRefTeamAvatarMemberData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B0492D3996DC7428_METHOD_1_F8623CB0C4B9815D_OFFSET))(this, a1);
	}

	::RPG::Client::IAvatarInfoProvider* Method_1_C98AB8376A9B4839(::System::UInt32 a1)
	{
		return ((::RPG::Client::IAvatarInfoProvider*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B0492D3996DC7428_METHOD_1_C98AB8376A9B4839_OFFSET))(this, a1);
	}

	::RPG::Client::RogueTournBuildRefTeamPathMemberData* Method_1_3AFDD231B1F669C3(::System::Collections::Generic::IList_1<::System::Int32>* a1)
	{
		return ((::RPG::Client::RogueTournBuildRefTeamPathMemberData*(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_B0492D3996DC7428_METHOD_1_3AFDD231B1F669C3_OFFSET))(this, a1);
	}

	::System::Void Method_1_A96A5B40E9CDD58F(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B0492D3996DC7428_METHOD_1_A96A5B40E9CDD58F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_79CD70BEAE04F5EF(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B0492D3996DC7428_METHOD_1_79CD70BEAE04F5EF_OFFSET))(this, a1, a2, a3);
	}
};
