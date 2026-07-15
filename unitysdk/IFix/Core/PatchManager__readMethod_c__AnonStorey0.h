#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Text::RegularExpressions { class Match; }

#define IFIX_CORE_PATCHMANAGER__READMETHOD_C__ANONSTOREY0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B53AEF0)
#define IFIX_CORE_PATCHMANAGER__READMETHOD_C__ANONSTOREY0___M__0_OFFSET UNITYSDK_OFFSET(0x1B549430)

namespace IFix::Core
{
	inline static constexpr unsigned int PatchManager__readMethod_c__AnonStorey0_TypeDefinitionIndex = 9757;

	class PatchManager__readMethod_c__AnonStorey0 : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Type*>* genericArgInfos; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CORE_PATCHMANAGER__READMETHOD_C__ANONSTOREY0__CTOR_OFFSET))(this);
		}

		::System::String* __m__0(::System::Text::RegularExpressions::Match* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Text::RegularExpressions::Match*))((::PBYTE)hIl2Cpp + IFIX_CORE_PATCHMANAGER__READMETHOD_C__ANONSTOREY0___M__0_OFFSET))(this, a1);
		}
	};
}
