#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3CC5DDC374207E50.h"

namespace RPG::Client { class AnniversaryCollectionPanelData; }

#define CLASS_2_FB411E16239CD4A2_1_METHOD_2_568AE7A1499723FD_OFFSET UNITYSDK_OFFSET(0xBAA8820)
#define CLASS_2_FB411E16239CD4A2_1_METHOD_2_A02C76FFB23049FF_OFFSET UNITYSDK_OFFSET(0xBAA88C0)
#define CLASS_2_FB411E16239CD4A2_1__CTOR_OFFSET UNITYSDK_OFFSET(0xBAA8810)

inline static constexpr unsigned int Class_2_FB411E16239CD4A2_1_TypeDefinitionIndex = 57563;

class Class_2_FB411E16239CD4A2_1 : public ::Class_1_3CC5DDC374207E50
{
public:
	::System::Void _ctor(::RPG::Client::AnniversaryCollectionPanelData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AnniversaryCollectionPanelData*))((::PBYTE)hIl2Cpp + CLASS_2_FB411E16239CD4A2_1__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_568AE7A1499723FD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FB411E16239CD4A2_1_METHOD_2_568AE7A1499723FD_OFFSET))(this);
	}

	::System::Boolean Method_2_A02C76FFB23049FF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FB411E16239CD4A2_1_METHOD_2_A02C76FFB23049FF_OFFSET))(this);
	}
};
