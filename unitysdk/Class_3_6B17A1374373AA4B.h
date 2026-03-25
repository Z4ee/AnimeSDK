#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimCameraFollowClampMask.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define CLASS_3_6B17A1374373AA4B_METHOD_3_2166CB70112347ED_OFFSET UNITYSDK_OFFSET(0x16E18E90)
#define CLASS_3_6B17A1374373AA4B_METHOD_3_7F22A781A9156478_OFFSET UNITYSDK_OFFSET(0x16E18F10)
#define CLASS_3_6B17A1374373AA4B__CTOR_OFFSET UNITYSDK_OFFSET(0x16E18EE0)

inline static constexpr unsigned int Class_3_6B17A1374373AA4B_TypeDefinitionIndex = 19657;

class Class_3_6B17A1374373AA4B : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicString* Field_3_0; // 0x18
	::RPG::GameCore::FiveDimCameraFollowClampMask Field_3_1; // 0x20
	::System::Boolean Field_3_2; // 0x24
	::System::Single Field_3_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6B17A1374373AA4B__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_2166CB70112347ED(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_6B17A1374373AA4B*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_6B17A1374373AA4B*&))((::PBYTE)hIl2Cpp + CLASS_3_6B17A1374373AA4B_METHOD_3_2166CB70112347ED_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_7F22A781A9156478(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_6B17A1374373AA4B* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_6B17A1374373AA4B*))((::PBYTE)hIl2Cpp + CLASS_3_6B17A1374373AA4B_METHOD_3_7F22A781A9156478_OFFSET))(a1, a2);
	}
};
