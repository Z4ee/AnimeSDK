#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B48EFD1473830FEF_ProcessorType.h"
#include "unitysdk/System/Object.h"

class Class_1_B48EFD1473830FEF_Class_3_B8B36145F8ED68E8;
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2_KeyCollection; }

#define CLASS_1_B48EFD1473830FEF_METHOD_1_66F42CE2EDA79734_OFFSET UNITYSDK_OFFSET(0x9610500)
#define CLASS_1_B48EFD1473830FEF_METHOD_1_687AFF91C548B14E_OFFSET UNITYSDK_OFFSET(0x9610BE0)
#define CLASS_1_B48EFD1473830FEF_METHOD_1_903D30E0D57C4C90_OFFSET UNITYSDK_OFFSET(0x9610B80)
#define CLASS_1_B48EFD1473830FEF_METHOD_1_DC269EF33E652787_OFFSET UNITYSDK_OFFSET(0x96104A0)
#define CLASS_1_B48EFD1473830FEF__CTOR_OFFSET UNITYSDK_OFFSET(0x9610A70)

inline static constexpr unsigned int Class_1_B48EFD1473830FEF_TypeDefinitionIndex = 45680;

class Class_1_B48EFD1473830FEF : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::Class_1_B48EFD1473830FEF_ProcessorType, ::Class_1_B48EFD1473830FEF_Class_3_B8B36145F8ED68E8*>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_1_B48EFD1473830FEF_ProcessorType>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48EFD1473830FEF__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2_KeyCollection<::System::Type*, ::Class_1_B48EFD1473830FEF_ProcessorType>* Method_1_DC269EF33E652787()
	{
		return ((::System::Collections::Generic::Dictionary_2_KeyCollection<::System::Type*, ::Class_1_B48EFD1473830FEF_ProcessorType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48EFD1473830FEF_METHOD_1_DC269EF33E652787_OFFSET))(this);
	}

	::System::Void Method_1_66F42CE2EDA79734()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B48EFD1473830FEF_METHOD_1_66F42CE2EDA79734_OFFSET))(this);
	}

	::Class_1_B48EFD1473830FEF_Class_3_B8B36145F8ED68E8* Method_1_903D30E0D57C4C90(::Class_1_B48EFD1473830FEF_ProcessorType a1)
	{
		return ((::Class_1_B48EFD1473830FEF_Class_3_B8B36145F8ED68E8*(*)(::PVOID, ::Class_1_B48EFD1473830FEF_ProcessorType))((::PBYTE)hIl2Cpp + CLASS_1_B48EFD1473830FEF_METHOD_1_903D30E0D57C4C90_OFFSET))(this, a1);
	}

	::Class_1_B48EFD1473830FEF_Class_3_B8B36145F8ED68E8* Method_1_687AFF91C548B14E(::System::Type* a1)
	{
		return ((::Class_1_B48EFD1473830FEF_Class_3_B8B36145F8ED68E8*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_B48EFD1473830FEF_METHOD_1_687AFF91C548B14E_OFFSET))(this, a1);
	}
};
