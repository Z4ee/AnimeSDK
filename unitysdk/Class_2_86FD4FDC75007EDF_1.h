#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AsyncCheckItemBase.h"
#include "unitysdk/RPG/Client/NotifyType.h"

namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_86FD4FDC75007EDF_1_FILLNOTIFYTYPESTO_OFFSET UNITYSDK_OFFSET(0xC446BB0)
#define CLASS_2_86FD4FDC75007EDF_1_GETCHECKITEMINFO_OFFSET UNITYSDK_OFFSET(0xC446F20)
#define CLASS_2_86FD4FDC75007EDF_1_METHOD_2_5CEC4607322705E5_OFFSET UNITYSDK_OFFSET(0xC446EE0)
#define CLASS_2_86FD4FDC75007EDF_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0xC446E30)
#define CLASS_2_86FD4FDC75007EDF_1__CTOR_OFFSET UNITYSDK_OFFSET(0xC446B80)
#define CLASS_2_86FD4FDC75007EDF_1__DOCHECKIMPL_OFFSET UNITYSDK_OFFSET(0xC446C40)
#define CLASS_2_86FD4FDC75007EDF_1__ISDATAREADYIMPL_OFFSET UNITYSDK_OFFSET(0xC446CF0)
#define CLASS_2_86FD4FDC75007EDF_1__PREPAREDATAIMPL_OFFSET UNITYSDK_OFFSET(0xC446D90)
#define CLASS_2_86FD4FDC75007EDF_1___IFIXBASEPROXY_FILLNOTIFYTYPESTO_OFFSET UNITYSDK_OFFSET(0xC4470F0)
#define CLASS_2_86FD4FDC75007EDF_1___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0xC4472B0)
#define CLASS_2_86FD4FDC75007EDF_1___IFIXBASEPROXY__DOCHECKIMPL_OFFSET UNITYSDK_OFFSET(0xC447150)
#define CLASS_2_86FD4FDC75007EDF_1___IFIXBASEPROXY__ISDATAREADYIMPL_OFFSET UNITYSDK_OFFSET(0xC4471B0)
#define CLASS_2_86FD4FDC75007EDF_1___IFIXBASEPROXY__PREPAREDATAIMPL_OFFSET UNITYSDK_OFFSET(0xC447210)

inline static constexpr unsigned int Class_2_86FD4FDC75007EDF_1_TypeDefinitionIndex = 55982;

class Class_2_86FD4FDC75007EDF_1 : public ::RPG::Client::AsyncCheckItemBase
{
public:
	::System::UInt32 Field_2_0; // 0x10

	::System::Void _ctor(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_86FD4FDC75007EDF_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void FillNotifyTypesTo(::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>*))((::PBYTE)hIl2Cpp + CLASS_2_86FD4FDC75007EDF_1_FILLNOTIFYTYPESTO_OFFSET))(this, a1);
	}

	::System::Boolean _DoCheckImpl()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_86FD4FDC75007EDF_1__DOCHECKIMPL_OFFSET))(this);
	}

	::System::Boolean _IsDataReadyImpl()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_86FD4FDC75007EDF_1__ISDATAREADYIMPL_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* _PrepareDataImpl()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_86FD4FDC75007EDF_1__PREPAREDATAIMPL_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_86FD4FDC75007EDF_1_TOSTRING_OFFSET))(this);
	}

	::System::UInt32 Method_2_5CEC4607322705E5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_86FD4FDC75007EDF_1_METHOD_2_5CEC4607322705E5_OFFSET))(this);
	}

	::System::String* GetCheckItemInfo()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_86FD4FDC75007EDF_1_GETCHECKITEMINFO_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_FillNotifyTypesTo(::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>*))((::PBYTE)hIl2Cpp + CLASS_2_86FD4FDC75007EDF_1___IFIXBASEPROXY_FILLNOTIFYTYPESTO_OFFSET))(this, a1);
	}

	::System::Boolean __iFixBaseProxy__DoCheckImpl()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_86FD4FDC75007EDF_1___IFIXBASEPROXY__DOCHECKIMPL_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy__IsDataReadyImpl()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_86FD4FDC75007EDF_1___IFIXBASEPROXY__ISDATAREADYIMPL_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* __iFixBaseProxy__PrepareDataImpl()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_86FD4FDC75007EDF_1___IFIXBASEPROXY__PREPAREDATAIMPL_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_86FD4FDC75007EDF_1___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
