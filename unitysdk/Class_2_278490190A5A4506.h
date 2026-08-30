#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AsyncCheckItemBase.h"
#include "unitysdk/RPG/Client/NotifyType.h"

namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_278490190A5A4506_FILLNOTIFYTYPESTO_OFFSET UNITYSDK_OFFSET(0xDAB0730)
#define CLASS_2_278490190A5A4506_GETCHECKITEMINFO_OFFSET UNITYSDK_OFFSET(0xDAB0AC0)
#define CLASS_2_278490190A5A4506_METHOD_2_5CEC4607322705E5_OFFSET UNITYSDK_OFFSET(0xDAB0A80)
#define CLASS_2_278490190A5A4506_TOSTRING_OFFSET UNITYSDK_OFFSET(0xDAB09D0)
#define CLASS_2_278490190A5A4506__CTOR_OFFSET UNITYSDK_OFFSET(0xDAB0700)
#define CLASS_2_278490190A5A4506__DOCHECKIMPL_OFFSET UNITYSDK_OFFSET(0xDAB07C0)
#define CLASS_2_278490190A5A4506__ISDATAREADYIMPL_OFFSET UNITYSDK_OFFSET(0xDAB0890)
#define CLASS_2_278490190A5A4506__PREPAREDATAIMPL_OFFSET UNITYSDK_OFFSET(0xDAB0930)

inline static constexpr unsigned int Class_2_278490190A5A4506_TypeDefinitionIndex = 60019;

class Class_2_278490190A5A4506 : public ::RPG::Client::AsyncCheckItemBase
{
public:
	::System::UInt32 AENNMCLOKOA; // 0x10

	::System::Void _ctor(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_278490190A5A4506__CTOR_OFFSET))(this, a1);
	}

	::System::Void FillNotifyTypesTo(::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>*))((::PBYTE)hIl2Cpp + CLASS_2_278490190A5A4506_FILLNOTIFYTYPESTO_OFFSET))(this, a1);
	}

	::System::Boolean _DoCheckImpl()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_278490190A5A4506__DOCHECKIMPL_OFFSET))(this);
	}

	::System::Boolean _IsDataReadyImpl()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_278490190A5A4506__ISDATAREADYIMPL_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* _PrepareDataImpl()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_278490190A5A4506__PREPAREDATAIMPL_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_278490190A5A4506_TOSTRING_OFFSET))(this);
	}

	::System::UInt32 Method_2_5CEC4607322705E5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_278490190A5A4506_METHOD_2_5CEC4607322705E5_OFFSET))(this);
	}

	::System::String* GetCheckItemInfo()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_278490190A5A4506_GETCHECKITEMINFO_OFFSET))(this);
	}
};
