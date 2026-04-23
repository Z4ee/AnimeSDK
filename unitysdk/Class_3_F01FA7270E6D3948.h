#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_DDE1D61870C38FA1.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_0_16E4307DCC419505_349;
class Class_0_16E4307DCC419505_365;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_3_F01FA7270E6D3948_METHOD_3_1378F265C7B603CE_OFFSET UNITYSDK_OFFSET(0x124DC1E0)
#define CLASS_3_F01FA7270E6D3948_METHOD_3_73F725AD4EBE5072_OFFSET UNITYSDK_OFFSET(0x124DD050)
#define CLASS_3_F01FA7270E6D3948_METHOD_3_7A097E7EF929F289_OFFSET UNITYSDK_OFFSET(0x124DC580)
#define CLASS_3_F01FA7270E6D3948_METHOD_3_BA914974C72731EE_OFFSET UNITYSDK_OFFSET(0x124DC860)
#define CLASS_3_F01FA7270E6D3948_METHOD_3_BD6AC6424A39ADB4_OFFSET UNITYSDK_OFFSET(0x124DCBC0)
#define CLASS_3_F01FA7270E6D3948_METHOD_3_BF68F99AA5BB8AF8_OFFSET UNITYSDK_OFFSET(0x124DC0F0)
#define CLASS_3_F01FA7270E6D3948_METHOD_3_CC11DB834E1A6A82_OFFSET UNITYSDK_OFFSET(0x124DCC80)
#define CLASS_3_F01FA7270E6D3948_METHOD_3_D53870D6C0CB6C5D_OFFSET UNITYSDK_OFFSET(0x124DC460)
#define CLASS_3_F01FA7270E6D3948_METHOD_3_FAA945ED465745BC_OFFSET UNITYSDK_OFFSET(0x124DBB70)
#define CLASS_3_F01FA7270E6D3948__CHECKNEEDREBUILD_OFFSET UNITYSDK_OFFSET(0x124DBC00)
#define CLASS_3_F01FA7270E6D3948__CTOR_OFFSET UNITYSDK_OFFSET(0x124DD120)
#define CLASS_3_F01FA7270E6D3948__REBUILD_OFFSET UNITYSDK_OFFSET(0x124DBF70)

inline static constexpr unsigned int Class_3_F01FA7270E6D3948_TypeDefinitionIndex = 57818;

class Class_3_F01FA7270E6D3948 : public ::Class_2_DDE1D61870C38FA1
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* Field_3_3; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* Field_3_4; // 0x30
	::Class_0_16E4307DCC419505_365* Field_3_0; // 0x38
	::System::Collections::Generic::Dictionary_2<::Class_0_16E4307DCC419505_349*, ::System::UInt32>* Field_3_1; // 0x40
	::System::UInt32 Field_3_2; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F01FA7270E6D3948__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_FAA945ED465745BC(::Class_0_16E4307DCC419505_365* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_365*))((::PBYTE)hIl2Cpp + CLASS_3_F01FA7270E6D3948_METHOD_3_FAA945ED465745BC_OFFSET))(this, a1);
	}

	::System::Boolean _CheckNeedRebuild()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F01FA7270E6D3948__CHECKNEEDREBUILD_OFFSET))(this);
	}

	::System::Void _Rebuild()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F01FA7270E6D3948__REBUILD_OFFSET))(this);
	}

	::System::Void Method_3_1378F265C7B603CE(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_3_F01FA7270E6D3948_METHOD_3_1378F265C7B603CE_OFFSET))(this, a1);
	}

	::System::Void Method_3_D53870D6C0CB6C5D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F01FA7270E6D3948_METHOD_3_D53870D6C0CB6C5D_OFFSET))(this);
	}

	::System::Void Method_3_BF68F99AA5BB8AF8(::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_349*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_349*>*))((::PBYTE)hIl2Cpp + CLASS_3_F01FA7270E6D3948_METHOD_3_BF68F99AA5BB8AF8_OFFSET))(this, a1);
	}

	::System::Void Method_3_BA914974C72731EE(::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_349*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_349*>*))((::PBYTE)hIl2Cpp + CLASS_3_F01FA7270E6D3948_METHOD_3_BA914974C72731EE_OFFSET))(this, a1);
	}

	::System::Void Method_3_CC11DB834E1A6A82(::Class_0_16E4307DCC419505_349* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_349*))((::PBYTE)hIl2Cpp + CLASS_3_F01FA7270E6D3948_METHOD_3_CC11DB834E1A6A82_OFFSET))(this, a1);
	}

	::System::Void Method_3_BD6AC6424A39ADB4(::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_349*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_349*>*))((::PBYTE)hIl2Cpp + CLASS_3_F01FA7270E6D3948_METHOD_3_BD6AC6424A39ADB4_OFFSET))(this, a1);
	}

	::System::Void Method_3_73F725AD4EBE5072(::System::UInt32 a1, ::RPG::GameCore::FixPoint a2, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FixPoint, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_3_F01FA7270E6D3948_METHOD_3_73F725AD4EBE5072_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_7A097E7EF929F289()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F01FA7270E6D3948_METHOD_3_7A097E7EF929F289_OFFSET))(this);
	}
};
