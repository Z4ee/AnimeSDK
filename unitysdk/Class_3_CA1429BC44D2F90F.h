#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_CA1429BC44D2F90F_METHOD_3_400CD15A8456AED9_OFFSET UNITYSDK_OFFSET(0x1C8A1600)
#define CLASS_3_CA1429BC44D2F90F_METHOD_3_7F22A781A9156478_OFFSET UNITYSDK_OFFSET(0x1C8A1640)
#define CLASS_3_CA1429BC44D2F90F__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8A1630)

inline static constexpr unsigned int Class_3_CA1429BC44D2F90F_TypeDefinitionIndex = 22457;

class Class_3_CA1429BC44D2F90F : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* OFINIELALIP; // 0x18
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20
	::System::String* FMKKJGKFHHF; // 0x28
	::System::String* FOGOFODLIFL; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CA1429BC44D2F90F__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_400CD15A8456AED9(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_CA1429BC44D2F90F*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_CA1429BC44D2F90F*&))((::PBYTE)hIl2Cpp + CLASS_3_CA1429BC44D2F90F_METHOD_3_400CD15A8456AED9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_7F22A781A9156478(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_CA1429BC44D2F90F* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_CA1429BC44D2F90F*))((::PBYTE)hIl2Cpp + CLASS_3_CA1429BC44D2F90F_METHOD_3_7F22A781A9156478_OFFSET))(a1, a2);
	}
};
