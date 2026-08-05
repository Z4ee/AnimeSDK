#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Text::RegularExpressions { class Match; }
namespace System::Text::RegularExpressions { class MatchEvaluator; }

#define IFIX_CORE_PATCHMANAGER___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E082810)
#define IFIX_CORE_PATCHMANAGER___C__DISPLAYCLASS2_0__READMETHOD_B__0_OFFSET UNITYSDK_OFFSET(0x1E083C80)

namespace IFix::Core
{
	inline static constexpr unsigned int PatchManager___c__DisplayClass2_0_TypeDefinitionIndex = 6923;

	class PatchManager___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Type*>* genericArgInfos; // 0x10
		::System::Text::RegularExpressions::MatchEvaluator* __9__0; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CORE_PATCHMANAGER___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::String* _readMethod_b__0(::System::Text::RegularExpressions::Match* m)
		{
			return ((::System::String*(*)(::PVOID, ::System::Text::RegularExpressions::Match*))((::PBYTE)hIl2Cpp + IFIX_CORE_PATCHMANAGER___C__DISPLAYCLASS2_0__READMETHOD_B__0_OFFSET))(this, m);
		}
	};
}
