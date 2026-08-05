#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_3_EED999AD939F8BED_METHOD_3_0DC83DAD98592ADE_OFFSET UNITYSDK_OFFSET(0x16560D10)
#define CLASS_3_EED999AD939F8BED_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16561190)
#define CLASS_3_EED999AD939F8BED_METHOD_3_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x16560B10)
#define CLASS_3_EED999AD939F8BED__CTOR_OFFSET UNITYSDK_OFFSET(0x16561010)

inline static constexpr unsigned int Class_3_EED999AD939F8BED_TypeDefinitionIndex = 68022;

class Class_3_EED999AD939F8BED : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_2FF7D360A2F3EC48<::Foundation::ViewObject::ViewObjectHandle>* Field_3_1; // 0x18
	::Class_4_2FF7D360A2F3EC48<::UnityEngine::Vector3>* Field_3_7; // 0x20
	::Class_4_2FF7D360A2F3EC48<::UnityEngine::Vector3>* Field_3_0; // 0x28
	::Class_3_DCB7F8B839F0C44B_4* Field_3_2; // 0x30
	::Class_3_B537A0AA78803363* Field_3_6; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EED999AD939F8BED__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EED999AD939F8BED_METHOD_3_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_3_0DC83DAD98592ADE(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_EED999AD939F8BED_METHOD_3_0DC83DAD98592ADE_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EED999AD939F8BED_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
