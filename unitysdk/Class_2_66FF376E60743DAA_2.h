#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SyncCheckItemBase.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_66FF376E60743DAA_2_FILLRSPCMDIDSTO_OFFSET UNITYSDK_OFFSET(0x16BA3020)
#define CLASS_2_66FF376E60743DAA_2__CTOR_OFFSET UNITYSDK_OFFSET(0x16BA3000)
#define CLASS_2_66FF376E60743DAA_2__DOCHECKIMPL_OFFSET UNITYSDK_OFFSET(0x16BA30B0)

inline static constexpr unsigned int Class_2_66FF376E60743DAA_2_TypeDefinitionIndex = 57220;

class Class_2_66FF376E60743DAA_2 : public ::RPG::Client::SyncCheckItemBase
{
public:
	::System::UInt32 Field_2_0; // 0x10

	::System::Void _ctor(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_66FF376E60743DAA_2__CTOR_OFFSET))(this, a1);
	}

	::System::Void FillRspCmdIDsTo(::System::Collections::Generic::HashSet_1<::System::UInt16>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt16>*))((::PBYTE)hIl2Cpp + CLASS_2_66FF376E60743DAA_2_FILLRSPCMDIDSTO_OFFSET))(this, a1);
	}

	::System::Boolean _DoCheckImpl()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_66FF376E60743DAA_2__DOCHECKIMPL_OFFSET))(this);
	}
};
