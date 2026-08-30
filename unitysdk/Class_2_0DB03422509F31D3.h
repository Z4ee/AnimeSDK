#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"

class Class_1_07BF77E88FF3817D;
class Class_2_0A1C62BA070C4C31;
namespace RPG::Client { class SimpleText; }
namespace System { class String; }

#define CLASS_2_0DB03422509F31D3_METHOD_2_49091FA7D0FEFC35_OFFSET UNITYSDK_OFFSET(0xBB1F2C0)
#define CLASS_2_0DB03422509F31D3_METHOD_2_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0xBB1F1A0)
#define CLASS_2_0DB03422509F31D3_ONINCONTROLEXIT_OFFSET UNITYSDK_OFFSET(0xBB1F220)
#define CLASS_2_0DB03422509F31D3_VIEWPREFABPATH_OFFSET UNITYSDK_OFFSET(0xBB1EFC0)
#define CLASS_2_0DB03422509F31D3__CTOR_OFFSET UNITYSDK_OFFSET(0xBB1F0D0)
#define CLASS_2_0DB03422509F31D3__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0xBB1F010)
#define CLASS_2_0DB03422509F31D3__ONEXITPRESTEP_OFFSET UNITYSDK_OFFSET(0xBB1F260)
#define CLASS_2_0DB03422509F31D3__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xBB1F150)

inline static constexpr unsigned int Class_2_0DB03422509F31D3_TypeDefinitionIndex = 72120;

class Class_2_0DB03422509F31D3 : public ::RPG::Client::UIController
{
public:
	::RPG::Client::SimpleText* LOKHAJAMNJN; // 0x188
	::Class_1_07BF77E88FF3817D* APPIHABBCGK; // 0x190
	::Class_2_0A1C62BA070C4C31* GOAGFIODJIO; // 0x198

	::System::Void _ctor(::Class_1_07BF77E88FF3817D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_07BF77E88FF3817D*))((::PBYTE)hIl2Cpp + CLASS_2_0DB03422509F31D3__CTOR_OFFSET))(this, a1);
	}

	::System::String* ViewPrefabPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DB03422509F31D3_VIEWPREFABPATH_OFFSET))(this);
	}

	::System::Void _CustomBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DB03422509F31D3__CUSTOMBINDVIEW_OFFSET))(this);
	}

	::System::Void _SetupView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DB03422509F31D3__SETUPVIEW_OFFSET))(this);
	}

	::System::Void OnInControlExit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DB03422509F31D3_ONINCONTROLEXIT_OFFSET))(this);
	}

	::System::Void _OnExitPreStep()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DB03422509F31D3__ONEXITPRESTEP_OFFSET))(this);
	}

	::System::Void Method_2_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DB03422509F31D3_METHOD_2_737220D2233A9067_OFFSET))(this);
	}

	::System::String* Method_2_49091FA7D0FEFC35()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DB03422509F31D3_METHOD_2_49091FA7D0FEFC35_OFFSET))(this);
	}
};
