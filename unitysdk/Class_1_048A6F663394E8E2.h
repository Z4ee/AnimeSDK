#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_BAC064D277DD99F1.h"
#include "unitysdk/Struct_2_BC950E36747FB4C9.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_342;
class Class_0_16E4307DCC419505_343;
class Class_0_16E4307DCC419505_371;
class Class_1_090AB0EAA610410E;
class Class_1_6AE08EF87FF0FFCC;
namespace RPG::GameCore { class SpecialAvatarRelicRow; }
namespace RPG::GameCore { class SpecialAvatarRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_048A6F663394E8E2_METHOD_1_56B5734EFF07F09D_OFFSET UNITYSDK_OFFSET(0xAC6AEC0)
#define CLASS_1_048A6F663394E8E2_METHOD_1_6D53CFBC920232CE_OFFSET UNITYSDK_OFFSET(0xAC6ABC0)
#define CLASS_1_048A6F663394E8E2_METHOD_1_7848879621A98748_OFFSET UNITYSDK_OFFSET(0xAC6ACC0)
#define CLASS_1_048A6F663394E8E2_METHOD_1_9ECA41277B97BC0D_OFFSET UNITYSDK_OFFSET(0xAC6ADA0)
#define CLASS_1_048A6F663394E8E2_METHOD_1_B2BB56514D853817_OFFSET UNITYSDK_OFFSET(0xAC6AFB0)
#define CLASS_1_048A6F663394E8E2_METHOD_1_D577B67D7F29C865_OFFSET UNITYSDK_OFFSET(0xAC6B1E0)
#define CLASS_1_048A6F663394E8E2__CTOR_OFFSET UNITYSDK_OFFSET(0xAC6AB40)

inline static constexpr unsigned int Class_1_048A6F663394E8E2_TypeDefinitionIndex = 50865;

class Class_1_048A6F663394E8E2 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_371* Field_1_0; // 0x10

	::System::Void _ctor(::Class_0_16E4307DCC419505_371* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_371*))((::PBYTE)hIl2Cpp + CLASS_1_048A6F663394E8E2__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_6D53CFBC920232CE(::Class_1_6AE08EF87FF0FFCC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6AE08EF87FF0FFCC*))((::PBYTE)hIl2Cpp + CLASS_1_048A6F663394E8E2_METHOD_1_6D53CFBC920232CE_OFFSET))(this, a1);
	}

	::Class_1_090AB0EAA610410E* Method_1_7848879621A98748(::Struct_2_BC950E36747FB4C9& a1, ::RPG::GameCore::SpecialAvatarRow* a2)
	{
		return ((::Class_1_090AB0EAA610410E*(*)(::PVOID, ::Struct_2_BC950E36747FB4C9&, ::RPG::GameCore::SpecialAvatarRow*))((::PBYTE)hIl2Cpp + CLASS_1_048A6F663394E8E2_METHOD_1_7848879621A98748_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_342*>* Method_1_9ECA41277B97BC0D(::RPG::GameCore::SpecialAvatarRow* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_342*>*(*)(::PVOID, ::RPG::GameCore::SpecialAvatarRow*))((::PBYTE)hIl2Cpp + CLASS_1_048A6F663394E8E2_METHOD_1_9ECA41277B97BC0D_OFFSET))(this, a1);
	}

	::System::Void Method_1_D577B67D7F29C865(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_342*>* a1, ::RPG::GameCore::SpecialAvatarRelicRow* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_342*>*, ::RPG::GameCore::SpecialAvatarRelicRow*))((::PBYTE)hIl2Cpp + CLASS_1_048A6F663394E8E2_METHOD_1_D577B67D7F29C865_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_343* Method_1_56B5734EFF07F09D(::RPG::GameCore::SpecialAvatarRow* a1)
	{
		return ((::Class_0_16E4307DCC419505_343*(*)(::PVOID, ::RPG::GameCore::SpecialAvatarRow*))((::PBYTE)hIl2Cpp + CLASS_1_048A6F663394E8E2_METHOD_1_56B5734EFF07F09D_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Struct_2_BAC064D277DD99F1>* Method_1_B2BB56514D853817(::Struct_2_BC950E36747FB4C9& a1, ::RPG::GameCore::SpecialAvatarRow* a2)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_BAC064D277DD99F1>*(*)(::PVOID, ::Struct_2_BC950E36747FB4C9&, ::RPG::GameCore::SpecialAvatarRow*))((::PBYTE)hIl2Cpp + CLASS_1_048A6F663394E8E2_METHOD_1_B2BB56514D853817_OFFSET))(this, a1, a2);
	}
};
