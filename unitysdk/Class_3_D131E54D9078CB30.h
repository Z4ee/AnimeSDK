#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_534AF681CC2BD5FD_251.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_1_B7E341C5F1A6F199;
class Class_1_E6E0FBFCB31F02D9_1;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_D131E54D9078CB30_METHOD_3_020526E1B58C3181_OFFSET UNITYSDK_OFFSET(0x106919E0)
#define CLASS_3_D131E54D9078CB30_METHOD_3_1DD60D2879ADB853_OFFSET UNITYSDK_OFFSET(0x10691D80)
#define CLASS_3_D131E54D9078CB30_METHOD_3_322C56D885A69B8A_OFFSET UNITYSDK_OFFSET(0x106916A0)
#define CLASS_3_D131E54D9078CB30_METHOD_3_AFF78E9477630E0C_OFFSET UNITYSDK_OFFSET(0x10691590)
#define CLASS_3_D131E54D9078CB30_METHOD_3_C782C60E11964C7F_OFFSET UNITYSDK_OFFSET(0x106913D0)
#define CLASS_3_D131E54D9078CB30_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x10691CF0)
#define CLASS_3_D131E54D9078CB30_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10691C60)
#define CLASS_3_D131E54D9078CB30_METHOD_3_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x10691250)
#define CLASS_3_D131E54D9078CB30__CTOR_OFFSET UNITYSDK_OFFSET(0x10691500)

inline static constexpr unsigned int Class_3_D131E54D9078CB30_TypeDefinitionIndex = 78504;

class Class_3_D131E54D9078CB30 : public ::Class_2_534AF681CC2BD5FD_251<::Class_3_D131E54D9078CB30*>
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_E6E0FBFCB31F02D9_1*>* Field_3_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D131E54D9078CB30__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D131E54D9078CB30_METHOD_3_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_3_C782C60E11964C7F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D131E54D9078CB30_METHOD_3_C782C60E11964C7F_OFFSET))(this);
	}

	::System::Boolean Method_3_AFF78E9477630E0C(::System::UInt32 a1, ::Class_1_E6E0FBFCB31F02D9_1*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Class_1_E6E0FBFCB31F02D9_1*&))((::PBYTE)hIl2Cpp + CLASS_3_D131E54D9078CB30_METHOD_3_AFF78E9477630E0C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_322C56D885A69B8A(::Class_1_B7E341C5F1A6F199* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_D131E54D9078CB30_METHOD_3_322C56D885A69B8A_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D131E54D9078CB30_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D131E54D9078CB30_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Boolean Method_3_1DD60D2879ADB853(::MoleMole::EntityHandle a1, ::MoleMole::EntityHandle& a2, ::System::Boolean& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::EntityHandle, ::MoleMole::EntityHandle&, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_3_D131E54D9078CB30_METHOD_3_1DD60D2879ADB853_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_020526E1B58C3181(::MoleMole::EntityHandle a1, ::System::Double a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_3_D131E54D9078CB30_METHOD_3_020526E1B58C3181_OFFSET))(this, a1, a2);
	}
};
