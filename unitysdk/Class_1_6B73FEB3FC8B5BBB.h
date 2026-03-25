#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EvolveBuildSeason.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class UIController; }
namespace System { class Action; }
namespace System { class String; }

#define CLASS_1_6B73FEB3FC8B5BBB_METHOD_1_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x117D3BA0)
#define CLASS_1_6B73FEB3FC8B5BBB_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x117D3A10)
#define CLASS_1_6B73FEB3FC8B5BBB_METHOD_1_61929A3103595552_OFFSET UNITYSDK_OFFSET(0x117D3A50)
#define CLASS_1_6B73FEB3FC8B5BBB_METHOD_1_A984848EA3E436DA_OFFSET UNITYSDK_OFFSET(0x117D3C20)
#define CLASS_1_6B73FEB3FC8B5BBB_METHOD_1_BF3A97FF800F0C24_1_OFFSET UNITYSDK_OFFSET(0x117D3DB0)
#define CLASS_1_6B73FEB3FC8B5BBB_METHOD_1_BF3A97FF800F0C24_OFFSET UNITYSDK_OFFSET(0x117D3D10)
#define CLASS_1_6B73FEB3FC8B5BBB_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x117D3D70)
#define CLASS_1_6B73FEB3FC8B5BBB__CTOR_OFFSET UNITYSDK_OFFSET(0x117D3A00)

inline static constexpr unsigned int Class_1_6B73FEB3FC8B5BBB_TypeDefinitionIndex = 48961;

class Class_1_6B73FEB3FC8B5BBB : public ::System::Object
{
public:
	::RPG::Client::UIController* Field_1_0; // 0x10
	::RPG::GameCore::EvolveBuildSeason Field_1_1; // 0x18

	::System::Void _ctor(::RPG::GameCore::EvolveBuildSeason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveBuildSeason))((::PBYTE)hIl2Cpp + CLASS_1_6B73FEB3FC8B5BBB__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6B73FEB3FC8B5BBB_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_61929A3103595552()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6B73FEB3FC8B5BBB_METHOD_1_61929A3103595552_OFFSET))(this);
	}

	::System::Void Method_1_A984848EA3E436DA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6B73FEB3FC8B5BBB_METHOD_1_A984848EA3E436DA_OFFSET))(this);
	}

	::System::Void Method_1_BF3A97FF800F0C24(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_6B73FEB3FC8B5BBB_METHOD_1_BF3A97FF800F0C24_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6B73FEB3FC8B5BBB_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_BF3A97FF800F0C24_1(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_6B73FEB3FC8B5BBB_METHOD_1_BF3A97FF800F0C24_1_OFFSET))(this, a1);
	}

	::System::String* Method_1_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6B73FEB3FC8B5BBB_METHOD_1_35EA095E1AFDD9C8_OFFSET))(this);
	}
};
