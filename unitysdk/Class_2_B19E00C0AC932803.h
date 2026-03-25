#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AsyncCheckItemBase.h"
#include "unitysdk/RPG/Client/NotifyType.h"

class Class_2_C0950EB832EDE5B7_1;
namespace RPG::Client { class CheckItemFinishMainMission; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_B19E00C0AC932803_FILLNOTIFYTYPESTO_OFFSET UNITYSDK_OFFSET(0x1142D100)
#define CLASS_2_B19E00C0AC932803_FILLRSPCMDIDSTO_OFFSET UNITYSDK_OFFSET(0x1142D040)
#define CLASS_2_B19E00C0AC932803_GETCHECKITEMINFO_OFFSET UNITYSDK_OFFSET(0x1142D5C0)
#define CLASS_2_B19E00C0AC932803_METHOD_2_5CEC4607322705E5_OFFSET UNITYSDK_OFFSET(0x1142D580)
#define CLASS_2_B19E00C0AC932803_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1142D4D0)
#define CLASS_2_B19E00C0AC932803__CTOR_OFFSET UNITYSDK_OFFSET(0x1142CF70)
#define CLASS_2_B19E00C0AC932803__DOCHECKIMPL_OFFSET UNITYSDK_OFFSET(0x1142D170)
#define CLASS_2_B19E00C0AC932803__ISDATAREADYIMPL_OFFSET UNITYSDK_OFFSET(0x1142D240)
#define CLASS_2_B19E00C0AC932803__PREPAREDATAIMPL_OFFSET UNITYSDK_OFFSET(0x1142D310)
#define CLASS_2_B19E00C0AC932803___IFIXBASEPROXY_FILLNOTIFYTYPESTO_OFFSET UNITYSDK_OFFSET(0x1142D680)
#define CLASS_2_B19E00C0AC932803___IFIXBASEPROXY_FILLRSPCMDIDSTO_OFFSET UNITYSDK_OFFSET(0x1142D610)
#define CLASS_2_B19E00C0AC932803___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1142D880)
#define CLASS_2_B19E00C0AC932803___IFIXBASEPROXY__DOCHECKIMPL_OFFSET UNITYSDK_OFFSET(0x1142D6F0)
#define CLASS_2_B19E00C0AC932803___IFIXBASEPROXY__ISDATAREADYIMPL_OFFSET UNITYSDK_OFFSET(0x1142D760)
#define CLASS_2_B19E00C0AC932803___IFIXBASEPROXY__PREPAREDATAIMPL_OFFSET UNITYSDK_OFFSET(0x1142D7D0)

inline static constexpr unsigned int Class_2_B19E00C0AC932803_TypeDefinitionIndex = 48506;

class Class_2_B19E00C0AC932803 : public ::RPG::Client::AsyncCheckItemBase
{
public:
	::RPG::Client::CheckItemFinishMainMission* Field_2_0; // 0x10
	::Class_2_C0950EB832EDE5B7_1* Field_2_1; // 0x18
	::System::UInt32 Field_2_2; // 0x20

	::System::Void _ctor(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_B19E00C0AC932803__CTOR_OFFSET))(this, a1);
	}

	::System::Void FillRspCmdIDsTo(::System::Collections::Generic::HashSet_1<::System::UInt16>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt16>*))((::PBYTE)hIl2Cpp + CLASS_2_B19E00C0AC932803_FILLRSPCMDIDSTO_OFFSET))(this, a1);
	}

	::System::Void FillNotifyTypesTo(::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>*))((::PBYTE)hIl2Cpp + CLASS_2_B19E00C0AC932803_FILLNOTIFYTYPESTO_OFFSET))(this, a1);
	}

	::System::Boolean _DoCheckImpl()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B19E00C0AC932803__DOCHECKIMPL_OFFSET))(this);
	}

	::System::Boolean _IsDataReadyImpl()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B19E00C0AC932803__ISDATAREADYIMPL_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* _PrepareDataImpl()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B19E00C0AC932803__PREPAREDATAIMPL_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B19E00C0AC932803_TOSTRING_OFFSET))(this);
	}

	::System::UInt32 Method_2_5CEC4607322705E5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B19E00C0AC932803_METHOD_2_5CEC4607322705E5_OFFSET))(this);
	}

	::System::String* GetCheckItemInfo()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B19E00C0AC932803_GETCHECKITEMINFO_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_FillRspCmdIDsTo(::System::Collections::Generic::HashSet_1<::System::UInt16>* P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt16>*))((::PBYTE)hIl2Cpp + CLASS_2_B19E00C0AC932803___IFIXBASEPROXY_FILLRSPCMDIDSTO_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_FillNotifyTypesTo(::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>* P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>*))((::PBYTE)hIl2Cpp + CLASS_2_B19E00C0AC932803___IFIXBASEPROXY_FILLNOTIFYTYPESTO_OFFSET))(this, P0);
	}

	::System::Boolean __iFixBaseProxy__DoCheckImpl()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B19E00C0AC932803___IFIXBASEPROXY__DOCHECKIMPL_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy__IsDataReadyImpl()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B19E00C0AC932803___IFIXBASEPROXY__ISDATAREADYIMPL_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* __iFixBaseProxy__PrepareDataImpl()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B19E00C0AC932803___IFIXBASEPROXY__PREPAREDATAIMPL_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B19E00C0AC932803___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
