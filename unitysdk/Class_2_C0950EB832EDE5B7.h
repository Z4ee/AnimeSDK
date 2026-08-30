#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AsyncCheckItemBase.h"
#include "unitysdk/RPG/Client/NotifyType.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_C0950EB832EDE5B7_FILLNOTIFYTYPESTO_OFFSET UNITYSDK_OFFSET(0x17ECDFC0)
#define CLASS_2_C0950EB832EDE5B7__CTOR_OFFSET UNITYSDK_OFFSET(0x17ECE050)
#define CLASS_2_C0950EB832EDE5B7__DOCHECKIMPL_OFFSET UNITYSDK_OFFSET(0x17ECE070)

inline static constexpr unsigned int Class_2_C0950EB832EDE5B7_TypeDefinitionIndex = 60021;

class Class_2_C0950EB832EDE5B7 : public ::RPG::Client::AsyncCheckItemBase
{
public:
	::System::UInt32 CLHLFGJGGCH; // 0x10

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
};
