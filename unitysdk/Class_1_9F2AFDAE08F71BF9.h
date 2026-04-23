#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleBuffEffect.h"
#include "unitysdk/RPG/GameCore/MarbleBuffType.h"
#include "unitysdk/RPG/GameCore/MarbleLifeTime.h"
#include "unitysdk/RPG/GameCore/MarbleOperation.h"
#include "unitysdk/RPG/GameCore/MarbleValue.h"
#include "unitysdk/System/Object.h"

class Class_1_9671734BA1DFB3F8;
namespace RPG::GameCore { class MarbleBuffConfig; }

#define CLASS_1_9F2AFDAE08F71BF9_GET_BUFFID_OFFSET UNITYSDK_OFFSET(0x18054170)
#define CLASS_1_9F2AFDAE08F71BF9_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x18054290)
#define CLASS_1_9F2AFDAE08F71BF9_GET_ROUNDCOUNT_OFFSET UNITYSDK_OFFSET(0x18054250)
#define CLASS_1_9F2AFDAE08F71BF9_GET_SOURCE_OFFSET UNITYSDK_OFFSET(0x18054270)
#define CLASS_1_9F2AFDAE08F71BF9_GET_STACKCOUNT_OFFSET UNITYSDK_OFFSET(0x18054230)
#define CLASS_1_9F2AFDAE08F71BF9_METHOD_1_149827CF2E19B7A4_OFFSET UNITYSDK_OFFSET(0x180541F0)
#define CLASS_1_9F2AFDAE08F71BF9_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x18054110)
#define CLASS_1_9F2AFDAE08F71BF9_METHOD_1_52170EF7B2B2D65D_OFFSET UNITYSDK_OFFSET(0x18054030)
#define CLASS_1_9F2AFDAE08F71BF9_METHOD_1_7C101C2A870DD664_OFFSET UNITYSDK_OFFSET(0x18053F40)
#define CLASS_1_9F2AFDAE08F71BF9_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x18053EE0)
#define CLASS_1_9F2AFDAE08F71BF9_METHOD_1_9AF0114B2B0E12E7_OFFSET UNITYSDK_OFFSET(0x180541B0)
#define CLASS_1_9F2AFDAE08F71BF9_METHOD_1_BE41D962102B8AA0_OFFSET UNITYSDK_OFFSET(0x180541D0)
#define CLASS_1_9F2AFDAE08F71BF9_METHOD_1_C926F50FF9A36C86_OFFSET UNITYSDK_OFFSET(0x18054190)
#define CLASS_1_9F2AFDAE08F71BF9_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x180540C0)
#define CLASS_1_9F2AFDAE08F71BF9_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18053F60)
#define CLASS_1_9F2AFDAE08F71BF9_METHOD_1_D77F7476BCD66744_OFFSET UNITYSDK_OFFSET(0x18053FA0)
#define CLASS_1_9F2AFDAE08F71BF9_METHOD_1_D978819B0A4871A0_OFFSET UNITYSDK_OFFSET(0x18054010)
#define CLASS_1_9F2AFDAE08F71BF9_METHOD_1_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0x18054210)
#define CLASS_1_9F2AFDAE08F71BF9_SET_BUFFID_OFFSET UNITYSDK_OFFSET(0x18054180)
#define CLASS_1_9F2AFDAE08F71BF9_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x180542A0)
#define CLASS_1_9F2AFDAE08F71BF9_SET_ROUNDCOUNT_OFFSET UNITYSDK_OFFSET(0x18054260)
#define CLASS_1_9F2AFDAE08F71BF9_SET_SOURCE_OFFSET UNITYSDK_OFFSET(0x18054280)
#define CLASS_1_9F2AFDAE08F71BF9_SET_STACKCOUNT_OFFSET UNITYSDK_OFFSET(0x18054240)
#define CLASS_1_9F2AFDAE08F71BF9__CTOR_OFFSET UNITYSDK_OFFSET(0x18053EA0)

inline static constexpr unsigned int Class_1_9F2AFDAE08F71BF9_TypeDefinitionIndex = 38952;

class Class_1_9F2AFDAE08F71BF9 : public ::System::Object
{
public:
	::RPG::GameCore::MarbleBuffConfig* _Config_k__BackingField; // 0x10
	::System::UInt32 _StackCount_k__BackingField; // 0x18
	::System::Int32 _RoundCount_k__BackingField; // 0x1C
	::System::UInt32 _Source_k__BackingField; // 0x20
	::System::UInt32 _BuffId_k__BackingField; // 0x24

