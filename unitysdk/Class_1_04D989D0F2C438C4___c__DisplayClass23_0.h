#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/HashSet_1_Enumerator.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_04D989D0F2C438C4___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8CF7910)
#define CLASS_1_04D989D0F2C438C4___C__DISPLAYCLASS23_0__GETNEEDDOWNLOADSIZEFORWHITELIST_B__2_OFFSET UNITYSDK_OFFSET(0x8CFEAA0)

inline static constexpr unsigned int Class_1_04D989D0F2C438C4___c__DisplayClass23_0_TypeDefinitionIndex = 48262;

class Class_1_04D989D0F2C438C4___c__DisplayClass23_0 : public ::System::Object
{
public:
	::System::Func_2<::System::String*, ::System::String*>* __9__2; // 0x10
	::System::Collections::Generic::HashSet_1_Enumerator<::System::String*> enumor; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
	}

	::System::String* _GetNeedDownloadSizeForWhiteList_b__2(::System::String* e)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4___C__DISPLAYCLASS23_0__GETNEEDDOWNLOADSIZEFORWHITELIST_B__2_OFFSET))(this, e);
	}
};
