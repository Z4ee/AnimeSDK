#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B353AD2F4C8AD4F8;
class Class_1_D45ADB5492AB938B;
class Class_2_69FE2A2F26EAE95C;
class Class_2_F21834FAEFB228CB;
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_1_E4B13E98B5534378_METHOD_1_1DFC139DDDA052D2_OFFSET UNITYSDK_OFFSET(0x1F5CF330)
#define CLASS_1_E4B13E98B5534378_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1F5CF340)
#define CLASS_1_E4B13E98B5534378__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F5CF260)
#define CLASS_1_E4B13E98B5534378__CTOR_OFFSET UNITYSDK_OFFSET(0x1F5CF190)

inline static constexpr unsigned int Class_1_E4B13E98B5534378_TypeDefinitionIndex = 19123;

class Class_1_E4B13E98B5534378 : public ::System::Object
{
public:
	::System::Collections::Generic::IDictionary_2<::Class_2_F21834FAEFB228CB*, ::System::Collections::Generic::IList_1<::Class_2_69FE2A2F26EAE95C*>*>* Field_1_1; // 0x10
	::System::Collections::Generic::IList_1<::Class_2_69FE2A2F26EAE95C*>* Field_1_0; // 0x18
	::System::Collections::Generic::IDictionary_2<::Class_2_F21834FAEFB228CB*, ::System::Collections::Generic::IList_1<::Class_2_69FE2A2F26EAE95C*>*>* Field_1_2; // 0x20

	::System::Void _ctor(::Class_1_B353AD2F4C8AD4F8* a1, ::Il2CppArray<::Class_1_D45ADB5492AB938B*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B353AD2F4C8AD4F8*, ::Il2CppArray<::Class_1_D45ADB5492AB938B*>*))((::PBYTE)hIl2Cpp + CLASS_1_E4B13E98B5534378__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::Class_2_F21834FAEFB228CB* a1, ::Il2CppArray<::Class_1_D45ADB5492AB938B*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F21834FAEFB228CB*, ::Il2CppArray<::Class_1_D45ADB5492AB938B*>*))((::PBYTE)hIl2Cpp + CLASS_1_E4B13E98B5534378__CTOR_1_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IList_1<::Class_2_69FE2A2F26EAE95C*>* Method_1_1DFC139DDDA052D2()
	{
		return ((::System::Collections::Generic::IList_1<::Class_2_69FE2A2F26EAE95C*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4B13E98B5534378_METHOD_1_1DFC139DDDA052D2_OFFSET))(this);
	}

	::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4B13E98B5534378_METHOD_1_DE52BD42C4B0B772_OFFSET))(this);
	}
};
