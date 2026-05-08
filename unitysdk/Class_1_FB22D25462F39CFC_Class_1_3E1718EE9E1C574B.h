#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigAttachments; }
namespace System { class Action; }

#define CLASS_1_FB22D25462F39CFC_CLASS_1_3E1718EE9E1C574B_METHOD_1_EA0176E7D32085EA_OFFSET UNITYSDK_OFFSET(0x12A05330)
#define CLASS_1_FB22D25462F39CFC_CLASS_1_3E1718EE9E1C574B__CTOR_OFFSET UNITYSDK_OFFSET(0x12A05320)

inline static constexpr unsigned int Class_1_FB22D25462F39CFC_Class_1_3E1718EE9E1C574B_TypeDefinitionIndex = 53846;

class Class_1_FB22D25462F39CFC_Class_1_3E1718EE9E1C574B : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB22D25462F39CFC_CLASS_1_3E1718EE9E1C574B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_EA0176E7D32085EA(::MoleMole::Config::ConfigAttachments* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigAttachments*))((::PBYTE)hIl2Cpp + CLASS_1_FB22D25462F39CFC_CLASS_1_3E1718EE9E1C574B_METHOD_1_EA0176E7D32085EA_OFFSET))(this, a1);
	}
};
