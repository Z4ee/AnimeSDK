#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AsyncCheckItemBase.h"
#include "unitysdk/RPG/Client/NotifyType.h"

namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_C0950EB832EDE5B7_2_FILLNOTIFYTYPESTO_OFFSET UNITYSDK_OFFSET(0x14404980)
#define CLASS_2_C0950EB832EDE5B7_2_METHOD_2_5CEC4607322705E5_OFFSET UNITYSDK_OFFSET(0x14404CE0)
#define CLASS_2_C0950EB832EDE5B7_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x14404C30)
#define CLASS_2_C0950EB832EDE5B7_2__CTOR_OFFSET UNITYSDK_OFFSET(0x14404960)
#define CLASS_2_C0950EB832EDE5B7_2__DOCHECKIMPL_OFFSET UNITYSDK_OFFSET(0x14404A40)
#define CLASS_2_C0950EB832EDE5B7_2__ISDATAREADYIMPL_OFFSET UNITYSDK_OFFSET(0x14404AF0)
#define CLASS_2_C0950EB832EDE5B7_2__PREPAREDATAIMPL_OFFSET UNITYSDK_OFFSET(0x14404B90)
#define CLASS_2_C0950EB832EDE5B7_2___IFIXBASEPROXY_FILLNOTIFYTYPESTO_OFFSET UNITYSDK_OFFSET(0x14404D20)
#define CLASS_2_C0950EB832EDE5B7_2___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x14404EE0)
#define CLASS_2_C0950EB832EDE5B7_2___IFIXBASEPROXY__DOCHECKIMPL_OFFSET UNITYSDK_OFFSET(0x14404D80)
#define CLASS_2_C0950EB832EDE5B7_2___IFIXBASEPROXY__ISDATAREADYIMPL_OFFSET UNITYSDK_OFFSET(0x14404DE0)
#define CLASS_2_C0950EB832EDE5B7_2___IFIXBASEPROXY__PREPAREDATAIMPL_OFFSET UNITYSDK_OFFSET(0x14404E40)

inline static constexpr unsigned int Class_2_C0950EB832EDE5B7_2_TypeDefinitionIndex = 55993;

class Class_2_C0950EB832EDE5B7_2 : public ::RPG::Client::AsyncCheckItemBase
{
public:
	::System::UInt32 Field_2_0; // 0x10

	::System::Void _ctor(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C0950EB832EDE5B7_2__CTOR_OFFSET))(this, a1);
	}

	::System::Void FillNotifyTypesTo(::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>*))((::PBYTE)hIl2Cpp + CLASS_2_C0950EB832EDE5B7_2_FILLNOTIFYTYPESTO_OFFSET))(this, a1);
	}

	::System::Boolean _DoCheckImpl()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C0950EB832EDE5B7_2__DOCHECKIMPL_OFFSET))(this);
	}

	::System::Boolean _IsDataReadyImpl()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C0950EB832EDE5B7_2__ISDATAREADYIMPL_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* _PrepareDataImpl()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C0950EB832EDE5B7_2__PREPAREDATAIMPL_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C0950EB832EDE5B7_2_TOSTRING_OFFSET))(this);
	}

	::System::UInt32 Method_2_5CEC4607322705E5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C0950EB832EDE5B7_2_METHOD_2_5CEC4607322705E5_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_FillNotifyTypesTo(::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>*))((::PBYTE)hIl2Cpp + CLASS_2_C0950EB832EDE5B7_2___IFIXBASEPROXY_FILLNOTIFYTYPESTO_OFFSET))(this, a1);
	}

	::System::Boolean __iFixBaseProxy__DoCheckImpl()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C0950EB832EDE5B7_2___IFIXBASEPROXY__DOCHECKIMPL_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy__IsDataReadyImpl()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C0950EB832EDE5B7_2___IFIXBASEPROXY__ISDATAREADYIMPL_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* __iFixBaseProxy__PrepareDataImpl()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C0950EB832EDE5B7_2___IFIXBASEPROXY__PREPAREDATAIMPL_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C0950EB832EDE5B7_2___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
