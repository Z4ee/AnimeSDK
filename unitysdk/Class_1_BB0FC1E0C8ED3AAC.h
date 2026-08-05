#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/TeleportSelectionType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_485;
namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_BB0FC1E0C8ED3AAC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11B0B160)
#define CLASS_1_BB0FC1E0C8ED3AAC_METHOD_1_1363F085C1640380_OFFSET UNITYSDK_OFFSET(0x11B0B9F0)
#define CLASS_1_BB0FC1E0C8ED3AAC_METHOD_1_2B911D62C1CCCB88_OFFSET UNITYSDK_OFFSET(0x11B0B7D0)
#define CLASS_1_BB0FC1E0C8ED3AAC_METHOD_1_63BB8FC60D79EFDE_OFFSET UNITYSDK_OFFSET(0x11B0B580)
#define CLASS_1_BB0FC1E0C8ED3AAC_METHOD_1_6E4F6C1044C31EEE_OFFSET UNITYSDK_OFFSET(0x11B0B360)
#define CLASS_1_BB0FC1E0C8ED3AAC_METHOD_1_83B015047F746DE5_OFFSET UNITYSDK_OFFSET(0x11B0BD20)
#define CLASS_1_BB0FC1E0C8ED3AAC_METHOD_1_9B39F7D7C1FF70D6_OFFSET UNITYSDK_OFFSET(0x11B0BCA0)
#define CLASS_1_BB0FC1E0C8ED3AAC_METHOD_1_A149DA5653908E32_OFFSET UNITYSDK_OFFSET(0x11B0BBA0)
#define CLASS_1_BB0FC1E0C8ED3AAC__CTOR_OFFSET UNITYSDK_OFFSET(0x11B0AF70)

inline static constexpr unsigned int Class_1_BB0FC1E0C8ED3AAC_TypeDefinitionIndex = 51507;

class Class_1_BB0FC1E0C8ED3AAC : public ::System::Object
{
public:
	static ::Class_1_BB0FC1E0C8ED3AAC** StaticGet_Field_1_1()
	{
		return (::Class_1_BB0FC1E0C8ED3AAC**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BB0FC1E0C8ED3AAC_TypeDefinitionIndex)->GetStaticField(0x51570);
	}
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_0_16E4307DCC419505_485*>* Field_1_5; // 0x10
	::System::Func_1<::Class_0_16E4307DCC419505_485*>* Field_1_0; // 0x18
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::TeleportSelectionType, ::System::Func_1<::Class_0_16E4307DCC419505_485*>*>* Field_1_7; // 0x20
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::TeleportSelectionType, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_485*>*>* Field_1_6; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::Config::TeleportSelectionType>* Field_1_4; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB0FC1E0C8ED3AAC__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB0FC1E0C8ED3AAC_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_6E4F6C1044C31EEE(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_BB0FC1E0C8ED3AAC_METHOD_1_6E4F6C1044C31EEE_OFFSET))(this, a1);
	}

	::System::Void Method_1_2B911D62C1CCCB88(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_BB0FC1E0C8ED3AAC_METHOD_1_2B911D62C1CCCB88_OFFSET))(this, a1);
	}

	::System::Void Method_1_A149DA5653908E32(::MoleMole::Config::TeleportSelectionType a1, ::System::Func_1<::Class_0_16E4307DCC419505_485*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::TeleportSelectionType, ::System::Func_1<::Class_0_16E4307DCC419505_485*>*))((::PBYTE)hIl2Cpp + CLASS_1_BB0FC1E0C8ED3AAC_METHOD_1_A149DA5653908E32_OFFSET))(this, a1, a2);
	}

	static ::Class_1_BB0FC1E0C8ED3AAC* Method_1_9B39F7D7C1FF70D6()
	{
		return ((::Class_1_BB0FC1E0C8ED3AAC*(*)())((::PBYTE)hIl2Cpp + CLASS_1_BB0FC1E0C8ED3AAC_METHOD_1_9B39F7D7C1FF70D6_OFFSET))();
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_485*>* Method_1_1363F085C1640380(::MoleMole::Config::TeleportSelectionType a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_485*>*(*)(::PVOID, ::MoleMole::Config::TeleportSelectionType))((::PBYTE)hIl2Cpp + CLASS_1_BB0FC1E0C8ED3AAC_METHOD_1_1363F085C1640380_OFFSET))(this, a1);
	}

	::System::Void Method_1_83B015047F746DE5(::MoleMole::Config::TeleportSelectionType a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::TeleportSelectionType))((::PBYTE)hIl2Cpp + CLASS_1_BB0FC1E0C8ED3AAC_METHOD_1_83B015047F746DE5_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_485* Method_1_63BB8FC60D79EFDE(::MoleMole::Config::TeleportSelectionType a1)
	{
		return ((::Class_0_16E4307DCC419505_485*(*)(::PVOID, ::MoleMole::Config::TeleportSelectionType))((::PBYTE)hIl2Cpp + CLASS_1_BB0FC1E0C8ED3AAC_METHOD_1_63BB8FC60D79EFDE_OFFSET))(this, a1);
	}
};
