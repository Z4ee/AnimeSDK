#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_1031;
class Class_2_DF73794ED874FFFB;
namespace System { class String; }

#define CLASS_1_049B9A4D827304A8__CTOR_OFFSET UNITYSDK_OFFSET(0x1700F3D0)

inline static constexpr unsigned int Class_1_049B9A4D827304A8_TypeDefinitionIndex = 49942;

class Class_1_049B9A4D827304A8 : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::Class_2_208CC9941471731A_1031* Field_1_2; // 0x18
	::Class_2_DF73794ED874FFFB* Field_1_3; // 0x20
	::System::Boolean Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_049B9A4D827304A8__CTOR_OFFSET))(this);
	}
};
