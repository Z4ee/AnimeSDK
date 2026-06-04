#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D501FC103C8A2714_Struct_2_AE83ED9A4DA0CE75.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_D501FC103C8A2714_Class_0_16E7307DCC43CB2C_3;
class Class_1_D501FC103C8A2714_Class_2_3133B2E82B58C639;
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
template <typename T1, typename T2> class Class_3_B60F6C2F126D2E26;
template <typename T> class Class_1_D501FC103C8A2714_Class_2_3B5E8ED9C9048121;

#define CLASS_1_D501FC103C8A2714_METHOD_1_21886A8411E71157_OFFSET UNITYSDK_OFFSET(0x1AC42000)
#define CLASS_1_D501FC103C8A2714_METHOD_1_506EEE2E791A82F8_OFFSET UNITYSDK_OFFSET(0x1AC41960)
#define CLASS_1_D501FC103C8A2714_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1AC41FC0)
#define CLASS_1_D501FC103C8A2714__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC42190)

inline static constexpr unsigned int Class_1_D501FC103C8A2714_TypeDefinitionIndex = 40647;

class Class_1_D501FC103C8A2714 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*, ::System::Type*>, ::Class_1_D501FC103C8A2714_Class_0_16E7307DCC43CB2C_3*>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::Class_1_D501FC103C8A2714_Struct_2_AE83ED9A4DA0CE75, ::System::Collections::Generic::HashSet_1<::Class_1_D501FC103C8A2714_Class_0_16E7307DCC43CB2C_3*>*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D501FC103C8A2714__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_506EEE2E791A82F8(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D501FC103C8A2714_METHOD_1_506EEE2E791A82F8_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D501FC103C8A2714_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_21886A8411E71157()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D501FC103C8A2714_METHOD_1_21886A8411E71157_OFFSET))(this);
	}
};
