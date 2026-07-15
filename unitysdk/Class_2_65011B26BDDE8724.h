#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/RPG/Client/SyncCheckItemBase.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_65011B26BDDE8724_FILLNOTIFYTYPESTO_OFFSET UNITYSDK_OFFSET(0x1797EC60)
#define CLASS_2_65011B26BDDE8724_GET_OFFERINGLEVEL_OFFSET UNITYSDK_OFFSET(0x1797EEA0)
#define CLASS_2_65011B26BDDE8724_GET_OFFERINGTYPE_OFFSET UNITYSDK_OFFSET(0x1797EE80)
#define CLASS_2_65011B26BDDE8724_SET_OFFERINGLEVEL_OFFSET UNITYSDK_OFFSET(0x1797EEB0)
#define CLASS_2_65011B26BDDE8724_SET_OFFERINGTYPE_OFFSET UNITYSDK_OFFSET(0x1797EE90)
#define CLASS_2_65011B26BDDE8724_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1797EDA0)
#define CLASS_2_65011B26BDDE8724__CTOR_OFFSET UNITYSDK_OFFSET(0x1797EB70)
#define CLASS_2_65011B26BDDE8724__DOCHECKIMPL_OFFSET UNITYSDK_OFFSET(0x1797ECF0)

inline static constexpr unsigned int Class_2_65011B26BDDE8724_TypeDefinitionIndex = 57224;

class Class_2_65011B26BDDE8724 : public ::RPG::Client::SyncCheckItemBase
{
public:
	::System::UInt32 _OfferingType_k__BackingField; // 0x10
	::System::UInt32 _OfferingLevel_k__BackingField; // 0x14

	::System::Void _ctor(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_65011B26BDDE8724__CTOR_OFFSET))(this, a1);
	}

	::System::Void FillNotifyTypesTo(::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>*))((::PBYTE)hIl2Cpp + CLASS_2_65011B26BDDE8724_FILLNOTIFYTYPESTO_OFFSET))(this, a1);
	}

	::System::Boolean _DoCheckImpl()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_65011B26BDDE8724__DOCHECKIMPL_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_65011B26BDDE8724_TOSTRING_OFFSET))(this);
	}

	::System::UInt32 get_OfferingType()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_65011B26BDDE8724_GET_OFFERINGTYPE_OFFSET))(this);
	}

	::System::Void set_OfferingType(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_65011B26BDDE8724_SET_OFFERINGTYPE_OFFSET))(this, a1);
	}

	::System::UInt32 get_OfferingLevel()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_65011B26BDDE8724_GET_OFFERINGLEVEL_OFFSET))(this);
	}

	::System::Void set_OfferingLevel(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_65011B26BDDE8724_SET_OFFERINGLEVEL_OFFSET))(this, a1);
	}
};
