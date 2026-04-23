#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SyncCheckItemBase.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_4449FA67881FAA67_FILLRSPCMDIDSTO_OFFSET UNITYSDK_OFFSET(0xD399EC0)
#define CLASS_2_4449FA67881FAA67__CTOR_OFFSET UNITYSDK_OFFSET(0xD399EA0)
#define CLASS_2_4449FA67881FAA67__DOCHECKIMPL_OFFSET UNITYSDK_OFFSET(0xD399F40)
#define CLASS_2_4449FA67881FAA67___IFIXBASEPROXY_FILLRSPCMDIDSTO_OFFSET UNITYSDK_OFFSET(0xD399FF0)
#define CLASS_2_4449FA67881FAA67___IFIXBASEPROXY__DOCHECKIMPL_OFFSET UNITYSDK_OFFSET(0xD39A060)

inline static constexpr unsigned int Class_2_4449FA67881FAA67_TypeDefinitionIndex = 55258;

class Class_2_4449FA67881FAA67 : public ::RPG::Client::SyncCheckItemBase
{
public:
	::System::UInt32 Field_2_0; // 0x10

	::System::Void _ctor(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_4449FA67881FAA67__CTOR_OFFSET))(this, a1);
	}

	::System::Void FillRspCmdIDsTo(::System::Collections::Generic::HashSet_1<::System::UInt16>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt16>*))((::PBYTE)hIl2Cpp + CLASS_2_4449FA67881FAA67_FILLRSPCMDIDSTO_OFFSET))(this, a1);
	}

	::System::Boolean _DoCheckImpl()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4449FA67881FAA67__DOCHECKIMPL_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_FillRspCmdIDsTo(::System::Collections::Generic::HashSet_1<::System::UInt16>* P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt16>*))((::PBYTE)hIl2Cpp + CLASS_2_4449FA67881FAA67___IFIXBASEPROXY_FILLRSPCMDIDSTO_OFFSET))(this, P0);
	}

	::System::Boolean __iFixBaseProxy__DoCheckImpl()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4449FA67881FAA67___IFIXBASEPROXY__DOCHECKIMPL_OFFSET))(this);
	}
};
