#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

class Class_0_16E4307DCC419505_375;
namespace RPG::GameCore { class TeamDataComponent; }

#define CLASS_2_655566E0393C6F00_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1060DCB0)
#define CLASS_2_655566E0393C6F00_METHOD_2_51000A03727C9FBF_OFFSET UNITYSDK_OFFSET(0x1060DDC0)
#define CLASS_2_655566E0393C6F00_METHOD_2_58E4F6A5F8FAF17F_1_OFFSET UNITYSDK_OFFSET(0x1060DF60)
#define CLASS_2_655566E0393C6F00_METHOD_2_58E4F6A5F8FAF17F_OFFSET UNITYSDK_OFFSET(0x1060DED0)
#define CLASS_2_655566E0393C6F00__CTOR_OFFSET UNITYSDK_OFFSET(0x1060DFF0)

inline static constexpr unsigned int Class_2_655566E0393C6F00_TypeDefinitionIndex = 46293;

class Class_2_655566E0393C6F00 : public ::RPG::GameCore::GameComponentBase
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_655566E0393C6F00__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_655566E0393C6F00_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_51000A03727C9FBF(::RPG::GameCore::TeamDataComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TeamDataComponent*))((::PBYTE)hIl2Cpp + CLASS_2_655566E0393C6F00_METHOD_2_51000A03727C9FBF_OFFSET))(this, a1);
	}

	::System::Void Method_2_58E4F6A5F8FAF17F(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_2_655566E0393C6F00_METHOD_2_58E4F6A5F8FAF17F_OFFSET))(this, a1);
	}

	::System::Void Method_2_58E4F6A5F8FAF17F_1(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_2_655566E0393C6F00_METHOD_2_58E4F6A5F8FAF17F_1_OFFSET))(this, a1);
	}
};
