#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EA4F59A81E5559FD.h"

namespace RPG::Client { class ActivityModule; }
namespace RPG::Client { class ActivityPanelData; }

#define CLASS_1_EA4F59A81E5559FD_CLASS_2_59960C61557CF1F6_METHOD_2_FB464648B8E2B471_OFFSET UNITYSDK_OFFSET(0x8AB8890)
#define CLASS_1_EA4F59A81E5559FD_CLASS_2_59960C61557CF1F6__CTOR_OFFSET UNITYSDK_OFFSET(0x8AB87E0)

inline static constexpr unsigned int Class_1_EA4F59A81E5559FD_Class_2_59960C61557CF1F6_TypeDefinitionIndex = 50062;

class Class_1_EA4F59A81E5559FD_Class_2_59960C61557CF1F6 : public ::Class_1_EA4F59A81E5559FD
{
public:
	::System::UInt32 Field_2_1; // 0x18
	::System::UInt32 Field_2_0; // 0x1C

	::System::Void _ctor(::RPG::Client::ActivityModule* a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityModule*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EA4F59A81E5559FD_CLASS_2_59960C61557CF1F6__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::ActivityPanelData* Method_2_FB464648B8E2B471()
	{
		return ((::RPG::Client::ActivityPanelData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA4F59A81E5559FD_CLASS_2_59960C61557CF1F6_METHOD_2_FB464648B8E2B471_OFFSET))(this);
	}
};
