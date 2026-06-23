#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/CodeDom/CodeMemberMethod.h"

namespace System::CodeDom { class CodeExpressionCollection; }

#define SYSTEM_CODEDOM_CODECONSTRUCTOR_GET_BASECONSTRUCTORARGS_OFFSET UNITYSDK_OFFSET(0x1CAE6910)
#define SYSTEM_CODEDOM_CODECONSTRUCTOR_GET_CHAINEDCONSTRUCTORARGS_OFFSET UNITYSDK_OFFSET(0x1CAE6950)
#define SYSTEM_CODEDOM_CODECONSTRUCTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1CAE68D0)

namespace System::CodeDom
{
	inline static constexpr unsigned int CodeConstructor_TypeDefinitionIndex = 4250;

	class CodeConstructor : public ::System::CodeDom::CodeMemberMethod
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODECONSTRUCTOR__CTOR_OFFSET))(this);
		}

		::System::CodeDom::CodeExpressionCollection* get_BaseConstructorArgs()
		{
			return ((::System::CodeDom::CodeExpressionCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODECONSTRUCTOR_GET_BASECONSTRUCTORARGS_OFFSET))(this);
		}

		::System::CodeDom::CodeExpressionCollection* get_ChainedConstructorArgs()
		{
			return ((::System::CodeDom::CodeExpressionCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODECONSTRUCTOR_GET_CHAINEDCONSTRUCTORARGS_OFFSET))(this);
		}
	};
}
