#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CloudUIBattlePosRegion.h"
#include "unitysdk/System/Object.h"

class Class_1_F84162D45373F557_Class_1_880304D4E9A590C8;
class Class_2_6D1FA31AB5157B08;
namespace RPG::Client { class CloudUIPosReporterMono; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A46428E06184C947_METHOD_1_DEDD31AF6F4E4818_OFFSET UNITYSDK_OFFSET(0x15B85FE0)
#define CLASS_1_A46428E06184C947_METHOD_1_FE8254399AA03512_OFFSET UNITYSDK_OFFSET(0x15B85890)
#define CLASS_1_A46428E06184C947__CTOR_OFFSET UNITYSDK_OFFSET(0x15B860B0)

inline static constexpr unsigned int Class_1_A46428E06184C947_TypeDefinitionIndex = 59999;

class Class_1_A46428E06184C947 : public ::System::Object
{
public:
	::RPG::Client::CloudUIBattlePosRegion LOJFDBJKOEB; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A46428E06184C947__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_F84162D45373F557_Class_1_880304D4E9A590C8*>* Method_1_FE8254399AA03512(::RPG::Client::CloudUIPosReporterMono* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_F84162D45373F557_Class_1_880304D4E9A590C8*>*(*)(::PVOID, ::RPG::Client::CloudUIPosReporterMono*))((::PBYTE)hIl2Cpp + CLASS_1_A46428E06184C947_METHOD_1_FE8254399AA03512_OFFSET))(this, a1);
	}

	::Class_2_6D1FA31AB5157B08* Method_1_DEDD31AF6F4E4818()
	{
		return ((::Class_2_6D1FA31AB5157B08*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A46428E06184C947_METHOD_1_DEDD31AF6F4E4818_OFFSET))(this);
	}
};