	::System::Void _ctor(::System::UInt32 a1, ::RPG::GameCore::MarbleBuffConfig* a2, ::Class_1_9671734BA1DFB3F8* a3, ::System::UInt32 a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::MarbleBuffConfig*, ::Class_1_9671734BA1DFB3F8*, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9F2AFDAE08F71BF9__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F2AFDAE08F71BF9_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F2AFDAE08F71BF9_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_D77F7476BCD66744(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9F2AFDAE08F71BF9_METHOD_1_D77F7476BCD66744_OFFSET))(this, a1);
	}

	::System::Void Method_1_52170EF7B2B2D65D(::System::UInt32 a1, ::System::Boolean a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9F2AFDAE08F71BF9_METHOD_1_52170EF7B2B2D65D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F2AFDAE08F71BF9_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F2AFDAE08F71BF9_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::UInt32 get_BuffId()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F2AFDAE08F71BF9_GET_BUFFID_OFFSET))(this);
	}

	::System::Void set_BuffId(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9F2AFDAE08F71BF9_SET_BUFFID_OFFSET))(this, value);
	}

	::RPG::GameCore::MarbleBuffType Method_1_7C101C2A870DD664()
	{
		return ((::RPG::GameCore::MarbleBuffType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F2AFDAE08F71BF9_METHOD_1_7C101C2A870DD664_OFFSET))(this);
	}

	::RPG::GameCore::MarbleLifeTime Method_1_C926F50FF9A36C86()
	{
		return ((::RPG::GameCore::MarbleLifeTime(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F2AFDAE08F71BF9_METHOD_1_C926F50FF9A36C86_OFFSET))(this);
	}

	::RPG::GameCore::MarbleBuffEffect Method_1_9AF0114B2B0E12E7()
	{
		return ((::RPG::GameCore::MarbleBuffEffect(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F2AFDAE08F71BF9_METHOD_1_9AF0114B2B0E12E7_OFFSET))(this);
	}

	::RPG::GameCore::MarbleValue Method_1_BE41D962102B8AA0()
	{
		return ((::RPG::GameCore::MarbleValue(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F2AFDAE08F71BF9_METHOD_1_BE41D962102B8AA0_OFFSET))(this);
	}

	::RPG::GameCore::MarbleOperation Method_1_149827CF2E19B7A4()
	{
		return ((::RPG::GameCore::MarbleOperation(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F2AFDAE08F71BF9_METHOD_1_149827CF2E19B7A4_OFFSET))(this);
	}

	::System::Single Method_1_FB4BE762B6186C23()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F2AFDAE08F71BF9_METHOD_1_FB4BE762B6186C23_OFFSET))(this);
	}

	::System::UInt32 get_StackCount()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F2AFDAE08F71BF9_GET_STACKCOUNT_OFFSET))(this);
	}

	::System::Void set_StackCount(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9F2AFDAE08F71BF9_SET_STACKCOUNT_OFFSET))(this, value);
	}

	::System::UInt32 Method_1_D978819B0A4871A0()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F2AFDAE08F71BF9_METHOD_1_D978819B0A4871A0_OFFSET))(this);
	}

	::System::Int32 get_RoundCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F2AFDAE08F71BF9_GET_ROUNDCOUNT_OFFSET))(this);
	}

	::System::Void set_RoundCount(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9F2AFDAE08F71BF9_SET_ROUNDCOUNT_OFFSET))(this, value);
	}

	::System::UInt32 get_Source()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F2AFDAE08F71BF9_GET_SOURCE_OFFSET))(this);
	}

	::System::Void set_Source(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9F2AFDAE08F71BF9_SET_SOURCE_OFFSET))(this, value);
	}

	::RPG::GameCore::MarbleBuffConfig* get_Config()
	{
		return ((::RPG::GameCore::MarbleBuffConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F2AFDAE08F71BF9_GET_CONFIG_OFFSET))(this);
	}

	::System::Void set_Config(::RPG::GameCore::MarbleBuffConfig* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleBuffConfig*))((::PBYTE)hIl2Cpp + CLASS_1_9F2AFDAE08F71BF9_SET_CONFIG_OFFSET))(this, value);
	}
};
