#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4865323EE33E9248;
namespace MoleMole { class UIPushFaceV1PopWindowController; }

#define CLASS_1_88C5C9263D5F0027_METHOD_1_3A24AC350456F101_OFFSET UNITYSDK_OFFSET(0xD0B8C00)
#define CLASS_1_88C5C9263D5F0027_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xD0B8C50)
#define CLASS_1_88C5C9263D5F0027__CTOR_OFFSET UNITYSDK_OFFSET(0xD0B8C90)

inline static constexpr unsigned int Class_1_88C5C9263D5F0027_TypeDefinitionIndex = 75780;

class Class_1_88C5C9263D5F0027 : public ::System::Object
{
public:
	::Class_1_4865323EE33E9248* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88C5C9263D5F0027__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_3A24AC350456F101(::MoleMole::UIPushFaceV1PopWindowController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIPushFaceV1PopWindowController*))((::PBYTE)hIl2Cpp + CLASS_1_88C5C9263D5F0027_METHOD_1_3A24AC350456F101_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88C5C9263D5F0027_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
