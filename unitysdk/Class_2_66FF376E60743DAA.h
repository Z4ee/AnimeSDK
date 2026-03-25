#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/RPG/Client/SyncCheckItemBase.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_66FF376E60743DAA_FILLNOTIFYTYPESTO_OFFSET UNITYSDK_OFFSET(0xBEBCB70)
#define CLASS_2_66FF376E60743DAA__CTOR_OFFSET UNITYSDK_OFFSET(0xBEBCB50)
#define CLASS_2_66FF376E60743DAA__DOCHECKIMPL_OFFSET UNITYSDK_OFFSET(0xBEBCC00)
#define CLASS_2_66FF376E60743DAA___IFIXBASEPROXY_FILLNOTIFYTYPESTO_OFFSET UNITYSDK_OFFSET(0xBEBCD70)
#define CLASS_2_66FF376E60743DAA___IFIXBASEPROXY__DOCHECKIMPL_OFFSET UNITYSDK_OFFSET(0xBEBCDE0)

inline static constexpr unsigned int Class_2_66FF376E60743DAA_TypeDefinitionIndex = 48487;

class Class_2_66FF376E60743DAA : public ::RPG::Client::SyncCheckItemBase
{
public:
	::System::UInt32 Field_2_0; // 0x10

	::System::Void _ctor(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_66FF376E60743DAA__CTOR_OFFSET))(this, a1);
	}

	::System::Void FillNotifyTypesTo(::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>*))((::PBYTE)hIl2Cpp + CLASS_2_66FF376E60743DAA_FILLNOTIFYTYPESTO_OFFSET))(this, a1);
	}

	::System::Boolean _DoCheckImpl()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_66FF376E60743DAA__DOCHECKIMPL_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_FillNotifyTypesTo(::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>* P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>*))((::PBYTE)hIl2Cpp + CLASS_2_66FF376E60743DAA___IFIXBASEPROXY_FILLNOTIFYTYPESTO_OFFSET))(this, P0);
	}

	::System::Boolean __iFixBaseProxy__DoCheckImpl()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_66FF376E60743DAA___IFIXBASEPROXY__DOCHECKIMPL_OFFSET))(this);
	}
};
