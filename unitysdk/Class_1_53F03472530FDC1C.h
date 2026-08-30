#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_887;
class Class_0_16E4307DCC419505_888;
class Class_0_16E4307DCC419505_889;
class Class_0_16E4307DCC419505_890;
class Class_1_AE0CA897D782D638;
class Class_1_D400F5A6FFC9D694;
namespace RPG::AvatarSystem { class IAvatar; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_53F03472530FDC1C_METHOD_1_0198D87AE41CA138_OFFSET UNITYSDK_OFFSET(0x15AF7290)
#define CLASS_1_53F03472530FDC1C_METHOD_1_3B6136B45E6AA85F_OFFSET UNITYSDK_OFFSET(0x15AF7970)
#define CLASS_1_53F03472530FDC1C_METHOD_1_7B2415EF3B4401A0_OFFSET UNITYSDK_OFFSET(0x15AF7880)
#define CLASS_1_53F03472530FDC1C_METHOD_1_9A06D797D4112EBF_OFFSET UNITYSDK_OFFSET(0x15AF6EC0)
#define CLASS_1_53F03472530FDC1C__CTOR_OFFSET UNITYSDK_OFFSET(0x15AF6A10)

inline static constexpr unsigned int Class_1_53F03472530FDC1C_TypeDefinitionIndex = 65628;

class Class_1_53F03472530FDC1C : public ::System::Object
{
public:
	// static const ::System::Int32 ANHOJHDGEDF = 0x6; // 0x0
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_889*>* OOPCLGFHEJF; // 0x10
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_890*>* FDDMBDIOIOH; // 0x18
	::Class_1_D400F5A6FFC9D694* ODCAGDKPCEA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53F03472530FDC1C__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_887*>* Method_1_9A06D797D4112EBF(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_887*>*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_53F03472530FDC1C_METHOD_1_9A06D797D4112EBF_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_888*>* Method_1_0198D87AE41CA138(::RPG::AvatarSystem::IAvatar* a1, ::System::Boolean a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_888*>*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_53F03472530FDC1C_METHOD_1_0198D87AE41CA138_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_888* Method_1_3B6136B45E6AA85F(::RPG::AvatarSystem::IAvatar* a1, ::Class_1_AE0CA897D782D638* a2)
	{
		return ((::Class_0_16E4307DCC419505_888*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::Class_1_AE0CA897D782D638*))((::PBYTE)hIl2Cpp + CLASS_1_53F03472530FDC1C_METHOD_1_3B6136B45E6AA85F_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_7B2415EF3B4401A0()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53F03472530FDC1C_METHOD_1_7B2415EF3B4401A0_OFFSET))(this);
	}
};
