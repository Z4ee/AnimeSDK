#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CASETEST_TEXTURESHEETCOLLECTPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x106B09D0)

namespace MoleMole::CaseTest
{
	inline static constexpr unsigned int TextureSheetCollectProxy_TypeDefinitionIndex = 52870;

	class TextureSheetCollectProxy : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CASETEST_TEXTURESHEETCOLLECTPROXY__CTOR_OFFSET))(this);
		}
	};
}
