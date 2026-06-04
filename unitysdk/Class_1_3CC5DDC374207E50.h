#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AnniversaryCollectionPanelData; }

#define CLASS_1_3CC5DDC374207E50_METHOD_1_026D357DA08A195C_OFFSET UNITYSDK_OFFSET(0xA856270)
#define CLASS_1_3CC5DDC374207E50_METHOD_1_080D5667375425D8_OFFSET UNITYSDK_OFFSET(0xA856110)
#define CLASS_1_3CC5DDC374207E50__CTOR_OFFSET UNITYSDK_OFFSET(0xA856100)

inline static constexpr unsigned int Class_1_3CC5DDC374207E50_TypeDefinitionIndex = 58373;

class Class_1_3CC5DDC374207E50 : public ::System::Object
{
public:
	::RPG::Client::AnniversaryCollectionPanelData* Field_1_0; // 0x10

	::System::Void _ctor(::RPG::Client::AnniversaryCollectionPanelData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AnniversaryCollectionPanelData*))((::PBYTE)hIl2Cpp + CLASS_1_3CC5DDC374207E50__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_080D5667375425D8()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CC5DDC374207E50_METHOD_1_080D5667375425D8_OFFSET))(this);
	}

	::System::Void Method_1_026D357DA08A195C(::RPG::Client::AnniversaryCollectionPanelData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AnniversaryCollectionPanelData*))((::PBYTE)hIl2Cpp + CLASS_1_3CC5DDC374207E50_METHOD_1_026D357DA08A195C_OFFSET))(this, a1);
	}
};
