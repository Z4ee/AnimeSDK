#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_3_8960B8D5132C5605_1_METHOD_3_469ECD10EF199C13_OFFSET UNITYSDK_OFFSET(0x1B13D4C0)
#define CLASS_3_8960B8D5132C5605_1_METHOD_3_9E3D0C5F7C38F16C_OFFSET UNITYSDK_OFFSET(0x1B13D470)
#define CLASS_3_8960B8D5132C5605_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1B13D4B0)

inline static constexpr unsigned int Class_3_8960B8D5132C5605_1_TypeDefinitionIndex = 23292;

class Class_3_8960B8D5132C5605_1 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* Field_3_0; // 0x18
	::System::Boolean Field_3_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8960B8D5132C5605_1__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_9E3D0C5F7C38F16C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_8960B8D5132C5605_1*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_8960B8D5132C5605_1*&))((::PBYTE)hIl2Cpp + CLASS_3_8960B8D5132C5605_1_METHOD_3_9E3D0C5F7C38F16C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_469ECD10EF199C13(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_8960B8D5132C5605_1* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_8960B8D5132C5605_1*))((::PBYTE)hIl2Cpp + CLASS_3_8960B8D5132C5605_1_METHOD_3_469ECD10EF199C13_OFFSET))(a1, a2);
	}
};
