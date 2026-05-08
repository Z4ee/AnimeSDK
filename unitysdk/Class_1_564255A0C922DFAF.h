#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class BlendTextureSheetData; }
namespace System { class String; }

#define CLASS_1_564255A0C922DFAF_METHOD_1_D0AA4F4FDCD7208E_OFFSET UNITYSDK_OFFSET(0x11659110)

inline static constexpr unsigned int Class_1_564255A0C922DFAF_TypeDefinitionIndex = 74972;

class Class_1_564255A0C922DFAF : public ::System::Object
{
public:
	static ::MoleMole::BlendTextureSheetData* Method_1_D0AA4F4FDCD7208E(::System::String* a1)
	{
		return ((::MoleMole::BlendTextureSheetData*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_564255A0C922DFAF_METHOD_1_D0AA4F4FDCD7208E_OFFSET))(a1);
	}
};
