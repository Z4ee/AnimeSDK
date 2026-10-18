#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BatchAnimationInstPropManager_Struct_2_CEA3583D515FCB73.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine::Rendering { class BatchAnimation; }
namespace UnityEngine::Rendering { class BatchAnimationInstance; }

#define BATCHANIMATIONINSTPROPMANAGER_CLASS_1_6937077BB398CA49_METHOD_1_08293AD904570388_OFFSET UNITYSDK_OFFSET(0xC1B2C30)
#define BATCHANIMATIONINSTPROPMANAGER_CLASS_1_6937077BB398CA49_METHOD_1_08EBD5BD5A27944B_OFFSET UNITYSDK_OFFSET(0xC1B3E00)
#define BATCHANIMATIONINSTPROPMANAGER_CLASS_1_6937077BB398CA49_METHOD_1_2C31E9FA63537B58_OFFSET UNITYSDK_OFFSET(0xC1B3F30)
#define BATCHANIMATIONINSTPROPMANAGER_CLASS_1_6937077BB398CA49_METHOD_1_47FE4CE39D1CA9A0_OFFSET UNITYSDK_OFFSET(0xC1B3350)
#define BATCHANIMATIONINSTPROPMANAGER_CLASS_1_6937077BB398CA49_METHOD_1_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0xC1B3AB0)
#define BATCHANIMATIONINSTPROPMANAGER_CLASS_1_6937077BB398CA49_METHOD_1_91F86025970D7006_OFFSET UNITYSDK_OFFSET(0xC1B40C0)
#define BATCHANIMATIONINSTPROPMANAGER_CLASS_1_6937077BB398CA49_METHOD_1_ABE7CF9FA1B8CCA3_OFFSET UNITYSDK_OFFSET(0xC1B3D30)
#define BATCHANIMATIONINSTPROPMANAGER_CLASS_1_6937077BB398CA49_METHOD_1_B845BB463401134C_OFFSET UNITYSDK_OFFSET(0xC1B37E0)
#define BATCHANIMATIONINSTPROPMANAGER_CLASS_1_6937077BB398CA49_METHOD_1_BA18C603081098EF_OFFSET UNITYSDK_OFFSET(0xC1B2E30)
#define BATCHANIMATIONINSTPROPMANAGER_CLASS_1_6937077BB398CA49__CTOR_OFFSET UNITYSDK_OFFSET(0xC1B2A90)

inline static constexpr unsigned int BatchAnimationInstPropManager_Class_1_6937077BB398CA49_TypeDefinitionIndex = 47291;

class BatchAnimationInstPropManager_Class_1_6937077BB398CA49 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::BatchAnimationInstance*, ::System::UInt32>* JCLBOPFALAN; // 0x10
	::System::Collections::Generic::Stack_1<::System::UInt32>* BFJNMKAOLDG; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::BatchAnimationInstPropManager_Struct_2_CEA3583D515FCB73>* HDOCDCHFKCA; // 0x20
	::System::String* LNCOKKIPAEP; // 0x28
	::Unity::Collections::NativeArray_1<::System::Single> JAHJLFPNFGJ; // 0x30
	::System::Int32 JIKGOAPHOKF; // 0x40
	::System::Int32 OBPKAPNLJEK; // 0x44
	::System::Int32 OJILJLBIMIC; // 0x48
	::System::Int32 LECPAKBIAHA; // 0x4C
	::System::Int32 CJPKHBAMFML; // 0x50
	::System::Boolean GFJPFAOKHCG; // 0x54

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + BATCHANIMATIONINSTPROPMANAGER_CLASS_1_6937077BB398CA49__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_08293AD904570388(::System::Collections::Generic::List_1<::System::Single>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Single>*))((::PBYTE)hIl2Cpp + BATCHANIMATIONINSTPROPMANAGER_CLASS_1_6937077BB398CA49_METHOD_1_08293AD904570388_OFFSET))(this, a1);
	}

	::System::Void Method_1_47FE4CE39D1CA9A0(::UnityEngine::Rendering::BatchAnimationInstance* a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::System::Single>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*, ::System::Int32, ::System::Collections::Generic::List_1<::System::Single>*))((::PBYTE)hIl2Cpp + BATCHANIMATIONINSTPROPMANAGER_CLASS_1_6937077BB398CA49_METHOD_1_47FE4CE39D1CA9A0_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_B845BB463401134C(::UnityEngine::Rendering::BatchAnimationInstance* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*, ::System::Int32))((::PBYTE)hIl2Cpp + BATCHANIMATIONINSTPROPMANAGER_CLASS_1_6937077BB398CA49_METHOD_1_B845BB463401134C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2C31E9FA63537B58(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BATCHANIMATIONINSTPROPMANAGER_CLASS_1_6937077BB398CA49_METHOD_1_2C31E9FA63537B58_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_91F86025970D7006(::System::UInt32 a1, ::System::Collections::Generic::List_1<::System::Single>* a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::Single>*))((::PBYTE)hIl2Cpp + BATCHANIMATIONINSTPROPMANAGER_CLASS_1_6937077BB398CA49_METHOD_1_91F86025970D7006_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_ABE7CF9FA1B8CCA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATCHANIMATIONINSTPROPMANAGER_CLASS_1_6937077BB398CA49_METHOD_1_ABE7CF9FA1B8CCA3_OFFSET))(this);
	}

	::System::UInt32 Method_1_08EBD5BD5A27944B(::System::Collections::Generic::List_1<::System::Single>* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Single>*))((::PBYTE)hIl2Cpp + BATCHANIMATIONINSTPROPMANAGER_CLASS_1_6937077BB398CA49_METHOD_1_08EBD5BD5A27944B_OFFSET))(this, a1);
	}

	::System::Void Method_1_BA18C603081098EF(::UnityEngine::Rendering::BatchAnimation* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimation*, ::System::Int32))((::PBYTE)hIl2Cpp + BATCHANIMATIONINSTPROPMANAGER_CLASS_1_6937077BB398CA49_METHOD_1_BA18C603081098EF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATCHANIMATIONINSTPROPMANAGER_CLASS_1_6937077BB398CA49_METHOD_1_508D4DD02D3DB74E_OFFSET))(this);
	}
};
