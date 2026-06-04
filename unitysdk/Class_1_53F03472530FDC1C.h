#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_798;
class Class_0_16E4307DCC419505_799;
class Class_0_16E4307DCC419505_800;
class Class_0_16E4307DCC419505_801;
class Class_1_AE0CA897D782D638;
class Class_1_D400F5A6FFC9D694;
namespace RPG::AvatarSystem { class IAvatar; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_53F03472530FDC1C_METHOD_1_0198D87AE41CA138_OFFSET UNITYSDK_OFFSET(0x13C85CF0)
#define CLASS_1_53F03472530FDC1C_METHOD_1_0C83C90C05E8C6CC_OFFSET UNITYSDK_OFFSET(0x13C86380)
#define CLASS_1_53F03472530FDC1C_METHOD_1_198DDC6D73AD062C_OFFSET UNITYSDK_OFFSET(0x13C859D0)
#define CLASS_1_53F03472530FDC1C_METHOD_1_7B2415EF3B4401A0_OFFSET UNITYSDK_OFFSET(0x13C86290)
#define CLASS_1_53F03472530FDC1C__CTOR_OFFSET UNITYSDK_OFFSET(0x13C85520)

inline static constexpr unsigned int Class_1_53F03472530FDC1C_TypeDefinitionIndex = 61301;

class Class_1_53F03472530FDC1C : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_0 = 0x6; // 0x0
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_801*>* Field_1_1; // 0x10
	::Class_1_D400F5A6FFC9D694* Field_1_2; // 0x18
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_800*>* Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53F03472530FDC1C__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_798*>* Method_1_198DDC6D73AD062C(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_798*>*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_53F03472530FDC1C_METHOD_1_198DDC6D73AD062C_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_799*>* Method_1_0198D87AE41CA138(::RPG::AvatarSystem::IAvatar* a1, ::System::Boolean a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_799*>*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_53F03472530FDC1C_METHOD_1_0198D87AE41CA138_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_799* Method_1_0C83C90C05E8C6CC(::RPG::AvatarSystem::IAvatar* a1, ::Class_1_AE0CA897D782D638* a2)
	{
		return ((::Class_0_16E4307DCC419505_799*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::Class_1_AE0CA897D782D638*))((::PBYTE)hIl2Cpp + CLASS_1_53F03472530FDC1C_METHOD_1_0C83C90C05E8C6CC_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_7B2415EF3B4401A0()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53F03472530FDC1C_METHOD_1_7B2415EF3B4401A0_OFFSET))(this);
	}
};
