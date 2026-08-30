#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChimeraDuel/ChimeraDuelUIDGeneratorType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1277;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_AE1114300F0449BD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18879B50)
#define CLASS_1_AE1114300F0449BD_METHOD_1_9D2316F0DFC1D7D3_OFFSET UNITYSDK_OFFSET(0x18879BF0)
#define CLASS_1_AE1114300F0449BD__CTOR_OFFSET UNITYSDK_OFFSET(0x18879A50)

inline static constexpr unsigned int Class_1_AE1114300F0449BD_TypeDefinitionIndex = 76963;

class Class_1_AE1114300F0449BD : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelUIDGeneratorType, ::Class_0_16E4307DCC419505_1277*>* IGNNKMKNNBE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE1114300F0449BD__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE1114300F0449BD_DISPOSE_OFFSET))(this);
	}

	::System::UInt32 Method_1_9D2316F0DFC1D7D3(::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelUIDGeneratorType a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelUIDGeneratorType))((::PBYTE)hIl2Cpp + CLASS_1_AE1114300F0449BD_METHOD_1_9D2316F0DFC1D7D3_OFFSET))(this, a1);
	}
};
