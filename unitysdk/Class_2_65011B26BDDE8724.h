#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/RPG/Client/SyncCheckItemBase.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_65011B26BDDE8724_FILLNOTIFYTYPESTO_OFFSET UNITYSDK_OFFSET(0x1B43EDD0)
#define CLASS_2_65011B26BDDE8724_GET_OFFERINGLEVEL_OFFSET UNITYSDK_OFFSET(0x1B43F010)
#define CLASS_2_65011B26BDDE8724_GET_OFFERINGTYPE_OFFSET UNITYSDK_OFFSET(0x1B43EFF0)
#define CLASS_2_65011B26BDDE8724_SET_OFFERINGLEVEL_OFFSET UNITYSDK_OFFSET(0x1B43F020)
#define CLASS_2_65011B26BDDE8724_SET_OFFERINGTYPE_OFFSET UNITYSDK_OFFSET(0x1B43F000)
#define CLASS_2_65011B26BDDE8724_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B43EF10)
#define CLASS_2_65011B26BDDE8724__CTOR_OFFSET UNITYSDK_OFFSET(0x1B43ECE0)
#define CLASS_2_65011B26BDDE8724__DOCHECKIMPL_OFFSET UNITYSDK_OFFSET(0x1B43EE60)

inline static constexpr unsigned int Class_2_65011B26BDDE8724_TypeDefinitionIndex = 60022;

class Class_2_65011B26BDDE8724 : public ::RPG::Client::SyncCheckItemBase
{
public:
	::System::UInt32 _OfferingLevel_k__BackingField; // 0x10
	::System::UInt32 _OfferingType_k__BackingField; // 0x14

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
