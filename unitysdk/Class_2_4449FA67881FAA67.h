#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SyncCheckItemBase.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_4449FA67881FAA67_FILLRSPCMDIDSTO_OFFSET UNITYSDK_OFFSET(0xC3E4DA0)
#define CLASS_2_4449FA67881FAA67__CTOR_OFFSET UNITYSDK_OFFSET(0xC3E4D80)
#define CLASS_2_4449FA67881FAA67__DOCHECKIMPL_OFFSET UNITYSDK_OFFSET(0xC3E4E20)

inline static constexpr unsigned int Class_2_4449FA67881FAA67_TypeDefinitionIndex = 60029;

class Class_2_4449FA67881FAA67 : public ::RPG::Client::SyncCheckItemBase
{
public:
	::System::UInt32 CGBJOLOJNGN; // 0x10

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
};
