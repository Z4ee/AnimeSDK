#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Reflection { class FieldInfo; }

#define IFIX_CORE_PATCHMANAGER__LOAD_C__ANONSTOREY2__CTOR_OFFSET UNITYSDK_OFFSET(0x171470F0)
#define IFIX_CORE_PATCHMANAGER__LOAD_C__ANONSTOREY2___M__0_OFFSET UNITYSDK_OFFSET(0x1714C790)

namespace IFix::Core
{
	inline static constexpr unsigned int PatchManager__Load_c__AnonStorey2_TypeDefinitionIndex = 9918;

	class PatchManager__Load_c__AnonStorey2 : public ::System::Object
	{
	public:
		::System::Type* IFixPatched; // 0x10
		::System::Reflection::FieldInfo* patchedIDs; // 0x18
		::System::Int32 maxPos; // 0x20
		::System::Int32 fixCount; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CORE_PATCHMANAGER__LOAD_C__ANONSTOREY2__CTOR_OFFSET))(this);
		}

		::System::Void __m__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CORE_PATCHMANAGER__LOAD_C__ANONSTOREY2___M__0_OFFSET))(this);
		}
	};
}
