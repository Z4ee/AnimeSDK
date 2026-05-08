#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_0DB30C6C31E91732_Enum_3_13AF4B42B514E4FD.h"
#include "unitysdk/System/Object.h"

class Class_1_976C32A5F32B58FC;
class Class_2_9BB22D041A6A1D65;
class Class_2_A3533EA2DA4533F9;
namespace MoleMole { class InLevelAvatarDataItem; }
namespace MoleMole { class InLevelBuddyDataItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1E4D15862302BE00_METHOD_1_08909CE5C1AF1E75_OFFSET UNITYSDK_OFFSET(0x15167770)
#define CLASS_1_1E4D15862302BE00_METHOD_1_47EB1DF523B2F942_OFFSET UNITYSDK_OFFSET(0x151671F0)
#define CLASS_1_1E4D15862302BE00_METHOD_1_5D895A5456A4B9BA_OFFSET UNITYSDK_OFFSET(0x15167A00)
#define CLASS_1_1E4D15862302BE00_METHOD_1_62593EE2FE331D20_OFFSET UNITYSDK_OFFSET(0x151673A0)
#define CLASS_1_1E4D15862302BE00_METHOD_1_72EC1DC225A6DC4E_OFFSET UNITYSDK_OFFSET(0x151675E0)
#define CLASS_1_1E4D15862302BE00_METHOD_1_8DCDA8139B5564C3_OFFSET UNITYSDK_OFFSET(0x151672B0)
#define CLASS_1_1E4D15862302BE00_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x151678D0)
#define CLASS_1_1E4D15862302BE00_METHOD_1_CEBE0839DF3172EC_OFFSET UNITYSDK_OFFSET(0x15167830)
#define CLASS_1_1E4D15862302BE00_METHOD_1_DF3C54A5ADEABAF1_OFFSET UNITYSDK_OFFSET(0x15167B90)
#define CLASS_1_1E4D15862302BE00_METHOD_1_E7924EDEDE1A4AC2_OFFSET UNITYSDK_OFFSET(0x15167940)
#define CLASS_1_1E4D15862302BE00__CCTOR_OFFSET UNITYSDK_OFFSET(0x151671E0)
#define CLASS_1_1E4D15862302BE00__CTOR_OFFSET UNITYSDK_OFFSET(0x15167160)

inline static constexpr unsigned int Class_1_1E4D15862302BE00_TypeDefinitionIndex = 40077;

class Class_1_1E4D15862302BE00 : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_Field_1_2()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1E4D15862302BE00_TypeDefinitionIndex)->GetStaticField(0x10B80);
	}
	// static const ::System::Int32 Field_1_0 = 0x1; // 0x0
	::System::Collections::Generic::List_1<::Class_1_976C32A5F32B58FC*>* Field_1_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E4D15862302BE00__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1E4D15862302BE00__CCTOR_OFFSET))();
	}

	::System::Void Method_1_47EB1DF523B2F942(::Class_2_9BB22D041A6A1D65* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9BB22D041A6A1D65*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1E4D15862302BE00_METHOD_1_47EB1DF523B2F942_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8DCDA8139B5564C3(::Class_1_976C32A5F32B58FC* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_976C32A5F32B58FC*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1E4D15862302BE00_METHOD_1_8DCDA8139B5564C3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_62593EE2FE331D20()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E4D15862302BE00_METHOD_1_62593EE2FE331D20_OFFSET))(this);
	}

	::System::Boolean Method_1_72EC1DC225A6DC4E(::MoleMole::InLevelAvatarDataItem* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::InLevelAvatarDataItem*))((::PBYTE)hIl2Cpp + CLASS_1_1E4D15862302BE00_METHOD_1_72EC1DC225A6DC4E_OFFSET))(this, a1);
	}

	::System::Void Method_1_08909CE5C1AF1E75(::Class_2_A3533EA2DA4533F9* a1, ::System::Boolean a2, ::Class_2_0DB30C6C31E91732_Enum_3_13AF4B42B514E4FD a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A3533EA2DA4533F9*, ::System::Boolean, ::Class_2_0DB30C6C31E91732_Enum_3_13AF4B42B514E4FD, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1E4D15862302BE00_METHOD_1_08909CE5C1AF1E75_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_CEBE0839DF3172EC(::MoleMole::InLevelBuddyDataItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::InLevelBuddyDataItem*))((::PBYTE)hIl2Cpp + CLASS_1_1E4D15862302BE00_METHOD_1_CEBE0839DF3172EC_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E4D15862302BE00_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_E7924EDEDE1A4AC2(::Class_2_A3533EA2DA4533F9* a1, ::System::Boolean a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A3533EA2DA4533F9*, ::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1E4D15862302BE00_METHOD_1_E7924EDEDE1A4AC2_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_5D895A5456A4B9BA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E4D15862302BE00_METHOD_1_5D895A5456A4B9BA_OFFSET))(this);
	}

	::System::Void Method_1_DF3C54A5ADEABAF1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E4D15862302BE00_METHOD_1_DF3C54A5ADEABAF1_OFFSET))(this);
	}
};
