#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateContentParamType.h"
#include "unitysdk/RPG/GameCore/FateLevelParamType.h"
#include "unitysdk/Struct_2_AEFDCF1C254BBD23.h"
#include "unitysdk/System/Object.h"

class Class_1_1CBA230307F9C289_18;
class Class_1_605EF39D29AE23EC;
class Class_1_D40936EF3BF54118_23;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_7DF92D9E0DFFA094_METHOD_1_2B3CCEDE81EBCBEE_OFFSET UNITYSDK_OFFSET(0x141A5E70)
#define CLASS_1_7DF92D9E0DFFA094_METHOD_1_4CFA30FA85BD5218_OFFSET UNITYSDK_OFFSET(0x141A58F0)
#define CLASS_1_7DF92D9E0DFFA094_METHOD_1_6815AD8D97959763_OFFSET UNITYSDK_OFFSET(0x141A5010)
#define CLASS_1_7DF92D9E0DFFA094_METHOD_1_7036D44519B33947_OFFSET UNITYSDK_OFFSET(0x141A5E60)
#define CLASS_1_7DF92D9E0DFFA094_METHOD_1_70603E2AE56EBD6B_OFFSET UNITYSDK_OFFSET(0x141A5D10)
#define CLASS_1_7DF92D9E0DFFA094_METHOD_1_76C14174E094F341_OFFSET UNITYSDK_OFFSET(0x141A54D0)
#define CLASS_1_7DF92D9E0DFFA094_METHOD_1_AB46303CBADE3FEA_OFFSET UNITYSDK_OFFSET(0x141A53E0)
#define CLASS_1_7DF92D9E0DFFA094__CTOR_OFFSET UNITYSDK_OFFSET(0x141A5E80)

inline static constexpr unsigned int Class_1_7DF92D9E0DFFA094_TypeDefinitionIndex = 59831;

class Class_1_7DF92D9E0DFFA094 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FateLevelParamType, ::System::Double>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::Struct_2_AEFDCF1C254BBD23, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FateContentParamType, ::System::Double>*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DF92D9E0DFFA094__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6815AD8D97959763(::Class_1_D40936EF3BF54118_23* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_23*))((::PBYTE)hIl2Cpp + CLASS_1_7DF92D9E0DFFA094_METHOD_1_6815AD8D97959763_OFFSET))(this, a1);
	}

	::System::Void Method_1_AB46303CBADE3FEA(::Class_1_605EF39D29AE23EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_605EF39D29AE23EC*))((::PBYTE)hIl2Cpp + CLASS_1_7DF92D9E0DFFA094_METHOD_1_AB46303CBADE3FEA_OFFSET))(this, a1);
	}

	::System::Void Method_1_70603E2AE56EBD6B(::Class_1_1CBA230307F9C289_18* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1CBA230307F9C289_18*))((::PBYTE)hIl2Cpp + CLASS_1_7DF92D9E0DFFA094_METHOD_1_70603E2AE56EBD6B_OFFSET))(this, a1);
	}

	::System::Void Method_1_76C14174E094F341(::Class_1_605EF39D29AE23EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_605EF39D29AE23EC*))((::PBYTE)hIl2Cpp + CLASS_1_7DF92D9E0DFFA094_METHOD_1_76C14174E094F341_OFFSET))(this, a1);
	}

	::System::Void Method_1_4CFA30FA85BD5218(::Class_1_605EF39D29AE23EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_605EF39D29AE23EC*))((::PBYTE)hIl2Cpp + CLASS_1_7DF92D9E0DFFA094_METHOD_1_4CFA30FA85BD5218_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FateLevelParamType, ::System::Double>* Method_1_7036D44519B33947()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FateLevelParamType, ::System::Double>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DF92D9E0DFFA094_METHOD_1_7036D44519B33947_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::Struct_2_AEFDCF1C254BBD23, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FateContentParamType, ::System::Double>*>* Method_1_2B3CCEDE81EBCBEE()
	{
		return ((::System::Collections::Generic::Dictionary_2<::Struct_2_AEFDCF1C254BBD23, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FateContentParamType, ::System::Double>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DF92D9E0DFFA094_METHOD_1_2B3CCEDE81EBCBEE_OFFSET))(this);
	}
};
