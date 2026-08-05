#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_8649573A691533F8.h"

class Class_0_16E4307DCC419505;
class InteriorMapping;
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_1_3B365E645019A36F;

#define GLOBALTICKMANAGERINTERIORMAPPING_INITDELAYREFRESHLIST_OFFSET UNITYSDK_OFFSET(0x1FBEDC10)
#define GLOBALTICKMANAGERINTERIORMAPPING_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1FBEDC60)
#define GLOBALTICKMANAGERINTERIORMAPPING__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBEDCA0)

inline static constexpr unsigned int GlobalTickManagerInteriorMapping_TypeDefinitionIndex = 35304;

class GlobalTickManagerInteriorMapping : public ::Class_2_8649573A691533F8<::GlobalTickManagerInteriorMapping*>
{
public:
	::Class_1_3B365E645019A36F<::InteriorMapping*>* _interiorMappingSet; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLOBALTICKMANAGERINTERIORMAPPING__CTOR_OFFSET))(this);
	}

	::System::Void InitDelayRefreshList(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505*>* delayRefreshList)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505*>*))((::PBYTE)hIl2Cpp + GLOBALTICKMANAGERINTERIORMAPPING_INITDELAYREFRESHLIST_OFFSET))(this, delayRefreshList);
	}

	::System::Void OnUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLOBALTICKMANAGERINTERIORMAPPING_ONUPDATE_OFFSET))(this);
	}
};
