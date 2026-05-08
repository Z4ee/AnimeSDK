#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_3_ABD4BE5214C2B8B3_METHOD_3_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0xFC26420)
#define CLASS_3_ABD4BE5214C2B8B3_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xFC26C90)
#define CLASS_3_ABD4BE5214C2B8B3_METHOD_3_D7D32BC455E1AEBB_OFFSET UNITYSDK_OFFSET(0xFC26680)
#define CLASS_3_ABD4BE5214C2B8B3__CTOR_OFFSET UNITYSDK_OFFSET(0xFC26AD0)

inline static constexpr unsigned int Class_3_ABD4BE5214C2B8B3_TypeDefinitionIndex = 45076;

class Class_3_ABD4BE5214C2B8B3 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x18
	::Class_4_2FF7D360A2F3EC48<::MoleMole::EntityHandle>* Field_3_1; // 0x20
	::Class_3_B537A0AA78803363* Field_3_5; // 0x28
	::Class_4_2FF7D360A2F3EC48<::UnityEngine::Vector3>* Field_3_3; // 0x30
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_3_2; // 0x38
	::Class_4_2FF7D360A2F3EC48<::UnityEngine::Vector3>* Field_3_4; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ABD4BE5214C2B8B3__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ABD4BE5214C2B8B3_METHOD_3_0FD0EC313FAAB75A_OFFSET))(this);
	}

	::System::Void Method_3_D7D32BC455E1AEBB(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_ABD4BE5214C2B8B3_METHOD_3_D7D32BC455E1AEBB_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ABD4BE5214C2B8B3_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
