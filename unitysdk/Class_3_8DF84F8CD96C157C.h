#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_3_8DF84F8CD96C157C_METHOD_3_556DB850615E0921_OFFSET UNITYSDK_OFFSET(0x13B092D0)
#define CLASS_3_8DF84F8CD96C157C_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13B09830)
#define CLASS_3_8DF84F8CD96C157C_METHOD_3_E1E750ADB7AAE8EF_OFFSET UNITYSDK_OFFSET(0x13B093F0)
#define CLASS_3_8DF84F8CD96C157C_METHOD_3_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x13B090D0)
#define CLASS_3_8DF84F8CD96C157C__CTOR_OFFSET UNITYSDK_OFFSET(0x13B096B0)

inline static constexpr unsigned int Class_3_8DF84F8CD96C157C_TypeDefinitionIndex = 64468;

class Class_3_8DF84F8CD96C157C : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_2FF7D360A2F3EC48<::System::Boolean>* Field_3_2; // 0x18
	::Class_4_2FF7D360A2F3EC48<::MoleMole::EntityHandle>* Field_3_1; // 0x20
	::Class_3_B537A0AA78803363* Field_3_4; // 0x28
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x30
	::Class_4_2FF7D360A2F3EC48<::UnityEngine::Vector2>* Field_3_3; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8DF84F8CD96C157C__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8DF84F8CD96C157C_METHOD_3_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_3_556DB850615E0921(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_8DF84F8CD96C157C_METHOD_3_556DB850615E0921_OFFSET))(this, a1);
	}

	::System::Void Method_3_E1E750ADB7AAE8EF(::MoleMole::EntityHandle a1, ::System::Boolean a2, ::UnityEngine::Vector2 a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::System::Boolean, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_3_8DF84F8CD96C157C_METHOD_3_E1E750ADB7AAE8EF_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8DF84F8CD96C157C_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
