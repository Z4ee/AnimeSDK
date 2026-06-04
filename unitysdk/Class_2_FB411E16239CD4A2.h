#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3CC5DDC374207E50.h"

namespace RPG::Client { class AnniversaryCollectionPanelData; }

#define CLASS_2_FB411E16239CD4A2_METHOD_2_A02C76FFB23049FF_OFFSET UNITYSDK_OFFSET(0xB787430)
#define CLASS_2_FB411E16239CD4A2_METHOD_2_C982C8295D29DA97_OFFSET UNITYSDK_OFFSET(0xB787310)
#define CLASS_2_FB411E16239CD4A2__CTOR_OFFSET UNITYSDK_OFFSET(0xB787300)

inline static constexpr unsigned int Class_2_FB411E16239CD4A2_TypeDefinitionIndex = 58374;

class Class_2_FB411E16239CD4A2 : public ::Class_1_3CC5DDC374207E50
{
public:
	::System::Void _ctor(::RPG::Client::AnniversaryCollectionPanelData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AnniversaryCollectionPanelData*))((::PBYTE)hIl2Cpp + CLASS_2_FB411E16239CD4A2__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_C982C8295D29DA97()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FB411E16239CD4A2_METHOD_2_C982C8295D29DA97_OFFSET))(this);
	}

	::System::Boolean Method_2_A02C76FFB23049FF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FB411E16239CD4A2_METHOD_2_A02C76FFB23049FF_OFFSET))(this);
	}
};
