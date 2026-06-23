#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/CodeDom/CodeObject.h"

namespace System::CodeDom { class CodeDirectiveCollection; }
namespace System::CodeDom { class CodeLinePragma; }

#define SYSTEM_CODEDOM_CODESTATEMENT_GET_ENDDIRECTIVES_OFFSET UNITYSDK_OFFSET(0x1D5C97B0)
#define SYSTEM_CODEDOM_CODESTATEMENT_GET_LINEPRAGMA_OFFSET UNITYSDK_OFFSET(0x1D5C97F0)
#define SYSTEM_CODEDOM_CODESTATEMENT_GET_STARTDIRECTIVES_OFFSET UNITYSDK_OFFSET(0x1D5C9870)
#define SYSTEM_CODEDOM_CODESTATEMENT_SET_LINEPRAGMA_OFFSET UNITYSDK_OFFSET(0x1D5C9830)
#define SYSTEM_CODEDOM_CODESTATEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5C9770)

namespace System::CodeDom
{
	inline static constexpr unsigned int CodeStatement_TypeDefinitionIndex = 4038;

	class CodeStatement : public ::System::CodeDom::CodeObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODESTATEMENT__CTOR_OFFSET))(this);
		}

		::System::CodeDom::CodeDirectiveCollection* get_EndDirectives()
		{
			return ((::System::CodeDom::CodeDirectiveCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODESTATEMENT_GET_ENDDIRECTIVES_OFFSET))(this);
		}

		::System::CodeDom::CodeLinePragma* get_LinePragma()
		{
			return ((::System::CodeDom::CodeLinePragma*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODESTATEMENT_GET_LINEPRAGMA_OFFSET))(this);
		}

		::System::Void set_LinePragma(::System::CodeDom::CodeLinePragma* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeLinePragma*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODESTATEMENT_SET_LINEPRAGMA_OFFSET))(this, value);
		}

		::System::CodeDom::CodeDirectiveCollection* get_StartDirectives()
		{
			return ((::System::CodeDom::CodeDirectiveCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODESTATEMENT_GET_STARTDIRECTIVES_OFFSET))(this);
		}
	};
}
