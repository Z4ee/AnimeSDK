#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LimaoNewsSwitchUI3DLimaoType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_3A361C133909F092_METHOD_3_F045AD2368F02E87_OFFSET UNITYSDK_OFFSET(0x1CA91200)
#define CLASS_3_3A361C133909F092_METHOD_3_FF096862EF90B096_OFFSET UNITYSDK_OFFSET(0x1CA911C0)
#define CLASS_3_3A361C133909F092__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA911F0)

inline static constexpr unsigned int Class_3_3A361C133909F092_TypeDefinitionIndex = 10238;

class Class_3_3A361C133909F092 : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::System::UInt32>* JBDKDPNPCDI; // 0x18
	::Il2CppArray<::System::UInt32>* EIAFAKDMGBO; // 0x20
	::Il2CppArray<::System::UInt32>* AFKFBFDBJCM; // 0x28
	::RPG::Client::LimaoNewsSwitchUI3DLimaoType DKCCEPAGPDB; // 0x30
	::System::Boolean JCJDLNJONMO; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3A361C133909F092__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_FF096862EF90B096(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_3A361C133909F092*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_3A361C133909F092*&))((::PBYTE)hIl2Cpp + CLASS_3_3A361C133909F092_METHOD_3_FF096862EF90B096_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_F045AD2368F02E87(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_3A361C133909F092* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_3A361C133909F092*))((::PBYTE)hIl2Cpp + CLASS_3_3A361C133909F092_METHOD_3_F045AD2368F02E87_OFFSET))(a1, a2);
	}
};
