#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_36.h"

class Class_1_D4EE696AE596E211;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Rendering { class Volume; }

#define CLASS_2_F9DCB474FF2758D5_1_METHOD_2_874EF981B80D566C_OFFSET UNITYSDK_OFFSET(0x167BEA80)
#define CLASS_2_F9DCB474FF2758D5_1__CTOR_OFFSET UNITYSDK_OFFSET(0x167C1610)

inline static constexpr unsigned int Class_2_F9DCB474FF2758D5_1_TypeDefinitionIndex = 67139;

class Class_2_F9DCB474FF2758D5_1 : public ::Class_1_43BD383C98B4C0C5_36
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F9DCB474FF2758D5_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_874EF981B80D566C(::UnityEngine::Rendering::Volume* a1, ::System::Collections::Generic::List_1<::Class_1_D4EE696AE596E211*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Volume*, ::System::Collections::Generic::List_1<::Class_1_D4EE696AE596E211*>*))((::PBYTE)hIl2Cpp + CLASS_2_F9DCB474FF2758D5_1_METHOD_2_874EF981B80D566C_OFFSET))(this, a1, a2);
	}
};
