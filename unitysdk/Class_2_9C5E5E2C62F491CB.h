#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AsyncCheckItemBase.h"
#include "unitysdk/RPG/Client/NotifyType.h"

class Class_2_278490190A5A4506;
class Class_2_C0950EB832EDE5B7_1;
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_9C5E5E2C62F491CB_FILLNOTIFYTYPESTO_OFFSET UNITYSDK_OFFSET(0x11625420)
#define CLASS_2_9C5E5E2C62F491CB_FILLRSPCMDIDSTO_OFFSET UNITYSDK_OFFSET(0x11625360)
#define CLASS_2_9C5E5E2C62F491CB_GETCHECKITEMINFO_OFFSET UNITYSDK_OFFSET(0x11625790)
#define CLASS_2_9C5E5E2C62F491CB_METHOD_2_5CEC4607322705E5_OFFSET UNITYSDK_OFFSET(0x116257E0)
#define CLASS_2_9C5E5E2C62F491CB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x116256E0)
#define CLASS_2_9C5E5E2C62F491CB__CTOR_OFFSET UNITYSDK_OFFSET(0x11625190)
#define CLASS_2_9C5E5E2C62F491CB__DOCHECKIMPL_OFFSET UNITYSDK_OFFSET(0x11625490)
#define CLASS_2_9C5E5E2C62F491CB__ISDATAREADYIMPL_OFFSET UNITYSDK_OFFSET(0x11625500)
#define CLASS_2_9C5E5E2C62F491CB__PREPAREDATAIMPL_OFFSET UNITYSDK_OFFSET(0x11625570)

inline static constexpr unsigned int Class_2_9C5E5E2C62F491CB_TypeDefinitionIndex = 57229;

class Class_2_9C5E5E2C62F491CB : public ::RPG::Client::AsyncCheckItemBase
{
public:
	::Class_2_278490190A5A4506* Field_2_0; // 0x10
	::Class_2_C0950EB832EDE5B7_1* Field_2_1; // 0x18
	::System::UInt32 Field_2_2; // 0x20

	::System::Void _ctor(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_9C5E5E2C62F491CB__CTOR_OFFSET))(this, a1);
	}

	::System::Void FillRspCmdIDsTo(::System::Collections::Generic::HashSet_1<::System::UInt16>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt16>*))((::PBYTE)hIl2Cpp + CLASS_2_9C5E5E2C62F491CB_FILLRSPCMDIDSTO_OFFSET))(this, a1);
	}

	::System::Void FillNotifyTypesTo(::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>*))((::PBYTE)hIl2Cpp + CLASS_2_9C5E5E2C62F491CB_FILLNOTIFYTYPESTO_OFFSET))(this, a1);
	}

	::System::Boolean _DoCheckImpl()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C5E5E2C62F491CB__DOCHECKIMPL_OFFSET))(this);
	}

	::System::Boolean _IsDataReadyImpl()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C5E5E2C62F491CB__ISDATAREADYIMPL_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* _PrepareDataImpl()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C5E5E2C62F491CB__PREPAREDATAIMPL_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C5E5E2C62F491CB_TOSTRING_OFFSET))(this);
	}

	::System::String* GetCheckItemInfo()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C5E5E2C62F491CB_GETCHECKITEMINFO_OFFSET))(this);
	}

	::System::UInt32 Method_2_5CEC4607322705E5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C5E5E2C62F491CB_METHOD_2_5CEC4607322705E5_OFFSET))(this);
	}
};
