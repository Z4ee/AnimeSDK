#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A8F4B263DF045665_Struct_2_AE83ED9A4DA0CE75.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_A8F4B263DF045665_Class_0_16E7307DCC43CB2C_3;
class Class_1_A8F4B263DF045665_Class_2_B236B9C45C54442F;
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
template <typename T1, typename T2> class Class_3_B60F6C2F126D2E26;
template <typename T> class Class_1_A8F4B263DF045665_Class_2_3B5E8ED9C9048121;

#define CLASS_1_A8F4B263DF045665_METHOD_1_4BB6C11178B2F60C_OFFSET UNITYSDK_OFFSET(0x19DAFC00)
#define CLASS_1_A8F4B263DF045665_METHOD_1_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0x19DB0660)
#define CLASS_1_A8F4B263DF045665_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x19DB04F0)
#define CLASS_1_A8F4B263DF045665__CTOR_OFFSET UNITYSDK_OFFSET(0x19DB0810)

inline static constexpr unsigned int Class_1_A8F4B263DF045665_TypeDefinitionIndex = 39820;

class Class_1_A8F4B263DF045665 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::Class_1_A8F4B263DF045665_Struct_2_AE83ED9A4DA0CE75, ::System::Collections::Generic::HashSet_1<::Class_1_A8F4B263DF045665_Class_0_16E7307DCC43CB2C_3*>*>* Field_1_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*, ::System::Type*>, ::Class_1_A8F4B263DF045665_Class_0_16E7307DCC43CB2C_3*>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8F4B263DF045665__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4BB6C11178B2F60C(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A8F4B263DF045665_METHOD_1_4BB6C11178B2F60C_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8F4B263DF045665_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_4EA6B1791DACA9CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8F4B263DF045665_METHOD_1_4EA6B1791DACA9CC_OFFSET))(this);
	}
};
