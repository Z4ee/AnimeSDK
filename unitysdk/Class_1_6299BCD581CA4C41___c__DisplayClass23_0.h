#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/HashSet_1_Enumerator.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_6299BCD581CA4C41___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0x185B43E0)
#define CLASS_1_6299BCD581CA4C41___C__DISPLAYCLASS23_0__GETNEEDDOWNLOADSIZEFORWHITELIST_B__2_OFFSET UNITYSDK_OFFSET(0x185BD3E0)

inline static constexpr unsigned int Class_1_6299BCD581CA4C41___c__DisplayClass23_0_TypeDefinitionIndex = 56978;

class Class_1_6299BCD581CA4C41___c__DisplayClass23_0 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1_Enumerator<::System::String*> enumor; // 0x10
	::System::Func_2<::System::String*, ::System::String*>* __9__2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
	}

	::System::String* _GetNeedDownloadSizeForWhiteList_b__2(::System::String* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41___C__DISPLAYCLASS23_0__GETNEEDDOWNLOADSIZEFORWHITELIST_B__2_OFFSET))(this, a1);
	}
};
