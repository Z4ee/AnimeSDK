#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/RPG/Client/SyncCheckItemBase.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_66FF376E60743DAA_1_FILLNOTIFYTYPESTO_OFFSET UNITYSDK_OFFSET(0x18B70480)
#define CLASS_2_66FF376E60743DAA_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18B70600)
#define CLASS_2_66FF376E60743DAA_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18B70460)
#define CLASS_2_66FF376E60743DAA_1__DOCHECKIMPL_OFFSET UNITYSDK_OFFSET(0x18B70510)

inline static constexpr unsigned int Class_2_66FF376E60743DAA_1_TypeDefinitionIndex = 57215;

class Class_2_66FF376E60743DAA_1 : public ::RPG::Client::SyncCheckItemBase
{
public:
	::System::UInt32 Field_2_0; // 0x10

	::System::Void _ctor(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_66FF376E60743DAA_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void FillNotifyTypesTo(::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>*))((::PBYTE)hIl2Cpp + CLASS_2_66FF376E60743DAA_1_FILLNOTIFYTYPESTO_OFFSET))(this, a1);
	}

	::System::Boolean _DoCheckImpl()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_66FF376E60743DAA_1__DOCHECKIMPL_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_66FF376E60743DAA_1_TOSTRING_OFFSET))(this);
	}
};
