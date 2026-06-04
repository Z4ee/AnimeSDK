#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AsyncCheckItemBase.h"
#include "unitysdk/RPG/Client/NotifyType.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_C0950EB832EDE5B7_FILLNOTIFYTYPESTO_OFFSET UNITYSDK_OFFSET(0xA3D7EC0)
#define CLASS_2_C0950EB832EDE5B7__CTOR_OFFSET UNITYSDK_OFFSET(0xA3D7F50)
#define CLASS_2_C0950EB832EDE5B7__DOCHECKIMPL_OFFSET UNITYSDK_OFFSET(0xA3D7F70)
#define CLASS_2_C0950EB832EDE5B7___IFIXBASEPROXY_FILLNOTIFYTYPESTO_OFFSET UNITYSDK_OFFSET(0xA3D8050)
#define CLASS_2_C0950EB832EDE5B7___IFIXBASEPROXY__DOCHECKIMPL_OFFSET UNITYSDK_OFFSET(0xA3D80B0)

inline static constexpr unsigned int Class_2_C0950EB832EDE5B7_TypeDefinitionIndex = 55984;

class Class_2_C0950EB832EDE5B7 : public ::RPG::Client::AsyncCheckItemBase
{
public:
	::System::UInt32 Field_2_0; // 0x10

	::System::Void _ctor(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C0950EB832EDE5B7__CTOR_OFFSET))(this, a1);
	}

	::System::Void FillNotifyTypesTo(::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>*))((::PBYTE)hIl2Cpp + CLASS_2_C0950EB832EDE5B7_FILLNOTIFYTYPESTO_OFFSET))(this, a1);
	}

	::System::Boolean _DoCheckImpl()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C0950EB832EDE5B7__DOCHECKIMPL_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_FillNotifyTypesTo(::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>*))((::PBYTE)hIl2Cpp + CLASS_2_C0950EB832EDE5B7___IFIXBASEPROXY_FILLNOTIFYTYPESTO_OFFSET))(this, a1);
	}

	::System::Boolean __iFixBaseProxy__DoCheckImpl()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C0950EB832EDE5B7___IFIXBASEPROXY__DOCHECKIMPL_OFFSET))(this);
	}
};
