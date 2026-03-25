#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_DDE1D61870C38FA1.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_0_16E4307DCC419505_342;
class Class_0_16E4307DCC419505_358;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_3_F01FA7270E6D3948_METHOD_3_1378F265C7B603CE_OFFSET UNITYSDK_OFFSET(0x89E4270)
#define CLASS_3_F01FA7270E6D3948_METHOD_3_73F725AD4EBE5072_OFFSET UNITYSDK_OFFSET(0x89E50E0)
#define CLASS_3_F01FA7270E6D3948_METHOD_3_7A097E7EF929F289_OFFSET UNITYSDK_OFFSET(0x89E4610)
#define CLASS_3_F01FA7270E6D3948_METHOD_3_BA914974C72731EE_OFFSET UNITYSDK_OFFSET(0x89E48F0)
#define CLASS_3_F01FA7270E6D3948_METHOD_3_BD6AC6424A39ADB4_OFFSET UNITYSDK_OFFSET(0x89E4C50)
#define CLASS_3_F01FA7270E6D3948_METHOD_3_BF68F99AA5BB8AF8_OFFSET UNITYSDK_OFFSET(0x89E4180)
#define CLASS_3_F01FA7270E6D3948_METHOD_3_CC11DB834E1A6A82_OFFSET UNITYSDK_OFFSET(0x89E4D10)
#define CLASS_3_F01FA7270E6D3948_METHOD_3_D53870D6C0CB6C5D_OFFSET UNITYSDK_OFFSET(0x89E44F0)
#define CLASS_3_F01FA7270E6D3948_METHOD_3_FAA945ED465745BC_OFFSET UNITYSDK_OFFSET(0x89E3C00)
#define CLASS_3_F01FA7270E6D3948__CHECKNEEDREBUILD_OFFSET UNITYSDK_OFFSET(0x89E3C90)
#define CLASS_3_F01FA7270E6D3948__CTOR_OFFSET UNITYSDK_OFFSET(0x89E51B0)
#define CLASS_3_F01FA7270E6D3948__REBUILD_OFFSET UNITYSDK_OFFSET(0x89E4000)

inline static constexpr unsigned int Class_3_F01FA7270E6D3948_TypeDefinitionIndex = 50937;

class Class_3_F01FA7270E6D3948 : public ::Class_2_DDE1D61870C38FA1
{
public:
	::System::Collections::Generic::Dictionary_2<::Class_0_16E4307DCC419505_342*, ::System::UInt32>* Field_3_1; // 0x28
	::Class_0_16E4307DCC419505_358* Field_3_0; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* Field_3_3; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* Field_3_4; // 0x40
	::System::UInt32 Field_3_2; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F01FA7270E6D3948__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_FAA945ED465745BC(::Class_0_16E4307DCC419505_358* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_358*))((::PBYTE)hIl2Cpp + CLASS_3_F01FA7270E6D3948_METHOD_3_FAA945ED465745BC_OFFSET))(this, a1);
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

	::System::Void Method_3_BF68F99AA5BB8AF8(::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_342*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_342*>*))((::PBYTE)hIl2Cpp + CLASS_3_F01FA7270E6D3948_METHOD_3_BF68F99AA5BB8AF8_OFFSET))(this, a1);
	}

	::System::Void Method_3_BA914974C72731EE(::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_342*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_342*>*))((::PBYTE)hIl2Cpp + CLASS_3_F01FA7270E6D3948_METHOD_3_BA914974C72731EE_OFFSET))(this, a1);
	}

	::System::Void Method_3_CC11DB834E1A6A82(::Class_0_16E4307DCC419505_342* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_342*))((::PBYTE)hIl2Cpp + CLASS_3_F01FA7270E6D3948_METHOD_3_CC11DB834E1A6A82_OFFSET))(this, a1);
	}

	::System::Void Method_3_BD6AC6424A39ADB4(::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_342*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_342*>*))((::PBYTE)hIl2Cpp + CLASS_3_F01FA7270E6D3948_METHOD_3_BD6AC6424A39ADB4_OFFSET))(this, a1);
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
