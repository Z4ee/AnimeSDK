#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class FuncUnlockUiData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_CC28D146034F7CEE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x173F01B0)
#define CLASS_1_CC28D146034F7CEE_METHOD_1_1615E74BDA0D0348_OFFSET UNITYSDK_OFFSET(0x173EFF20)
#define CLASS_1_CC28D146034F7CEE_METHOD_1_8131D4D8C02BAA62_OFFSET UNITYSDK_OFFSET(0x173EFC10)
#define CLASS_1_CC28D146034F7CEE_METHOD_1_EBEE0D0A222A8264_OFFSET UNITYSDK_OFFSET(0x173EFA60)
#define CLASS_1_CC28D146034F7CEE_METHOD_1_F9F86518B1656893_OFFSET UNITYSDK_OFFSET(0x173EFA20)
#define CLASS_1_CC28D146034F7CEE__CTOR_OFFSET UNITYSDK_OFFSET(0x173EFB00)

inline static constexpr unsigned int Class_1_CC28D146034F7CEE_TypeDefinitionIndex = 71720;

class Class_1_CC28D146034F7CEE : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::FuncUnlockUiData*>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC28D146034F7CEE__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::FuncUnlockUiData*>* Method_1_F9F86518B1656893()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::FuncUnlockUiData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC28D146034F7CEE_METHOD_1_F9F86518B1656893_OFFSET))(this);
	}

	::System::Void Method_1_EBEE0D0A222A8264()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC28D146034F7CEE_METHOD_1_EBEE0D0A222A8264_OFFSET))(this);
	}

	::System::Void Method_1_8131D4D8C02BAA62()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC28D146034F7CEE_METHOD_1_8131D4D8C02BAA62_OFFSET))(this);
	}

	::System::Void Method_1_1615E74BDA0D0348(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_CC28D146034F7CEE_METHOD_1_1615E74BDA0D0348_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC28D146034F7CEE_DISPOSE_OFFSET))(this);
	}
};
