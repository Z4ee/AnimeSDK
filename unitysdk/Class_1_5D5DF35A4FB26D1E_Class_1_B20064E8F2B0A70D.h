#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUILight; }
namespace System { class Action; }

#define CLASS_1_5D5DF35A4FB26D1E_CLASS_1_B20064E8F2B0A70D_METHOD_1_81A986BB80B7EA9E_OFFSET UNITYSDK_OFFSET(0x1342E520)
#define CLASS_1_5D5DF35A4FB26D1E_CLASS_1_B20064E8F2B0A70D__CTOR_OFFSET UNITYSDK_OFFSET(0x1342E510)

inline static constexpr unsigned int Class_1_5D5DF35A4FB26D1E_Class_1_B20064E8F2B0A70D_TypeDefinitionIndex = 74267;

class Class_1_5D5DF35A4FB26D1E_Class_1_B20064E8F2B0A70D : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D5DF35A4FB26D1E_CLASS_1_B20064E8F2B0A70D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_81A986BB80B7EA9E(::MoleMole::ConfigUILight* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUILight*))((::PBYTE)hIl2Cpp + CLASS_1_5D5DF35A4FB26D1E_CLASS_1_B20064E8F2B0A70D_METHOD_1_81A986BB80B7EA9E_OFFSET))(this, a1);
	}
};
