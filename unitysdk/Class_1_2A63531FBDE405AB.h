#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DFCB42601400F441.h"
#include "unitysdk/System/Object.h"

class Class_1_FC8BF52F067E8047;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class MultiPathAvatarUnlockItemTransfer; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_2A63531FBDE405AB_METHOD_1_1801F574E6BFBBDD_OFFSET UNITYSDK_OFFSET(0x17F59370)
#define CLASS_1_2A63531FBDE405AB_METHOD_1_409CA082A7F37408_OFFSET UNITYSDK_OFFSET(0x17F59630)
#define CLASS_1_2A63531FBDE405AB_METHOD_1_55F5D021F7B261C0_OFFSET UNITYSDK_OFFSET(0x17F596F0)
#define CLASS_1_2A63531FBDE405AB_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x17F593B0)
#define CLASS_1_2A63531FBDE405AB_METHOD_1_9F828126282B58C1_OFFSET UNITYSDK_OFFSET(0x17F59430)
#define CLASS_1_2A63531FBDE405AB_METHOD_1_A846A63E43CA8232_OFFSET UNITYSDK_OFFSET(0x17F59590)
#define CLASS_1_2A63531FBDE405AB_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17F596A0)
#define CLASS_1_2A63531FBDE405AB__CTOR_OFFSET UNITYSDK_OFFSET(0x17F597A0)

inline static constexpr unsigned int Class_1_2A63531FBDE405AB_TypeDefinitionIndex = 62747;

class Class_1_2A63531FBDE405AB : public ::System::Object
{
public:
	::RPG::Client::MultiPathAvatarUnlockItemTransfer* JNICEHKGBIP; // 0x10
	::System::Collections::Generic::List_1<::Enum_3_DFCB42601400F441>* EFLEAEDBEMH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A63531FBDE405AB__CTOR_OFFSET))(this);
	}

	::RPG::Client::MultiPathAvatarUnlockItemTransfer* Method_1_1801F574E6BFBBDD()
	{
		return ((::RPG::Client::MultiPathAvatarUnlockItemTransfer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A63531FBDE405AB_METHOD_1_1801F574E6BFBBDD_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A63531FBDE405AB_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_9F828126282B58C1(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_2A63531FBDE405AB_METHOD_1_9F828126282B58C1_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Enum_3_DFCB42601400F441>* Method_1_A846A63E43CA8232()
	{
		return ((::System::Collections::Generic::List_1<::Enum_3_DFCB42601400F441>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A63531FBDE405AB_METHOD_1_A846A63E43CA8232_OFFSET))(this);
	}

	::System::Boolean Method_1_409CA082A7F37408(::Enum_3_DFCB42601400F441 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_DFCB42601400F441))((::PBYTE)hIl2Cpp + CLASS_1_2A63531FBDE405AB_METHOD_1_409CA082A7F37408_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A63531FBDE405AB_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_55F5D021F7B261C0(::System::UInt32 a1, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FC8BF52F067E8047*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FC8BF52F067E8047*>*))((::PBYTE)hIl2Cpp + CLASS_1_2A63531FBDE405AB_METHOD_1_55F5D021F7B261C0_OFFSET))(this, a1, a2);
	}
};
