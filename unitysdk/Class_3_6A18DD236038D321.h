#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_AB4261DB06E3A6BD.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_3_6A18DD236038D321_METHOD_3_8FAD57395F26ACC4_OFFSET UNITYSDK_OFFSET(0x12866C20)
#define CLASS_3_6A18DD236038D321_METHOD_3_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0x12866D50)
#define CLASS_3_6A18DD236038D321_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12866D00)
#define CLASS_3_6A18DD236038D321__CTOR_OFFSET UNITYSDK_OFFSET(0x12866BE0)

inline static constexpr unsigned int Class_3_6A18DD236038D321_TypeDefinitionIndex = 87851;

class Class_3_6A18DD236038D321 : public ::Class_2_AB4261DB06E3A6BD
{
public:
	::System::Func_2<::System::Single, ::System::Boolean>* Field_3_0; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6A18DD236038D321__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_8FAD57395F26ACC4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_6A18DD236038D321_METHOD_3_8FAD57395F26ACC4_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6A18DD236038D321_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_C561FF611C07A44C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6A18DD236038D321_METHOD_3_C561FF611C07A44C_OFFSET))(this);
	}
};
