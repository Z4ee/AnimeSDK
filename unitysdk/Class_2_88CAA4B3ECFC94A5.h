#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AsyncCheckItemBase.h"
#include "unitysdk/RPG/Client/NotifyType.h"

namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_88CAA4B3ECFC94A5_FILLNOTIFYTYPESTO_OFFSET UNITYSDK_OFFSET(0x105F8BE0)
#define CLASS_2_88CAA4B3ECFC94A5_METHOD_2_D3B8059323BFEDF7_OFFSET UNITYSDK_OFFSET(0x105F9140)
#define CLASS_2_88CAA4B3ECFC94A5__CTOR_OFFSET UNITYSDK_OFFSET(0x105F8B20)
#define CLASS_2_88CAA4B3ECFC94A5__DOCHECKIMPL_OFFSET UNITYSDK_OFFSET(0x105F8CA0)
#define CLASS_2_88CAA4B3ECFC94A5__ISDATAREADYIMPL_OFFSET UNITYSDK_OFFSET(0x105F8DE0)
#define CLASS_2_88CAA4B3ECFC94A5__PREPAREDATAIMPL_OFFSET UNITYSDK_OFFSET(0x105F8F00)
#define CLASS_2_88CAA4B3ECFC94A5___IFIXBASEPROXY_FILLNOTIFYTYPESTO_OFFSET UNITYSDK_OFFSET(0x105F91E0)
#define CLASS_2_88CAA4B3ECFC94A5___IFIXBASEPROXY__DOCHECKIMPL_OFFSET UNITYSDK_OFFSET(0x105F9250)
#define CLASS_2_88CAA4B3ECFC94A5___IFIXBASEPROXY__ISDATAREADYIMPL_OFFSET UNITYSDK_OFFSET(0x105F92C0)
#define CLASS_2_88CAA4B3ECFC94A5___IFIXBASEPROXY__PREPAREDATAIMPL_OFFSET UNITYSDK_OFFSET(0x105F9330)

inline static constexpr unsigned int Class_2_88CAA4B3ECFC94A5_TypeDefinitionIndex = 48490;

class Class_2_88CAA4B3ECFC94A5 : public ::RPG::Client::AsyncCheckItemBase
{
public:
	::System::UInt32 Field_2_1; // 0x10
	::System::UInt32 Field_2_0; // 0x14

	::System::Void _ctor(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_88CAA4B3ECFC94A5__CTOR_OFFSET))(this, a1);
	}

	::System::Void FillNotifyTypesTo(::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>*))((::PBYTE)hIl2Cpp + CLASS_2_88CAA4B3ECFC94A5_FILLNOTIFYTYPESTO_OFFSET))(this, a1);
	}

	::System::Boolean _DoCheckImpl()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_88CAA4B3ECFC94A5__DOCHECKIMPL_OFFSET))(this);
	}

	::System::Boolean _IsDataReadyImpl()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_88CAA4B3ECFC94A5__ISDATAREADYIMPL_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* _PrepareDataImpl()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_88CAA4B3ECFC94A5__PREPAREDATAIMPL_OFFSET))(this);
	}

	::System::Tuple_2<::System::UInt32, ::System::UInt32>* Method_2_D3B8059323BFEDF7()
	{
		return ((::System::Tuple_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_88CAA4B3ECFC94A5_METHOD_2_D3B8059323BFEDF7_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_FillNotifyTypesTo(::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>* P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>*))((::PBYTE)hIl2Cpp + CLASS_2_88CAA4B3ECFC94A5___IFIXBASEPROXY_FILLNOTIFYTYPESTO_OFFSET))(this, P0);
	}

	::System::Boolean __iFixBaseProxy__DoCheckImpl()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_88CAA4B3ECFC94A5___IFIXBASEPROXY__DOCHECKIMPL_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy__IsDataReadyImpl()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_88CAA4B3ECFC94A5___IFIXBASEPROXY__ISDATAREADYIMPL_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* __iFixBaseProxy__PrepareDataImpl()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_88CAA4B3ECFC94A5___IFIXBASEPROXY__PREPAREDATAIMPL_OFFSET))(this);
	}
};
